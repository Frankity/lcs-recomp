#pragma once

#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <memory>
#include <span>

namespace lcs {

class AudioStreamDecoder {
public:
    AudioStreamDecoder();
    ~AudioStreamDecoder();
    AudioStreamDecoder(const AudioStreamDecoder &) = delete;
    AudioStreamDecoder &operator=(const AudioStreamDecoder &) = delete;
    AudioStreamDecoder(AudioStreamDecoder &&) noexcept;
    AudioStreamDecoder &operator=(AudioStreamDecoder &&) noexcept;

    [[nodiscard]] bool open(const std::filesystem::path &path, std::uint32_t sample_rate,
                            std::uint32_t channels, std::uint64_t start_sample);
    [[nodiscard]] std::size_t read(std::span<std::uint8_t> output);
    [[nodiscard]] bool is_open() const noexcept;
    void close() noexcept;

private:
    struct State;
    std::unique_ptr<State> state_;
};

class PmfAudioDecoder {
public:
    PmfAudioDecoder();
    ~PmfAudioDecoder();
    PmfAudioDecoder(const PmfAudioDecoder &) = delete;
    PmfAudioDecoder &operator=(const PmfAudioDecoder &) = delete;
    PmfAudioDecoder(PmfAudioDecoder &&) noexcept;
    PmfAudioDecoder &operator=(PmfAudioDecoder &&) noexcept;

    [[nodiscard]] bool open(const std::filesystem::path &path);
    [[nodiscard]] std::size_t read(std::span<std::uint8_t> output);
    [[nodiscard]] bool is_open() const noexcept;
    void close() noexcept;

private:
    struct State;
    std::unique_ptr<State> state_;
};

class VideoStreamDecoder {
public:
    VideoStreamDecoder();
    ~VideoStreamDecoder();
    VideoStreamDecoder(const VideoStreamDecoder &) = delete;
    VideoStreamDecoder &operator=(const VideoStreamDecoder &) = delete;
    VideoStreamDecoder(VideoStreamDecoder &&) noexcept;
    VideoStreamDecoder &operator=(VideoStreamDecoder &&) noexcept;

    [[nodiscard]] bool open(const std::filesystem::path &path);
    [[nodiscard]] std::size_t read(std::span<std::uint8_t> output);
    [[nodiscard]] bool is_open() const noexcept;
    void close() noexcept;

private:
    struct State;
    std::unique_ptr<State> state_;
};

}
