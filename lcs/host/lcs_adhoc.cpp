#include "lcs_adhoc.hpp"

#include "lcs_adhoc_net.hpp"
#include "lcs_render_config.hpp"

#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <map>
#include <thread>

namespace lcs {
namespace {

// The event thread runs a host function that lives at this (fake) guest address. Guest callbacks
// return to it, so it acts as the loop of the thread.
constexpr std::uint32_t kPollerEntry = 0x00000008u;
constexpr std::uint32_t kPollerStack = 0x8000u;
constexpr std::uint32_t kScratchOffset = 0x100u;   // inside the poller stack
constexpr std::uint32_t kScratchOptOffset = 0x110u;
constexpr std::uint32_t kMaxCallbackOpt = 0x1000u;
constexpr std::uint32_t kPollIntervalUs = 2000u;
constexpr std::uint32_t kGetScanInfoEntry = 28u;

struct GuestCall {
    std::uint32_t function{};
    std::uint32_t args[5]{};
    bool has_memory{};
    Mac mac{};
    std::vector<std::uint8_t> opt;
};

struct BlockedCall {
    std::uint64_t started_ms{};
};

struct State {
    AdhocHooks hooks{};
    AdhocNet net;
    bool started{};
    bool poller_spawned{};
    std::uint32_t poller_stack{};
    struct Handler {
        std::uint32_t function{};
        std::uint32_t argument{};
    };
    std::vector<Handler> handlers;
    std::deque<GuestCall> calls;
    std::map<std::int32_t, BlockedCall> blocked;
};

State &state() {
    static State instance;
    return instance;
}

bool diag() {
    static const bool enabled = std::getenv("LCS_NET_DIAG") != nullptr;
    return enabled;
}

Mac read_mac(psprecomp::Runtime &rt, std::uint32_t address) {
    Mac mac{};
    if (address != 0u && rt.memory().contains(address, 6u)) rt.memory().copy_out(address, mac);
    return mac;
}

void write_mac(psprecomp::Runtime &rt, std::uint32_t address, const Mac &mac) {
    if (address != 0u && rt.memory().contains(address, 6u)) rt.memory().copy_in(address, mac);
}

std::vector<std::uint8_t> read_bytes(psprecomp::Runtime &rt, std::uint32_t address, std::uint32_t length) {
    std::vector<std::uint8_t> bytes;
    if (address == 0u || length == 0u || !rt.memory().contains(address, length)) return bytes;
    bytes.resize(length);
    rt.memory().copy_out(address, bytes);
    return bytes;
}

std::string read_group(psprecomp::Runtime &rt, std::uint32_t address) {
    std::string name;
    if (address == 0u || !rt.memory().contains(address, 8u)) return name;
    for (std::uint32_t i = 0; i < 8u; ++i) {
        const char c = static_cast<char>(rt.memory().load8(address + i));
        if (c == '\0') break;
        name.push_back(c);
    }
    return name;
}

// ------------------------------------------------------------------------------ event thread

// Debug aid: logs the game's own connection state when it changes. The addresses are objects of the
// game's networking layer (image address + 0x08804000): the adhoc connection (flags, error, state)
// and the multiplayer session.
void watch_game_state(psprecomp::Runtime &rt) {
    constexpr std::uint32_t kAdhocPointer = 0x08B5AE3Cu, kSessionPointer = 0x08B816CCu, kSessionConnected = 0x08B81749u,
                            kSuspended = 0x08B816F4u, kGameActive = 0x08B56B3Cu;
    static std::vector<std::uint32_t> last;
    if (!rt.memory().contains(kAdhocPointer, 4u)) return;
    std::vector<std::uint32_t> now;
    const std::uint32_t adhoc = rt.memory().load32(kAdhocPointer);
    if (adhoc != 0u && rt.memory().contains(adhoc, 0x60u)) {
        now = {adhoc, rt.memory().load8(adhoc + 0x0Cu), rt.memory().load8(adhoc + 0x3Cu), rt.memory().load32(adhoc + 0x40u),
               rt.memory().load32(adhoc + 0x44u), rt.memory().load32(adhoc + 0x14u)};
    } else {
        now = {adhoc};
    }
    now.push_back(rt.memory().load32(kSessionPointer));
    now.push_back(rt.memory().load8(kSessionConnected));
    now.push_back(rt.memory().load8(kSuspended));
    now.push_back(rt.memory().load8(kGameActive));
    if (now == last) return;
    last = now;
    std::string text;
    static const char *names[] = {"adhoc", "host", "err", "result", "flags", "state", "session", "connected", "suspended", "active"};
    for (std::size_t i = 0; i < now.size() && i < std::size(names); ++i) {
        char item[48];
        std::snprintf(item, sizeof(item), " %s=%x", names[i], now[i]);
        text += item;
    }
    NETLOG("game state:" << text);
}

void poller_entry(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx) {
    State &s = state();
    s.net.poll();
    watch_game_state(rt);

    CtlEvent ctl;
    while (s.net.pop_ctl_event(ctl)) {
        for (const State::Handler &handler : s.handlers) {
            GuestCall call;
            call.function = handler.function;
            call.args[0] = static_cast<std::uint32_t>(ctl.event);
            call.args[1] = static_cast<std::uint32_t>(ctl.error);
            call.args[2] = handler.argument;
            s.calls.push_back(std::move(call));
        }
        NETLOG("ctl event " << ctl.event << " -> " << s.handlers.size() << " handlers");
    }
    MatchEvent match;
    while (s.net.pop_match_event(match)) {
        if (match.callback == 0u) continue;
        GuestCall call;
        call.function = match.callback;
        call.args[0] = static_cast<std::uint32_t>(match.context);
        call.args[1] = static_cast<std::uint32_t>(match.event);
        call.has_memory = true;
        call.mac = match.mac;
        call.opt = std::move(match.opt);
        s.calls.push_back(std::move(call));
    }

    if (!s.calls.empty()) {
        GuestCall call = std::move(s.calls.front());
        s.calls.pop_front();
        if (call.has_memory) {
            const std::uint32_t mac_address = s.poller_stack + kScratchOffset;
            const std::uint32_t opt_address = s.poller_stack + kScratchOptOffset;
            const std::uint32_t length = std::min<std::uint32_t>(static_cast<std::uint32_t>(call.opt.size()), kMaxCallbackOpt);
            rt.memory().copy_in(mac_address, call.mac);
            if (length != 0u) rt.memory().copy_in(opt_address, std::span<const std::uint8_t>(call.opt.data(), length));
            call.args[2] = mac_address;
            call.args[3] = length;
            call.args[4] = length != 0u ? opt_address : 0u;
        }
        ctx.set_gpr(4, call.args[0]);
        ctx.set_gpr(5, call.args[1]);
        ctx.set_gpr(6, call.args[2]);
        ctx.set_gpr(7, call.args[3]);
        ctx.set_gpr(8, call.args[4]);
        ctx.set_gpr(31, kPollerEntry);
        ctx.pc = call.function;
        return;
    }

    ctx.pc = kPollerEntry;
    (void)s.hooks.delay_at_pc(rt, ctx, kPollIntervalUs);
}

// Starts the network and the event thread the first time the game asks for networking.
bool ensure_started(psprecomp::Runtime &rt, const psprecomp::AllegrexContext &ctx) {
    State &s = state();
    if (!s.started) {
        const MultiplayerConfiguration &config = lcs_render_configuration().multiplayer;
        AdhocNetConfig net_config;
        net_config.port = static_cast<std::uint16_t>(config.port);
        net_config.peers = config.peers;
        net_config.nickname = config.nickname;
        net_config.lobby_server = config.lobby_server;

        s.started = s.net.start(net_config);
    }
    if (!s.started) return false;
    if (!s.poller_spawned) {
        s.poller_spawned = true;
        rt.register_function(kPollerEntry, &poller_entry, "lcs_net_event_thread");
        const std::int32_t uid = s.hooks.spawn_native_thread(rt, ctx, "NetEventThread", kPollerEntry, 0x18u,
                                                             kPollerStack, s.poller_stack);
        if (uid < 0) NETLOG("could not create the network event thread");
    }
    return true;
}

// ------------------------------------------------------------------------------- blocking

// The call cannot complete yet. With `nonblock` (or once `timeout_us` has passed) the error is
// returned to the game; otherwise the calling thread is delayed and the same import runs again
// when it resumes. Returns true when `ctx` now belongs to another thread.
bool wait_or_fail(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx, std::uint32_t timeout_us,
                  std::uint32_t nonblock, std::uint32_t error) {
    State &s = state();
    const std::int32_t uid = s.hooks.current_thread();
    if (nonblock != 0u) {
        s.blocked.erase(uid);
        ctx.set_gpr(2, error);
        return false;
    }
    BlockedCall &blocked = s.blocked[uid];
    if (blocked.started_ms == 0u) blocked.started_ms = AdhocNet::now_ms();
    if (timeout_us != 0u && (AdhocNet::now_ms() - blocked.started_ms) * 1000u >= timeout_us) {
        s.blocked.erase(uid);
        ctx.set_gpr(2, kAdhocErrTimeout);
        return false;
    }
    std::this_thread::sleep_for(std::chrono::microseconds(150));  // do not spin at full speed
    s.net.poll();
    return s.hooks.delay_at_pc(rt, ctx, kPollIntervalUs);
}

void finish(std::uint32_t result, psprecomp::AllegrexContext &ctx) {
    state().blocked.erase(state().hooks.current_thread());
    ctx.set_gpr(2, result);
    if ((result & 0x80000000u) != 0u && result != kAdhocErrWouldBlock)
        NETLOG("call failed with 0x" << std::hex << result << std::dec << " (a0=" << ctx.gpr[4] << ")");
}

// Result handling shared by the calls that may have to wait.
bool settle(psprecomp::Runtime &rt, psprecomp::AllegrexContext &ctx, std::uint32_t result,
            std::uint32_t timeout_us, std::uint32_t nonblock) {
    if (result == kAdhocErrWouldBlock) return wait_or_fail(rt, ctx, timeout_us, nonblock, result);
    finish(result, ctx);
    return false;
}

}  // namespace

// While a multiplayer game starts, the host waits for the other players with a timer of 10.0 that
// grows by 0.5 every time the game's update runs. That update runs about 40 times in 12 ms here (the
// game does not wait for the display in this phase), so the wait ended almost at once and the host
// gave up before anyone could join. Called just before every update of the wait: keep the timer to
// the real time (units of seconds) so the wait lasts the ten seconds it is meant to.
void limit_player_wait(psprecomp::GuestMemory &memory) {
    constexpr std::uint32_t kWaitTimer = 0x08B81668u + 0xE8u;
    static std::uint64_t started_ms = 0u;
    static std::uint64_t last_call_ms = 0u;
    const std::uint64_t now = AdhocNet::now_ms();
    const std::uint32_t bits = memory.load32(kWaitTimer);
    float value;
    std::memcpy(&value, &bits, sizeof(value));
    if (started_ms == 0u || (value == 0.0f && now - last_call_ms > 2000u)) started_ms = now;  // a new wait
    last_call_ms = now;
    const float allowed = static_cast<float>(now - started_ms) / 1000.0f;
    if (value > allowed) {
        std::uint32_t clamped;
        std::memcpy(&clamped, &allowed, sizeof(clamped));
        memory.store32(kWaitTimer, clamped);
    }
}

// Once a multiplayer game is open, each side checks every frame that it has heard from the others:
// during the first 10000 ms of the game's clock nothing is checked, afterwards a peer that never
// answered ends the game ("I haven't heard from the server"). Loading runs far faster than it did
// on the PSP here, and the game's clock ran ahead of real time, so those 10 s were over almost at
// once. Keep the time since the game was opened at or below the real time since it was opened.
// `game` is the multiplayer object (the argument of the check).
void keep_open_time_real(psprecomp::GuestMemory &memory, std::uint32_t game) {
    constexpr std::uint32_t kGameClock = 0x08B5E02Cu;  // the game's millisecond clock
    constexpr std::uint32_t kOpenedAt = 0x88u;           // clock value when the game was opened
    if (game == 0u || !memory.contains(game, kOpenedAt + 4u)) return;
    static std::uint32_t expected_open_time = 0u;
    static std::uint64_t real_start_ms = 0u;
    static int traced = 0;
    const std::uint64_t now = AdhocNet::now_ms();
    const std::uint32_t game_now = memory.load32(kGameClock);
    const std::uint32_t opened_at = memory.load32(game + kOpenedAt);
    if (opened_at != expected_open_time) {  // a newly opened game
        expected_open_time = opened_at;
        real_start_ms = now;
    }
    const std::uint32_t game_elapsed = game_now - opened_at;
    const std::uint64_t real_elapsed = now - real_start_ms;
    if (traced++ < 6 || game_elapsed > real_elapsed + 500u)
        if (traced < 200) NETLOG("open time: game clock advanced " << game_elapsed << " ms, real time " << real_elapsed << " ms");
    if (game_elapsed > real_elapsed) {
        expected_open_time = game_now - static_cast<std::uint32_t>(real_elapsed);
        memory.store32(game + kOpenedAt, expected_open_time);
    }
}

void lcs_net_trace(psprecomp::GuestMemory &memory, psprecomp::AllegrexContext &ctx, std::uint32_t label) {
    State &s = state();
    if (!s.started) return;
    if (label == 0x08AD1258u) {
        NETLOG("TRACE connection error handler entered, return address 0x" << std::hex << ctx.gpr[31] << " a0=" << ctx.gpr[4]
                                                                          << " a1=" << ctx.gpr[5] << std::dec);
        return;
    }
    if (label == 0x088AF290u) {
        keep_open_time_real(memory, ctx.gpr[4]);
        return;
    }
    if (label == 0x08A0A6C0u) {
        NETLOG("TRACE adhoc error reported, return address 0x" << std::hex << ctx.gpr[31] << std::dec);
        return;
    }
    // The other points are printf-like debug functions: a0 is the format string.
    const std::uint32_t text = ctx.gpr[4];
    if (text != 0u && memory.contains(text, 4u)) {
        std::string line = memory.read_c_string(text, 160u);
        if (label == 0x08AD0690u && line.rfind("MultiGame not connected", 0) == 0) limit_player_wait(memory);
        if (line.rfind("Removing Model", 0) == 0 || line.rfind("MultiGame not open", 0) == 0) return;
        while (!line.empty() && (line.back() == '\n' || line.back() == '\r')) line.pop_back();
        NETLOG("GAME: " << line << "  (args 0x" << std::hex << ctx.gpr[5] << " 0x" << ctx.gpr[6] << std::dec << ")");
    }
}

void install_adhoc_hle(psprecomp::Runtime &runtime, const AdhocHooks &hooks) {
    State &s = state();
    s.hooks = hooks;
    // A new game session starts from scratch.
    s.net.stop();
    s.started = false;
    s.poller_spawned = false;
    s.handlers.clear();
    s.calls.clear();
    s.blocked.clear();

    using Rt = psprecomp::Runtime;
    using Ctx = psprecomp::AllegrexContext;

    // ---- sceWlanDrv -----------------------------------------------------------------------
    runtime.register_hle("sceWlanDrv", 0xD7763699u, [](Rt &, Ctx &ctx) {  // sceWlanGetSwitchState
        ctx.set_gpr(2, lcs_render_configuration().multiplayer.enabled ? 1u : 0u);
    });

    // ---- sceNet ---------------------------------------------------------------------------
    runtime.register_hle("sceNet", 0x39AF39A6u, [](Rt &rt, Ctx &ctx) {  // sceNetInit
        ctx.set_gpr(2, ensure_started(rt, ctx) ? 0u : kAdhocErrNotInitialized);
    });
    runtime.register_hle("sceNet", 0x281928A9u, [](Rt &, Ctx &ctx) { ctx.set_gpr(2, 0u); });  // sceNetTerm
    runtime.register_hle("sceNet", 0x0BF0A3AEu, [](Rt &rt, Ctx &ctx) {  // sceNetGetLocalEtherAddr
        if (!ensure_started(rt, ctx)) { ctx.set_gpr(2, kAdhocErrNotInitialized); return; }
        write_mac(rt, ctx.gpr[4], state().net.mac());
        ctx.set_gpr(2, 0u);
    });
    runtime.register_hle("sceNet", 0x89360950u, [](Rt &rt, Ctx &ctx) {  // sceNetEtherNtostr
        const Mac mac = read_mac(rt, ctx.gpr[4]);
        char text[24];
        std::snprintf(text, sizeof(text), "%02x:%02x:%02x:%02x:%02x:%02x", mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);
        const std::uint32_t out = ctx.gpr[5];
        if (out != 0u && rt.memory().contains(out, 18u))
            rt.memory().copy_in(out, std::span<const std::uint8_t>(reinterpret_cast<const std::uint8_t *>(text), 18u));
        ctx.set_gpr(2, 0u);
    });

    // ---- sceNetAdhoc ----------------------------------------------------------------------
    runtime.register_hle("sceNetAdhoc", 0xE1D621D7u, [](Rt &rt, Ctx &ctx) {  // sceNetAdhocInit
        ctx.set_gpr(2, ensure_started(rt, ctx) ? 0u : kAdhocErrNotInitialized);
    });
    runtime.register_hle("sceNetAdhoc", 0xA62C6F57u, [](Rt &, Ctx &ctx) { ctx.set_gpr(2, 0u); });  // sceNetAdhocTerm

    // PDP: id = sceNetAdhocPdpCreate(mac, port, bufsize, flag)
    runtime.register_hle("sceNetAdhoc", 0x6F92741Bu, [](Rt &, Ctx &ctx) {
        ctx.set_gpr(2, state().net.pdp_create(static_cast<std::uint16_t>(ctx.gpr[5]), ctx.gpr[6]));
    });
    // sceNetAdhocPdpSend(id, destination mac, port, data, length, timeout, nonblock)
    runtime.register_hle("sceNetAdhoc", 0xABED3790u, [](Rt &rt, Ctx &ctx) {
        const std::vector<std::uint8_t> data = read_bytes(rt, ctx.gpr[7], ctx.gpr[8]);
        ctx.set_gpr(2, state().net.pdp_send(ctx.gpr[4], read_mac(rt, ctx.gpr[5]), static_cast<std::uint16_t>(ctx.gpr[6]),
                                            data.data(), static_cast<std::uint32_t>(data.size())));
    });
    // sceNetAdhocPdpRecv(id, source mac, source port*, data, length*, timeout, nonblock)
    runtime.register_hle("sceNetAdhoc", 0xDFE53E03u, [](Rt &rt, Ctx &ctx) {
        State &st = state();
        st.net.poll();
        PdpPacket packet;
        const std::uint32_t result = st.net.pdp_recv(ctx.gpr[4], packet);
        if (result == 0u) {
            const std::uint32_t capacity = ctx.gpr[8] != 0u ? rt.memory().load32(ctx.gpr[8]) : 0u;
            const std::uint32_t count = std::min<std::uint32_t>(capacity, static_cast<std::uint32_t>(packet.data.size()));
            if (count != 0u && rt.memory().contains(ctx.gpr[7], count))
                rt.memory().copy_in(ctx.gpr[7], std::span<const std::uint8_t>(packet.data.data(), count));
            if (ctx.gpr[8] != 0u) rt.memory().store32(ctx.gpr[8], count);
            write_mac(rt, ctx.gpr[5], packet.mac);
            if (ctx.gpr[6] != 0u && rt.memory().contains(ctx.gpr[6], 2u)) rt.memory().store16(ctx.gpr[6], packet.port);
        }
        (void)settle(rt, ctx, result, ctx.gpr[9], ctx.gpr[10]);
    });
    runtime.register_hle("sceNetAdhoc", 0x7F27BB5Eu, [](Rt &, Ctx &ctx) {  // sceNetAdhocPdpDelete(id, flag)
        ctx.set_gpr(2, state().net.pdp_delete(ctx.gpr[4]));
    });

    // PTP: id = sceNetAdhocPtpOpen(src mac, src port, dst mac, dst port, bufsize, retry delay, retry count, unk)
    runtime.register_hle("sceNetAdhoc", 0x877F6D66u, [](Rt &rt, Ctx &ctx) {
        ctx.set_gpr(2, state().net.ptp_open(static_cast<std::uint16_t>(ctx.gpr[5]), read_mac(rt, ctx.gpr[6]),
                                            static_cast<std::uint16_t>(ctx.gpr[7])));
    });
    // sceNetAdhocPtpConnect(id, timeout, nonblock)
    runtime.register_hle("sceNetAdhoc", 0xFC6FC07Bu, [](Rt &rt, Ctx &ctx) {
        State &st = state();
        st.net.poll();
        (void)settle(rt, ctx, st.net.ptp_connect(ctx.gpr[4]), ctx.gpr[5], ctx.gpr[6]);
    });
    // id = sceNetAdhocPtpListen(src mac, src port, bufsize, retry delay, retry count, queue, unk)
    runtime.register_hle("sceNetAdhoc", 0xE08BDAC1u, [](Rt &, Ctx &ctx) {
        ctx.set_gpr(2, state().net.ptp_listen(static_cast<std::uint16_t>(ctx.gpr[5])));
    });
    // new id = sceNetAdhocPtpAccept(id, peer mac*, peer port*, timeout, nonblock)
    runtime.register_hle("sceNetAdhoc", 0x9DF81198u, [](Rt &rt, Ctx &ctx) {
        State &st = state();
        st.net.poll();
        std::uint32_t new_id = 0u;
        Mac peer{};
        std::uint16_t peer_port = 0u;
        const std::uint32_t result = st.net.ptp_accept(ctx.gpr[4], new_id, peer, peer_port);
        if (result == 0u) {
            write_mac(rt, ctx.gpr[5], peer);
            if (ctx.gpr[6] != 0u && rt.memory().contains(ctx.gpr[6], 2u)) rt.memory().store16(ctx.gpr[6], peer_port);
            finish(new_id, ctx);
            return;
        }
        (void)settle(rt, ctx, result, ctx.gpr[7], ctx.gpr[8]);
    });
    // sceNetAdhocPtpSend(id, data, length*, timeout, nonblock)
    runtime.register_hle("sceNetAdhoc", 0x4DA4C788u, [](Rt &rt, Ctx &ctx) {
        State &st = state();
        const std::uint32_t length = ctx.gpr[6] != 0u ? rt.memory().load32(ctx.gpr[6]) : 0u;
        const std::vector<std::uint8_t> data = read_bytes(rt, ctx.gpr[5], length);
        st.net.poll();
        (void)settle(rt, ctx, st.net.ptp_send(ctx.gpr[4], data.data(), static_cast<std::uint32_t>(data.size())),
                     ctx.gpr[7], ctx.gpr[8]);
    });
    // sceNetAdhocPtpRecv(id, data, length*, timeout, nonblock)
    runtime.register_hle("sceNetAdhoc", 0x8BEA2B3Eu, [](Rt &rt, Ctx &ctx) {
        State &st = state();
        st.net.poll();
        const std::uint32_t capacity = ctx.gpr[6] != 0u ? rt.memory().load32(ctx.gpr[6]) : 0u;
        std::vector<std::uint8_t> buffer(std::min<std::uint32_t>(capacity, 1u << 20));
        std::uint32_t received = 0u;
        const std::uint32_t result = st.net.ptp_recv(ctx.gpr[4], buffer.data(),
                                                     static_cast<std::uint32_t>(buffer.size()), received);
        if (result == 0u) {
            if (received != 0u && rt.memory().contains(ctx.gpr[5], received))
                rt.memory().copy_in(ctx.gpr[5], std::span<const std::uint8_t>(buffer.data(), received));
            if (ctx.gpr[6] != 0u) rt.memory().store32(ctx.gpr[6], received);
        }
        (void)settle(rt, ctx, result, ctx.gpr[7], ctx.gpr[8]);
    });
    // sceNetAdhocPtpFlush(id, timeout, nonblock)
    runtime.register_hle("sceNetAdhoc", 0x9AC2EEACu, [](Rt &rt, Ctx &ctx) {
        State &st = state();
        st.net.poll();
        (void)settle(rt, ctx, st.net.ptp_flush(ctx.gpr[4]), ctx.gpr[5], ctx.gpr[6]);
    });
    runtime.register_hle("sceNetAdhoc", 0x157E6225u, [](Rt &, Ctx &ctx) {  // sceNetAdhocPtpClose(id, unk)
        ctx.set_gpr(2, state().net.ptp_close(ctx.gpr[4]));
    });

    // ---- sceNetAdhocctl -------------------------------------------------------------------
    runtime.register_hle("sceNetAdhocctl", 0xE26F226Eu, [](Rt &rt, Ctx &ctx) {  // sceNetAdhocctlInit(stack, prio, product*)
        ctx.set_gpr(2, ensure_started(rt, ctx) ? 0u : kAdhocErrNotInitialized);
    });
    runtime.register_hle("sceNetAdhocctl", 0x9D689E13u, [](Rt &, Ctx &ctx) { ctx.set_gpr(2, 0u); });  // Term
    runtime.register_hle("sceNetAdhocctl", 0x20B317A0u, [](Rt &, Ctx &ctx) {  // AddHandler(handler, argument)
        State &st = state();
        st.handlers.push_back(State::Handler{ctx.gpr[4], ctx.gpr[5]});
        ctx.set_gpr(2, static_cast<std::uint32_t>(st.handlers.size()));
    });
    const auto connect_group = [](Rt &rt, Ctx &ctx) {  // Connect(name*) / Create(name*)
        state().net.ctl_connect(read_group(rt, ctx.gpr[4]));
        ctx.set_gpr(2, 0u);
    };
    runtime.register_hle("sceNetAdhocctl", 0x0AD043EDu, connect_group);
    runtime.register_hle("sceNetAdhocctl", 0xEC0635C1u, connect_group);
    runtime.register_hle("sceNetAdhocctl", 0x5E7F79C9u, [](Rt &rt, Ctx &ctx) {  // Join(scan info*)
        state().net.ctl_connect(read_group(rt, ctx.gpr[4] + 8u));
        ctx.set_gpr(2, 0u);
    });
    runtime.register_hle("sceNetAdhocctl", 0x08FFF7A0u, [](Rt &, Ctx &ctx) {  // Scan()
        state().net.ctl_scan();
        ctx.set_gpr(2, 0u);
    });
    runtime.register_hle("sceNetAdhocctl", 0x34401D65u, [](Rt &, Ctx &ctx) {  // Disconnect()
        state().net.ctl_disconnect();
        ctx.set_gpr(2, 0u);
    });
    runtime.register_hle("sceNetAdhocctl", 0x8916C003u, [](Rt &rt, Ctx &ctx) {  // GetNameByAddr(mac*, nickname*)
        const auto name = state().net.peer_name(read_mac(rt, ctx.gpr[4]));
        if (!name) {
            NETLOG("GetNameByAddr: " << net_mac_text(read_mac(rt, ctx.gpr[4])) << " is not in group '" << state().net.group() << "'");
            ctx.set_gpr(2, kAdhocErrNoEntry);
            return;
        }
        std::vector<std::uint8_t> text(128u, 0u);
        std::memcpy(text.data(), name->data(), std::min<std::size_t>(name->size(), 127u));
        if (ctx.gpr[5] != 0u && rt.memory().contains(ctx.gpr[5], 128u)) rt.memory().copy_in(ctx.gpr[5], text);
        ctx.set_gpr(2, 0u);
    });
    runtime.register_hle("sceNetAdhocctl", 0x81AEE1BEu, [](Rt &rt, Ctx &ctx) {  // GetScanInfo(size*, buffer)
        const std::uint32_t size_pointer = ctx.gpr[4];
        const std::uint32_t buffer = ctx.gpr[5];
        if (size_pointer == 0u || !rt.memory().contains(size_pointer, 4u)) { ctx.set_gpr(2, kAdhocErrInvalidAddr); return; }
        const std::uint32_t capacity = rt.memory().load32(size_pointer);
        const std::vector<ScanEntry> results = state().net.scan_results();
        std::uint32_t count = std::min<std::uint32_t>(static_cast<std::uint32_t>(results.size()), capacity / kGetScanInfoEntry);
        if (buffer == 0u || !rt.memory().contains(buffer, count * kGetScanInfoEntry)) count = 0u;
        for (std::uint32_t i = 0; i < count; ++i) {
            const std::uint32_t entry = buffer + i * kGetScanInfoEntry;
            rt.memory().zero(entry, kGetScanInfoEntry);
            rt.memory().store32(entry, i + 1u < count ? entry + kGetScanInfoEntry : 0u);  // next
            rt.memory().store32(entry + 4u, 1u);                                          // channel
            for (std::size_t c = 0; c < std::min<std::size_t>(results[i].name.size(), 8u); ++c)
                rt.memory().store8(entry + 8u + static_cast<std::uint32_t>(c), static_cast<std::uint8_t>(results[i].name[c]));
            write_mac(rt, entry + 16u, results[i].mac);
        }
        rt.memory().store32(size_pointer, count * kGetScanInfoEntry);
        NETLOG("GetScanInfo returned " << count << " entries");
        ctx.set_gpr(2, 0u);
    });

    // ---- sceNetAdhocMatching --------------------------------------------------------------
    runtime.register_hle("sceNetAdhocMatching", 0x2A2A1E07u, [](Rt &, Ctx &ctx) { ctx.set_gpr(2, 0u); });  // Init(pool)
    runtime.register_hle("sceNetAdhocMatching", 0x7945ECDAu, [](Rt &, Ctx &ctx) { ctx.set_gpr(2, 0u); });  // Term
    // id = Create(mode, max peers, port, buffer size, hello delay, ping delay, init count, message delay, callback)
    runtime.register_hle("sceNetAdhocMatching", 0xCA5EDA6Fu, [](Rt &rt, Ctx &ctx) {
        AdhocNet::MatchSettings settings;
        settings.mode = static_cast<std::int32_t>(ctx.gpr[4]);
        settings.max_peers = static_cast<std::int32_t>(ctx.gpr[5]);
        settings.port = static_cast<std::uint16_t>(ctx.gpr[6]);
        settings.buffer_size = ctx.gpr[7];
        settings.hello_us = ctx.gpr[8];
        settings.ping_us = ctx.gpr[9];
        settings.init_count = ctx.gpr[10];
        settings.msg_us = ctx.gpr[11];
        settings.callback = rt.memory().contains(ctx.gpr[29], 4u) ? rt.memory().load32(ctx.gpr[29]) : 0u;
        NETLOG("MatchingCreate callback " << std::hex << settings.callback << std::dec);
        ctx.set_gpr(2, static_cast<std::uint32_t>(state().net.match_create(settings)));
    });
    // Start(id, event thread priority, stack, interrupt thread priority, stack, hello option length, hello option)
    runtime.register_hle("sceNetAdhocMatching", 0x93EF3843u, [](Rt &rt, Ctx &ctx) {
        ctx.set_gpr(2, state().net.match_start(static_cast<std::int32_t>(ctx.gpr[4]), read_bytes(rt, ctx.gpr[9], ctx.gpr[8])));
    });
    runtime.register_hle("sceNetAdhocMatching", 0x32B156B3u, [](Rt &, Ctx &ctx) {  // Stop(id)
        ctx.set_gpr(2, state().net.match_stop(static_cast<std::int32_t>(ctx.gpr[4])));
    });
    runtime.register_hle("sceNetAdhocMatching", 0xF16EAF4Fu, [](Rt &, Ctx &ctx) {  // Delete(id)
        ctx.set_gpr(2, state().net.match_delete(static_cast<std::int32_t>(ctx.gpr[4])));
    });
    // SelectTarget(id, mac, option length, option)
    runtime.register_hle("sceNetAdhocMatching", 0x5E3D4B79u, [](Rt &rt, Ctx &ctx) {
        ctx.set_gpr(2, state().net.match_select(static_cast<std::int32_t>(ctx.gpr[4]), read_mac(rt, ctx.gpr[5]),
                                                read_bytes(rt, ctx.gpr[7], ctx.gpr[6])));
    });
    runtime.register_hle("sceNetAdhocMatching", 0xEA3C6108u, [](Rt &rt, Ctx &ctx) {  // CancelTarget(id, mac)
        ctx.set_gpr(2, state().net.match_cancel(static_cast<std::int32_t>(ctx.gpr[4]), read_mac(rt, ctx.gpr[5]), {}));
    });
    runtime.register_hle("sceNetAdhocMatching", 0xB58E61B7u, [](Rt &rt, Ctx &ctx) {  // SetHelloOpt(id, length, data)
        ctx.set_gpr(2, state().net.match_set_hello_opt(static_cast<std::int32_t>(ctx.gpr[4]),
                                                       read_bytes(rt, ctx.gpr[6], ctx.gpr[5])));
    });
}

}  // namespace lcs
