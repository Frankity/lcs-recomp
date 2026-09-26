#include "lcs_audio_output.hpp"
#include "lcs_audio_resampler.hpp"

#include <algorithm>
#include <array>
#include <chrono>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <fstream>
#include <limits>
#include <sstream>
#include <string>
#include <vector>
#include <mutex>

// The output device is waveOut on Windows and an SDL3 audio stream elsewhere; only the small
// device layer below differs, the mixing and timeline logic is shared.
#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <mmsystem.h>
#else
#include <SDL3/SDL.h>
#endif

namespace lcs {
namespace {

constexpr std::uint32_t kSampleRate = StreamingLinearResampler::kOutputRate;
constexpr std::uint32_t kOutputChannels = 2u;
constexpr std::size_t kBlockFrames = 512u;
constexpr std::size_t kBlockCount = 24u;
constexpr std::size_t kDefaultPrebufferBlocks = 6u;
constexpr std::uint64_t kMixSafetyFrames = 1024u;
constexpr std::size_t kRingFrames = kSampleRate * 2u;
constexpr std::size_t kGuestChannels = 9u;
constexpr std::uint64_t kChannelDiscontinuityFrames = 64u;

#if defined(_WIN32)
struct Block {
    WAVEHDR header{};
    std::vector<std::int16_t> samples;
};

struct AudioDevice {
    HWAVEOUT handle{nullptr};
    std::vector<Block> blocks;
    std::size_t next_block{};
};
#else
struct AudioDevice {
    SDL_AudioStream *stream{};
};
#endif

struct ChannelStream {
    StreamingLinearResampler resampler;
    std::uint64_t cursor{};
    std::uint64_t last_guest_time_us{};
    std::uint32_t source_rate{kSampleRate};
    bool stereo{true};
    bool active{};
};

struct AudioState {
    std::mutex mutex;
    AudioDevice device;
    std::vector<std::int16_t> block_samples;  // the block being handed to the device
    std::vector<std::int32_t> ring;
    std::uint64_t output_frame{};
    std::uint64_t guest_anchor_us{};
    bool timeline_anchored{};
    std::array<ChannelStream, kGuestChannels> channels{};
    std::uint64_t late_frames_dropped{};
    std::uint64_t overrun_frames_dropped{};
    std::uint64_t queued_blocks{};
    std::uint64_t underrun_rebuffers{};
    std::uint64_t timeline_resyncs{};
    std::uint64_t submit_calls{};
    std::uint64_t submit_cpu_ns{};
    std::uint64_t submit_cpu_max_ns{};
    std::uint64_t last_summary_guest_us{};
    std::ofstream wav_capture;
    std::ofstream diagnostics_log;
    std::uint64_t wav_frames{};
    std::size_t prebuffer_blocks{kDefaultPrebufferBlocks};
    std::size_t recovery_prebuffer_blocks{kDefaultPrebufferBlocks * 2u};
    bool playback_started{};
    bool recovering_from_underrun{};
    bool opened{};
    bool failed{};
};

AudioState &audio_state() {
    static AudioState state;
    return state;
}

bool diagnostics_enabled() {
    static const bool enabled = std::getenv("PSPRECOMP_AUDIO_DIAG") != nullptr;
    return enabled;
}

bool summary_diagnostics_enabled() {
    static const bool enabled = [] {
        const char *text = std::getenv("PSPRECOMP_AUDIO_SUMMARY");
        if (text != nullptr)
            return *text != '\0' && std::strcmp(text, "0") != 0;
        return false;
    }();
    return enabled;
}

std::size_t configured_prebuffer_blocks() {
    const char *text = std::getenv("PSPRECOMP_AUDIO_PREBUFFER_BLOCKS");
    if (text == nullptr || *text == '\0') return kDefaultPrebufferBlocks;
    char *end = nullptr;
    const unsigned long value = std::strtoul(text, &end, 0);
    if (end == text || *end != '\0') return kDefaultPrebufferBlocks;
    return std::clamp<std::size_t>(static_cast<std::size_t>(value), 2u, kBlockCount - 2u);
}

#if defined(_WIN32)

bool device_open(AudioDevice &device) {
    WAVEFORMATEX format{};
    format.wFormatTag = WAVE_FORMAT_PCM;
    format.nChannels = static_cast<WORD>(kOutputChannels);
    format.nSamplesPerSec = kSampleRate;
    format.wBitsPerSample = 16u;
    format.nBlockAlign = static_cast<WORD>(kOutputChannels * sizeof(std::int16_t));
    format.nAvgBytesPerSec = kSampleRate * format.nBlockAlign;

    const MMRESULT open_result =
        waveOutOpen(&device.handle, WAVE_MAPPER, &format, 0, 0, CALLBACK_NULL);
    if (open_result != MMSYSERR_NOERROR) {
        if (diagnostics_enabled())
            std::cerr << "[audio-host] waveOutOpen failed code=" << open_result << "\n";
        device.handle = nullptr;
        return false;
    }
    (void)waveOutPause(device.handle);
    device.blocks.resize(kBlockCount);
    device.next_block = 0u;
    return true;
}

void device_pause(AudioDevice &device) { (void)waveOutPause(device.handle); }

bool device_resume(AudioDevice &device) { return waveOutRestart(device.handle) == MMSYSERR_NOERROR; }

std::size_t device_outstanding_blocks(const AudioDevice &device) {
    return static_cast<std::size_t>(std::count_if(
        device.blocks.begin(), device.blocks.end(), [](const Block &block) {
            return (block.header.dwFlags & WHDR_PREPARED) != 0u &&
                (block.header.dwFlags & WHDR_DONE) == 0u;
        }));
}

// Whether the next block slot is free (its previous contents have been played).
bool device_can_queue(AudioDevice &device) {
    Block &block = device.blocks[device.next_block];
    if ((block.header.dwFlags & WHDR_PREPARED) != 0u) {
        if ((block.header.dwFlags & WHDR_DONE) == 0u) return false;
        (void)waveOutUnprepareHeader(device.handle, &block.header, sizeof(WAVEHDR));
    }
    return true;
}

bool device_queue(AudioDevice &device, const std::vector<std::int16_t> &samples) {
    Block &block = device.blocks[device.next_block];
    block.samples = samples;
    block.header = WAVEHDR{};
    block.header.lpData = reinterpret_cast<LPSTR>(block.samples.data());
    block.header.dwBufferLength = static_cast<DWORD>(block.samples.size() * sizeof(std::int16_t));
    const MMRESULT prepare_result =
        waveOutPrepareHeader(device.handle, &block.header, sizeof(WAVEHDR));
    if (prepare_result != MMSYSERR_NOERROR) {
        if (diagnostics_enabled())
            std::cerr << "[audio-host] waveOutPrepareHeader failed code="
                      << prepare_result << "\n";
        return false;
    }
    const MMRESULT write_result = waveOutWrite(device.handle, &block.header, sizeof(WAVEHDR));
    if (write_result != MMSYSERR_NOERROR) {
        if (diagnostics_enabled())
            std::cerr << "[audio-host] waveOutWrite failed code=" << write_result << "\n";
        (void)waveOutUnprepareHeader(device.handle, &block.header, sizeof(WAVEHDR));
        return false;
    }
    device.next_block = (device.next_block + 1u) % device.blocks.size();
    return true;
}

void device_close(AudioDevice &device, bool playback_started) {
    if (!playback_started) (void)waveOutRestart(device.handle);
    (void)waveOutReset(device.handle);
    for (Block &block : device.blocks) {
        if ((block.header.dwFlags & WHDR_PREPARED) != 0u)
            (void)waveOutUnprepareHeader(device.handle, &block.header, sizeof(WAVEHDR));
    }
    (void)waveOutClose(device.handle);
    device.handle = nullptr;
    device.blocks.clear();
}

#else

constexpr std::size_t kBlockBytes = kBlockFrames * kOutputChannels * sizeof(std::int16_t);

bool device_open(AudioDevice &device) {
    if (!SDL_InitSubSystem(SDL_INIT_AUDIO)) {
        if (diagnostics_enabled())
            std::cerr << "[audio-host] SDL audio init failed: " << SDL_GetError() << "\n";
        return false;
    }
    const SDL_AudioSpec spec{SDL_AUDIO_S16, static_cast<int>(kOutputChannels), static_cast<int>(kSampleRate)};
    // the device starts paused, like waveOut after waveOutPause
    device.stream = SDL_OpenAudioDeviceStream(SDL_AUDIO_DEVICE_DEFAULT_PLAYBACK, &spec, nullptr, nullptr);
    if (device.stream == nullptr) {
        if (diagnostics_enabled())
            std::cerr << "[audio-host] SDL_OpenAudioDeviceStream failed: " << SDL_GetError() << "\n";
        return false;
    }
    return true;
}

void device_pause(AudioDevice &device) { (void)SDL_PauseAudioStreamDevice(device.stream); }

bool device_resume(AudioDevice &device) { return SDL_ResumeAudioStreamDevice(device.stream); }

// Blocks not played yet; a partly played block still counts, as in waveOut.
std::size_t device_outstanding_blocks(const AudioDevice &device) {
    const int queued = SDL_GetAudioStreamQueued(device.stream);
    return queued <= 0 ? 0u : (static_cast<std::size_t>(queued) + kBlockBytes - 1u) / kBlockBytes;
}

bool device_can_queue(AudioDevice &device) { return device_outstanding_blocks(device) < kBlockCount; }

bool device_queue(AudioDevice &device, const std::vector<std::int16_t> &samples) {
    if (SDL_PutAudioStreamData(device.stream, samples.data(),
                               static_cast<int>(samples.size() * sizeof(std::int16_t))))
        return true;
    if (diagnostics_enabled())
        std::cerr << "[audio-host] SDL_PutAudioStreamData failed: " << SDL_GetError() << "\n";
    return false;
}

void device_close(AudioDevice &device, bool) {
    SDL_DestroyAudioStream(device.stream);
    device.stream = nullptr;
    SDL_QuitSubSystem(SDL_INIT_AUDIO);
}

#endif

std::size_t outstanding_blocks(const AudioState &state) {
    return device_outstanding_blocks(state.device);
}

void wav_write_u16(std::ostream &out, std::uint16_t value) {
    const std::array<char, 2> bytes{
        static_cast<char>(value & 0xFFu), static_cast<char>((value >> 8u) & 0xFFu)};
    out.write(bytes.data(), static_cast<std::streamsize>(bytes.size()));
}

void wav_write_u32(std::ostream &out, std::uint32_t value) {
    const std::array<char, 4> bytes{
        static_cast<char>(value & 0xFFu), static_cast<char>((value >> 8u) & 0xFFu),
        static_cast<char>((value >> 16u) & 0xFFu), static_cast<char>((value >> 24u) & 0xFFu)};
    out.write(bytes.data(), static_cast<std::streamsize>(bytes.size()));
}

void wav_write_header(std::ostream &out, std::uint64_t frames) {
    const std::uint64_t payload64 = frames * kOutputChannels * sizeof(std::int16_t);
    const std::uint32_t payload = static_cast<std::uint32_t>(
        std::min<std::uint64_t>(payload64, 0xFFFFFFFFull - 44u));
    out.write("RIFF", 4); wav_write_u32(out, 36u + payload);
    out.write("WAVEfmt ", 8); wav_write_u32(out, 16u);
    wav_write_u16(out, 1u); wav_write_u16(out, static_cast<std::uint16_t>(kOutputChannels));
    wav_write_u32(out, kSampleRate);
    wav_write_u32(out, kSampleRate * kOutputChannels * sizeof(std::int16_t));
    wav_write_u16(out, static_cast<std::uint16_t>(kOutputChannels * sizeof(std::int16_t)));
    wav_write_u16(out, 16u);
    out.write("data", 4); wav_write_u32(out, payload);
}

void open_wav_capture(AudioState &state) {
    const char *path = std::getenv("PSPRECOMP_AUDIO_WAV");
    if (path == nullptr || *path == '\0') return;
    state.wav_capture.open(path, std::ios::binary | std::ios::trunc);
    if (!state.wav_capture) {
        if (diagnostics_enabled())
            std::cerr << "[audio-host] unable to create WAV capture: " << path << "\n";
        return;
    }
    wav_write_header(state.wav_capture, 0u);
    state.wav_frames = 0u;
    if (diagnostics_enabled())
        std::cerr << "[audio-host] WAV capture: " << path << "\n";
}

void close_wav_capture(AudioState &state) {
    if (!state.wav_capture.is_open()) return;
    state.wav_capture.flush();
    state.wav_capture.seekp(0, std::ios::beg);
    wav_write_header(state.wav_capture, state.wav_frames);
    state.wav_capture.close();
}

bool ensure_device(AudioState &state) {
    if (state.opened) return true;
    if (state.failed) return false;

    if (!device_open(state.device)) {
        state.failed = true;
        return false;
    }

    state.ring.assign(kRingFrames * kOutputChannels, 0);
    state.output_frame = 0u;
    state.queued_blocks = 0u;
    state.prebuffer_blocks = configured_prebuffer_blocks();
    state.recovery_prebuffer_blocks = std::clamp<std::size_t>(
        state.prebuffer_blocks + 2u, state.prebuffer_blocks, kBlockCount - 2u);
    state.playback_started = false;
    state.recovering_from_underrun = false;
    if (summary_diagnostics_enabled()) {
        state.diagnostics_log.open("LCSAudio.log", std::ios::out | std::ios::trunc);
        if (state.diagnostics_log)
            state.diagnostics_log << "[audio-log] block_frames=" << kBlockFrames
                                  << " startup_blocks=" << state.prebuffer_blocks
                                  << " recovery_blocks=" << state.recovery_prebuffer_blocks
                                  << "\n";
    }
    open_wav_capture(state);
    if (diagnostics_enabled())
        std::cerr << "[audio-host] 44100Hz stereo block_frames=" << kBlockFrames
                  << " blocks=" << kBlockCount
                  << " prebuffer_blocks=" << state.prebuffer_blocks
                  << " prebuffer_ms="
                  << (state.prebuffer_blocks * kBlockFrames * 1000u / kSampleRate) << "\n";
    state.opened = true;
    return true;
}

std::uint64_t guest_frame_for(const AudioState &state, std::uint64_t guest_time_us) {
    if (!state.timeline_anchored || guest_time_us <= state.guest_anchor_us) return 0u;
    const std::uint64_t delta = guest_time_us - state.guest_anchor_us;
    return (delta * kSampleRate + 500000u) / 1000000u;
}

bool queue_one_block(AudioState &state) {
    if (!device_can_queue(state.device)) return false;

    std::vector<std::int16_t> &samples = state.block_samples;
    samples.resize(kBlockFrames * kOutputChannels);
    for (std::size_t frame = 0u; frame < kBlockFrames; ++frame) {
        const std::size_t slot =
            static_cast<std::size_t>((state.output_frame + frame) % kRingFrames) * kOutputChannels;
        for (std::size_t channel = 0u; channel < kOutputChannels; ++channel) {
            samples[frame * kOutputChannels + channel] = static_cast<std::int16_t>(
                std::clamp(state.ring[slot + channel], -32768, 32767));
            state.ring[slot + channel] = 0;
        }
    }

    if (state.wav_capture.is_open()) {
        state.wav_capture.write(reinterpret_cast<const char *>(samples.data()),
                                static_cast<std::streamsize>(samples.size() * sizeof(std::int16_t)));
        if (state.wav_capture) state.wav_frames += kBlockFrames;
    }

    if (!device_queue(state.device, samples)) return false;

    state.output_frame += kBlockFrames;
    ++state.queued_blocks;

    const std::size_t target_blocks = state.recovering_from_underrun
        ? state.recovery_prebuffer_blocks : state.prebuffer_blocks;
    if (!state.playback_started && outstanding_blocks(state) >= target_blocks) {
        if (device_resume(state.device)) {
            state.playback_started = true;
            state.recovering_from_underrun = false;
            if (diagnostics_enabled())
                std::cerr << "[audio-host] playback started with " << state.queued_blocks
                          << " prebuffered blocks\n";
        }
    }
    return true;
}

void advance_locked(AudioState &state, std::uint64_t guest_time_us) {
    if (!state.timeline_anchored || !state.opened) return;
    std::size_t outstanding = outstanding_blocks(state);
    if (state.playback_started) {
        if (outstanding == 0u) {
            device_pause(state.device);
            ++state.underrun_rebuffers;
            state.playback_started = false;
            state.recovering_from_underrun = true;
        }
    }
    const std::uint64_t guest_frame = guest_frame_for(state, guest_time_us);
    const std::uint64_t safety_frames = state.playback_started && outstanding <= 2u
        ? 0u : kMixSafetyFrames;
    const std::uint64_t sealed_frame = guest_frame > safety_frames
        ? guest_frame - safety_frames : 0u;
    const std::size_t latency_limit_blocks = state.prebuffer_blocks + 2u;
    while (sealed_frame >= state.output_frame + kBlockFrames) {
        if (state.playback_started && outstanding >= latency_limit_blocks) {
            for (std::size_t frame = 0u; frame < kBlockFrames; ++frame) {
                const std::size_t slot =
                    static_cast<std::size_t>((state.output_frame + frame) % kRingFrames) * kOutputChannels;
                for (std::size_t channel = 0u; channel < kOutputChannels; ++channel)
                    state.ring[slot + channel] = 0;
            }
            state.output_frame += kBlockFrames;
            state.late_frames_dropped += kBlockFrames;
            continue;
        }
        if (!queue_one_block(state)) break;
        ++outstanding;
    }
}

void reset_channel_locked(AudioState &state, std::uint32_t channel) {
    if (channel >= state.channels.size()) return;
    state.channels[channel] = ChannelStream{};
}

}

bool audio_output_enabled() {
    static const bool enabled = [] {
        if (const char *text = std::getenv("PSPRECOMP_AUDIO"))
            return *text != '\0' && std::string(text) != "0";
        return true;
    }();
    return enabled;
}

void audio_output_submit(std::span<const std::int16_t> pcm, std::uint32_t frames,
                         bool stereo, std::uint32_t left, std::uint32_t right,
                         std::uint32_t source_rate, std::uint32_t channel,
                         std::uint64_t start_time_us, std::uint64_t now_us) {
    if (!audio_output_enabled() || frames == 0u || channel >= kGuestChannels) return;
    if (source_rate == 0u) source_rate = kSampleRate;
    const std::size_t needed = static_cast<std::size_t>(frames) * (stereo ? 2u : 1u);
    if (pcm.size() < needed) return;
    const bool measure_submit = summary_diagnostics_enabled();
    const auto submit_started = measure_submit
        ? std::chrono::steady_clock::now() : std::chrono::steady_clock::time_point{};

    AudioState &state = audio_state();
    std::lock_guard<std::mutex> guard(state.mutex);
    if (!ensure_device(state)) return;

    if (!state.timeline_anchored) {
        state.guest_anchor_us = std::min(start_time_us, now_us);
        state.timeline_anchored = true;
        state.output_frame = 0u;
    }

    advance_locked(state, now_us);

    ChannelStream &stream = state.channels[channel];
    const std::uint64_t scheduled = guest_frame_for(state, start_time_us);
    const auto distance = [](std::uint64_t a, std::uint64_t b) {
        return a > b ? a - b : b - a;
    };
    const bool format_changed = stream.active &&
        (stream.source_rate != source_rate || stream.stereo != stereo);
    const bool discontinuity = stream.active &&
        distance(stream.cursor, scheduled) > kChannelDiscontinuityFrames;
    const std::uint64_t previous_cursor = stream.cursor;
    if (!stream.active || format_changed || discontinuity) {
        stream = ChannelStream{};
        stream.active = true;
        stream.source_rate = source_rate;
        stream.stereo = stereo;
        stream.resampler.reset(source_rate, stereo);
        stream.cursor = std::max(scheduled, state.output_frame);
        if (discontinuity) ++state.timeline_resyncs;
        if (diagnostics_enabled() && discontinuity)
            std::cerr << "[audio-host] channel " << channel << " timeline resync old="
                      << previous_cursor << " scheduled=" << scheduled << "\n";
    }

    if (stream.cursor < state.output_frame) {
        state.late_frames_dropped += state.output_frame - stream.cursor;
        stream.cursor = state.output_frame;
        stream.resampler.reset(source_rate, stereo);
    }

    const std::uint32_t master = 100u;
    const std::int64_t left_gain = (static_cast<std::int64_t>(left) * master) / 100;
    const std::int64_t right_gain = (static_cast<std::int64_t>(right) * master) / 100;
    const std::uint64_t ring_limit = state.output_frame + kRingFrames - kBlockFrames;

    stream.resampler.process(pcm, frames, stereo, source_rate,
        [&](std::int16_t source_left, std::int16_t source_right) {
            if (stream.cursor >= ring_limit) {
                ++state.overrun_frames_dropped;
                ++stream.cursor;
                return;
            }
            const std::size_t slot =
                static_cast<std::size_t>(stream.cursor % kRingFrames) * kOutputChannels;
            const std::int64_t mixed_left =
                (static_cast<std::int64_t>(source_left) * left_gain) >> 15;
            const std::int64_t mixed_right =
                (static_cast<std::int64_t>(source_right) * right_gain) >> 15;
            state.ring[slot] += static_cast<std::int32_t>(std::clamp<std::int64_t>(
                mixed_left, std::numeric_limits<std::int32_t>::min(),
                std::numeric_limits<std::int32_t>::max()));
            state.ring[slot + 1u] += static_cast<std::int32_t>(std::clamp<std::int64_t>(
                mixed_right, std::numeric_limits<std::int32_t>::min(),
                std::numeric_limits<std::int32_t>::max()));
            ++stream.cursor;
        });

    stream.last_guest_time_us = start_time_us;
    advance_locked(state, now_us);
    if (measure_submit) {
        const std::uint64_t submit_ns = static_cast<std::uint64_t>(
            std::chrono::duration_cast<std::chrono::nanoseconds>(
                std::chrono::steady_clock::now() - submit_started).count());
        ++state.submit_calls;
        state.submit_cpu_ns += submit_ns;
        state.submit_cpu_max_ns = std::max(state.submit_cpu_max_ns, submit_ns);
    }
}

void audio_output_advance(std::uint64_t guest_time_us) {
    if (!audio_output_enabled()) return;
    AudioState &state = audio_state();
    std::lock_guard<std::mutex> guard(state.mutex);
    if (!state.opened) return;
    advance_locked(state, guest_time_us);
    if (summary_diagnostics_enabled() &&
        (state.last_summary_guest_us == 0u ||
         guest_time_us - state.last_summary_guest_us >= 2'000'000u)) {
        const std::uint64_t guest_frame = guest_frame_for(state, guest_time_us);
        const std::size_t outstanding = outstanding_blocks(state);
        const std::uint64_t average_submit_us = state.submit_calls == 0u ? 0u
            : state.submit_cpu_ns / state.submit_calls / 1000u;
        std::ostringstream line;
        line << "[audio-summary] guest_us=" << guest_time_us
             << " guest_frame=" << guest_frame
             << " output_frame=" << state.output_frame
             << " outstanding_blocks=" << outstanding
             << " playback=" << state.playback_started
             << " recovering=" << state.recovering_from_underrun
             << " underrun_rebuffers=" << state.underrun_rebuffers
             << " resyncs=" << state.timeline_resyncs
             << " late_frames=" << state.late_frames_dropped
             << " overrun_frames=" << state.overrun_frames_dropped
             << " submit_calls=" << state.submit_calls
             << " submit_avg_us=" << average_submit_us
             << " submit_max_us=" << state.submit_cpu_max_ns / 1000u << "\n";
        std::cerr << line.str();
        if (state.diagnostics_log) {
            state.diagnostics_log << line.str();
            state.diagnostics_log.flush();
        }
        state.last_summary_guest_us = guest_time_us;
    }
}

void audio_output_reset_channel(std::uint32_t channel) {
    AudioState &state = audio_state();
    std::lock_guard<std::mutex> guard(state.mutex);
    reset_channel_locked(state, channel);
}

void audio_output_shutdown() {
    AudioState &state = audio_state();
    std::lock_guard<std::mutex> guard(state.mutex);
    if (!state.opened) return;

    device_close(state.device, state.playback_started);
    close_wav_capture(state);
    if (state.diagnostics_log.is_open()) state.diagnostics_log.close();

    state.opened = false;
    state.ring.clear();
    state.timeline_anchored = false;
    state.playback_started = false;
    state.recovering_from_underrun = false;
    state.queued_blocks = 0u;
    state.output_frame = 0u;
    state.last_summary_guest_us = 0u;
    for (std::uint32_t channel = 0u; channel < kGuestChannels; ++channel)
        reset_channel_locked(state, channel);

    if (diagnostics_enabled() && (state.late_frames_dropped != 0u || state.overrun_frames_dropped != 0u)) {
        std::cerr << "[audio-host] shutdown late_frames=" << state.late_frames_dropped
                  << " overrun_frames=" << state.overrun_frames_dropped << "\n";
    }
    state.late_frames_dropped = 0u;
    state.overrun_frames_dropped = 0u;
}

}
