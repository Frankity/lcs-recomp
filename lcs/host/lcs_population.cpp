#include "lcs_population.hpp"

#include "lcs_render_config.hpp"

#include <algorithm>
#include <array>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <map>

namespace lcs {
namespace {

// Game data (ULUS10041, relocated at 0x08804000).
constexpr std::uint32_t kPedNumberMultiplier = 0x08B38694u;  // float 0.4, CIniFile::PedNumberMultiplier
constexpr std::uint32_t kCarNumberMultiplier = 0x08B38698u;  // float 0.7, CIniFile::CarNumberMultiplier
constexpr std::uint32_t kMaxPeds = 0x08B564DCu;              // int 25, CPopulation::MaxNumberOfPedsInUse
constexpr std::uint32_t kMaxPedsAlt = 0x08B564E0u;           // int 40, the same when 0x08B58CB0 is set
constexpr std::uint32_t kMaxCars = 0x08B4BC04u;              // int 16, CCarCtrl::MaxNumberOfCarsInUse
constexpr std::uint32_t kPedPool = 0x08B4C42Cu;              // CPool<CPed> *
constexpr std::uint32_t kVehiclePool = 0x08B4C430u;          // CPool<CVehicle> *
constexpr std::uint32_t kNumRandomCars = 0x08B4BBD0u;
constexpr std::uint32_t kTotalPeds = 0x08B5E868u;            // CPopulation::ms_nTotalPeds
constexpr std::uint32_t kGameHeap = 0x08B81540u;             // the game's heap: +0 size, +20 bytes in use

constexpr std::uint32_t kOriginalPool = 60u;
constexpr std::int32_t kOriginalRandomCars = 30;
// With more peds than this alive the game crashed within a minute in testing (a return address
// on the ATRAC3 thread's stack gets overwritten), so the ped maximum stops here.
constexpr std::uint32_t kSafeMaxPeds = 70u;
constexpr float kMaxDistanceFactor = 1.5f;  // the game's ped creation distance factor at speed
constexpr float kMaxAreaFactor = kMaxDistanceFactor * kMaxDistanceFactor;

// The game's own heap can grow into the same 64 MiB a real PSP-2000/3000/Go ("Slim") has; the
// pools live in their own fixed 16 MiB above that, which the game's heap sizing never sees.
constexpr std::uint32_t kGameHeapTop = 0x0C000000u;
constexpr std::uint32_t kPoolArenaStart = kGameHeapTop;
constexpr std::uint32_t kPoolArenaEnd = 0x0D000000u;

struct State {
    bool enabled{};
    float ped_density{1.0f};
    float traffic_density{1.0f};
    std::uint32_t ped_pool{kOriginalPool};
    std::uint32_t vehicle_pool{kOriginalPool};
    std::int32_t random_cars{kOriginalRandomCars};
    float area_factor{1.0f};
    std::uint32_t car_attempt{};
    std::uint32_t random_state{0x2545F491u};
    std::uint32_t arena_next{};
    std::array<std::uint32_t, 4> blocks{};       // address per kind
    std::array<std::uint32_t, 4> block_bytes{};
};
State g;

bool wanted() noexcept {
    const auto &r = lcs_render_configuration().rendering;
    return r.ped_density != 1.0f || r.traffic_density != 1.0f;
}

std::uint32_t scaled(std::uint32_t original, float factor) noexcept {
    return static_cast<std::uint32_t>(std::ceil(static_cast<float>(original) * factor));
}

float load_float(psprecomp::GuestMemory &memory, std::uint32_t address) noexcept {
    return std::bit_cast<float>(memory.load32(address));
}

void store_float(psprecomp::GuestMemory &memory, std::uint32_t address, float value) noexcept {
    memory.store32(address, std::bit_cast<std::uint32_t>(value));
}

// Used and total entries of a CPool (entries, flags, size; a set 0x80 flag bit marks a free slot).
std::pair<std::uint32_t, std::uint32_t> pool_usage(psprecomp::GuestMemory &memory, std::uint32_t pointer) noexcept {
    if (!memory.contains(pointer, 4u)) return {};
    const std::uint32_t pool = memory.load32(pointer);
    if (pool == 0u || !memory.contains(pool, 16u)) return {};
    const std::uint32_t flags = memory.load32(pool + 4u);
    const std::uint32_t size = memory.load32(pool + 8u);
    if (!memory.contains(flags, size)) return {0u, size};
    std::uint32_t used = 0u;
    for (std::uint32_t i = 0u; i < size; ++i)
        if ((memory.load8(flags + i) & 0x80u) == 0u) ++used;
    return {used, size};
}

}  // namespace

std::uint32_t lcs_population_guest_ram_bytes() noexcept {
    return kPoolArenaEnd - psprecomp::GuestMemory::kPhysicalBase;
}

std::uint32_t lcs_guest_stack_top() noexcept {
    return kGameHeapTop;
}

bool lcs_population_install(psprecomp::GuestMemory &memory) noexcept {
    g = State{};
    g.arena_next = kPoolArenaStart;
    if (!wanted()) return true;
    if (memory.size() < kPoolArenaEnd - psprecomp::GuestMemory::kPhysicalBase) return false;
    if (memory.load32(kPedNumberMultiplier) != std::bit_cast<std::uint32_t>(0.4f) ||
        memory.load32(kCarNumberMultiplier) != std::bit_cast<std::uint32_t>(0.7f) ||
        memory.load32(kMaxPeds) != 25u || memory.load32(kMaxPedsAlt) != 40u || memory.load32(kMaxCars) != 16u)
        return false;

    const auto &r = lcs_render_configuration().rendering;
    g.ped_density = r.ped_density;
    g.traffic_density = r.traffic_density;
    // The caps below are reached only at full speed in a vehicle (area factor 2.25); on foot the
    // zone densities times the multipliers decide, as in the game.
    const std::uint32_t max_peds = std::min(scaled(25u, g.ped_density * kMaxAreaFactor), std::max(25u, kSafeMaxPeds));
    const std::uint32_t max_cars = scaled(16u, g.traffic_density * kMaxAreaFactor);
    store_float(memory, kPedNumberMultiplier, 0.4f * g.ped_density);
    store_float(memory, kCarNumberMultiplier, 0.7f * g.traffic_density);
    memory.store32(kMaxPeds, max_peds);
    memory.store32(kMaxPedsAlt, std::min(scaled(40u, g.ped_density * kMaxAreaFactor), std::max(40u, kSafeMaxPeds)));
    memory.store32(kMaxCars, max_cars);
    g.random_cars = static_cast<std::int32_t>(scaled(kOriginalRandomCars, g.traffic_density * kMaxAreaFactor));
    // Every car brings a driver and often a passenger, and they come from the ped pool.
    g.ped_pool = kOriginalPool + (std::max(max_peds, 25u) - 25u) + 2u * (std::max(max_cars, 16u) - 16u);
    g.vehicle_pool = kOriginalPool + (std::max(max_cars, 16u) - 16u);
    g.enabled = true;
    std::cerr << "[population] peds x" << g.ped_density << " (max " << max_peds << ", pool " << g.ped_pool
              << "), traffic x" << g.traffic_density << " (max " << max_cars << ", random " << g.random_cars
              << ", pool " << g.vehicle_pool << ")\n";
    return true;
}

std::uint32_t lcs_population_pool_size(std::uint32_t kind, std::uint32_t original) noexcept {
    if (!g.enabled || original != kOriginalPool) return original;
    return kind == 0u ? g.ped_pool : g.vehicle_pool;
}

std::uint32_t lcs_population_pool_alloc(psprecomp::GuestMemory &memory, std::uint32_t kind,
                                        std::uint32_t bytes) noexcept {
    if (!g.enabled || kind >= g.blocks.size() || bytes == 0u) return 0u;
    // A pool created again (it is not, but the game could) gets its old block back.
    if (g.blocks[kind] != 0u && g.block_bytes[kind] >= bytes) return g.blocks[kind];
    const std::uint32_t address = (g.arena_next + 63u) & ~63u;
    if (address + bytes > kPoolArenaEnd || !memory.contains(address, bytes)) return 0u;
    memory.zero(address, bytes);
    g.arena_next = address + bytes;
    g.blocks[kind] = address;
    g.block_bytes[kind] = bytes;
    return address;
}

void lcs_population_note_distance_factor(float factor) noexcept {
    const float clamped = std::clamp(factor, 1.0f, kMaxDistanceFactor);
    g.area_factor = clamped * clamped;
}

float lcs_population_ped_cap_scale() noexcept { return g.enabled ? g.area_factor : 1.0f; }

float lcs_population_car_cap_scale() noexcept { return g.enabled ? g.area_factor : 1.0f; }

std::uint32_t lcs_population_car_attempts(std::uint32_t frame_counter) noexcept {
    g.car_attempt = 0u;
    if (!g.enabled) return frame_counter & 1u;
    return static_cast<std::uint32_t>(std::ceil(2.0f * g.traffic_density));  // 5 per frame at 2.5
}

void lcs_population_car_spawn_spot(float &distance, float &cos_limit, std::uint32_t &ahead) noexcept {
    if (!g.enabled || g.car_attempt++ == 0u) return;
    g.random_state = g.random_state * 1664525u + 1013904223u;
    const float t = static_cast<float>(g.random_state >> 8) / static_cast<float>(1u << 24);
    constexpr float kFarthest = 180.0f;  // with a large DrawDistance, 110 m x 3 finds no path nodes
    // The game's "going fast" test is a speed above 0.4, where the distance factor is 1.3.
    constexpr float kFastAreaFactor = 1.3f * 1.3f;
    if (g.area_factor >= kFastAreaFactor) {
        constexpr float kNearestAhead = 70.0f;
        distance = kNearestAhead + (kFarthest - kNearestAhead) * t;
        cos_limit = 0.85f;  // the game's own cone for cars ahead of a fast player
        ahead = 1u;
        return;
    }
    constexpr float kClosest = 40.0f;  // the game's own side/behind spawn distance
    const float farthest = std::min(distance, kFarthest);
    const float nearest = std::max(kClosest, distance * 0.25f);
    if (farthest > nearest) distance = nearest + (farthest - nearest) * t;
}

float lcs_population_car_clearance(float game_metres) noexcept {
    if (!g.enabled) return game_metres;
    if (game_metres == 10.0f) return 6.0f;
    if (game_metres == 20.0f) return 8.0f;
    return game_metres;
}

std::int32_t lcs_population_random_car_limit() noexcept { return g.random_cars; }

void lcs_population_tick(psprecomp::GuestMemory &memory) noexcept {
    if (std::getenv("LCS_SPEED_DIAG")) {
        static std::map<std::uint32_t, std::array<float, 2>> last_pos;
        static auto t0 = std::chrono::steady_clock::now();
        const auto t1 = std::chrono::steady_clock::now();
        const double dt = std::chrono::duration<double>(t1 - t0).count();
        if (dt >= 1.0) {
            t0 = t1;
            const std::uint32_t pool = memory.load32(kPedPool);
            std::map<std::uint32_t, std::array<float, 2>> now_pos;
            double sum = 0.0; int n = 0;
            if (pool != 0u) {
                const std::uint32_t base = memory.load32(pool), flags = memory.load32(pool + 4u), size = memory.load32(pool + 8u);
                for (std::uint32_t i = 0; i < size; ++i) {
                    if (memory.load8(flags + i) & 0x80u) continue;
                    const std::uint32_t ped = base + i * 3248u;
                    const float x = load_float(memory, ped + 48u), y = load_float(memory, ped + 52u);
                    now_pos[ped] = {x, y};
                    if (auto it = last_pos.find(ped); it != last_pos.end()) {
                        const double d = std::hypot(x - it->second[0], y - it->second[1]) / dt;
                        if (d > 0.3 && d < 4.0) { sum += d; ++n; }  // walking peds only
                    }
                }
            }
            last_pos = now_pos;
            if (n) std::cerr << "[speed] walking peds " << n << " avg " << sum / n << " m/s\n";
        }
    }
    static const bool trace = std::getenv("LCS_POP_TRACE") != nullptr;
    if (!trace) return;
    static auto last = std::chrono::steady_clock::now();
    const auto now = std::chrono::steady_clock::now();
    if (now - last < std::chrono::seconds(2)) return;
    last = now;
    const auto peds = pool_usage(memory, kPedPool);
    const auto vehicles = pool_usage(memory, kVehiclePool);
    std::cerr << "[population] peds " << peds.first << "/" << peds.second << " (counted "
              << memory.load32(kTotalPeds) << ") vehicles " << vehicles.first << "/" << vehicles.second
              << " (random " << memory.load32(kNumRandomCars) << ") area x" << g.area_factor
              << " ped mult " << load_float(memory, kPedNumberMultiplier) << " heap "
              << memory.load32(kGameHeap + 20u) / 1024u << "/" << memory.load32(kGameHeap) / 1024u << " KiB\n";
}

}  // namespace lcs
