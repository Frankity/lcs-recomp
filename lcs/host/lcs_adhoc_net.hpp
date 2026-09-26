// Emulation of the PSP ad-hoc Wi-Fi stack over the local network.
//
// The game talks to sceNetAdhocctl (groups), sceNetAdhocMatching (lobby) and sceNetAdhoc PDP / PTP
// (datagram and stream sockets). This class implements the behaviour of those on top of UDP
// (discovery, lobby, PDP) and TCP (PTP). It knows nothing about the guest: the guest bindings in
// lcs_adhoc.cpp call it and deliver the events it queues. Everything runs on the emulation thread.
#pragma once

#include <array>
#include <cstdint>
#include <deque>
#include <map>
#include <optional>
#include <sstream>
#include <string>
#include <vector>

namespace lcs {

using Mac = std::array<std::uint8_t, 6>;

inline constexpr Mac kBroadcastMac{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

// Error codes returned to the guest (SCE_NET_ADHOC_ERROR_*).
inline constexpr std::uint32_t kAdhocErrInvalidSocket = 0x80410701u;
inline constexpr std::uint32_t kAdhocErrInvalidAddr = 0x80410702u;
inline constexpr std::uint32_t kAdhocErrInvalidPort = 0x80410703u;
inline constexpr std::uint32_t kAdhocErrNotEnoughSpace = 0x80410706u;
inline constexpr std::uint32_t kAdhocErrSocketDeleted = 0x80410707u;
inline constexpr std::uint32_t kAdhocErrWouldBlock = 0x80410709u;
inline constexpr std::uint32_t kAdhocErrPortInUse = 0x8041070Bu;
inline constexpr std::uint32_t kAdhocErrNotInitialized = 0x80410712u;
inline constexpr std::uint32_t kAdhocErrTimeout = 0x80410715u;
inline constexpr std::uint32_t kAdhocErrNoEntry = 0x80410716u;
inline constexpr std::uint32_t kAdhocErrConnectionRefused = 0x80410718u;
inline constexpr std::uint32_t kAdhocErrNotConnected = 0x8041071Bu;
inline constexpr std::uint32_t kMatchingErrInvalidId = 0x80410807u;
inline constexpr std::uint32_t kMatchingErrInvalidArg = 0x80410808u;

// sceNetAdhocMatching events (the values the game's callback receives).
enum MatchEventId : std::int32_t {
    kMatchHello = 1,
    kMatchRequest = 2,
    kMatchLeave = 3,
    kMatchDeny = 4,
    kMatchCancel = 5,
    kMatchAccept = 6,
    kMatchEstablished = 7,
    kMatchTimeout = 8,
    kMatchError = 9,
    kMatchBye = 10,
};

// sceNetAdhocctl handler events.
enum CtlEventId : std::int32_t {
    kCtlError = 0,
    kCtlConnected = 1,
    kCtlDisconnected = 2,
    kCtlScan = 3,
};

struct AdhocNetConfig {
    std::uint16_t port{27015u};
    std::string peers;  // "address:port" list, comma separated
    std::string nickname{"Player"};
};

struct MatchEvent {
    std::int32_t context{};
    std::uint32_t callback{};
    std::int32_t event{};
    Mac mac{};
    std::vector<std::uint8_t> opt;
};

struct CtlEvent {
    std::int32_t event{};
    std::int32_t error{};
};

struct ScanEntry {
    std::string name;  // group name, up to 8 characters
    Mac mac{};
};

struct PdpPacket {
    Mac mac{};
    std::uint16_t port{};
    std::vector<std::uint8_t> data;
};

struct PtpPending {
    std::uintptr_t socket{};
    Mac mac{};
    std::uint16_t port{};
};

// Network activity log: always written to LCSNative_net_<udp port>.log (capped), and to the console
// when LCS_NET_DIAG is set. Each running copy of the game has its own file.
void net_log(const std::string &line);
[[nodiscard]] std::string net_mac_text(const Mac &mac);

#define NETLOG(expr)                                   \
    do {                                               \
        std::ostringstream lcs_net_stream;             \
        lcs_net_stream << expr;                        \
        ::lcs::net_log(lcs_net_stream.str());          \
    } while (0)

class AdhocNet {
public:
    ~AdhocNet();

    // Opens the sockets. Safe to call again; returns false if the network cannot be used.
    bool start(const AdhocNetConfig &config);
    void stop();
    [[nodiscard]] bool running() const noexcept { return running_; }
    // Moves data in and out of the sockets and runs the timers. Never blocks.
    void poll();
    [[nodiscard]] const Mac &mac() const noexcept { return mac_; }
    [[nodiscard]] std::uint16_t udp_port() const noexcept { return udp_port_; }

    // --- adhocctl -----------------------------------------------------------------------------
    void ctl_connect(const std::string &group);
    void ctl_disconnect();
    void ctl_scan();
    [[nodiscard]] std::vector<ScanEntry> scan_results() const;
    [[nodiscard]] std::optional<std::string> peer_name(const Mac &mac) const;
    [[nodiscard]] const std::string &group() const noexcept { return group_; }
    [[nodiscard]] bool pop_ctl_event(CtlEvent &out);

    // --- matching -----------------------------------------------------------------------------
    struct MatchSettings {
        std::int32_t mode{};  // 1 host, 2 client, 3 peer to peer
        std::int32_t max_peers{};
        std::uint16_t port{};
        std::uint32_t buffer_size{};
        std::uint32_t hello_us{};
        std::uint32_t ping_us{};
        std::uint32_t init_count{};
        std::uint32_t msg_us{};
        std::uint32_t callback{};
    };
    [[nodiscard]] std::int32_t match_create(const MatchSettings &settings);
    [[nodiscard]] std::uint32_t match_start(std::int32_t id, std::vector<std::uint8_t> hello_opt);
    [[nodiscard]] std::uint32_t match_stop(std::int32_t id);
    [[nodiscard]] std::uint32_t match_delete(std::int32_t id);
    [[nodiscard]] std::uint32_t match_select(std::int32_t id, const Mac &target, std::vector<std::uint8_t> opt);
    [[nodiscard]] std::uint32_t match_cancel(std::int32_t id, const Mac &target, std::vector<std::uint8_t> opt);
    [[nodiscard]] std::uint32_t match_set_hello_opt(std::int32_t id, std::vector<std::uint8_t> opt);
    [[nodiscard]] bool pop_match_event(MatchEvent &out);
    [[nodiscard]] std::size_t queued_match_events() const noexcept { return match_events_.size(); }

    // --- PDP (datagrams) ----------------------------------------------------------------------
    // Each returns a socket id (> 0) or an error code >= 0x80000000.
    [[nodiscard]] std::uint32_t pdp_create(std::uint16_t port, std::uint32_t buffer_size);
    [[nodiscard]] std::uint32_t pdp_send(std::uint32_t id, const Mac &destination, std::uint16_t port,
                                         const std::uint8_t *data, std::uint32_t length);
    [[nodiscard]] std::uint32_t pdp_recv(std::uint32_t id, PdpPacket &out);
    [[nodiscard]] std::uint32_t pdp_delete(std::uint32_t id);
    [[nodiscard]] std::uint16_t pdp_port(std::uint32_t id) const;

    // --- PTP (streams) ------------------------------------------------------------------------
    [[nodiscard]] std::uint32_t ptp_open(std::uint16_t source_port, const Mac &destination,
                                         std::uint16_t destination_port);
    [[nodiscard]] std::uint32_t ptp_listen(std::uint16_t source_port);
    [[nodiscard]] std::uint32_t ptp_connect(std::uint32_t id);   // 0, or a would-block / error code
    [[nodiscard]] std::uint32_t ptp_accept(std::uint32_t id, std::uint32_t &new_id, Mac &peer,
                                           std::uint16_t &peer_port);
    [[nodiscard]] std::uint32_t ptp_send(std::uint32_t id, const std::uint8_t *data, std::uint32_t length);
    // Copies up to `capacity` bytes; `received` is set to the number of bytes copied.
    [[nodiscard]] std::uint32_t ptp_recv(std::uint32_t id, std::uint8_t *out, std::uint32_t capacity,
                                         std::uint32_t &received);
    [[nodiscard]] std::uint32_t ptp_flush(std::uint32_t id);
    [[nodiscard]] std::uint32_t ptp_close(std::uint32_t id);

    static std::uint64_t now_ms();

private:
    struct Endpoint {
        std::uint32_t ip_be{};
        std::uint16_t udp_port{};
        std::uint16_t tcp_port{};
        std::uint64_t seen_ms{};
        std::string group;
        std::string nickname;
    };
    struct MatchPeer {
        int state{0};  // 0 none, 1 incoming request, 2 outgoing request, 3 established
        std::vector<std::uint8_t> opt;
        std::uint64_t since_ms{};
        std::uint64_t last_rx_ms{};
        std::uint64_t last_tx_ms{};
    };
    struct MatchContext {
        std::int32_t id{};
        MatchSettings settings;
        bool started{};
        std::vector<std::uint8_t> hello_opt;
        std::map<Mac, MatchPeer> peers;
        std::uint64_t last_hello_ms{};
    };
    struct PdpSocket {
        std::uint32_t id{};
        std::uint16_t port{};
        std::uint32_t buffer_size{};
        std::size_t queued_bytes{};
        std::deque<PdpPacket> queue;
    };
    enum class PtpState { Open, Connecting, Established, Listening, Closed };
    struct PtpSocket {
        std::uint32_t id{};
        PtpState state{PtpState::Open};
        std::uintptr_t socket{};
        Mac source_mac{};
        Mac destination_mac{};
        std::uint16_t source_port{};
        std::uint16_t destination_port{};
        std::vector<std::uint8_t> rx;
        std::vector<std::uint8_t> tx;
        std::deque<PtpPending> pending;
        std::uint64_t started_ms{};
        std::uint64_t first_rx_ms{};
    };
    struct UnassignedConnection {
        std::uintptr_t socket{};
        std::vector<std::uint8_t> header;
        std::uint64_t since_ms{};
    };

    void send_frame(std::uint8_t type, const Mac &destination, const std::vector<std::uint8_t> &payload);
    void receive_frames();
    void handle_frame(std::uint8_t type, const Mac &source, const Mac &destination,
                      const std::uint8_t *payload, std::size_t length);
    void handle_match(const Mac &source, const std::uint8_t *payload, std::size_t length);
    void send_match(const MatchContext &context, const Mac &destination, std::uint8_t sub,
                    const std::vector<std::uint8_t> &opt);
    void queue_match_event(const MatchContext &context, std::int32_t event, const Mac &mac,
                           std::vector<std::uint8_t> opt = {});
    void poll_matching();
    void poll_tcp();
    void close_ptp_socket(PtpSocket &socket);
    [[nodiscard]] MatchContext *find_context(std::int32_t id);

    bool running_{false};
    Mac mac_{};
    std::uint16_t base_port_{};
    std::uint16_t udp_port_{};
    std::uint16_t tcp_port_{};
    std::string nickname_;
    std::uintptr_t udp_socket_{~std::uintptr_t{0}};
    std::uintptr_t tcp_listener_{~std::uintptr_t{0}};
    std::vector<std::pair<std::uint32_t, std::uint16_t>> configured_peers_;  // ip (network order), udp port
    std::map<Mac, Endpoint> endpoints_;

    std::string group_;
    std::uint64_t last_presence_ms_{};
    std::deque<std::pair<std::uint64_t, CtlEvent>> ctl_events_;

    std::int32_t next_match_id_{1};
    std::map<std::int32_t, MatchContext> match_contexts_;
    std::deque<MatchEvent> match_events_;

    std::uint32_t next_socket_id_{1};
    std::map<std::uint32_t, PdpSocket> pdp_sockets_;
    std::map<std::uint32_t, PtpSocket> ptp_sockets_;
    std::vector<UnassignedConnection> unassigned_;
};

}  // namespace lcs
