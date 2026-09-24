#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0209[4087] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 23, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 27, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 29, 0, 30, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 60, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109,
    110, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 124, 125, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 138, 0, 139, 0, 0, 140,
};
void recomp_unit_0209_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B48000u;
        entry_id = (entry_delta < 16348u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0209[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B48000;
    case 2u: goto L_08B484D0;
    case 3u: goto L_08B484F8;
    case 4u: goto L_08B485C8;
    case 5u: goto L_08B48694;
    case 6u: goto L_08B486AC;
    case 7u: goto L_08B486D0;
    case 8u: goto L_08B4870C;
    case 9u: goto L_08B4872C;
    case 10u: goto L_08B48764;
    case 11u: goto L_08B48784;
    case 12u: goto L_08B487AC;
    case 13u: goto L_08B487C8;
    case 14u: goto L_08B487D4;
    case 15u: goto L_08B487FC;
    case 16u: goto L_08B48824;
    case 17u: goto L_08B4884C;
    case 18u: goto L_08B48874;
    case 19u: goto L_08B489EC;
    case 20u: goto L_08B48A70;
    case 21u: goto L_08B48C90;
    case 22u: goto L_08B48CA4;
    case 23u: goto L_08B48CA8;
    case 24u: goto L_08B48CB4;
    case 25u: goto L_08B48CCC;
    case 26u: goto L_08B48CD8;
    case 27u: goto L_08B48CDC;
    case 28u: goto L_08B48CFC;
    case 29u: goto L_08B48D14;
    case 30u: goto L_08B48D1C;
    case 31u: goto L_08B48D20;
    case 32u: goto L_08B48D40;
    case 33u: goto L_08B48D4C;
    case 34u: goto L_08B48D64;
    case 35u: goto L_08B48D88;
    case 36u: goto L_08B48D98;
    case 37u: goto L_08B48DA8;
    case 38u: goto L_08B48DAC;
    case 39u: goto L_08B48DBC;
    case 40u: goto L_08B48DCC;
    case 41u: goto L_08B48DF0;
    case 42u: goto L_08B48E00;
    case 43u: goto L_08B48E14;
    case 44u: goto L_08B48E34;
    case 45u: goto L_08B48E38;
    case 46u: goto L_08B48E50;
    case 47u: goto L_08B48E58;
    case 48u: goto L_08B48E7C;
    case 49u: goto L_08B48EA0;
    case 50u: goto L_08B48EC0;
    case 51u: goto L_08B48EC4;
    case 52u: goto L_08B48EE4;
    case 53u: goto L_08B48F08;
    case 54u: goto L_08B48F2C;
    case 55u: goto L_08B48F4C;
    case 56u: goto L_08B48F50;
    case 57u: goto L_08B48F70;
    case 58u: goto L_08B48F94;
    case 59u: goto L_08B48FAC;
    case 60u: goto L_08B48FB0;
    case 61u: goto L_08B48FB4;
    case 62u: goto L_08B48FD8;
    case 63u: goto L_08B49000;
    case 64u: goto L_08B49024;
    case 65u: goto L_08B49038;
    case 66u: goto L_08B49048;
    case 67u: goto L_08B49088;
    case 68u: goto L_08B490DC;
    case 69u: goto L_08B490E4;
    case 70u: goto L_08B49128;
    case 71u: goto L_08B49170;
    case 72u: goto L_08B49188;
    case 73u: goto L_08B491B0;
    case 74u: goto L_08B491B8;
    case 75u: goto L_08B491C8;
    case 76u: goto L_08B49228;
    case 77u: goto L_08B49240;
    case 78u: goto L_08B492D0;
    case 79u: goto L_08B49300;
    case 80u: goto L_08B49338;
    case 81u: goto L_08B49648;
    case 82u: goto L_08B49720;
    case 83u: goto L_08B49744;
    case 84u: goto L_08B49750;
    case 85u: goto L_08B49854;
    case 86u: goto L_08B49878;
    case 87u: goto L_08B498F4;
    case 88u: goto L_08B4990C;
    case 89u: goto L_08B4991C;
    case 90u: goto L_08B499C0;
    case 91u: goto L_08B49B08;
    case 92u: goto L_08B49D58;
    case 93u: goto L_08B49EC8;
    case 94u: goto L_08B49F78;
    case 95u: goto L_08B4A014;
    case 96u: goto L_08B4A090;
    case 97u: goto L_08B4A0F0;
    case 98u: goto L_08B4A324;
    case 99u: goto L_08B4A474;
    case 100u: goto L_08B4A4A0;
    case 101u: goto L_08B4A550;
    case 102u: goto L_08B4A77C;
    case 103u: goto L_08B4A9A8;
    case 104u: goto L_08B4ABD4;
    case 105u: goto L_08B4ADBC;
    case 106u: goto L_08B4ADCC;
    case 107u: goto L_08B4ADDC;
    case 108u: goto L_08B4ADEC;
    case 109u: goto L_08B4ADFC;
    case 110u: goto L_08B4AE00;
    case 111u: goto L_08B4AE08;
    case 112u: goto L_08B4AE18;
    case 113u: goto L_08B4AE24;
    case 114u: goto L_08B4AE34;
    case 115u: goto L_08B4AE40;
    case 116u: goto L_08B4AE44;
    case 117u: goto L_08B4AE54;
    case 118u: goto L_08B4AE64;
    case 119u: goto L_08B4AE78;
    case 120u: goto L_08B4B02C;
    case 121u: goto L_08B4B1F8;
    case 122u: goto L_08B4B9A0;
    case 123u: goto L_08B4B9E0;
    case 124u: goto L_08B4B9E4;
    case 125u: goto L_08B4B9E8;
    case 126u: goto L_08B4BA00;
    case 127u: goto L_08B4BA10;
    case 128u: goto L_08B4BAEC;
    case 129u: goto L_08B4BB68;
    case 130u: goto L_08B4BB7C;
    case 131u: goto L_08B4BC94;
    case 132u: goto L_08B4BD54;
    case 133u: goto L_08B4BDF4;
    case 134u: goto L_08B4BE18;
    case 135u: goto L_08B4BF38;
    case 136u: goto L_08B4BFB0;
    case 137u: goto L_08B4BFC0;
    case 138u: goto L_08B4BFC4;
    case 139u: goto L_08B4BFCC;
    case 140u: goto L_08B4BFD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B48000:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B484D0;
L_08B484D0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B484F8;
L_08B484F8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B485C8;
L_08B485C8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48694;
L_08B48694:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B486AC;
L_08B486AC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B486D0;
L_08B486D0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4870C;
L_08B4870C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4872C;
L_08B4872C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48764;
L_08B48764:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48784;
L_08B48784:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B487AC;
L_08B487AC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B487C8;
L_08B487C8:
    // nop
    // nop
    // nop
    goto L_08B487D4;
L_08B487D4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B487FC;
L_08B487FC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48824;
L_08B48824:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4884C;
L_08B4884C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48874;
L_08B48874:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B489EC;
L_08B489EC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48A70;
L_08B48A70:
    rt.unsupported(0x08B48A70u, 0x6B6F6D73u, "unknown not lowered yet"); return;
L_08B48C90:
    // nop
    // nop
    ctx.gpr[25] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(-26214), ctx.gpr[25]));
    ctx.gpr[9] = (39321u << 16u);
    ctx.gpr[25] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(-26214), ctx.gpr[25]));
    goto L_08B48CA4;
L_08B48CA4:
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B48CA8;
L_08B48CA8:
    // nop
    // nop
    // nop
    ctx.pc = 0x02663000u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B48CB4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B48CCC;
L_08B48CCC:
    // nop
    (void)(0u >> 0u);
    (void)(0u >> (0u & 31u));
    goto L_08B48CD8;
L_08B48CD8:
    // nop
    goto L_08B48CDC;
L_08B48CDC:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    // nop
    rt.unsupported(0x08B48CE8u, 0x00000001u, "special? not lowered yet"); return;
L_08B48CFC:
    // nop
    rt.unsupported(0x08B48D00u, 0x00000001u, "special? not lowered yet"); return;
L_08B48D14:
    // nop
    rt.unsupported(0x08B48D18u, 0x00000001u, "special? not lowered yet"); return;
L_08B48D1C:
    rt.unsupported(0x08B48D1Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B48D20:
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    (void)(0u << 16u);
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    (void)(0u >> 0u);
    ctx.gpr[21] = (49807u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B48D40;
L_08B48D40:
    ctx.gpr[3] = (55050u << 16u);
    // nop
    (void)(0u << (0u & 31u));
    goto L_08B48D4C;
L_08B48D4C:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // nop
    rt.unsupported(0x08B48D60u, 0x0000000Cu, "syscall not lowered yet"); return;
L_08B48D64:
    (void)(0u << (0u & 31u));
    // nop
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // nop
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08B48D7Cu, 0x00000005u, "special? not lowered yet"); return;
L_08B48D88:
    ctx.gpr[12] = (52429u << 16u);
    // nop
    jump_target = 0u;
    ctx.gpr[31] = (0x08B48D98u);
    (void)(0u << (0u & 31u));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B48D98u) goto L_08B48D98;
    return;
L_08B48D98:
    // nop
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    // nop
    goto L_08B48DA8;
L_08B48DA8:
    if (0u == 0u) (void)(0u);
    goto L_08B48DAC;
L_08B48DAC:
    rt.unsupported(0x08B48DACu, 0x00000005u, "special? not lowered yet"); return;
L_08B48DBC:
    // nop
    rt.unsupported(0x08B48DC4u, 0x08B034F8u, "control flow in delay slot"); return;
L_08B48DCC:
    // nop
    rt.unsupported(0x08B48DD0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B48DF0:
    // nop
    // nop
    // nop
    // nop
    goto L_08B48E00;
L_08B48E00:
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B48E14;
L_08B48E14:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    rt.unsupported(0x08B48E1Cu, 0x41200000u, "unknown not lowered yet"); return;
L_08B48E34:
    // nop
    goto L_08B48E38;
L_08B48E38:
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B48E50:
    rt.unsupported(0x08B48E50u, 0x000000CDu, "special? not lowered yet"); return;
L_08B48E58:
    ctx.gpr[12] = (52429u << 16u);
    (void)(ctx.lo);
    ctx.gpr[1] = (18350u << 16u);
    ctx.gpr[10] = (49283u << 16u);
    ctx.hi = 0u;
    ctx.gpr[1] = (18350u << 16u);
    ctx.gpr[10] = (49283u << 16u);
    rt.unsupported(0x08B48E74u, 0x000000CEu, "special? not lowered yet"); return;
L_08B48E7C:
    ctx.gpr[2] = (36700u << 16u);
    if (0u != 0u) (void)(0u);
    ctx.gpr[1] = (18350u << 16u);
    ctx.gpr[2] = (36700u << 16u);
    rt.unsupported(0x08B48E8Cu, 0x000000CCu, "syscall not lowered yet"); return;
L_08B48EA0:
    rt.unsupported(0x08B48EA0u, 0x000001F4u, "special? not lowered yet"); return;
L_08B48EC0:
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B48EC4:
    // nop
    rt.unsupported(0x08B48EC8u, 0x000002EEu, "special? not lowered yet"); return;
L_08B48EE4:
    rt.unsupported(0x08B48EE4u, 0x40000000u, "unknown not lowered yet"); return;
L_08B48F08:
    rt.unsupported(0x08B48F08u, 0x00000030u, "special? not lowered yet"); return;
L_08B48F2C:
    ctx.gpr[24] = (0u << 16u);
    ctx.gpr[3] = (0u << 29u);
    // nop
    ctx.gpr[1] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    // nop
    rt.unsupported(0x08B48F40u, 0x000005DCu, "special? not lowered yet"); return;
L_08B48F4C:
    // nop
    goto L_08B48F50;
L_08B48F50:
    rt.unsupported(0x08B48F50u, 0x40666666u, "unknown not lowered yet"); return;
L_08B48F70:
    rt.unsupported(0x08B48F70u, 0x40666666u, "unknown not lowered yet"); return;
L_08B48F94:
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    // nop
    // nop
    goto L_08B48FAC;
L_08B48FAC:
    // nop
    goto L_08B48FB0;
L_08B48FB0:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B48FB0u, 0x00000020u); return; } }
    goto L_08B48FB4;
L_08B48FB4:
    rt.unsupported(0x08B48FB4u, 0x00000030u, "special? not lowered yet"); return;
L_08B48FD8:
    // nop
    // nop
    // nop
    (void)(ctx.gpr[1] << 0u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[1]) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[1]) >> 0u));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    (void)(0u >> 0u);
    // nop
    goto L_08B49000;
L_08B49000:
    // nop
    rt.unsupported(0x08B49008u, 0x08B1C4F0u, "control flow in delay slot"); return;
L_08B49024:
    rt.unsupported(0x08B49024u, 0x47656854u, "cop1? not lowered yet"); return;
L_08B49038:
    // nop
    rt.unsupported(0x08B49040u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B49048:
    rt.unsupported(0x08B4904Cu, 0x089C50A4u, "control flow in delay slot"); return;
L_08B49088:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B490A0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B490DC:
    ctx.hi = 0u;
    ctx.hi = 0u;
    goto L_08B490E4;
L_08B490E4:
    rt.unsupported(0x08B490E8u, 0x08B1D71Cu, "control flow in delay slot"); return;
L_08B49128:
    rt.unsupported(0x08B4912Cu, 0x08B1D7A0u, "control flow in delay slot"); return;
L_08B49170:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49188;
L_08B49188:
    rt.unsupported(0x08B4918Cu, 0x08B1D824u, "control flow in delay slot"); return;
L_08B491B0:
    (void)(ctx.hi);
    // nop
    goto L_08B491B8;
L_08B491B8:
    // nop
    rt.unsupported(0x08B491C0u, 0x08B04494u, "control flow in delay slot"); return;
L_08B491C8:
    rt.unsupported(0x08B491C8u, 0x06060606u, "regimm? not lowered yet"); return;
L_08B49228:
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    // nop
    // nop
    // nop
    goto L_08B49240;
L_08B49240:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B492D0;
L_08B492D0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49300;
L_08B49300:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49338;
L_08B49338:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49648;
L_08B49648:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49720;
L_08B49720:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49744;
L_08B49744:
    // nop
    // nop
    // nop
    goto L_08B49750;
L_08B49750:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49854;
L_08B49854:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49878;
L_08B49878:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B498F4;
L_08B498F4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4990C;
L_08B4990C:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4991C;
L_08B4991C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B499C0;
L_08B499C0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49B08;
L_08B49B08:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49D58;
L_08B49D58:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49EC8;
L_08B49EC8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B49F78;
L_08B49F78:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A014;
L_08B4A014:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A090;
L_08B4A090:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A0F0;
L_08B4A0F0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A324;
L_08B4A324:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A474;
L_08B4A474:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A4A0;
L_08B4A4A0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A550;
L_08B4A550:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A77C;
L_08B4A77C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4A9A8;
L_08B4A9A8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4ABD4;
L_08B4ABD4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4ADBC;
L_08B4ADBC:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4ADCC;
L_08B4ADCC:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4ADDC;
L_08B4ADDC:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4ADEC;
L_08B4ADEC:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4ADFC;
L_08B4ADFC:
    // nop
    goto L_08B4AE00;
L_08B4AE00:
    // nop
    // nop
    goto L_08B4AE08;
L_08B4AE08:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4AE18;
L_08B4AE18:
    // nop
    // nop
    // nop
    goto L_08B4AE24;
L_08B4AE24:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4AE34;
L_08B4AE34:
    // nop
    // nop
    // nop
    goto L_08B4AE40;
L_08B4AE40:
    // nop
    goto L_08B4AE44;
L_08B4AE44:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4AE54;
L_08B4AE54:
    // nop
    // nop
    // nop
    // nop
    goto L_08B4AE64;
L_08B4AE64:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4AE78;
L_08B4AE78:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4B02C;
L_08B4B02C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4B1F8;
L_08B4B1F8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4B9A0;
L_08B4B9A0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4B9E0;
L_08B4B9E0:
    // nop
    goto L_08B4B9E4;
L_08B4B9E4:
    // nop
    goto L_08B4B9E8;
L_08B4B9E8:
    // nop
    // nop
    rt.unsupported(0x08B4B9F0u, 0x0000000Cu, "syscall not lowered yet"); return;
L_08B4BA00:
    // nop
    // nop
    // nop
    ctx.pc = 0x0274A020u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B4BA10:
    // nop
    rt.unsupported(0x08B4BA18u, 0x08B04B90u, "control flow in delay slot"); return;
L_08B4BAEC:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B4BB08u, 0x00000014u, "special? not lowered yet"); return;
L_08B4BB68:
    (void)(ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B4BB70u, 0x000000BBu, "special? not lowered yet"); return;
L_08B4BB7C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    rt.unsupported(0x08B4BB84u, 0x00000085u, "special? not lowered yet"); return;
L_08B4BC94:
    (void)(ctx.gpr[1] << 0u);
    rt.unsupported(0x08B4BC98u, 0x00020001u, "special? not lowered yet"); return;
L_08B4BD54:
    rt.unsupported(0x08B4BD54u, 0x63696376u, "vfpu0 not lowered yet"); return;
L_08B4BDF4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B4BE18;
L_08B4BE18:
    ctx.execute_vfpu_compare3(99u, 111u, 114u, 1u, 6u);
    rt.unsupported(0x08B4BE1Cu, 0x7473616Eu, "unknown not lowered yet"); return;
L_08B4BF38:
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08B4BF3Cu, 0x41700000u, "unknown not lowered yet"); return;
L_08B4BFB0:
    ctx.gpr[6] = (26214u << 16u);
    rt.unsupported(0x08B4BFB4u, 0x40F00000u, "unknown not lowered yet"); return;
L_08B4BFC0:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    goto L_08B4BFC4;
L_08B4BFC4:
    // nop
    // nop
    goto L_08B4BFCC;
L_08B4BFCC:
    rt.unsupported(0x08B4BFCCu, 0x00FF00FFu, "special? not lowered yet"); return;
L_08B4BFD8:
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08B4BFDCu, 0x41780000u, "unknown not lowered yet"); return;
}

void recomp_unit_0209(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0209_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_209(Runtime &runtime) {
    runtime.register_generated_unit(209u, 0x08B48000u, 16384u, &recomp_unit_0209, &recomp_unit_0209_entry);
    runtime.register_function(0x08B48000u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B484D0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B484F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B485C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48694u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B486ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B486D0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4870Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4872Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48764u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48784u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B487ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B487C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B487D4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B487FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48824u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4884Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48874u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B489ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A70u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C90u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48CA4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48CA8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48CB4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48CCCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48CD8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48CDCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48CFCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D14u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D1Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D20u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D4Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D64u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D98u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DA8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DBCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DCCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DF0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E00u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E14u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E34u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E38u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E50u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E58u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E7Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EA0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EC0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EC4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F08u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F2Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F4Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F50u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F70u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F94u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48FACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48FB0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48FB4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48FD8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49000u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49024u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49038u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49048u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49088u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490DCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49128u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49170u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49188u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491B0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49228u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49240u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B492D0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49300u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49338u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49648u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49720u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49744u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49750u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49854u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49878u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B498F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4990Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4991Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B499C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49B08u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49D58u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49EC8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F78u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A014u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A090u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A0F0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A324u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A474u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A4A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A550u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A77Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A9A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ABD4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADBCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADCCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADDCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADFCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE00u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE08u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE18u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE24u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE34u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE44u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE64u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE78u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B02Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B1F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B9A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B9E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B9E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B9E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA00u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA10u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BB68u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BB7Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC94u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BD54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BDF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BE18u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF38u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BFB0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BFC0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BFC4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BFCCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BFD8u, &recomp_unit_0209, "recomp_unit_0209");
}
} // namespace psprecomp
