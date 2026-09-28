#pragma once

#include "psprecomp/guest_memory.hpp"

#include <cstdint>

namespace lcs {

// Pedestrian and traffic density (Rendering.PedDensity / Rendering.TrafficDensity).
//
// The PSP game keeps very few peds and cars around: its ini multipliers are 0.4 (peds) and 0.7
// (cars), at most 25 peds and 16 cars, 30 random cars, and both pools hold 60 objects. When the
// player drives, the ped spawn band moves out to 1.5x its distance with speed, so the same number
// of peds is spread over up to 2.25x the area and the streets look empty. With a density other
// than 1 this module scales those limits and raises the caps by the area factor while driving.
// Both densities at 1 leave the game as it was.
// The hooks in the generated code are added by lcs/scripts/apply_population_hooks.py.
//
// The host always gives the guest a generous, fixed memory layout (PC and Steam Deck have far
// more RAM than any PSP did): the game's own heap sees the full 64 MiB a PSP-2000/3000/Go ("Slim")
// has - it already sizes its heap from free RAM at boot, so this just lets it use what real Slim
// hardware offered - and the ped/vehicle pools get their own 16 MiB on top of that, which the
// game's heap never sees.

// Guest RAM size to create the runtime with: the game's 64 MiB plus the pools' own 16 MiB.
[[nodiscard]] std::uint32_t lcs_population_guest_ram_bytes() noexcept;
// Top of the thread stacks, i.e. the end of the memory the game's own heap can grow into. The game
// sizes its heap from the free RAM below them (sceKernelMaxFreeMemSize minus a reserve).
[[nodiscard]] std::uint32_t lcs_guest_stack_top() noexcept;

// Writes the scaled limits into the game's data. Call once after the ELF is loaded; returns false
// (and leaves everything as the game had it) when the constants are not where they are expected.
bool lcs_population_install(psprecomp::GuestMemory &memory) noexcept;

// Called by the generated code.
// Number of entries of the ped (kind 0) or vehicle (kind 2) pool the game creates with `original`.
[[nodiscard]] std::uint32_t lcs_population_pool_size(std::uint32_t kind, std::uint32_t original) noexcept;
// Storage for a moved pool (kind: 0 ped objects, 1 ped flags, 2 vehicle objects, 3 vehicle
// flags), or 0 to let the game allocate it from its heap.
[[nodiscard]] std::uint32_t lcs_population_pool_alloc(psprecomp::GuestMemory &memory, std::uint32_t kind,
                                                      std::uint32_t bytes) noexcept;
// CPopulation::Update passes the game's ped creation distance factor (1 on foot, up to 1.5 in a
// fast vehicle) here every frame.
void lcs_population_note_distance_factor(float factor) noexcept;
// Multipliers for the ped and car caps the game computes from the zone densities.
[[nodiscard]] float lcs_population_ped_cap_scale() noexcept;
[[nodiscard]] float lcs_population_car_cap_scale() noexcept;
// How many times GenerateRandomCars calls GenerateOneRandomCar this frame. The game tries once
// every other frame and most tries find no free spot, so while driving cars vanish faster than
// they come back.
[[nodiscard]] std::uint32_t lcs_population_car_attempts(std::uint32_t frame_counter) noexcept;
// Where a car spawn attempt looks: `distance` (110 m x the generation distance, or 40 m), the
// cosine of the largest angle from `direction` and `ahead` (1: inside that angle, 0: outside it),
// as the game picks them from the frame counter. The first attempt of a frame keeps the game's
// spot. The extra ones look between 25% of the distance and 180 m, so they find other stretches
// of road instead of the same few spots (or, with a large DrawDistance, spots so far away that no
// path nodes are loaded); in a fast vehicle they always look ahead, 70-180 m in front.
void lcs_population_car_spawn_spot(float &distance, float &cos_limit, std::uint32_t &ahead) noexcept;
// Free space GenerateOneRandomCar wants around a new car: the 10 m around the spot and the 20 m
// added to the car's radius when it checks the new car. Returns them smaller (6 m, 8 m) with a
// density set, which is still more than a car needs but leaves room for more of them.
[[nodiscard]] float lcs_population_car_clearance(float game_metres) noexcept;
// Replaces the game's limit of 30 random cars.
[[nodiscard]] std::int32_t lcs_population_random_car_limit() noexcept;

// Called once per frame. With LCS_POP_TRACE set, prints the pool usage every two seconds.
void lcs_population_tick(psprecomp::GuestMemory &memory) noexcept;

}  // namespace lcs
