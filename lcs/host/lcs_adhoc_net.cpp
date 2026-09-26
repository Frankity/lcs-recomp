#include "lcs_adhoc_net.hpp"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <winsock2.h>
#include <ws2tcpip.h>

#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <random>
#include <set>
#include <sstream>

#pragma comment(lib, "ws2_32.lib")

#ifndef SIO_UDP_CONNRESET
#define SIO_UDP_CONNRESET _WSAIOW(IOC_VENDOR, 12)
#endif

namespace lcs {
namespace {

constexpr std::uint32_t kFrameMagic = 0x4E53434Cu;  // "LCSN"
constexpr std::uint8_t kFrameVersion = 1u;
constexpr std::size_t kFrameHeader = 24u;
constexpr std::size_t kMaxFrame = 1500u;
constexpr std::uint32_t kPtpMagic = 0x31505450u;  // "PTP1"
constexpr std::size_t kPtpHeader = 20u;
constexpr std::uintptr_t kNoSocket = ~std::uintptr_t{0};
constexpr int kPortSpan = 8;  // ports tried / probed around the configured one
constexpr std::size_t kMaxPtpBuffer = 1u << 20;

enum FrameType : std::uint8_t { kFramePresence = 1, kFrameMatch = 2, kFramePdp = 3 };
enum MatchSub : std::uint8_t {
    kSubHello = 1,
    kSubRequest = 2,
    kSubAccept = 3,
    kSubDeny = 4,
    kSubCancel = 5,
    kSubLeave = 6,
    kSubBye = 7,
    kSubPing = 8,
};

bool net_diag() {
    static const bool enabled = std::getenv("LCS_NET_DIAG") != nullptr;
    return enabled;
}

std::string mac_text(const Mac &mac) {
    char text[24];
    std::snprintf(text, sizeof(text), "%02x:%02x:%02x:%02x:%02x:%02x", mac[0], mac[1], mac[2], mac[3],
                  mac[4], mac[5]);
    return text;
}

void put16(std::vector<std::uint8_t> &out, std::uint16_t value) {
    out.push_back(static_cast<std::uint8_t>(value & 0xFFu));
    out.push_back(static_cast<std::uint8_t>(value >> 8u));
}
std::uint16_t get16(const std::uint8_t *in) {
    return static_cast<std::uint16_t>(in[0] | (in[1] << 8u));
}

SOCKET as_socket(std::uintptr_t value) { return static_cast<SOCKET>(value); }
void close_socket(std::uintptr_t &value) {
    if (value != kNoSocket) closesocket(as_socket(value));
    value = kNoSocket;
}
void make_nonblocking(SOCKET socket) {
    u_long enable = 1;
    ioctlsocket(socket, FIONBIO, &enable);
}
bool would_block() {
    const int error = WSAGetLastError();
    return error == WSAEWOULDBLOCK || error == WSAEINPROGRESS || error == WSAEALREADY;
}

bool wsa_started = false;
void ensure_wsa() {
    if (wsa_started) return;
    WSADATA data{};
    wsa_started = WSAStartup(MAKEWORD(2, 2), &data) == 0;
}

std::string trim(const std::string &text) {
    const auto first = text.find_first_not_of(" \t\r\n");
    if (first == std::string::npos) return {};
    const auto last = text.find_last_not_of(" \t\r\n");
    return text.substr(first, last - first + 1u);
}

}  // namespace

std::uint64_t AdhocNet::now_ms() {
    return static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
                                          std::chrono::steady_clock::now().time_since_epoch())
                                          .count());
}

AdhocNet::~AdhocNet() { stop(); }

bool AdhocNet::start(const AdhocNetConfig &config) {
    if (running_) return true;
    ensure_wsa();
    if (!wsa_started) return false;

    std::random_device random;
    mac_ = {0x02, 'L', 'C', static_cast<std::uint8_t>(random()), static_cast<std::uint8_t>(random()),
            static_cast<std::uint8_t>(random())};
    nickname_ = config.nickname.empty() ? "Player" : config.nickname.substr(0u, 24u);

    udp_socket_ = static_cast<std::uintptr_t>(socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP));
    if (udp_socket_ == kNoSocket) return false;
    BOOL enable = TRUE;
    setsockopt(as_socket(udp_socket_), SOL_SOCKET, SO_BROADCAST, reinterpret_cast<const char *>(&enable),
               sizeof(enable));
    // Without this, an ICMP "port unreachable" from a peer that is not running turns into a recv error.
    BOOL no_reset = FALSE;
    DWORD returned = 0;
    WSAIoctl(as_socket(udp_socket_), SIO_UDP_CONNRESET, &no_reset, sizeof(no_reset), nullptr, 0, &returned,
             nullptr, nullptr);
    make_nonblocking(as_socket(udp_socket_));

    bool bound = false;
    for (int offset = 0; offset < kPortSpan && !bound; ++offset) {
        sockaddr_in address{};
        address.sin_family = AF_INET;
        address.sin_addr.s_addr = htonl(INADDR_ANY);
        address.sin_port = htons(static_cast<u_short>(config.port + offset));
        if (bind(as_socket(udp_socket_), reinterpret_cast<sockaddr *>(&address), sizeof(address)) == 0) {
            udp_port_ = static_cast<std::uint16_t>(config.port + offset);
            bound = true;
        }
    }
    if (!bound) {
        close_socket(udp_socket_);
        std::cerr << "[net] could not bind a UDP port near " << config.port << "\n";
        return false;
    }

    // Peers on the same PC use the neighbouring ports, so probe the whole span.
    base_port_ = config.port;

    tcp_port_ = static_cast<std::uint16_t>(udp_port_ + 1000u);
    tcp_listener_ = static_cast<std::uintptr_t>(socket(AF_INET, SOCK_STREAM, IPPROTO_TCP));
    if (tcp_listener_ != kNoSocket) {
        BOOL reuse = TRUE;
        setsockopt(as_socket(tcp_listener_), SOL_SOCKET, SO_REUSEADDR, reinterpret_cast<const char *>(&reuse),
                   sizeof(reuse));
        sockaddr_in address{};
        address.sin_family = AF_INET;
        address.sin_addr.s_addr = htonl(INADDR_ANY);
        address.sin_port = htons(tcp_port_);
        if (bind(as_socket(tcp_listener_), reinterpret_cast<sockaddr *>(&address), sizeof(address)) != 0 ||
            listen(as_socket(tcp_listener_), 16) != 0) {
            std::cerr << "[net] could not listen on TCP port " << tcp_port_ << "\n";
            close_socket(tcp_listener_);
        } else {
            make_nonblocking(as_socket(tcp_listener_));
        }
    }

    configured_peers_.clear();
    std::stringstream list(config.peers);
    std::string item;
    while (std::getline(list, item, ',')) {
        item = trim(item);
        if (item.empty()) continue;
        std::string host = item;
        std::uint16_t port = config.port;
        if (const auto colon = item.rfind(':'); colon != std::string::npos) {
            host = item.substr(0u, colon);
            port = static_cast<std::uint16_t>(std::strtoul(item.c_str() + colon + 1u, nullptr, 10));
        }
        addrinfo hints{};
        hints.ai_family = AF_INET;
        hints.ai_socktype = SOCK_DGRAM;
        addrinfo *found = nullptr;
        if (getaddrinfo(host.c_str(), nullptr, &hints, &found) == 0 && found != nullptr) {
            const auto *address = reinterpret_cast<const sockaddr_in *>(found->ai_addr);
            configured_peers_.emplace_back(address->sin_addr.s_addr, port);
            freeaddrinfo(found);
        } else {
            std::cerr << "[net] cannot resolve multiplayer peer '" << item << "'\n";
        }
    }

    running_ = true;
    last_presence_ms_ = 0u;
    std::cerr << "[net] ad-hoc emulation up: mac " << mac_text(mac_) << " udp " << udp_port_ << " tcp "
              << tcp_port_ << " peers " << configured_peers_.size() << "\n";
    return true;
}

void AdhocNet::stop() {
    if (!running_) return;
    for (auto &[id, socket] : ptp_sockets_) close_ptp_socket(socket);
    ptp_sockets_.clear();
    for (auto &connection : unassigned_) close_socket(connection.socket);
    unassigned_.clear();
    pdp_sockets_.clear();
    match_contexts_.clear();
    match_events_.clear();
    ctl_events_.clear();
    endpoints_.clear();
    group_.clear();
    close_socket(tcp_listener_);
    close_socket(udp_socket_);
    running_ = false;
}

// -------------------------------------------------------------------------------------- frames

void AdhocNet::send_frame(std::uint8_t type, const Mac &destination, const std::vector<std::uint8_t> &payload) {
    if (!running_ || payload.size() + kFrameHeader > kMaxFrame) return;
    std::vector<std::uint8_t> frame;
    frame.reserve(kFrameHeader + payload.size());
    for (int i = 0; i < 4; ++i) frame.push_back(static_cast<std::uint8_t>((kFrameMagic >> (8 * i)) & 0xFFu));
    frame.push_back(kFrameVersion);
    frame.push_back(type);
    put16(frame, static_cast<std::uint16_t>(payload.size()));
    frame.insert(frame.end(), mac_.begin(), mac_.end());
    frame.insert(frame.end(), destination.begin(), destination.end());
    put16(frame, udp_port_);
    put16(frame, tcp_port_);
    frame.insert(frame.end(), payload.begin(), payload.end());

    const auto send_to = [&](std::uint32_t ip_be, std::uint16_t port) {
        sockaddr_in address{};
        address.sin_family = AF_INET;
        address.sin_addr.s_addr = ip_be;
        address.sin_port = htons(port);
        sendto(as_socket(udp_socket_), reinterpret_cast<const char *>(frame.data()),
               static_cast<int>(frame.size()), 0, reinterpret_cast<sockaddr *>(&address), sizeof(address));
    };

    if (destination != kBroadcastMac) {
        if (const auto known = endpoints_.find(destination); known != endpoints_.end()) {
            send_to(known->second.ip_be, known->second.udp_port);
            return;
        }
    }
    // Broadcast (or an unknown destination): every configured peer, the LAN broadcast address and
    // the neighbouring ports on this PC. The receiver filters by destination address.
    std::set<std::pair<std::uint32_t, std::uint16_t>> targets(configured_peers_.begin(), configured_peers_.end());
    for (int offset = 0; offset < kPortSpan; ++offset) {
        const auto port = static_cast<std::uint16_t>(base_port_ + offset);
        targets.emplace(htonl(INADDR_BROADCAST), port);
        if (port != udp_port_) targets.emplace(htonl(INADDR_LOOPBACK), port);
    }
    for (const auto &[ip_be, port] : targets) send_to(ip_be, port);
}

void AdhocNet::receive_frames() {
    std::uint8_t buffer[2048];
    for (int guard = 0; guard < 128; ++guard) {
        sockaddr_in from{};
        int from_length = sizeof(from);
        const int received = recvfrom(as_socket(udp_socket_), reinterpret_cast<char *>(buffer), sizeof(buffer), 0,
                                      reinterpret_cast<sockaddr *>(&from), &from_length);
        if (received < 0) break;
        if (static_cast<std::size_t>(received) < kFrameHeader) continue;
        std::uint32_t magic = 0;
        for (int i = 0; i < 4; ++i) magic |= static_cast<std::uint32_t>(buffer[i]) << (8 * i);
        if (magic != kFrameMagic || buffer[4] != kFrameVersion) continue;
        const std::uint8_t type = buffer[5];
        const std::size_t length = get16(buffer + 6);
        if (kFrameHeader + length > static_cast<std::size_t>(received)) continue;
        Mac source{}, destination{};
        std::memcpy(source.data(), buffer + 8, 6);
        std::memcpy(destination.data(), buffer + 14, 6);
        if (source == mac_) continue;  // our own broadcast
        if (destination != kBroadcastMac && destination != mac_) continue;

        Endpoint &endpoint = endpoints_[source];
        endpoint.ip_be = from.sin_addr.s_addr;
        endpoint.udp_port = get16(buffer + 20);
        endpoint.tcp_port = get16(buffer + 22);
        endpoint.seen_ms = now_ms();
        handle_frame(type, source, destination, buffer + kFrameHeader, length);
    }
}

void AdhocNet::handle_frame(std::uint8_t type, const Mac &source, const Mac &destination,
                            const std::uint8_t *payload, std::size_t length) {
    (void)destination;
    if (type == kFramePresence && length >= 32u) {
        Endpoint &endpoint = endpoints_[source];
        endpoint.group.assign(reinterpret_cast<const char *>(payload), strnlen(reinterpret_cast<const char *>(payload), 8u));
        endpoint.nickname.assign(reinterpret_cast<const char *>(payload + 8),
                                 strnlen(reinterpret_cast<const char *>(payload + 8), 24u));
    } else if (type == kFrameMatch) {
        handle_match(source, payload, length);
    } else if (type == kFramePdp && length >= 4u) {
        const std::uint16_t source_port = get16(payload);
        const std::uint16_t destination_port = get16(payload + 2);
        for (auto &[id, socket] : pdp_sockets_) {
            if (socket.port != destination_port) continue;
            const std::size_t size = length - 4u;
            if (socket.queued_bytes + size > std::max<std::size_t>(socket.buffer_size, 1024u)) continue;
            PdpPacket packet;
            packet.mac = source;
            packet.port = source_port;
            packet.data.assign(payload + 4, payload + length);
            socket.queued_bytes += size;
            socket.queue.push_back(std::move(packet));
        }
    }
}

// ------------------------------------------------------------------------------------ adhocctl

void AdhocNet::ctl_connect(const std::string &group) {
    group_ = group.substr(0u, 8u);
    last_presence_ms_ = 0u;  // announce right away
    ctl_events_.emplace_back(now_ms() + 150u, CtlEvent{kCtlConnected, 0});
    if (net_diag()) std::cerr << "[net] ctl connect group '" << group_ << "'\n";
}

void AdhocNet::ctl_disconnect() {
    group_.clear();
    last_presence_ms_ = 0u;
    ctl_events_.emplace_back(now_ms() + 50u, CtlEvent{kCtlDisconnected, 0});
    if (net_diag()) std::cerr << "[net] ctl disconnect\n";
}

void AdhocNet::ctl_scan() {
    ctl_events_.emplace_back(now_ms() + 1200u, CtlEvent{kCtlScan, 0});
    if (net_diag()) std::cerr << "[net] ctl scan\n";
}

std::vector<ScanEntry> AdhocNet::scan_results() const {
    std::vector<ScanEntry> results;
    const std::uint64_t now = now_ms();
    for (const auto &[mac, endpoint] : endpoints_) {
        if (endpoint.group.empty() || now - endpoint.seen_ms > 5000u) continue;
        results.push_back(ScanEntry{endpoint.group, mac});
    }
    return results;
}

std::optional<std::string> AdhocNet::peer_name(const Mac &mac) const {
    const auto found = endpoints_.find(mac);
    if (found == endpoints_.end() || group_.empty() || found->second.group != group_ ||
        now_ms() - found->second.seen_ms > 10000u)
        return std::nullopt;
    return found->second.nickname;
}

bool AdhocNet::pop_ctl_event(CtlEvent &out) {
    if (ctl_events_.empty() || ctl_events_.front().first > now_ms()) return false;
    out = ctl_events_.front().second;
    ctl_events_.pop_front();
    return true;
}

// ------------------------------------------------------------------------------------- matching

AdhocNet::MatchContext *AdhocNet::find_context(std::int32_t id) {
    const auto found = match_contexts_.find(id);
    return found == match_contexts_.end() ? nullptr : &found->second;
}

std::int32_t AdhocNet::match_create(const MatchSettings &settings) {
    MatchContext context;
    context.id = next_match_id_++;
    context.settings = settings;
    if (net_diag())
        std::cerr << "[net] match create id " << context.id << " mode " << settings.mode << " port "
                  << settings.port << " max " << settings.max_peers << "\n";
    const std::int32_t id = context.id;
    match_contexts_[id] = std::move(context);
    return id;
}

std::uint32_t AdhocNet::match_start(std::int32_t id, std::vector<std::uint8_t> hello_opt) {
    MatchContext *context = find_context(id);
    if (context == nullptr) return kMatchingErrInvalidId;
    context->started = true;
    context->hello_opt = std::move(hello_opt);
    context->last_hello_ms = 0u;
    if (net_diag()) std::cerr << "[net] match start id " << id << " opt " << context->hello_opt.size() << "\n";
    return 0u;
}

std::uint32_t AdhocNet::match_stop(std::int32_t id) {
    MatchContext *context = find_context(id);
    if (context == nullptr) return kMatchingErrInvalidId;
    const bool host_only = context->settings.mode == 1;
    for (auto &[mac, peer] : context->peers)
        if (peer.state == 3 || peer.state == 2)
            send_match(*context, mac, peer.state == 2 ? kSubCancel : (host_only ? kSubBye : kSubLeave), {});
    context->peers.clear();
    context->started = false;
    if (net_diag()) std::cerr << "[net] match stop id " << id << "\n";
    return 0u;
}

std::uint32_t AdhocNet::match_delete(std::int32_t id) {
    if (find_context(id) == nullptr) return kMatchingErrInvalidId;
    (void)match_stop(id);
    match_contexts_.erase(id);
    std::erase_if(match_events_, [id](const MatchEvent &event) { return event.context == id; });
    return 0u;
}

std::uint32_t AdhocNet::match_set_hello_opt(std::int32_t id, std::vector<std::uint8_t> opt) {
    MatchContext *context = find_context(id);
    if (context == nullptr) return kMatchingErrInvalidId;
    context->hello_opt = std::move(opt);
    return 0u;
}

void AdhocNet::send_match(const MatchContext &context, const Mac &destination, std::uint8_t sub,
                          const std::vector<std::uint8_t> &opt) {
    std::vector<std::uint8_t> payload;
    put16(payload, context.settings.port);
    payload.push_back(sub);
    payload.push_back(0u);
    payload.insert(payload.end(), opt.begin(), opt.end());
    send_frame(kFrameMatch, destination, payload);
}

void AdhocNet::queue_match_event(const MatchContext &context, std::int32_t event, const Mac &mac,
                                 std::vector<std::uint8_t> opt) {
    MatchEvent queued;
    queued.context = context.id;
    queued.callback = context.settings.callback;
    queued.event = event;
    queued.mac = mac;
    queued.opt = std::move(opt);
    if (net_diag())
        std::cerr << "[net] match event ctx " << context.id << " event " << event << " from " << mac_text(mac)
                  << " opt " << queued.opt.size() << "\n";
    match_events_.push_back(std::move(queued));
}

std::uint32_t AdhocNet::match_select(std::int32_t id, const Mac &target, std::vector<std::uint8_t> opt) {
    MatchContext *context = find_context(id);
    if (context == nullptr) return kMatchingErrInvalidId;
    MatchPeer &peer = context->peers[target];
    const std::uint64_t now = now_ms();
    if (peer.state == 1) {  // accepting a request that came in
        send_match(*context, target, kSubAccept, opt);
        peer.state = 3;
        peer.last_rx_ms = peer.last_tx_ms = now;
        queue_match_event(*context, kMatchEstablished, target);
    } else {
        send_match(*context, target, kSubRequest, opt);
        peer.state = 2;
        peer.since_ms = now;
        peer.opt = std::move(opt);
    }
    return 0u;
}

std::uint32_t AdhocNet::match_cancel(std::int32_t id, const Mac &target, std::vector<std::uint8_t> opt) {
    MatchContext *context = find_context(id);
    if (context == nullptr) return kMatchingErrInvalidId;
    const auto found = context->peers.find(target);
    if (found == context->peers.end()) return 0u;
    const int state = found->second.state;
    if (state == 1) send_match(*context, target, kSubDeny, opt);
    else if (state == 2) send_match(*context, target, kSubCancel, opt);
    else if (state == 3) send_match(*context, target, context->settings.mode == 1 ? kSubBye : kSubLeave, opt);
    context->peers.erase(found);
    return 0u;
}

void AdhocNet::handle_match(const Mac &source, const std::uint8_t *payload, std::size_t length) {
    if (length < 4u) return;
    const std::uint16_t port = get16(payload);
    const std::uint8_t sub = payload[2];
    std::vector<std::uint8_t> opt(payload + 4, payload + length);
    const std::uint64_t now = now_ms();

    for (auto &[id, context] : match_contexts_) {
        if (!context.started || context.settings.port != port) continue;
        const int mode = context.settings.mode;
        const bool host_like = mode == 1 || mode == 3;
        const bool client_like = mode == 2 || mode == 3;
        auto existing = context.peers.find(source);
        if (existing != context.peers.end()) existing->second.last_rx_ms = now;

        switch (sub) {
        case kSubHello:
            if (client_like && (existing == context.peers.end() || existing->second.state != 3))
                queue_match_event(context, kMatchHello, source, std::move(opt));
            break;
        case kSubRequest: {
            if (!host_like) break;
            int members = 1;
            for (const auto &[mac, peer] : context.peers)
                if (peer.state == 3) ++members;
            if (members >= context.settings.max_peers) {
                send_match(context, source, kSubDeny, {});
                break;
            }
            MatchPeer &peer = context.peers[source];
            peer.state = 1;
            peer.since_ms = peer.last_rx_ms = now;
            queue_match_event(context, kMatchRequest, source, std::move(opt));
            break;
        }
        case kSubAccept:
            if (!client_like || existing == context.peers.end() || existing->second.state != 2) break;
            existing->second.state = 3;
            existing->second.last_rx_ms = existing->second.last_tx_ms = now;
            queue_match_event(context, kMatchAccept, source, opt);
            queue_match_event(context, kMatchEstablished, source);
            break;
        case kSubDeny:
            if (existing == context.peers.end()) break;
            context.peers.erase(existing);
            queue_match_event(context, kMatchDeny, source);
            break;
        case kSubCancel:
            if (existing == context.peers.end()) break;
            context.peers.erase(existing);
            queue_match_event(context, kMatchCancel, source);
            break;
        case kSubLeave:
            if (existing == context.peers.end()) break;
            context.peers.erase(existing);
            queue_match_event(context, kMatchLeave, source);
            break;
        case kSubBye:
            if (existing == context.peers.end()) break;
            context.peers.erase(existing);
            queue_match_event(context, kMatchBye, source);
            break;
        default:
            break;
        }
    }
}

bool AdhocNet::pop_match_event(MatchEvent &out) {
    if (match_events_.empty()) return false;
    out = std::move(match_events_.front());
    match_events_.pop_front();
    return true;
}

void AdhocNet::poll_matching() {
    const std::uint64_t now = now_ms();
    for (auto &[id, context] : match_contexts_) {
        if (!context.started) continue;
        const int mode = context.settings.mode;
        if (mode == 1 || mode == 3) {
            const std::uint64_t interval = std::max<std::uint64_t>(context.settings.hello_us / 1000u, 250u);
            if (now - context.last_hello_ms >= interval) {
                context.last_hello_ms = now;
                send_match(context, kBroadcastMac, kSubHello, context.hello_opt);
            }
        }
        const std::uint64_t ping_interval = std::max<std::uint64_t>(context.settings.ping_us / 2000u, 500u);
        const std::uint64_t timeout = std::max<std::uint64_t>(
            static_cast<std::uint64_t>(context.settings.ping_us / 1000u) * std::max(context.settings.init_count, 1u),
            8000u);
        for (auto it = context.peers.begin(); it != context.peers.end();) {
            MatchPeer &peer = it->second;
            if (peer.state == 3) {
                if (now - peer.last_tx_ms >= ping_interval) {
                    peer.last_tx_ms = now;
                    send_match(context, it->first, kSubPing, {});
                }
                if (now - peer.last_rx_ms > timeout) {
                    queue_match_event(context, kMatchTimeout, it->first);
                    it = context.peers.erase(it);
                    continue;
                }
            } else if (peer.state == 2 && now - peer.since_ms > 10000u) {
                queue_match_event(context, kMatchTimeout, it->first);
                it = context.peers.erase(it);
                continue;
            } else if (peer.state == 1 && now - peer.since_ms > 30000u) {
                it = context.peers.erase(it);
                continue;
            }
            ++it;
        }
    }
}

// ------------------------------------------------------------------------------------------ PDP

std::uint32_t AdhocNet::pdp_create(std::uint16_t port, std::uint32_t buffer_size) {
    if (!running_) return kAdhocErrNotInitialized;
    if (port == 0u) {
        port = 4096u;
        while (std::any_of(pdp_sockets_.begin(), pdp_sockets_.end(),
                           [port](const auto &item) { return item.second.port == port; }))
            ++port;
    } else if (std::any_of(pdp_sockets_.begin(), pdp_sockets_.end(),
                           [port](const auto &item) { return item.second.port == port; })) {
        return kAdhocErrPortInUse;
    }
    PdpSocket socket;
    socket.id = next_socket_id_++;
    socket.port = port;
    socket.buffer_size = buffer_size;
    const std::uint32_t id = socket.id;
    pdp_sockets_[id] = std::move(socket);
    if (net_diag()) std::cerr << "[net] pdp create id " << id << " port " << port << "\n";
    return id;
}

std::uint16_t AdhocNet::pdp_port(std::uint32_t id) const {
    const auto found = pdp_sockets_.find(id);
    return found == pdp_sockets_.end() ? 0u : found->second.port;
}

std::uint32_t AdhocNet::pdp_send(std::uint32_t id, const Mac &destination, std::uint16_t port,
                                 const std::uint8_t *data, std::uint32_t length) {
    const auto found = pdp_sockets_.find(id);
    if (found == pdp_sockets_.end()) return kAdhocErrInvalidSocket;
    if (length + 4u + kFrameHeader > kMaxFrame) return kAdhocErrNotEnoughSpace;
    std::vector<std::uint8_t> payload;
    put16(payload, found->second.port);
    put16(payload, port);
    payload.insert(payload.end(), data, data + length);
    send_frame(kFramePdp, destination, payload);
    return 0u;
}

std::uint32_t AdhocNet::pdp_recv(std::uint32_t id, PdpPacket &out) {
    const auto found = pdp_sockets_.find(id);
    if (found == pdp_sockets_.end()) return kAdhocErrInvalidSocket;
    if (found->second.queue.empty()) return kAdhocErrWouldBlock;
    out = std::move(found->second.queue.front());
    found->second.queue.pop_front();
    found->second.queued_bytes -= std::min(found->second.queued_bytes, out.data.size());
    return 0u;
}

std::uint32_t AdhocNet::pdp_delete(std::uint32_t id) {
    return pdp_sockets_.erase(id) == 1u ? 0u : kAdhocErrInvalidSocket;
}

// ------------------------------------------------------------------------------------------ PTP

void AdhocNet::close_ptp_socket(PtpSocket &socket) {
    close_socket(socket.socket);
    for (PtpPending &pending : socket.pending) {
        SOCKET s = as_socket(pending.socket);
        closesocket(s);
    }
    socket.pending.clear();
    socket.state = PtpState::Closed;
}

std::uint32_t AdhocNet::ptp_open(std::uint16_t source_port, const Mac &destination, std::uint16_t destination_port) {
    if (!running_) return kAdhocErrNotInitialized;
    PtpSocket socket;
    socket.id = next_socket_id_++;
    socket.socket = kNoSocket;
    socket.source_mac = mac_;
    socket.source_port = source_port;
    socket.destination_mac = destination;
    socket.destination_port = destination_port;
    const std::uint32_t id = socket.id;
    ptp_sockets_[id] = std::move(socket);
    if (net_diag())
        std::cerr << "[net] ptp open id " << id << " -> " << mac_text(destination) << ":" << destination_port << "\n";
    return id;
}

std::uint32_t AdhocNet::ptp_listen(std::uint16_t source_port) {
    if (!running_) return kAdhocErrNotInitialized;
    PtpSocket socket;
    socket.id = next_socket_id_++;
    socket.socket = kNoSocket;
    socket.state = PtpState::Listening;
    socket.source_mac = mac_;
    socket.source_port = source_port;
    const std::uint32_t id = socket.id;
    ptp_sockets_[id] = std::move(socket);
    if (net_diag()) std::cerr << "[net] ptp listen id " << id << " port " << source_port << "\n";
    return id;
}

std::uint32_t AdhocNet::ptp_connect(std::uint32_t id) {
    const auto found = ptp_sockets_.find(id);
    if (found == ptp_sockets_.end()) return kAdhocErrInvalidSocket;
    PtpSocket &socket = found->second;
    if (socket.state == PtpState::Established) return 0u;
    if (socket.state == PtpState::Listening || socket.state == PtpState::Closed) return kAdhocErrNotConnected;

    if (socket.state == PtpState::Open) {
        const auto endpoint = endpoints_.find(socket.destination_mac);
        if (endpoint == endpoints_.end() || endpoint->second.tcp_port == 0u) return kAdhocErrWouldBlock;
        socket.socket = static_cast<std::uintptr_t>(::socket(AF_INET, SOCK_STREAM, IPPROTO_TCP));
        if (socket.socket == kNoSocket) return kAdhocErrConnectionRefused;
        make_nonblocking(as_socket(socket.socket));
        BOOL nodelay = TRUE;
        setsockopt(as_socket(socket.socket), IPPROTO_TCP, TCP_NODELAY, reinterpret_cast<const char *>(&nodelay),
                   sizeof(nodelay));
        sockaddr_in address{};
        address.sin_family = AF_INET;
        address.sin_addr.s_addr = endpoint->second.ip_be;
        address.sin_port = htons(endpoint->second.tcp_port);
        connect(as_socket(socket.socket), reinterpret_cast<sockaddr *>(&address), sizeof(address));
        socket.state = PtpState::Connecting;
        socket.started_ms = now_ms();
        return kAdhocErrWouldBlock;
    }

    // Connecting: check whether the connection completed.
    fd_set writable, failed;
    FD_ZERO(&writable);
    FD_ZERO(&failed);
    FD_SET(as_socket(socket.socket), &writable);
    FD_SET(as_socket(socket.socket), &failed);
    timeval none{0, 0};
    if (select(0, nullptr, &writable, &failed, &none) <= 0) {
        if (now_ms() - socket.started_ms > 8000u) {
            close_socket(socket.socket);
            socket.state = PtpState::Open;
            return kAdhocErrConnectionRefused;
        }
        return kAdhocErrWouldBlock;
    }
    if (FD_ISSET(as_socket(socket.socket), &failed)) {
        close_socket(socket.socket);
        socket.state = PtpState::Open;
        return kAdhocErrConnectionRefused;
    }
    std::vector<std::uint8_t> header;
    for (int i = 0; i < 4; ++i) header.push_back(static_cast<std::uint8_t>((kPtpMagic >> (8 * i)) & 0xFFu));
    header.insert(header.end(), socket.source_mac.begin(), socket.source_mac.end());
    header.insert(header.end(), socket.destination_mac.begin(), socket.destination_mac.end());
    put16(header, socket.source_port);
    put16(header, socket.destination_port);
    socket.tx.insert(socket.tx.begin(), header.begin(), header.end());
    socket.state = PtpState::Established;
    if (net_diag()) std::cerr << "[net] ptp connected id " << id << "\n";
    return 0u;
}

std::uint32_t AdhocNet::ptp_accept(std::uint32_t id, std::uint32_t &new_id, Mac &peer, std::uint16_t &peer_port) {
    const auto found = ptp_sockets_.find(id);
    if (found == ptp_sockets_.end()) return kAdhocErrInvalidSocket;
    PtpSocket &listener = found->second;
    if (listener.state != PtpState::Listening) return kAdhocErrNotConnected;
    if (listener.pending.empty()) return kAdhocErrWouldBlock;
    const PtpPending pending = listener.pending.front();
    listener.pending.pop_front();
    PtpSocket accepted;
    accepted.id = next_socket_id_++;
    accepted.state = PtpState::Established;
    accepted.socket = pending.socket;
    accepted.source_mac = mac_;
    accepted.source_port = listener.source_port;
    accepted.destination_mac = pending.mac;
    accepted.destination_port = pending.port;
    new_id = accepted.id;
    peer = pending.mac;
    peer_port = pending.port;
    ptp_sockets_[new_id] = std::move(accepted);
    if (net_diag()) std::cerr << "[net] ptp accepted id " << new_id << " from " << mac_text(peer) << "\n";
    return 0u;
}

std::uint32_t AdhocNet::ptp_send(std::uint32_t id, const std::uint8_t *data, std::uint32_t length) {
    const auto found = ptp_sockets_.find(id);
    if (found == ptp_sockets_.end()) return kAdhocErrInvalidSocket;
    PtpSocket &socket = found->second;
    if (socket.state != PtpState::Established) return kAdhocErrNotConnected;
    if (socket.tx.size() + length > kMaxPtpBuffer) return kAdhocErrWouldBlock;
    socket.tx.insert(socket.tx.end(), data, data + length);
    return 0u;
}

std::uint32_t AdhocNet::ptp_recv(std::uint32_t id, std::uint8_t *out, std::uint32_t capacity, std::uint32_t &received) {
    received = 0u;
    const auto found = ptp_sockets_.find(id);
    if (found == ptp_sockets_.end()) return kAdhocErrInvalidSocket;
    PtpSocket &socket = found->second;
    if (socket.rx.empty()) {
        return socket.state == PtpState::Established ? kAdhocErrWouldBlock : kAdhocErrNotConnected;
    }
    // The game reads fixed-size messages. If only part of one has arrived, give the rest a moment.
    if (socket.rx.size() < capacity && socket.state == PtpState::Established &&
        now_ms() - socket.first_rx_ms < 60u)
        return kAdhocErrWouldBlock;
    const std::size_t count = std::min<std::size_t>(capacity, socket.rx.size());
    std::memcpy(out, socket.rx.data(), count);
    socket.rx.erase(socket.rx.begin(), socket.rx.begin() + static_cast<std::ptrdiff_t>(count));
    received = static_cast<std::uint32_t>(count);
    return 0u;
}

std::uint32_t AdhocNet::ptp_flush(std::uint32_t id) {
    const auto found = ptp_sockets_.find(id);
    if (found == ptp_sockets_.end()) return kAdhocErrInvalidSocket;
    if (found->second.state != PtpState::Established) return kAdhocErrNotConnected;
    return found->second.tx.empty() ? 0u : kAdhocErrWouldBlock;
}

std::uint32_t AdhocNet::ptp_close(std::uint32_t id) {
    const auto found = ptp_sockets_.find(id);
    if (found == ptp_sockets_.end()) return kAdhocErrInvalidSocket;
    close_ptp_socket(found->second);
    ptp_sockets_.erase(found);
    return 0u;
}

void AdhocNet::poll_tcp() {
    const std::uint64_t now = now_ms();
    if (tcp_listener_ != kNoSocket) {
        for (int guard = 0; guard < 16; ++guard) {
            SOCKET accepted = accept(as_socket(tcp_listener_), nullptr, nullptr);
            if (accepted == INVALID_SOCKET) break;
            make_nonblocking(accepted);
            BOOL nodelay = TRUE;
            setsockopt(accepted, IPPROTO_TCP, TCP_NODELAY, reinterpret_cast<const char *>(&nodelay), sizeof(nodelay));
            unassigned_.push_back(UnassignedConnection{static_cast<std::uintptr_t>(accepted), {}, now});
        }
    }
    // Incoming connections send a header naming the source and the port they want.
    for (auto it = unassigned_.begin(); it != unassigned_.end();) {
        std::uint8_t buffer[kPtpHeader];
        const int want = static_cast<int>(kPtpHeader - it->header.size());
        const int got = recv(as_socket(it->socket), reinterpret_cast<char *>(buffer), want, 0);
        bool drop = false;
        if (got > 0) it->header.insert(it->header.end(), buffer, buffer + got);
        else if (got == 0 || !would_block()) drop = true;
        if (!drop && it->header.size() == kPtpHeader) {
            std::uint32_t magic = 0;
            for (int i = 0; i < 4; ++i) magic |= static_cast<std::uint32_t>(it->header[i]) << (8 * i);
            Mac source{};
            std::memcpy(source.data(), it->header.data() + 4, 6);
            const std::uint16_t source_port = get16(it->header.data() + 16);
            const std::uint16_t destination_port = get16(it->header.data() + 18);
            if (magic != kPtpMagic) {
                drop = true;
            } else {
                PtpSocket *listener = nullptr;
                for (auto &[id, socket] : ptp_sockets_)
                    if (socket.state == PtpState::Listening && socket.source_port == destination_port) listener = &socket;
                if (listener != nullptr) {
                    listener->pending.push_back(PtpPending{it->socket, source, source_port});
                    it = unassigned_.erase(it);
                    continue;
                }
                if (now - it->since_ms > 15000u) drop = true;  // nobody listens on that port
            }
        } else if (!drop && now - it->since_ms > 15000u) {
            drop = true;
        }
        if (drop) {
            close_socket(it->socket);
            it = unassigned_.erase(it);
        } else {
            ++it;
        }
    }
    for (auto &[id, socket] : ptp_sockets_) {
        if (socket.state != PtpState::Established) continue;
        while (!socket.tx.empty()) {
            const int sent = send(as_socket(socket.socket), reinterpret_cast<const char *>(socket.tx.data()),
                                  static_cast<int>(std::min<std::size_t>(socket.tx.size(), 16384u)), 0);
            if (sent > 0) {
                socket.tx.erase(socket.tx.begin(), socket.tx.begin() + sent);
                continue;
            }
            if (!would_block()) socket.state = PtpState::Closed;
            break;
        }
        std::uint8_t buffer[4096];
        while (socket.state == PtpState::Established && socket.rx.size() < kMaxPtpBuffer) {
            const int got = recv(as_socket(socket.socket), reinterpret_cast<char *>(buffer), sizeof(buffer), 0);
            if (got > 0) {
                if (socket.rx.empty()) socket.first_rx_ms = now;
                socket.rx.insert(socket.rx.end(), buffer, buffer + got);
                continue;
            }
            if (got == 0 || !would_block()) socket.state = PtpState::Closed;
            break;
        }
    }
}

// --------------------------------------------------------------------------------------- polling

void AdhocNet::poll() {
    if (!running_) return;
    receive_frames();
    const std::uint64_t now = now_ms();
    if (now - last_presence_ms_ >= 500u) {
        last_presence_ms_ = now;
        std::vector<std::uint8_t> payload(32u, 0u);
        std::memcpy(payload.data(), group_.data(), std::min<std::size_t>(group_.size(), 8u));
        std::memcpy(payload.data() + 8, nickname_.data(), std::min<std::size_t>(nickname_.size(), 24u));
        send_frame(kFramePresence, kBroadcastMac, payload);
    }
    poll_matching();
    poll_tcp();
}

}  // namespace lcs
