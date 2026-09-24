#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0210[3976] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0,
    6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 47,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54,
};
void recomp_unit_0210_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B4C000u;
        entry_id = (entry_delta < 15904u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0210[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B4C000;
    case 2u: goto L_08B4C124;
    case 3u: goto L_08B4C22C;
    case 4u: goto L_08B4C470;
    case 5u: goto L_08B4C478;
    case 6u: goto L_08B4C480;
    case 7u: goto L_08B4C488;
    case 8u: goto L_08B4C490;
    case 9u: goto L_08B4C498;
    case 10u: goto L_08B4C4A0;
    case 11u: goto L_08B4C4A8;
    case 12u: goto L_08B4C4B0;
    case 13u: goto L_08B4C4B8;
    case 14u: goto L_08B4C4C0;
    case 15u: goto L_08B4C4D8;
    case 16u: goto L_08B4C534;
    case 17u: goto L_08B4C560;
    case 18u: goto L_08B4C5EC;
    case 19u: goto L_08B4CB98;
    case 20u: goto L_08B4CF70;
    case 21u: goto L_08B4D030;
    case 22u: goto L_08B4D2B8;
    case 23u: goto L_08B4D3E8;
    case 24u: goto L_08B4D3F8;
    case 25u: goto L_08B4D418;
    case 26u: goto L_08B4D444;
    case 27u: goto L_08B4D4D4;
    case 28u: goto L_08B4D698;
    case 29u: goto L_08B4D6B4;
    case 30u: goto L_08B4D6D0;
    case 31u: goto L_08B4D6EC;
    case 32u: goto L_08B4D704;
    case 33u: goto L_08B4D71C;
    case 34u: goto L_08B4D734;
    case 35u: goto L_08B4D744;
    case 36u: goto L_08B4D754;
    case 37u: goto L_08B4D764;
    case 38u: goto L_08B4D780;
    case 39u: goto L_08B4D79C;
    case 40u: goto L_08B4D85C;
    case 41u: goto L_08B4D894;
    case 42u: goto L_08B4D948;
    case 43u: goto L_08B4D954;
    case 44u: goto L_08B4E340;
    case 45u: goto L_08B4E360;
    case 46u: goto L_08B4E368;
    case 47u: goto L_08B4E37C;
    case 48u: goto L_08B4E4A0;
    case 49u: goto L_08B4E4FC;
    case 50u: goto L_08B4EDD4;
    case 51u: goto L_08B4EF84;
    case 52u: goto L_08B4FC2C;
    case 53u: goto L_08B4FD8C;
    case 54u: goto L_08B4FE1C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B4C000:
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08B4C004u, 0x40B00000u, "unknown not lowered yet"); return;
L_08B4C124:
    rt.unsupported(0x08B4C128u, 0x08A02190u, "control flow in delay slot"); return;
L_08B4C22C:
    rt.unsupported(0x08B4C230u, 0x08A03064u, "control flow in delay slot"); return;
L_08B4C470:
    // nop
    // nop
    ctx.pc = 0x028263C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C478:
    // nop
    // nop
    ctx.pc = 0x028263A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C480:
    // nop
    // nop
    ctx.pc = 0x0282B8E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C488:
    // nop
    // nop
    ctx.pc = 0x028287F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C490:
    // nop
    // nop
    ctx.pc = 0x02827850u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C498:
    // nop
    // nop
    ctx.pc = 0x028275D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C4A0:
    // nop
    // nop
    ctx.pc = 0x02826DE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C4A8:
    // nop
    // nop
    ctx.pc = 0x028279B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C4B0:
    // nop
    // nop
    ctx.pc = 0x02827CA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C4B8:
    // nop
    // nop
    ctx.pc = 0x028287D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C4C0:
    // nop
    // nop
    ctx.pc = 0x02827870u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C4D8:
    // nop
    { const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.pc = 0x028263A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4C534:
    // nop
    rt.unsupported(0x08B4C53Cu, 0x08B059E0u, "control flow in delay slot"); return;
L_08B4C560:
    rt.unsupported(0x08B4C564u, 0x08B4C560u, "control flow in delay slot"); return;
L_08B4C5EC:
    (void)(static_cast<std::uint32_t>(std::countl_zero(0u)));
    rt.unsupported(0x08B4C5F0u, 0x00000005u, "special? not lowered yet"); return;
L_08B4CB98:
    // nop
    (void)(static_cast<std::uint32_t>(std::countl_one(0u)));
    (void)(0u >> (0u & 31u));
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B4CBA8u, 0x0000476Eu, "special? not lowered yet"); return;
L_08B4CF70:
    rt.unsupported(0x08B4CF70u, 0x0000003Bu, "special? not lowered yet"); return;
L_08B4D030:
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 0u);
    rt.unsupported(0x08B4D048u, 0x01010101u, "special? not lowered yet"); return;
L_08B4D2B8:
    rt.unsupported(0x08B4D2B8u, 0x40200000u, "unknown not lowered yet"); return;
L_08B4D3E8:
    // nop
    rt.unsupported(0x08B4D3F0u, 0x08B0658Cu, "control flow in delay slot"); return;
L_08B4D3F8:
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x02C83D80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4D418:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B4D41Cu, 0x75646F4Du, "unknown not lowered yet"); return;
L_08B4D444:
    rt.unsupported(0x08B4D448u, 0x08A2DFB0u, "control flow in delay slot"); return;
L_08B4D4D4:
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // nop
    rt.unsupported(0x08B4D518u, 0x40666666u, "unknown not lowered yet"); return;
L_08B4D698:
    rt.unsupported(0x08B4D698u, 0xC3EF0000u, "unknown not lowered yet"); return;
L_08B4D6B4:
    rt.unsupported(0x08B4D6B4u, 0x43630000u, "unknown not lowered yet"); return;
L_08B4D6D0:
    rt.unsupported(0x08B4D6D0u, 0x429A0000u, "unknown not lowered yet"); return;
L_08B4D6EC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8192)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[27] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16384)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16384)));
    goto L_08B4D704;
L_08B4D704:
    rt.unsupported(0x08B4D704u, 0x43AF0000u, "unknown not lowered yet"); return;
L_08B4D71C:
    rt.unsupported(0x08B4D71Cu, 0x42280000u, "unknown not lowered yet"); return;
L_08B4D734:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-32768)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32768)));
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24576)));
    goto L_08B4D744;
L_08B4D744:
    rt.unsupported(0x08B4D744u, 0x43AA0000u, "unknown not lowered yet"); return;
L_08B4D754:
    rt.unsupported(0x08B4D754u, 0x42240000u, "unknown not lowered yet"); return;
L_08B4D764:
    ctx.fpr[9] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-32768)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16384)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-32768)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8192)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32768)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8192)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8192)));
    goto L_08B4D780;
L_08B4D780:
    rt.unsupported(0x08B4D780u, 0x43B98000u, "unknown not lowered yet"); return;
L_08B4D79C:
    rt.unsupported(0x08B4D79Cu, 0x42640000u, "unknown not lowered yet"); return;
L_08B4D85C:
    // nop
    rt.unsupported(0x08B4D864u, 0x08B02F8Cu, "control flow in delay slot"); return;
L_08B4D894:
    rt.unsupported(0x08B4D898u, 0x08A4CAC0u, "control flow in delay slot"); return;
L_08B4D948:
    (void)(0u << (0u & 31u));
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(0u >> 0u);
    goto L_08B4D954;
L_08B4D954:
    rt.memory().memory_barrier();
    jump_target = 0u;
    (void)(static_cast<std::uint32_t>(std::countl_zero(0u)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B4E340:
    // nop
    // nop
    // nop
    ctx.pc = 0x02955E60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4E360:
    // nop
    // nop
    goto L_08B4E368;
L_08B4E368:
    (void)(ctx.gpr[1] << 4u);
    (void)(ctx.gpr[2] >> 8u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    if (static_cast<std::int32_t>(0u) >= 0) {
    rt.unsupported(0x08B4E378u, 0x04040404u, "regimm? not lowered yet"); return;
        goto L_08B4EF84;
    }
    goto L_08B4E37C;
L_08B4E37C:
    rt.unsupported(0x08B4E37Cu, 0x04040404u, "regimm? not lowered yet"); return;
L_08B4E4A0:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B4E4A0u, 0x000000A0u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B4E4A4u, 0x000000A0u); return; } }
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B4E4C0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B4E4FC:
    ctx.gpr[1] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    ctx.pc = 0x02C889A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4EDD4:
    (void)(0u < 0u ? 1u : 0u);
    ctx.pc = 0x02C8AD00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4EF84:
    (void)(0u | 0u);
    ctx.pc = 0x02C8B3C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4FC2C:
    rt.unsupported(0x08B4FC30u, 0x00000AC9u, "control flow in delay slot"); return;
L_08B4FD8C:
    ctx.gpr[1] = (0u << (0u & 31u));
    ctx.pc = 0x02C8E9A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4FE1C:
    rt.unsupported(0x08B4FE20u, 0x00000B31u, "special? not lowered yet"); return;
    ctx.pc = 0x02C8EBE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0210(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0210_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_210(Runtime &runtime) {
    runtime.register_generated_unit(210u, 0x08B4C000u, 16384u, &recomp_unit_0210, &recomp_unit_0210_entry);
    runtime.register_function(0x08B4C000u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C124u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C22Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C470u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C478u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C480u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C488u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C490u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C498u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C4A0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C4A8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C4B0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C4B8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C4C0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C4D8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C534u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C560u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4C5ECu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4CB98u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4CF70u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D030u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D2B8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D3E8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D3F8u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D418u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D444u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D4D4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D698u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D6B4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D6D0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D6ECu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D704u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D71Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D734u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D744u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D754u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D764u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D780u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D79Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D85Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D894u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D948u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4D954u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4E340u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4E360u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4E368u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4E37Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4E4A0u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4E4FCu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4EDD4u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4EF84u, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4FC2Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4FD8Cu, &recomp_unit_0210, "recomp_unit_0210");
    runtime.register_function(0x08B4FE1Cu, &recomp_unit_0210, "recomp_unit_0210");
}
} // namespace psprecomp
