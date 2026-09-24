#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0212[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8,
    0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 61, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69,
    0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0,
    86, 0, 0, 0, 87, 0, 88, 89, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0,
    94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0,
    0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0,
    0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0,
    0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0,
    0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0,
    0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 193,
    0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197,
    0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    206, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214,
};
void recomp_unit_0212_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B54000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0212[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B54000;
    case 2u: goto L_08B55880;
    case 3u: goto L_08B558C0;
    case 4u: goto L_08B55924;
    case 5u: goto L_08B559B8;
    case 6u: goto L_08B559E8;
    case 7u: goto L_08B559F0;
    case 8u: goto L_08B559FC;
    case 9u: goto L_08B55A0C;
    case 10u: goto L_08B55B80;
    case 11u: goto L_08B55B84;
    case 12u: goto L_08B55BD4;
    case 13u: goto L_08B55C0C;
    case 14u: goto L_08B55E04;
    case 15u: goto L_08B55E5C;
    case 16u: goto L_08B55E94;
    case 17u: goto L_08B56384;
    case 18u: goto L_08B5639C;
    case 19u: goto L_08B56414;
    case 20u: goto L_08B56454;
    case 21u: goto L_08B5645C;
    case 22u: goto L_08B56464;
    case 23u: goto L_08B5649C;
    case 24u: goto L_08B56530;
    case 25u: goto L_08B56598;
    case 26u: goto L_08B565BC;
    case 27u: goto L_08B56644;
    case 28u: goto L_08B56650;
    case 29u: goto L_08B5665C;
    case 30u: goto L_08B56690;
    case 31u: goto L_08B566A8;
    case 32u: goto L_08B566C0;
    case 33u: goto L_08B566D8;
    case 34u: goto L_08B566F0;
    case 35u: goto L_08B56734;
    case 36u: goto L_08B567A0;
    case 37u: goto L_08B567A8;
    case 38u: goto L_08B56820;
    case 39u: goto L_08B56904;
    case 40u: goto L_08B56914;
    case 41u: goto L_08B5692C;
    case 42u: goto L_08B56958;
    case 43u: goto L_08B56960;
    case 44u: goto L_08B569AC;
    case 45u: goto L_08B569B4;
    case 46u: goto L_08B569EC;
    case 47u: goto L_08B56A80;
    case 48u: goto L_08B56A90;
    case 49u: goto L_08B56B48;
    case 50u: goto L_08B56B74;
    case 51u: goto L_08B56BD4;
    case 52u: goto L_08B56C24;
    case 53u: goto L_08B56C30;
    case 54u: goto L_08B56C38;
    case 55u: goto L_08B56C40;
    case 56u: goto L_08B56CAC;
    case 57u: goto L_08B56CC0;
    case 58u: goto L_08B56D30;
    case 59u: goto L_08B57154;
    case 60u: goto L_08B57200;
    case 61u: goto L_08B57208;
    case 62u: goto L_08B5720C;
    case 63u: goto L_08B57340;
    case 64u: goto L_08B57348;
    case 65u: goto L_08B57364;
    case 66u: goto L_08B57388;
    case 67u: goto L_08B57398;
    case 68u: goto L_08B573EC;
    case 69u: goto L_08B573FC;
    case 70u: goto L_08B57408;
    case 71u: goto L_08B57424;
    case 72u: goto L_08B5742C;
    case 73u: goto L_08B57438;
    case 74u: goto L_08B5748C;
    case 75u: goto L_08B57494;
    case 76u: goto L_08B5749C;
    case 77u: goto L_08B574B8;
    case 78u: goto L_08B574D8;
    case 79u: goto L_08B574E8;
    case 80u: goto L_08B574F8;
    case 81u: goto L_08B57534;
    case 82u: goto L_08B5753C;
    case 83u: goto L_08B57554;
    case 84u: goto L_08B5756C;
    case 85u: goto L_08B57574;
    case 86u: goto L_08B57580;
    case 87u: goto L_08B57590;
    case 88u: goto L_08B57598;
    case 89u: goto L_08B5759C;
    case 90u: goto L_08B575A8;
    case 91u: goto L_08B575BC;
    case 92u: goto L_08B575DC;
    case 93u: goto L_08B575F0;
    case 94u: goto L_08B57600;
    case 95u: goto L_08B57610;
    case 96u: goto L_08B57620;
    case 97u: goto L_08B5762C;
    case 98u: goto L_08B57644;
    case 99u: goto L_08B57650;
    case 100u: goto L_08B57664;
    case 101u: goto L_08B57690;
    case 102u: goto L_08B576A0;
    case 103u: goto L_08B576A8;
    case 104u: goto L_08B576B4;
    case 105u: goto L_08B576CC;
    case 106u: goto L_08B576D4;
    case 107u: goto L_08B576DC;
    case 108u: goto L_08B576E8;
    case 109u: goto L_08B576F8;
    case 110u: goto L_08B57708;
    case 111u: goto L_08B57724;
    case 112u: goto L_08B57734;
    case 113u: goto L_08B57750;
    case 114u: goto L_08B57758;
    case 115u: goto L_08B57774;
    case 116u: goto L_08B5779C;
    case 117u: goto L_08B577A4;
    case 118u: goto L_08B577AC;
    case 119u: goto L_08B577E0;
    case 120u: goto L_08B577F8;
    case 121u: goto L_08B57804;
    case 122u: goto L_08B57830;
    case 123u: goto L_08B5783C;
    case 124u: goto L_08B57874;
    case 125u: goto L_08B57898;
    case 126u: goto L_08B578A0;
    case 127u: goto L_08B578B4;
    case 128u: goto L_08B578C4;
    case 129u: goto L_08B578D4;
    case 130u: goto L_08B578F4;
    case 131u: goto L_08B57904;
    case 132u: goto L_08B57914;
    case 133u: goto L_08B57920;
    case 134u: goto L_08B5794C;
    case 135u: goto L_08B5795C;
    case 136u: goto L_08B57964;
    case 137u: goto L_08B57978;
    case 138u: goto L_08B57994;
    case 139u: goto L_08B579A8;
    case 140u: goto L_08B579B4;
    case 141u: goto L_08B579C0;
    case 142u: goto L_08B579D8;
    case 143u: goto L_08B579EC;
    case 144u: goto L_08B57A08;
    case 145u: goto L_08B57A18;
    case 146u: goto L_08B57A20;
    case 147u: goto L_08B57A28;
    case 148u: goto L_08B57A48;
    case 149u: goto L_08B57A54;
    case 150u: goto L_08B57A60;
    case 151u: goto L_08B57A70;
    case 152u: goto L_08B57A94;
    case 153u: goto L_08B57AA0;
    case 154u: goto L_08B57AB4;
    case 155u: goto L_08B57AC8;
    case 156u: goto L_08B57AD0;
    case 157u: goto L_08B57ADC;
    case 158u: goto L_08B57AEC;
    case 159u: goto L_08B57AF4;
    case 160u: goto L_08B57B04;
    case 161u: goto L_08B57B14;
    case 162u: goto L_08B57B34;
    case 163u: goto L_08B57B3C;
    case 164u: goto L_08B57B48;
    case 165u: goto L_08B57B80;
    case 166u: goto L_08B57BA8;
    case 167u: goto L_08B57BB0;
    case 168u: goto L_08B57BEC;
    case 169u: goto L_08B57C08;
    case 170u: goto L_08B57C20;
    case 171u: goto L_08B57C2C;
    case 172u: goto L_08B57C40;
    case 173u: goto L_08B57C48;
    case 174u: goto L_08B57C88;
    case 175u: goto L_08B57C98;
    case 176u: goto L_08B57CB0;
    case 177u: goto L_08B57CD4;
    case 178u: goto L_08B57CF8;
    case 179u: goto L_08B57D18;
    case 180u: goto L_08B57D24;
    case 181u: goto L_08B57D2C;
    case 182u: goto L_08B57D48;
    case 183u: goto L_08B57D58;
    case 184u: goto L_08B57D6C;
    case 185u: goto L_08B57D84;
    case 186u: goto L_08B57D90;
    case 187u: goto L_08B57DB0;
    case 188u: goto L_08B57DBC;
    case 189u: goto L_08B57DC4;
    case 190u: goto L_08B57DDC;
    case 191u: goto L_08B57DE4;
    case 192u: goto L_08B57DF4;
    case 193u: goto L_08B57DFC;
    case 194u: goto L_08B57E1C;
    case 195u: goto L_08B57E5C;
    case 196u: goto L_08B57E6C;
    case 197u: goto L_08B57E7C;
    case 198u: goto L_08B57E88;
    case 199u: goto L_08B57E90;
    case 200u: goto L_08B57EB0;
    case 201u: goto L_08B57EE8;
    case 202u: goto L_08B57F10;
    case 203u: goto L_08B57F40;
    case 204u: goto L_08B57F58;
    case 205u: goto L_08B57F68;
    case 206u: goto L_08B57F80;
    case 207u: goto L_08B57F90;
    case 208u: goto L_08B57F98;
    case 209u: goto L_08B57FA8;
    case 210u: goto L_08B57FB4;
    case 211u: goto L_08B57FBC;
    case 212u: goto L_08B57FC4;
    case 213u: goto L_08B57FE8;
    case 214u: goto L_08B57FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B54000:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02D4B200u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B55880:
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    rt.unsupported(0x08B5588Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B558C0:
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    rt.unsupported(0x08B55900u, 0x40666666u, "unknown not lowered yet"); return;
L_08B55924:
    (void)(ctx.gpr[1] << 0u);
    rt.unsupported(0x08B55928u, 0x00010001u, "special? not lowered yet"); return;
L_08B559B8:
    (void)(ctx.gpr[10] << 0u);
    if (ctx.gpr[10] == 0u) (void)(0u);
    if (ctx.gpr[10] == 0u) (void)(0u);
    if (ctx.gpr[10] == 0u) (void)(0u);
    if (ctx.gpr[10] == 0u) (void)(0u);
    if (ctx.gpr[10] == 0u) (void)(0u);
    rt.unsupported(0x08B559D0u, 0x03E80168u, "special? not lowered yet"); return;
L_08B559E8:
    rt.unsupported(0x08B559ECu, 0x10681518u, "control flow in delay slot"); return;
L_08B559F0:
    ctx.gpr[16] = (ctx.gpr[24] + static_cast<std::uint32_t>(6000));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[28];
    ctx.gpr[16] = (ctx.gpr[24] + static_cast<std::uint32_t>(8000));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0214, 214u>(ctx, &aot_mem); return;
      }
      goto L_08B559FC;
    }
L_08B559FC:
    ctx.gpr[24] = (static_cast<std::int32_t>(ctx.gpr[23]) < 1000 ? 1u : 0u);
    rt.unsupported(0x08B55A00u, 0x001401F4u, "special? not lowered yet"); return;
L_08B55A0C:
    ctx.gpr[16] = (0u << 2u);
    (void)(0u << 16u);
    ctx.gpr[16] = (0u << 2u);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    ctx.gpr[24] = (ctx.gpr[7] + ctx.gpr[23]);
    (void)(0u << 16u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    (void)(0u << 16u);
    rt.unsupported(0x08B55A94u, 0x0018C295u, "special? not lowered yet"); return;
L_08B55B80:
    rt.unsupported(0x08B55B80u, 0x00000068u, "special? not lowered yet"); return;
L_08B55B84:
    rt.unsupported(0x08B55B88u, 0x08A87C3Cu, "control flow in delay slot"); return;
L_08B55BD4:
    rt.unsupported(0x08B55BD8u, 0x08B2A880u, "control flow in delay slot"); return;
L_08B55C0C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    (void)(0u << 16u);
    ctx.gpr[23] = (2621u << 16u);
    ctx.gpr[17] = (60293u << 16u);
    ctx.gpr[14] = (5243u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[28] = (10486u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[14] = (5243u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[24] = (20972u << 16u);
    ctx.gpr[26] = (57672u << 16u);
    ctx.gpr[29] = (28836u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    (void)(0u << 16u);
    ctx.gpr[23] = (2621u << 16u);
    ctx.gpr[17] = (60293u << 16u);
    ctx.gpr[14] = (5243u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[23] = (2621u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // nop
    // nop
    rt.unsupported(0x08B55DA8u, 0x40666666u, "unknown not lowered yet"); return;
L_08B55E04:
    // nop
    rt.unsupported(0x08B55E0Cu, 0x08B00D4Cu, "control flow in delay slot"); return;
L_08B55E5C:
    rt.unsupported(0x08B55E5Cu, 0x00726C70u, "special? not lowered yet"); return;
L_08B55E94:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B561C0u, 0x00FFFFFFu, "special? not lowered yet"); return;
L_08B56384:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 20u));
    if (static_cast<std::int32_t>(ctx.gpr[8]) >= 0) {
    (void)(ctx.gpr[1] >> 8u);
        goto L_08B577AC;
    }
    goto L_08B5639C;
L_08B5639C:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 4u));
    rt.unsupported(0x08B563A0u, 0x00010101u, "special? not lowered yet"); return;
L_08B56414:
    (void)(ctx.gpr[2] >> 8u);
    rt.unsupported(0x08B56418u, 0x03010201u, "special? not lowered yet"); return;
L_08B56454:
    rt.unsupported(0x08B56458u, 0x18161310u, "control flow in delay slot"); return;
L_08B5645C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[24]) > 0;
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(8737));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0214, 214u>(ctx, &aot_mem); return;
      }
      goto L_08B56464;
    }
L_08B56464:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10279 ? 1u : 0u);
    ctx.gpr[14] = (ctx.gpr[25] < static_cast<std::uint32_t>(11564) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] & 12592u);
    ctx.gpr[21] = (ctx.gpr[9] | 13363u);
    ctx.gpr[23] = (ctx.gpr[1] ^ 14134u);
    ctx.gpr[25] = (ctx.gpr[17] ^ 14648u);
    ctx.gpr[27] = (ctx.gpr[25] ^ 14906u);
    ctx.gpr[28] = (15419u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[30] = (15934u << 16u);
    ctx.gpr[31] = (16191u << 16u);
    ctx.gpr[31] = (16191u << 16u);
    rt.unsupported(0x08B56494u, 0x00000001u, "special? not lowered yet"); return;
L_08B5649C:
    // nop
    rt.unsupported(0x08B564A4u, 0x08A9A4D8u, "control flow in delay slot"); return;
L_08B56530:
    (void)(ctx.hi);
    (void)(ctx.hi);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B56548u, 0x40666666u, "unknown not lowered yet"); return;
L_08B56598:
    rt.unsupported(0x08B5659Cu, 0x08B2B634u, "control flow in delay slot"); return;
L_08B565BC:
    rt.unsupported(0x08B565C0u, 0x08B2B67Cu, "control flow in delay slot"); return;
L_08B56644:
    (void)(0u << 16u);
    // nop
    // nop
    goto L_08B56650;
L_08B56650:
    // nop
    (void)(0u << 16u);
    // nop
    goto L_08B5665C;
L_08B5665C:
    // nop
    // nop
    (void)(0u << 16u);
    rt.unsupported(0x08B56668u, 0x42340000u, "unknown not lowered yet"); return;
L_08B56690:
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[6] = (2706u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[14] = (64053u << 16u);
    goto L_08B566A8;
L_08B566A8:
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    goto L_08B566C0;
L_08B566C0:
    ctx.gpr[31] = (26355u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[14] = (64053u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    goto L_08B566D8;
L_08B566D8:
    ctx.gpr[18] = (47299u << 16u);
    rt.unsupported(0x08B566DCu, 0xC0060A92u, "unknown not lowered yet"); return;
L_08B566F0:
    ctx.gpr[6] = (2706u << 16u);
    // nop
    ctx.gpr[6] = (2706u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[18] = (47299u << 16u);
    ctx.gpr[14] = (5243u << 16u);
    // nop
    rt.unsupported(0x08B56710u, 0x40666666u, "unknown not lowered yet"); return;
L_08B56734:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[12] = (52430u << 16u);
    // nop
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    // nop
    if (ctx.gpr[2] != ctx.gpr[4]) {
    rt.unsupported(0x08B5679Cu, 0x401921FBu, "unknown not lowered yet"); return;
        ctx.pc = 0x08B61BFCu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B567A0;
L_08B567A0:
    // nop
    (void)(0u << 16u);
    goto L_08B567A8;
L_08B567A8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B5681Cu, 0x40500000u, "unknown not lowered yet"); return;
L_08B56820:
    rt.unsupported(0x08B56824u, 0x08B2B73Cu, "control flow in delay slot"); return;
L_08B56904:
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    goto L_08B56914;
L_08B56914:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    goto L_08B5692C;
L_08B5692C:
    (void)(ctx.hi);
    // nop
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B56958;
L_08B56958:
    // nop
    // nop
    goto L_08B56960;
L_08B56960:
    // nop
    // nop
    // nop
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // nop
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B569AC;
L_08B569AC:
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    goto L_08B569B4;
L_08B569B4:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    (void)(0u >> 0u);
    // nop
    // nop
    // nop
    rt.unsupported(0x08B569D0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B569EC:
    rt.unsupported(0x08B569ECu, 0x00000085u, "special? not lowered yet"); return;
L_08B56A80:
    // nop
    // nop
    // nop
    // nop
    goto L_08B56A90;
L_08B56A90:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    // nop
    // nop
    rt.unsupported(0x08B56AE0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B56B48:
    // nop
    rt.unsupported(0x08B56B50u, 0x088A7300u, "control flow in delay slot"); return;
L_08B56B74:
    rt.unsupported(0x08B56B78u, 0x08AB849Cu, "control flow in delay slot"); return;
L_08B56BD4:
    rt.unsupported(0x08B56BD8u, 0x08AB7A64u, "control flow in delay slot"); return;
L_08B56C24:
    // nop
    rt.unsupported(0x08B56C2Cu, 0x08AB8830u, "control flow in delay slot"); return;
L_08B56C30:
    // nop
    // nop
    ctx.pc = 0x02AE4B40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B56C38:
    // nop
    // nop
    ctx.pc = 0x02AE5570u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B56C40:
    // nop
    rt.unsupported(0x08B56C48u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x02AE5630u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B56CAC:
    rt.unsupported(0x08B56CACu, 0x42C80000u, "unknown not lowered yet"); return;
L_08B56CC0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B56D30;
L_08B56D30:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B57154;
L_08B57154:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B57200;
L_08B57200:
    // nop
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    // nop
      if (branch_taken) {
          goto L_08B57208;
      }
      goto L_08B5720C;
    }
L_08B57208:
    // nop
    goto L_08B5720C;
L_08B5720C:
    rt.unsupported(0x08B57210u, 0x0A1F0A1Fu, "control flow in delay slot"); return;
L_08B57340:
    if (ctx.gpr[18] == ctx.gpr[1]) {
    rt.unsupported(0x08B57344u, 0x44205345u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08B69490u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B57348;
L_08B57348:
    ctx.gpr[28] = (ctx.gpr[9] & 22081u);
    rt.unsupported(0x08B5734Cu, 0x4A202535u, "cop2/vfpu not lowered yet"); return;
L_08B57364:
    rt.unsupported(0x08B57364u, 0x202E2530u, "unknown not lowered yet"); return;
L_08B57388:
    rt.unsupported(0x08B57388u, 0x20595449u, "unknown not lowered yet"); return;
L_08B57398:
    rt.unsupported(0x08B57398u, 0x4A4D2053u, "cop2/vfpu not lowered yet"); return;
L_08B573EC:
    rt.unsupported(0x08B573ECu, 0x20595449u, "unknown not lowered yet"); return;
L_08B573FC:
    rt.unsupported(0x08B573FCu, 0x45505845u, "cop1? not lowered yet"); return;
L_08B57408:
    rt.unsupported(0x08B57408u, 0x44414F52u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B5740Cu, 0x41454420u, "unknown not lowered yet"); return;
L_08B57424:
    if (ctx.gpr[18] == ctx.gpr[4]) {
    rt.unsupported(0x08B57428u, 0x20455649u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0214, 214u>(ctx, &aot_mem); return;
    }
    goto L_08B5742C;
L_08B5742C:
    rt.unsupported(0x08B5742Cu, 0x4543494Eu, "cop1? not lowered yet"); return;
L_08B57438:
    rt.unsupported(0x08B57438u, 0x45455053u, "cop1? not lowered yet"); return;
L_08B5748C:
    if (ctx.gpr[2] != ctx.gpr[21]) {
    ctx.gpr[14] = (ctx.gpr[18] ^ 20297u);
        ctx.pc = 0x08B6799Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B57494;
L_08B57494:
    if (ctx.gpr[18] == ctx.gpr[1]) {
    rt.unsupported(0x08B57498u, 0x4B43414Au, "cop2/vfpu not lowered yet"); return;
        ctx.pc = 0x08B68118u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B5749C;
L_08B5749C:
    rt.unsupported(0x08B5749Cu, 0x20474E49u, "unknown not lowered yet"); return;
L_08B574B8:
    rt.unsupported(0x08B574B8u, 0x48202E20u, "cop2/vfpu not lowered yet"); return;
L_08B574D8:
    rt.unsupported(0x08B574D8u, 0x4E484345u, "unknown not lowered yet"); return;
L_08B574E8:
    rt.unsupported(0x08B574E8u, 0x4C554341u, "unknown not lowered yet"); return;
L_08B574F8:
    rt.unsupported(0x08B574F8u, 0x20595241u, "unknown not lowered yet"); return;
L_08B57534:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B57538u, 0x4D204548u, "unknown not lowered yet"); return;
        ctx.pc = 0x08B62644u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B5753C;
L_08B5753C:
    rt.unsupported(0x08B5753Cu, 0x43495355u, "unknown not lowered yet"); return;
L_08B57554:
    rt.unsupported(0x08B57554u, 0x46204F54u, "cop1? not lowered yet"); return;
L_08B5756C:
    rt.unsupported(0x08B57570u, 0x52412045u, "control flow in delay slot"); return;
L_08B57574:
    rt.unsupported(0x08B57574u, 0x4F532045u, "unknown not lowered yet"); return;
L_08B57580:
    rt.unsupported(0x08B57580u, 0x41542D4Cu, "unknown not lowered yet"); return;
L_08B57590:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B57594u, 0x45524548u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08B6AEB8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B57598;
L_08B57598:
    { const bool signed_ok = ctx.execute_signed_add(4u, 1u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B57598u, 0x00202120u); return; } }
    goto L_08B5759C;
L_08B5759C:
    rt.unsupported(0x08B5759Cu, 0x45485420u, "cop1? not lowered yet"); return;
L_08B575A8:
    rt.unsupported(0x08B575A8u, 0x49572920u, "cop2/vfpu not lowered yet"); return;
L_08B575BC:
    rt.unsupported(0x08B575BCu, 0x49422041u, "cop2/vfpu not lowered yet"); return;
L_08B575DC:
    rt.unsupported(0x08B575DCu, 0x4D454854u, "unknown not lowered yet"); return;
L_08B575F0:
    rt.unsupported(0x08B575F0u, 0x2053534Fu, "unknown not lowered yet"); return;
L_08B57600:
    rt.unsupported(0x08B57600u, 0x41482053u, "unknown not lowered yet"); return;
L_08B57610:
    rt.unsupported(0x08B57610u, 0x20544920u, "unknown not lowered yet"); return;
L_08B57620:
    rt.unsupported(0x08B57620u, 0x20454854u, "unknown not lowered yet"); return;
L_08B5762C:
    rt.unsupported(0x08B5762Cu, 0x2046464Fu, "unknown not lowered yet"); return;
L_08B57644:
    rt.unsupported(0x08B57644u, 0x4120454Bu, "unknown not lowered yet"); return;
L_08B57650:
    rt.unsupported(0x08B57650u, 0x444E4957u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B57654u, 0x202E2029u, "unknown not lowered yet"); return;
L_08B57664:
    rt.unsupported(0x08B57664u, 0x4E455645u, "unknown not lowered yet"); return;
L_08B57690:
    rt.unsupported(0x08B57690u, 0x20214E4Fu, "unknown not lowered yet"); return;
L_08B576A0:
    if (ctx.gpr[2] != ctx.gpr[9]) {
    rt.unsupported(0x08B576A4u, 0x4E4F5320u, "unknown not lowered yet"); return;
        ctx.pc = 0x08B69724u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B576A8;
L_08B576A8:
    rt.unsupported(0x08B576A8u, 0x41292047u, "unknown not lowered yet"); return;
L_08B576B4:
    rt.unsupported(0x08B576B4u, 0x45534142u, "cop1? not lowered yet"); return;
L_08B576CC:
    if (ctx.gpr[10] != ctx.gpr[15]) {
    rt.unsupported(0x08B576D0u, 0x45524120u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08B6DB50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B576D4;
L_08B576D4:
    if (ctx.gpr[18] == ctx.gpr[21]) {
    rt.unsupported(0x08B576D8u, 0x4F542045u, "unknown not lowered yet"); return;
        ctx.pc = 0x08B6C358u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B576DC;
L_08B576DC:
    rt.unsupported(0x08B576DCu, 0x41454C20u, "unknown not lowered yet"); return;
L_08B576E8:
    rt.unsupported(0x08B576E8u, 0x4D532041u, "unknown not lowered yet"); return;
L_08B576F8:
    rt.unsupported(0x08B576F8u, 0x20544146u, "unknown not lowered yet"); return;
L_08B57708:
    rt.unsupported(0x08B57708u, 0x45485420u, "cop1? not lowered yet"); return;
L_08B57724:
    rt.unsupported(0x08B57724u, 0x43495355u, "unknown not lowered yet"); return;
L_08B57734:
    rt.unsupported(0x08B57734u, 0x4E555220u, "unknown not lowered yet"); return;
L_08B57750:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    rt.unsupported(0x08B57754u, 0x46412053u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08B6C858u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B57758;
L_08B57758:
    rt.unsupported(0x08B57758u, 0x20524554u, "unknown not lowered yet"); return;
L_08B57774:
    rt.unsupported(0x08B57774u, 0x20595352u, "unknown not lowered yet"); return;
L_08B5779C:
    rt.unsupported(0x08B577A0u, 0x52472045u, "control flow in delay slot"); return;
L_08B577A4:
    if (ctx.gpr[26] == ctx.gpr[16]) {
    rt.unsupported(0x08B577A8u, 0x47525520u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08B6CCE4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B577AC;
L_08B577AC:
    rt.unsupported(0x08B577ACu, 0x43204445u, "unknown not lowered yet"); return;
L_08B577E0:
    rt.unsupported(0x08B577E0u, 0x2059414Cu, "unknown not lowered yet"); return;
L_08B577F8:
    rt.unsupported(0x08B577F8u, 0x444C524Fu, "unsupported CFC1 control register"); return;
    (void)(ctx.gpr[17] < static_cast<std::uint32_t>(11808) ? 1u : 0u);
    { const bool signed_ok = ctx.execute_signed_add(5u, 1u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B57800u, 0x00202E20u); return; } }
    goto L_08B57804;
L_08B57804:
    rt.unsupported(0x08B57804u, 0x45485420u, "cop1? not lowered yet"); return;
L_08B57830:
    rt.unsupported(0x08B57830u, 0x20595449u, "unknown not lowered yet"); return;
L_08B5783C:
    rt.unsupported(0x08B5783Cu, 0x45524120u, "cop1? not lowered yet"); return;
L_08B57874:
    rt.unsupported(0x08B57874u, 0x4C4B4345u, "unknown not lowered yet"); return;
L_08B57898:
    if (ctx.gpr[26] == ctx.gpr[9]) {
    rt.unsupported(0x08B5789Cu, 0x41455220u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0214, 214u>(ctx, &aot_mem); return;
    }
    goto L_08B578A0;
L_08B578A0:
    rt.unsupported(0x08B578A0u, 0x20594C4Cu, "unknown not lowered yet"); return;
L_08B578B4:
    rt.unsupported(0x08B578B4u, 0x20534543u, "unknown not lowered yet"); return;
L_08B578C4:
    rt.unsupported(0x08B578C4u, 0x20464F20u, "unknown not lowered yet"); return;
L_08B578D4:
    rt.unsupported(0x08B578D4u, 0x20544148u, "unknown not lowered yet"); return;
L_08B578F4:
    rt.unsupported(0x08B578F4u, 0x202E5345u, "unknown not lowered yet"); return;
L_08B57904:
    rt.unsupported(0x08B57904u, 0x4147524Fu, "unknown not lowered yet"); return;
L_08B57914:
    rt.unsupported(0x08B57914u, 0x44205245u, "cop1? not lowered yet"); return;
L_08B57920:
    rt.unsupported(0x08B57920u, 0x20544920u, "unknown not lowered yet"); return;
L_08B5794C:
    rt.unsupported(0x08B5794Cu, 0x49534120u, "cop2/vfpu not lowered yet"); return;
L_08B5795C:
    if (ctx.gpr[10] != ctx.gpr[4]) {
    rt.unsupported(0x08B57960u, 0x4E45474Cu, "unknown not lowered yet"); return;
        ctx.pc = 0x08B6B284u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B57964;
L_08B57964:
    rt.unsupported(0x08B57964u, 0x4F204543u, "unknown not lowered yet"); return;
L_08B57978:
    rt.unsupported(0x08B57978u, 0x4E454D52u, "unknown not lowered yet"); return;
L_08B57994:
    (void)(static_cast<std::int32_t>(ctx.gpr[9]) < 11347 ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[10]) < 18515 ? 1u : 0u);
    rt.unsupported(0x08B5799Cu, 0x20412053u, "unknown not lowered yet"); return;
L_08B579A8:
    rt.unsupported(0x08B579A8u, 0x4E200020u, "unknown not lowered yet"); return;
L_08B579B4:
    (void)(static_cast<std::int32_t>(ctx.gpr[9]) < 18254 ? 1u : 0u);
    if (ctx.gpr[18] != ctx.gpr[1]) {
    rt.unsupported(0x08B579BCu, 0x45572059u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08B68EDCu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B579C0;
L_08B579C0:
    rt.unsupported(0x08B579C0u, 0x4E4F5041u, "unknown not lowered yet"); return;
L_08B579D8:
    rt.unsupported(0x08B579D8u, 0x20444C49u, "unknown not lowered yet"); return;
L_08B579EC:
    rt.unsupported(0x08B579ECu, 0x45555145u, "cop1? not lowered yet"); return;
L_08B57A08:
    rt.unsupported(0x08B57A08u, 0x43415254u, "unknown not lowered yet"); return;
L_08B57A18:
    if (ctx.gpr[26] == ctx.gpr[16]) {
    rt.unsupported(0x08B57A1Cu, 0x45524120u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08B69F3Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B57A20;
L_08B57A20:
    if (ctx.gpr[26] != ctx.gpr[15]) {
    rt.unsupported(0x08B57A24u, 0x4E41204Eu, "unknown not lowered yet"); return;
        ctx.pc = 0x08B68AA4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B57A28;
L_08B57A28:
    rt.unsupported(0x08B57A28u, 0x4F532044u, "unknown not lowered yet"); return;
L_08B57A48:
    rt.unsupported(0x08B57A48u, 0x4D205329u, "unknown not lowered yet"); return;
L_08B57A54:
    rt.unsupported(0x08B57A54u, 0x4B434F4Cu, "cop2/vfpu not lowered yet"); return;
L_08B57A60:
    rt.unsupported(0x08B57A60u, 0x202E202Eu, "unknown not lowered yet"); return;
L_08B57A70:
    rt.unsupported(0x08B57A70u, 0x20532954u, "unknown not lowered yet"); return;
L_08B57A94:
    rt.unsupported(0x08B57A94u, 0x204E414Cu, "unknown not lowered yet"); return;
L_08B57AA0:
    rt.unsupported(0x08B57AA0u, 0x45455246u, "cop1? not lowered yet"); return;
L_08B57AB4:
    rt.unsupported(0x08B57AB4u, 0x20594220u, "unknown not lowered yet"); return;
L_08B57AC8:
    rt.unsupported(0x08B57ACCu, 0x55422050u, "control flow in delay slot"); return;
L_08B57AD0:
    rt.unsupported(0x08B57AD0u, 0x41204646u, "unknown not lowered yet"); return;
L_08B57ADC:
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[10]) < 18720 ? 1u : 0u);
    rt.unsupported(0x08B57AE0u, 0x49542053u, "cop2/vfpu not lowered yet"); return;
L_08B57AEC:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B57AF0u, 0x48542048u, "cop2/vfpu not lowered yet"); return;
        ctx.pc = 0x08B69020u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B57AF4;
L_08B57AF4:
    rt.unsupported(0x08B57AF4u, 0x45482045u, "cop1? not lowered yet"); return;
L_08B57B04:
    rt.unsupported(0x08B57B04u, 0x20444E41u, "unknown not lowered yet"); return;
L_08B57B14:
    rt.unsupported(0x08B57B14u, 0x214D4529u, "unknown not lowered yet"); return;
L_08B57B34:
    if (ctx.gpr[1] == 0u) {
    rt.unsupported(0x08B57B38u, 0x49564552u, "cop2/vfpu not lowered yet"); return;
        ctx.pc = 0x08B6AC3Cu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B57B3C;
L_08B57B3C:
    rt.unsupported(0x08B57B3Cu, 0x4E205745u, "unknown not lowered yet"); return;
L_08B57B48:
    rt.unsupported(0x08B57B48u, 0x42554629u, "unknown not lowered yet"); return;
L_08B57B80:
    rt.unsupported(0x08B57B80u, 0x204E4548u, "unknown not lowered yet"); return;
L_08B57BA8:
    rt.unsupported(0x08B57BACu, 0x59525420u, "control flow in delay slot"); return;
L_08B57BB0:
    rt.unsupported(0x08B57BB0u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B57BEC:
    rt.unsupported(0x08B57BECu, 0x4C422044u, "unknown not lowered yet"); return;
L_08B57C08:
    rt.unsupported(0x08B57C08u, 0x49545320u, "cop2/vfpu not lowered yet"); return;
L_08B57C20:
    rt.unsupported(0x08B57C20u, 0x49545320u, "cop2/vfpu not lowered yet"); return;
L_08B57C2C:
    rt.unsupported(0x08B57C2Cu, 0x203A474Eu, "unknown not lowered yet"); return;
L_08B57C40:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B57C44u, 0x20534948u, "unknown not lowered yet"); return;
        ctx.pc = 0x08B630C4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B57C48;
L_08B57C48:
    rt.unsupported(0x08B57C48u, 0x454D4954u, "cop1? not lowered yet"); return;
L_08B57C88:
    rt.unsupported(0x08B57C88u, 0x41525420u, "unknown not lowered yet"); return;
L_08B57C98:
    rt.unsupported(0x08B57C98u, 0x4C494D20u, "unknown not lowered yet"); return;
L_08B57CB0:
    rt.unsupported(0x08B57CB0u, 0x4C204554u, "unknown not lowered yet"); return;
L_08B57CD4:
    rt.unsupported(0x08B57CD4u, 0x45444153u, "cop1? not lowered yet"); return;
L_08B57CF8:
    rt.unsupported(0x08B57CF8u, 0x4F442053u, "unknown not lowered yet"); return;
L_08B57D18:
    rt.unsupported(0x08B57D18u, 0x202E202Eu, "unknown not lowered yet"); return;
L_08B57D24:
    rt.unsupported(0x08B57D28u, 0x554C4620u, "control flow in delay slot"); return;
L_08B57D2C:
    rt.unsupported(0x08B57D2Cu, 0x202C4853u, "unknown not lowered yet"); return;
L_08B57D48:
    rt.unsupported(0x08B57D48u, 0x4B454557u, "cop2/vfpu not lowered yet"); return;
L_08B57D58:
    rt.unsupported(0x08B57D58u, 0x4D204545u, "unknown not lowered yet"); return;
L_08B57D6C:
    rt.unsupported(0x08B57D6Cu, 0x20454B41u, "unknown not lowered yet"); return;
L_08B57D84:
    rt.unsupported(0x08B57D84u, 0x43555320u, "unknown not lowered yet"); return;
L_08B57D90:
    rt.unsupported(0x08B57D90u, 0x454D4F43u, "cop1? not lowered yet"); return;
L_08B57DB0:
    rt.unsupported(0x08B57DB0u, 0x4E4F4954u, "unknown not lowered yet"); return;
L_08B57DBC:
    rt.unsupported(0x08B57DBCu, 0x45495245u, "cop1? not lowered yet"); return;
L_08B57DC4:
    rt.unsupported(0x08B57DC4u, 0x4E49544Eu, "unknown not lowered yet"); return;
L_08B57DDC:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B57DE0u, 0x4D4C4C41u, "unknown not lowered yet"); return;
        ctx.pc = 0x08B6B704u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B57DE4;
L_08B57DE4:
    rt.unsupported(0x08B57DE4u, 0x20544E45u, "unknown not lowered yet"); return;
L_08B57DF4:
    if (ctx.gpr[10] != ctx.gpr[18]) {
    rt.unsupported(0x08B57DF8u, 0x4D204B4Eu, "unknown not lowered yet"); return;
        ctx.pc = 0x08B69F44u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B57DFC;
L_08B57DFC:
    rt.unsupported(0x08B57DFCu, 0x4B532059u, "cop2/vfpu not lowered yet"); return;
L_08B57E1C:
    rt.unsupported(0x08B57E1Cu, 0x20464920u, "unknown not lowered yet"); return;
L_08B57E5C:
    rt.unsupported(0x08B57E5Cu, 0x46202E20u, "cop1? not lowered yet"); return;
L_08B57E6C:
    rt.unsupported(0x08B57E6Cu, 0x20454C44u, "unknown not lowered yet"); return;
L_08B57E7C:
    rt.unsupported(0x08B57E7Cu, 0x45534145u, "cop1? not lowered yet"); return;
L_08B57E88:
    rt.unsupported(0x08B57E8Cu, 0x50535341u, "control flow in delay slot"); return;
L_08B57E90:
    rt.unsupported(0x08B57E90u, 0x2054524Fu, "unknown not lowered yet"); return;
L_08B57EB0:
    rt.unsupported(0x08B57EB0u, 0x454C4B43u, "cop1? not lowered yet"); return;
L_08B57EE8:
    rt.unsupported(0x08B57EE8u, 0x20594152u, "unknown not lowered yet"); return;
L_08B57F10:
    rt.unsupported(0x08B57F10u, 0x414E5245u, "unknown not lowered yet"); return;
L_08B57F40:
    rt.unsupported(0x08B57F40u, 0x47414747u, "cop1? not lowered yet"); return;
L_08B57F58:
    rt.unsupported(0x08B57F58u, 0x4C4C4F46u, "unknown not lowered yet"); return;
L_08B57F68:
    rt.unsupported(0x08B57F68u, 0x4E412047u, "unknown not lowered yet"); return;
L_08B57F80:
    rt.unsupported(0x08B57F80u, 0x49460020u, "cop2/vfpu not lowered yet"); return;
L_08B57F90:
    rt.unsupported(0x08B57F94u, 0x55542059u, "control flow in delay slot"); return;
L_08B57F98:
    rt.unsupported(0x08B57F98u, 0x4C454E4Eu, "unknown not lowered yet"); return;
L_08B57FA8:
    rt.unsupported(0x08B57FA8u, 0x4D4F4320u, "unknown not lowered yet"); return;
L_08B57FB4:
    (void)(ctx.gpr[17] < static_cast<std::uint32_t>(11808) ? 1u : 0u);
    { const bool signed_ok = ctx.execute_signed_add(4u, 1u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B57FB8u, 0x00202020u); return; } }
    goto L_08B57FBC;
L_08B57FBC:
    if (ctx.gpr[26] == ctx.gpr[18]) {
    rt.unsupported(0x08B57FC0u, 0x48502054u, "cop2/vfpu not lowered yet"); return;
        ctx.pc = 0x08B6A4D8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B57FC4;
L_08B57FC4:
    rt.unsupported(0x08B57FC4u, 0x20455341u, "unknown not lowered yet"); return;
L_08B57FE8:
    rt.unsupported(0x08B57FE8u, 0x202E2044u, "unknown not lowered yet"); return;
L_08B57FFC:
    rt.unsupported(0x08B57FFCu, 0x454E4E55u, "cop1? not lowered yet"); return;
}

void recomp_unit_0212(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0212_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_212(Runtime &runtime) {
    runtime.register_generated_unit(212u, 0x08B54000u, 16384u, &recomp_unit_0212, &recomp_unit_0212_entry);
    runtime.register_function(0x08B54000u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55880u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B558C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55924u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B559B8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B559E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B559F0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B559FCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55A0Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55B80u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55B84u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55BD4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55C0Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E04u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E5Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B55E94u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56384u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5639Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56414u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56454u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5645Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56464u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5649Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56530u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56598u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B565BCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56644u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56650u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5665Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56690u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B566A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B566C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B566D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B566F0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56734u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B567A0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B567A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56820u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56904u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56914u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5692Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56958u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56960u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B569ACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B569B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B569ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A80u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56A90u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56B48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56B74u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56BD4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C24u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C30u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C38u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56C40u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56CACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56CC0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B56D30u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57154u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57200u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57208u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5720Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57340u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57348u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57364u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57388u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57398u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B573ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B573FCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57408u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57424u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5742Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57438u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5748Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57494u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5749Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B574B8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B574D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B574E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B574F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57534u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5753Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57554u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5756Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57574u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57580u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57590u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57598u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5759Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B575A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B575BCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B575DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B575F0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57600u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57610u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57620u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5762Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57644u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57650u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57664u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57690u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576A0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576CCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576D4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576DCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576E8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B576F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57708u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57724u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57734u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57750u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57758u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57774u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5779Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B577A4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B577ACu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B577E0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B577F8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57804u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57830u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5783Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57874u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57898u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B578A0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B578B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B578C4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B578D4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B578F4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57904u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57914u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57920u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5794Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B5795Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57964u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57978u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57994u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579A8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579B4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579C0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579D8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B579ECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A08u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A18u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A20u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A28u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A54u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A60u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A70u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57A94u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AA0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AB4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AC8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AD0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57ADCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57AF4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B04u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B14u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B34u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B3Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57B80u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57BA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57BB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57BECu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C08u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C20u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C2Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C40u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C88u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57C98u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57CB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57CD4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57CF8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D18u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D24u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D2Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D48u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D58u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D84u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57D90u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57DB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57DBCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57DC4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57DDCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57DE4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57DF4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57DFCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E1Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E5Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E6Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E7Cu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E88u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57E90u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57EB0u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57EE8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F10u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F40u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F58u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F68u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F80u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F90u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57F98u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FA8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FB4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FBCu, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FC4u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FE8u, &recomp_unit_0212, "recomp_unit_0212");
    runtime.register_function(0x08B57FFCu, &recomp_unit_0212, "recomp_unit_0212");
}
} // namespace psprecomp
