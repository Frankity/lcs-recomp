#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0201[4041] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0,
    0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0,
    0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0,
    60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0,
    0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80,
    0, 0, 0, 81, 0, 0, 82, 83, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89,
    0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100,
    0, 101, 0, 102, 0, 103, 0, 104, 105, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 113, 114, 0, 115, 116, 0, 0,
    0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0,
    130, 0, 131, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 140,
    0, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 150, 151, 0, 152, 153, 154,
    0, 0, 0, 0, 155, 0, 156, 157, 158, 159, 160, 0, 0, 0, 0, 161, 0, 0, 0, 162, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 165, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0,
    0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 186, 187, 0, 188, 0, 0, 189, 190, 0, 0, 0, 191, 192, 193, 0, 0, 194, 0, 195, 0, 0, 196,
    0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0,
    206, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 210, 211, 212, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 217, 218, 0,
    219, 0, 220, 0, 0, 0, 0, 0, 221, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 227, 228, 0, 0, 229,
    230, 231, 232, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 236, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 240, 241, 0,
    242, 0, 0, 243, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 264,
    265, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 273, 0, 274, 0, 275, 0, 0, 0, 0, 0, 276, 0,
    277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0,
    0, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293,
    0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    304, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 310, 0, 0, 311, 0, 0, 312, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0,
    330, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 336, 0, 337, 0, 0, 338, 0, 339,
    0, 340, 0, 341, 0, 0, 342, 0, 343, 0, 344, 0, 0, 345, 0, 0, 346, 0, 347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0,
    354, 0, 355, 0, 356, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 361, 0, 362, 363, 364, 365,
    0, 366, 367, 0, 368, 369, 0, 0, 370, 371, 372, 0, 373, 374, 375, 376, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 383, 384, 385,
    386, 387, 388, 389, 390, 0, 391, 0, 392, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402,
    0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0,
    0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0,
    0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0,
    0, 0, 0, 421, 0, 422, 0, 0, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 433, 0, 434, 0,
    435, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 443, 444, 445, 0, 446, 447, 0, 448, 449,
    450, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 453, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    456, 0, 0, 0, 0, 0, 0, 0, 457,
};
void recomp_unit_0201_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B280D4u;
        entry_id = (entry_delta < 16164u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0201[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B280D4;
    case 2u: goto L_08B280F4;
    case 3u: goto L_08B281F8;
    case 4u: goto L_08B282A4;
    case 5u: goto L_08B282CC;
    case 6u: goto L_08B282F4;
    case 7u: goto L_08B2836C;
    case 8u: goto L_08B283F8;
    case 9u: goto L_08B2851C;
    case 10u: goto L_08B28590;
    case 11u: goto L_08B285C4;
    case 12u: goto L_08B285F8;
    case 13u: goto L_08B28630;
    case 14u: goto L_08B28668;
    case 15u: goto L_08B28698;
    case 16u: goto L_08B2869C;
    case 17u: goto L_08B286BC;
    case 18u: goto L_08B286CC;
    case 19u: goto L_08B28720;
    case 20u: goto L_08B287EC;
    case 21u: goto L_08B2899C;
    case 22u: goto L_08B28A58;
    case 23u: goto L_08B28A68;
    case 24u: goto L_08B28A84;
    case 25u: goto L_08B28AB0;
    case 26u: goto L_08B28ABC;
    case 27u: goto L_08B28B74;
    case 28u: goto L_08B28B84;
    case 29u: goto L_08B28B94;
    case 30u: goto L_08B28BF8;
    case 31u: goto L_08B28C28;
    case 32u: goto L_08B28C3C;
    case 33u: goto L_08B28C60;
    case 34u: goto L_08B28DAC;
    case 35u: goto L_08B28DBC;
    case 36u: goto L_08B28DC4;
    case 37u: goto L_08B28DDC;
    case 38u: goto L_08B28DF4;
    case 39u: goto L_08B28F20;
    case 40u: goto L_08B28FF4;
    case 41u: goto L_08B29150;
    case 42u: goto L_08B2925C;
    case 43u: goto L_08B292C0;
    case 44u: goto L_08B292EC;
    case 45u: goto L_08B29308;
    case 46u: goto L_08B29334;
    case 47u: goto L_08B29348;
    case 48u: goto L_08B29358;
    case 49u: goto L_08B29368;
    case 50u: goto L_08B29384;
    case 51u: goto L_08B293A4;
    case 52u: goto L_08B293D0;
    case 53u: goto L_08B29474;
    case 54u: goto L_08B294E0;
    case 55u: goto L_08B29500;
    case 56u: goto L_08B2951C;
    case 57u: goto L_08B29770;
    case 58u: goto L_08B29818;
    case 59u: goto L_08B299CC;
    case 60u: goto L_08B299D4;
    case 61u: goto L_08B299DC;
    case 62u: goto L_08B299E4;
    case 63u: goto L_08B29A24;
    case 64u: goto L_08B29A38;
    case 65u: goto L_08B29A48;
    case 66u: goto L_08B29A60;
    case 67u: goto L_08B29C18;
    case 68u: goto L_08B29C44;
    case 69u: goto L_08B29D2C;
    case 70u: goto L_08B29FAC;
    case 71u: goto L_08B2A008;
    case 72u: goto L_08B2A070;
    case 73u: goto L_08B2A0AC;
    case 74u: goto L_08B2A21C;
    case 75u: goto L_08B2A394;
    case 76u: goto L_08B2A3CC;
    case 77u: goto L_08B2A400;
    case 78u: goto L_08B2A438;
    case 79u: goto L_08B2A448;
    case 80u: goto L_08B2A450;
    case 81u: goto L_08B2A460;
    case 82u: goto L_08B2A46C;
    case 83u: goto L_08B2A470;
    case 84u: goto L_08B2A47C;
    case 85u: goto L_08B2A484;
    case 86u: goto L_08B2A48C;
    case 87u: goto L_08B2A494;
    case 88u: goto L_08B2A4C8;
    case 89u: goto L_08B2A4D0;
    case 90u: goto L_08B2A4E0;
    case 91u: goto L_08B2A4EC;
    case 92u: goto L_08B2A514;
    case 93u: goto L_08B2A51C;
    case 94u: goto L_08B2A524;
    case 95u: goto L_08B2A528;
    case 96u: goto L_08B2A530;
    case 97u: goto L_08B2A538;
    case 98u: goto L_08B2A540;
    case 99u: goto L_08B2A548;
    case 100u: goto L_08B2A550;
    case 101u: goto L_08B2A558;
    case 102u: goto L_08B2A560;
    case 103u: goto L_08B2A568;
    case 104u: goto L_08B2A570;
    case 105u: goto L_08B2A574;
    case 106u: goto L_08B2A578;
    case 107u: goto L_08B2A580;
    case 108u: goto L_08B2A588;
    case 109u: goto L_08B2A590;
    case 110u: goto L_08B2A598;
    case 111u: goto L_08B2A5A0;
    case 112u: goto L_08B2A5A8;
    case 113u: goto L_08B2A5B8;
    case 114u: goto L_08B2A5BC;
    case 115u: goto L_08B2A5C4;
    case 116u: goto L_08B2A5C8;
    case 117u: goto L_08B2A5D8;
    case 118u: goto L_08B2A5E0;
    case 119u: goto L_08B2A664;
    case 120u: goto L_08B2A6AC;
    case 121u: goto L_08B2A778;
    case 122u: goto L_08B2A784;
    case 123u: goto L_08B2A78C;
    case 124u: goto L_08B2A794;
    case 125u: goto L_08B2A7A0;
    case 126u: goto L_08B2A7A8;
    case 127u: goto L_08B2A7B4;
    case 128u: goto L_08B2A7C0;
    case 129u: goto L_08B2A7C8;
    case 130u: goto L_08B2A7D4;
    case 131u: goto L_08B2A7DC;
    case 132u: goto L_08B2A7E0;
    case 133u: goto L_08B2A7FC;
    case 134u: goto L_08B2A814;
    case 135u: goto L_08B2A820;
    case 136u: goto L_08B2A82C;
    case 137u: goto L_08B2A834;
    case 138u: goto L_08B2A840;
    case 139u: goto L_08B2A848;
    case 140u: goto L_08B2A850;
    case 141u: goto L_08B2A85C;
    case 142u: goto L_08B2A864;
    case 143u: goto L_08B2A878;
    case 144u: goto L_08B2A880;
    case 145u: goto L_08B2A888;
    case 146u: goto L_08B2A890;
    case 147u: goto L_08B2A898;
    case 148u: goto L_08B2A8A4;
    case 149u: goto L_08B2A8B4;
    case 150u: goto L_08B2A8BC;
    case 151u: goto L_08B2A8C0;
    case 152u: goto L_08B2A8C8;
    case 153u: goto L_08B2A8CC;
    case 154u: goto L_08B2A8D0;
    case 155u: goto L_08B2A8E4;
    case 156u: goto L_08B2A8EC;
    case 157u: goto L_08B2A8F0;
    case 158u: goto L_08B2A8F4;
    case 159u: goto L_08B2A8F8;
    case 160u: goto L_08B2A8FC;
    case 161u: goto L_08B2A910;
    case 162u: goto L_08B2A920;
    case 163u: goto L_08B2A924;
    case 164u: goto L_08B2A93C;
    case 165u: goto L_08B2A964;
    case 166u: goto L_08B2A968;
    case 167u: goto L_08B2A9A0;
    case 168u: goto L_08B2A9D8;
    case 169u: goto L_08B2A9E4;
    case 170u: goto L_08B2A9F4;
    case 171u: goto L_08B2AA04;
    case 172u: goto L_08B2AA14;
    case 173u: goto L_08B2AA1C;
    case 174u: goto L_08B2AA24;
    case 175u: goto L_08B2AA70;
    case 176u: goto L_08B2AA9C;
    case 177u: goto L_08B2AAC0;
    case 178u: goto L_08B2AAD0;
    case 179u: goto L_08B2AAF8;
    case 180u: goto L_08B2AB04;
    case 181u: goto L_08B2AB10;
    case 182u: goto L_08B2AB38;
    case 183u: goto L_08B2AB4C;
    case 184u: goto L_08B2AB58;
    case 185u: goto L_08B2AB74;
    case 186u: goto L_08B2AB7C;
    case 187u: goto L_08B2AB80;
    case 188u: goto L_08B2AB88;
    case 189u: goto L_08B2AB94;
    case 190u: goto L_08B2AB98;
    case 191u: goto L_08B2ABA8;
    case 192u: goto L_08B2ABAC;
    case 193u: goto L_08B2ABB0;
    case 194u: goto L_08B2ABBC;
    case 195u: goto L_08B2ABC4;
    case 196u: goto L_08B2ABD0;
    case 197u: goto L_08B2ABDC;
    case 198u: goto L_08B2ABE4;
    case 199u: goto L_08B2ABEC;
    case 200u: goto L_08B2ABFC;
    case 201u: goto L_08B2AC1C;
    case 202u: goto L_08B2AC28;
    case 203u: goto L_08B2AC2C;
    case 204u: goto L_08B2AC38;
    case 205u: goto L_08B2AC40;
    case 206u: goto L_08B2AC54;
    case 207u: goto L_08B2AC58;
    case 208u: goto L_08B2AC6C;
    case 209u: goto L_08B2AC78;
    case 210u: goto L_08B2AC88;
    case 211u: goto L_08B2AC8C;
    case 212u: goto L_08B2AC90;
    case 213u: goto L_08B2AC98;
    case 214u: goto L_08B2ACA0;
    case 215u: goto L_08B2ACA8;
    case 216u: goto L_08B2ACC4;
    case 217u: goto L_08B2ACC8;
    case 218u: goto L_08B2ACCC;
    case 219u: goto L_08B2ACD4;
    case 220u: goto L_08B2ACDC;
    case 221u: goto L_08B2ACF4;
    case 222u: goto L_08B2ACF8;
    case 223u: goto L_08B2AD0C;
    case 224u: goto L_08B2AD20;
    case 225u: goto L_08B2AD30;
    case 226u: goto L_08B2AD3C;
    case 227u: goto L_08B2AD40;
    case 228u: goto L_08B2AD44;
    case 229u: goto L_08B2AD50;
    case 230u: goto L_08B2AD54;
    case 231u: goto L_08B2AD58;
    case 232u: goto L_08B2AD5C;
    case 233u: goto L_08B2AD78;
    case 234u: goto L_08B2AD80;
    case 235u: goto L_08B2AD8C;
    case 236u: goto L_08B2AD94;
    case 237u: goto L_08B2AD98;
    case 238u: goto L_08B2ADB4;
    case 239u: goto L_08B2ADC0;
    case 240u: goto L_08B2ADC8;
    case 241u: goto L_08B2ADCC;
    case 242u: goto L_08B2ADD4;
    case 243u: goto L_08B2ADE0;
    case 244u: goto L_08B2ADE4;
    case 245u: goto L_08B2ADFC;
    case 246u: goto L_08B2AE18;
    case 247u: goto L_08B2AE50;
    case 248u: goto L_08B2AE84;
    case 249u: goto L_08B2AE90;
    case 250u: goto L_08B2AEA0;
    case 251u: goto L_08B2AEB4;
    case 252u: goto L_08B2AEEC;
    case 253u: goto L_08B2AF00;
    case 254u: goto L_08B2AF20;
    case 255u: goto L_08B2AF30;
    case 256u: goto L_08B2AF4C;
    case 257u: goto L_08B2AF64;
    case 258u: goto L_08B2AF80;
    case 259u: goto L_08B2AF88;
    case 260u: goto L_08B2AFAC;
    case 261u: goto L_08B2AFB8;
    case 262u: goto L_08B2AFC0;
    case 263u: goto L_08B2AFC8;
    case 264u: goto L_08B2AFD0;
    case 265u: goto L_08B2AFD4;
    case 266u: goto L_08B2AFD8;
    case 267u: goto L_08B2AFE0;
    case 268u: goto L_08B2AFE8;
    case 269u: goto L_08B2AFF0;
    case 270u: goto L_08B2AFF8;
    case 271u: goto L_08B2B010;
    case 272u: goto L_08B2B01C;
    case 273u: goto L_08B2B024;
    case 274u: goto L_08B2B02C;
    case 275u: goto L_08B2B034;
    case 276u: goto L_08B2B04C;
    case 277u: goto L_08B2B054;
    case 278u: goto L_08B2B068;
    case 279u: goto L_08B2B088;
    case 280u: goto L_08B2B0A0;
    case 281u: goto L_08B2B0C0;
    case 282u: goto L_08B2B0C8;
    case 283u: goto L_08B2B0E0;
    case 284u: goto L_08B2B0EC;
    case 285u: goto L_08B2B0F8;
    case 286u: goto L_08B2B138;
    case 287u: goto L_08B2B158;
    case 288u: goto L_08B2B170;
    case 289u: goto L_08B2B188;
    case 290u: goto L_08B2B1A4;
    case 291u: goto L_08B2B1B8;
    case 292u: goto L_08B2B1C4;
    case 293u: goto L_08B2B1D0;
    case 294u: goto L_08B2B1E0;
    case 295u: goto L_08B2B228;
    case 296u: goto L_08B2B280;
    case 297u: goto L_08B2B2B0;
    case 298u: goto L_08B2B368;
    case 299u: goto L_08B2B370;
    case 300u: goto L_08B2B37C;
    case 301u: goto L_08B2B388;
    case 302u: goto L_08B2B39C;
    case 303u: goto L_08B2B3B8;
    case 304u: goto L_08B2B3D4;
    case 305u: goto L_08B2B3DC;
    case 306u: goto L_08B2B3E4;
    case 307u: goto L_08B2B3F8;
    case 308u: goto L_08B2B428;
    case 309u: goto L_08B2B43C;
    case 310u: goto L_08B2B458;
    case 311u: goto L_08B2B464;
    case 312u: goto L_08B2B470;
    case 313u: goto L_08B2B474;
    case 314u: goto L_08B2B494;
    case 315u: goto L_08B2B4AC;
    case 316u: goto L_08B2B4B8;
    case 317u: goto L_08B2B4D4;
    case 318u: goto L_08B2B520;
    case 319u: goto L_08B2B528;
    case 320u: goto L_08B2B52C;
    case 321u: goto L_08B2B540;
    case 322u: goto L_08B2B554;
    case 323u: goto L_08B2B568;
    case 324u: goto L_08B2B574;
    case 325u: goto L_08B2B57C;
    case 326u: goto L_08B2B584;
    case 327u: goto L_08B2B5A0;
    case 328u: goto L_08B2B5B0;
    case 329u: goto L_08B2B5C0;
    case 330u: goto L_08B2B5D4;
    case 331u: goto L_08B2B5E0;
    case 332u: goto L_08B2B5EC;
    case 333u: goto L_08B2B5FC;
    case 334u: goto L_08B2B614;
    case 335u: goto L_08B2B630;
    case 336u: goto L_08B2B634;
    case 337u: goto L_08B2B63C;
    case 338u: goto L_08B2B648;
    case 339u: goto L_08B2B650;
    case 340u: goto L_08B2B658;
    case 341u: goto L_08B2B660;
    case 342u: goto L_08B2B66C;
    case 343u: goto L_08B2B674;
    case 344u: goto L_08B2B67C;
    case 345u: goto L_08B2B688;
    case 346u: goto L_08B2B694;
    case 347u: goto L_08B2B69C;
    case 348u: goto L_08B2B6A4;
    case 349u: goto L_08B2B6AC;
    case 350u: goto L_08B2B6B4;
    case 351u: goto L_08B2B6BC;
    case 352u: goto L_08B2B6C4;
    case 353u: goto L_08B2B6CC;
    case 354u: goto L_08B2B6D4;
    case 355u: goto L_08B2B6DC;
    case 356u: goto L_08B2B6E4;
    case 357u: goto L_08B2B6EC;
    case 358u: goto L_08B2B6F8;
    case 359u: goto L_08B2B708;
    case 360u: goto L_08B2B738;
    case 361u: goto L_08B2B73C;
    case 362u: goto L_08B2B744;
    case 363u: goto L_08B2B748;
    case 364u: goto L_08B2B74C;
    case 365u: goto L_08B2B750;
    case 366u: goto L_08B2B758;
    case 367u: goto L_08B2B75C;
    case 368u: goto L_08B2B764;
    case 369u: goto L_08B2B768;
    case 370u: goto L_08B2B774;
    case 371u: goto L_08B2B778;
    case 372u: goto L_08B2B77C;
    case 373u: goto L_08B2B784;
    case 374u: goto L_08B2B788;
    case 375u: goto L_08B2B78C;
    case 376u: goto L_08B2B790;
    case 377u: goto L_08B2B798;
    case 378u: goto L_08B2B7A0;
    case 379u: goto L_08B2B7A8;
    case 380u: goto L_08B2B7B0;
    case 381u: goto L_08B2B7B8;
    case 382u: goto L_08B2B7C0;
    case 383u: goto L_08B2B7C8;
    case 384u: goto L_08B2B7CC;
    case 385u: goto L_08B2B7D0;
    case 386u: goto L_08B2B7D4;
    case 387u: goto L_08B2B7D8;
    case 388u: goto L_08B2B7DC;
    case 389u: goto L_08B2B7E0;
    case 390u: goto L_08B2B7E4;
    case 391u: goto L_08B2B7EC;
    case 392u: goto L_08B2B7F4;
    case 393u: goto L_08B2B7FC;
    case 394u: goto L_08B2B814;
    case 395u: goto L_08B2B828;
    case 396u: goto L_08B2B82C;
    case 397u: goto L_08B2B840;
    case 398u: goto L_08B2B878;
    case 399u: goto L_08B2B88C;
    case 400u: goto L_08B2B8A4;
    case 401u: goto L_08B2B8BC;
    case 402u: goto L_08B2B8D0;
    case 403u: goto L_08B2B8EC;
    case 404u: goto L_08B2B904;
    case 405u: goto L_08B2B9A0;
    case 406u: goto L_08B2B9CC;
    case 407u: goto L_08B2B9DC;
    case 408u: goto L_08B2B9EC;
    case 409u: goto L_08B2B9FC;
    case 410u: goto L_08B2BA0C;
    case 411u: goto L_08B2BA1C;
    case 412u: goto L_08B2BA2C;
    case 413u: goto L_08B2BA38;
    case 414u: goto L_08B2BA58;
    case 415u: goto L_08B2BA64;
    case 416u: goto L_08B2BA80;
    case 417u: goto L_08B2BA84;
    case 418u: goto L_08B2BC10;
    case 419u: goto L_08B2BD10;
    case 420u: goto L_08B2BD40;
    case 421u: goto L_08B2BD60;
    case 422u: goto L_08B2BD68;
    case 423u: goto L_08B2BD78;
    case 424u: goto L_08B2BD80;
    case 425u: goto L_08B2BD88;
    case 426u: goto L_08B2BD90;
    case 427u: goto L_08B2BD98;
    case 428u: goto L_08B2BDA0;
    case 429u: goto L_08B2BDA8;
    case 430u: goto L_08B2BDB0;
    case 431u: goto L_08B2BDB8;
    case 432u: goto L_08B2BDC0;
    case 433u: goto L_08B2BDC4;
    case 434u: goto L_08B2BDCC;
    case 435u: goto L_08B2BDD4;
    case 436u: goto L_08B2BDE0;
    case 437u: goto L_08B2BDEC;
    case 438u: goto L_08B2BE04;
    case 439u: goto L_08B2BE10;
    case 440u: goto L_08B2BE1C;
    case 441u: goto L_08B2BE90;
    case 442u: goto L_08B2BEA8;
    case 443u: goto L_08B2BEB0;
    case 444u: goto L_08B2BEB4;
    case 445u: goto L_08B2BEB8;
    case 446u: goto L_08B2BEC0;
    case 447u: goto L_08B2BEC4;
    case 448u: goto L_08B2BECC;
    case 449u: goto L_08B2BED0;
    case 450u: goto L_08B2BED4;
    case 451u: goto L_08B2BEF0;
    case 452u: goto L_08B2BEF8;
    case 453u: goto L_08B2BF0C;
    case 454u: goto L_08B2BF10;
    case 455u: goto L_08B2BFA8;
    case 456u: goto L_08B2BFD4;
    case 457u: goto L_08B2BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B280D4:
    rt.unsupported(0x08B280D8u, 0x08A69260u, "control flow in delay slot"); return;
L_08B280F4:
    rt.unsupported(0x08B280F8u, 0x08A69438u, "control flow in delay slot"); return;
L_08B281F8:
    rt.unsupported(0x08B281FCu, 0x08A69600u, "control flow in delay slot"); return;
L_08B282A4:
    rt.unsupported(0x08B282A8u, 0x08A697A4u, "control flow in delay slot"); return;
L_08B282CC:
    rt.unsupported(0x08B282D0u, 0x08A6996Cu, "control flow in delay slot"); return;
L_08B282F4:
    rt.unsupported(0x08B282F8u, 0x08A6996Cu, "control flow in delay slot"); return;
L_08B2836C:
    rt.unsupported(0x08B28370u, 0x08A69B34u, "control flow in delay slot"); return;
L_08B283F8:
    rt.unsupported(0x08B283FCu, 0x08A69B34u, "control flow in delay slot"); return;
L_08B2851C:
    rt.unsupported(0x08B28520u, 0x08A69EC4u, "control flow in delay slot"); return;
L_08B28590:
    rt.unsupported(0x08B28594u, 0x08A6A08Cu, "control flow in delay slot"); return;
L_08B285C4:
    rt.unsupported(0x08B285C8u, 0x08A6A08Cu, "control flow in delay slot"); return;
L_08B285F8:
    rt.unsupported(0x08B285FCu, 0x08A6A230u, "control flow in delay slot"); return;
L_08B28630:
    rt.unsupported(0x08B28634u, 0x08A6A254u, "control flow in delay slot"); return;
L_08B28668:
    rt.unsupported(0x08B2866Cu, 0x08A6A254u, "control flow in delay slot"); return;
L_08B28698:
    rt.unsupported(0x08B2869Cu, 0x08A6A3F8u, "control flow in delay slot"); return;
L_08B2869C:
    rt.unsupported(0x08B286A0u, 0x08A6A41Cu, "control flow in delay slot"); return;
L_08B286BC:
    rt.unsupported(0x08B286C0u, 0x08A6A41Cu, "control flow in delay slot"); return;
L_08B286CC:
    rt.unsupported(0x08B286D0u, 0x08A6A41Cu, "control flow in delay slot"); return;
L_08B28720:
    rt.unsupported(0x08B28724u, 0x08A6A2D8u, "control flow in delay slot"); return;
L_08B287EC:
    rt.unsupported(0x08B287F0u, 0x08A6A7ACu, "control flow in delay slot"); return;
L_08B2899C:
    rt.unsupported(0x08B289A0u, 0x08A6A9D0u, "control flow in delay slot"); return;
L_08B28A58:
    rt.unsupported(0x08B28A5Cu, 0x08A6AEA8u, "control flow in delay slot"); return;
L_08B28A68:
    rt.unsupported(0x08B28A6Cu, 0x08A6AECCu, "control flow in delay slot"); return;
L_08B28A84:
    rt.unsupported(0x08B28A88u, 0x08A6AECCu, "control flow in delay slot"); return;
L_08B28AB0:
    rt.unsupported(0x08B28AB4u, 0x08A6AECCu, "control flow in delay slot"); return;
L_08B28ABC:
    rt.unsupported(0x08B28AC0u, 0x08A6AECCu, "control flow in delay slot"); return;
L_08B28B74:
    rt.unsupported(0x08B28B78u, 0x08A6B094u, "control flow in delay slot"); return;
L_08B28B84:
    rt.unsupported(0x08B28B88u, 0x08A6B1CCu, "control flow in delay slot"); return;
L_08B28B94:
    rt.unsupported(0x08B28B98u, 0x08A6B25Cu, "control flow in delay slot"); return;
L_08B28BF8:
    rt.unsupported(0x08B28BFCu, 0x08A6B25Cu, "control flow in delay slot"); return;
L_08B28C28:
    rt.unsupported(0x08B28C2Cu, 0x08A6B354u, "control flow in delay slot"); return;
L_08B28C3C:
    rt.unsupported(0x08B28C40u, 0x08A6B354u, "control flow in delay slot"); return;
L_08B28C60:
    rt.unsupported(0x08B28C64u, 0x08A6B354u, "control flow in delay slot"); return;
L_08B28DAC:
    rt.unsupported(0x08B28DB0u, 0x08A6B53Cu, "control flow in delay slot"); return;
L_08B28DBC:
    // nop
    rt.unsupported(0x08B28DC4u, 0x08A6B630u, "control flow in delay slot"); return;
L_08B28DC4:
    rt.unsupported(0x08B28DC8u, 0x08A6B630u, "control flow in delay slot"); return;
L_08B28DDC:
    rt.unsupported(0x08B28DE0u, 0x08A6B630u, "control flow in delay slot"); return;
L_08B28DF4:
    rt.unsupported(0x08B28DF8u, 0x08A6B630u, "control flow in delay slot"); return;
L_08B28F20:
    rt.unsupported(0x08B28F24u, 0x08A6B9A8u, "control flow in delay slot"); return;
L_08B28FF4:
    rt.unsupported(0x08B28FF8u, 0x08A6BB28u, "control flow in delay slot"); return;
L_08B29150:
    rt.unsupported(0x08B29154u, 0x08A6BFCCu, "control flow in delay slot"); return;
L_08B2925C:
    rt.unsupported(0x08B29260u, 0x08A6C170u, "control flow in delay slot"); return;
L_08B292C0:
    rt.unsupported(0x08B292C4u, 0x08A6C314u, "control flow in delay slot"); return;
L_08B292EC:
    rt.unsupported(0x08B292F0u, 0x08A6C314u, "control flow in delay slot"); return;
L_08B29308:
    rt.unsupported(0x08B2930Cu, 0x08A6C314u, "control flow in delay slot"); return;
L_08B29334:
    rt.unsupported(0x08B29338u, 0x08A6C6A4u, "control flow in delay slot"); return;
L_08B29348:
    rt.unsupported(0x08B2934Cu, 0x08A6C5F4u, "control flow in delay slot"); return;
L_08B29358:
    rt.unsupported(0x08B2935Cu, 0x08A6C6A4u, "control flow in delay slot"); return;
L_08B29368:
    rt.unsupported(0x08B2936Cu, 0x08A6C6A4u, "control flow in delay slot"); return;
L_08B29384:
    rt.unsupported(0x08B29388u, 0x08A6C6A4u, "control flow in delay slot"); return;
L_08B293A4:
    rt.unsupported(0x08B293A8u, 0x08A6C6A4u, "control flow in delay slot"); return;
L_08B293D0:
    rt.unsupported(0x08B293D4u, 0x08A6C968u, "control flow in delay slot"); return;
L_08B29474:
    rt.unsupported(0x08B29478u, 0x08A6CCF4u, "control flow in delay slot"); return;
L_08B294E0:
    rt.unsupported(0x08B294E4u, 0x08A6CCF4u, "control flow in delay slot"); return;
L_08B29500:
    // nop
    ctx.pc = 0x029B3180u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B2951C:
    rt.unsupported(0x08B29520u, 0x08A6CE00u, "control flow in delay slot"); return;
L_08B29770:
    rt.unsupported(0x08B29774u, 0x08A73A60u, "control flow in delay slot"); return;
L_08B29818:
    rt.unsupported(0x08B2981Cu, 0x08A7580Cu, "control flow in delay slot"); return;
L_08B299CC:
    rt.unsupported(0x08B299D0u, 0x08A7640Cu, "control flow in delay slot"); return;
L_08B299D4:
    // nop
    rt.unsupported(0x08B299DCu, 0x08A766B4u, "control flow in delay slot"); return;
L_08B299DC:
    rt.unsupported(0x08B299E0u, 0x08A76594u, "control flow in delay slot"); return;
L_08B299E4:
    rt.unsupported(0x08B299E8u, 0x08A77AD8u, "control flow in delay slot"); return;
L_08B29A24:
    rt.unsupported(0x08B29A28u, 0x08A77784u, "control flow in delay slot"); return;
L_08B29A38:
    rt.unsupported(0x08B29A3Cu, 0x08A76BF8u, "control flow in delay slot"); return;
L_08B29A48:
    // nop
    ctx.pc = 0x029DD6C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B29A60:
    rt.unsupported(0x08B29A64u, 0x08A76220u, "control flow in delay slot"); return;
L_08B29C18:
    // nop
    ctx.pc = 0x029DE5A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B29C44:
    // nop
    rt.unsupported(0x08B29C4Cu, 0x08A78554u, "control flow in delay slot"); return;
L_08B29D2C:
    rt.unsupported(0x08B29D30u, 0x08A78A94u, "control flow in delay slot"); return;
L_08B29FAC:
    rt.unsupported(0x08B29FB0u, 0x08A7AA2Cu, "control flow in delay slot"); return;
L_08B2A008:
    rt.unsupported(0x08B2A00Cu, 0x08A79DECu, "control flow in delay slot"); return;
L_08B2A070:
    rt.unsupported(0x08B2A074u, 0x08A7A838u, "control flow in delay slot"); return;
L_08B2A0AC:
    rt.unsupported(0x08B2A0B0u, 0x08A7A5FCu, "control flow in delay slot"); return;
L_08B2A21C:
    rt.unsupported(0x08B2A220u, 0x08A7BC28u, "control flow in delay slot"); return;
L_08B2A394:
    rt.unsupported(0x08B2A398u, 0x08A7BB9Cu, "control flow in delay slot"); return;
L_08B2A3CC:
    rt.unsupported(0x08B2A3D0u, 0x08A7BCE4u, "control flow in delay slot"); return;
L_08B2A400:
    rt.unsupported(0x08B2A404u, 0x08A7BAF8u, "control flow in delay slot"); return;
L_08B2A438:
    ctx.gpr[1] = (0u ^ 0u);
    // nop
    rt.unsupported(0x08B2A440u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B2A448:
    rt.unsupported(0x08B2A448u, 0x435F5550u, "unknown not lowered yet"); return;
L_08B2A450:
    rt.unsupported(0x08B2A450u, 0x7473614Cu, "unknown not lowered yet"); return;
L_08B2A460:
    ctx.execute_vfpu_vscl_ct<121u, 32u, 115u, 1u>();
    ctx.execute_vfpu_compare3(116u, 32u, 116u, 1u, 6u);
    // nop
    ctx.pc = 0x09909480u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B2A46C:
    // nop
    goto L_08B2A470;
L_08B2A470:
    rt.unsupported(0x08B2A470u, 0x7E7E7E7Eu, "special3? not lowered yet"); return;
L_08B2A47C:
    rt.unsupported(0x08B2A47Cu, 0x20642520u, "unknown not lowered yet"); return;
L_08B2A484:
    rt.unsupported(0x08B2A484u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2A48C:
    rt.unsupported(0x08B2A48Cu, 0x7469206Eu, "unknown not lowered yet"); return;
L_08B2A494:
    ctx.execute_vfpu_vscl_ct<83u, 111u, 109u, 1u>();
    rt.unsupported(0x08B2A498u, 0x6E696874u, "vfpu3 not lowered yet"); return;
L_08B2A4C8:
    rt.unsupported(0x08B2A4C8u, 0x4D5F5550u, "unknown not lowered yet"); return;
L_08B2A4D0:
    rt.unsupported(0x08B2A4D0u, 0x4F4D4552u, "unknown not lowered yet"); return;
L_08B2A4E0:
    rt.unsupported(0x08B2A4E0u, 0x204D4F52u, "unknown not lowered yet"); return;
L_08B2A4EC:
    rt.unsupported(0x08B2A4ECu, 0x206C6C41u, "unknown not lowered yet"); return;
L_08B2A514:
    rt.unsupported(0x08B2A514u, 0x415F4F43u, "unknown not lowered yet"); return;
L_08B2A51C:
    rt.unsupported(0x08B2A51Cu, 0x4F5F4F43u, "unknown not lowered yet"); return;
L_08B2A524:
    ctx.gpr[4] = (ctx.gpr[3] & ctx.gpr[4]);
    goto L_08B2A528;
L_08B2A528:
    if (ctx.gpr[2] == ctx.gpr[15]) {
    rt.unsupported(0x08B2A52Cu, 0x0000325Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 69u, 0x08B3EE6Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2A530;
L_08B2A530:
    if (ctx.gpr[2] == ctx.gpr[15]) {
    rt.unsupported(0x08B2A534u, 0x0000315Fu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 70u, 0x08B3EE74u>(ctx, &aot_mem); return;
    }
    goto L_08B2A538;
L_08B2A538:
    rt.unsupported(0x08B2A538u, 0x434F5453u, "unknown not lowered yet"); return;
L_08B2A540:
    rt.unsupported(0x08B2A540u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A548:
    rt.unsupported(0x08B2A548u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A550:
    rt.unsupported(0x08B2A550u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A558:
    rt.unsupported(0x08B2A558u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A560:
    rt.unsupported(0x08B2A560u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A568:
    rt.unsupported(0x08B2A568u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A570:
    rt.unsupported(0x08B2A570u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A574:
    rt.unsupported(0x08B2A574u, 0x00003754u, "special? not lowered yet"); return;
L_08B2A578:
    rt.unsupported(0x08B2A578u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A580:
    rt.unsupported(0x08B2A580u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A588:
    rt.unsupported(0x08B2A588u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A590:
    rt.unsupported(0x08B2A590u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A598:
    rt.unsupported(0x08B2A598u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A5A0:
    rt.unsupported(0x08B2A5A0u, 0x4654554Fu, "cop1? not lowered yet"); return;
L_08B2A5A8:
    rt.unsupported(0x08B2A5A8u, 0x444F4F47u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B2A5ACu, 0x43415220u, "unknown not lowered yet"); return;
L_08B2A5B8:
    if (0u == 0u) (void)(0u);
    goto L_08B2A5BC;
L_08B2A5BC:
    if (ctx.gpr[2] == ctx.gpr[3]) {
    rt.unsupported(0x08B2A5C0u, 0x00313055u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 71u, 0x08B3EEF4u>(ctx, &aot_mem); return;
    }
    goto L_08B2A5C4;
L_08B2A5C4:
    rt.unsupported(0x08B2A5C4u, 0x20444142u, "unknown not lowered yet"); return;
L_08B2A5C8:
    rt.unsupported(0x08B2A5C8u, 0x45434152u, "cop1? not lowered yet"); return;
L_08B2A5D8:
    if (ctx.gpr[2] == ctx.gpr[3]) {
    rt.unsupported(0x08B2A5DCu, 0x00363055u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 72u, 0x08B3EF10u>(ctx, &aot_mem); return;
    }
    goto L_08B2A5E0;
L_08B2A5E0:
    rt.unsupported(0x08B2A5E4u, 0x08A842F0u, "control flow in delay slot"); return;
L_08B2A664:
    rt.unsupported(0x08B2A668u, 0x08A84668u, "control flow in delay slot"); return;
L_08B2A6AC:
    rt.unsupported(0x08B2A6B0u, 0x08A86940u, "control flow in delay slot"); return;
L_08B2A778:
    ctx.execute_vfpu_vcmp_ct<101u, 116u, 1u, 7u>();
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 15u>();
    // nop
    goto L_08B2A784;
L_08B2A784:
    rt.unsupported(0x08B2A784u, 0x69746567u, "unknown not lowered yet"); return;
L_08B2A78C:
    rt.unsupported(0x08B2A78Cu, 0x68746567u, "unknown not lowered yet"); return;
L_08B2A794:
    rt.unsupported(0x08B2A794u, 0x75746567u, "unknown not lowered yet"); return;
L_08B2A7A0:
    rt.unsupported(0x08B2A7A0u, 0x68746573u, "unknown not lowered yet"); return;
L_08B2A7A8:
    ctx.execute_vfpu_vcmp_ct<101u, 116u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 15u>();
    // nop
    goto L_08B2A7B4;
L_08B2A7B4:
    rt.unsupported(0x08B2A7B4u, 0x75746573u, "unknown not lowered yet"); return;
L_08B2A7C0:
    rt.unsupported(0x08B2A7C0u, 0x75626564u, "unknown not lowered yet"); return;
L_08B2A7C8:
    rt.unsupported(0x08B2A7C8u, 0x63617274u, "vfpu0 not lowered yet"); return;
L_08B2A7D4:
    if (ctx.gpr[27] == ctx.gpr[14]) {
    rt.unsupported(0x08B2A7D8u, 0x00000075u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 16u, 0x08B45970u>(ctx, &aot_mem); return;
    }
    goto L_08B2A7DC;
L_08B2A7DC:
    rt.unsupported(0x08B2A7DCu, 0x0073253Eu, "special? not lowered yet"); return;
L_08B2A7E0:
    rt.unsupported(0x08B2A7E0u, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B2A7FC:
    rt.unsupported(0x08B2A7FCu, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2A814:
    rt.unsupported(0x08B2A814u, 0x726F6873u, "unknown not lowered yet"); return;
L_08B2A820:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 110u, 1u>();
    rt.unsupported(0x08B2A824u, 0x69666564u, "unknown not lowered yet"); return;
L_08B2A82C:
    rt.unsupported(0x08B2A82Cu, 0x74616877u, "unknown not lowered yet"); return;
L_08B2A834:
    rt.unsupported(0x08B2A834u, 0x72727563u, "unknown not lowered yet"); return;
L_08B2A840:
    rt.unsupported(0x08B2A840u, 0x7370756Eu, "unknown not lowered yet"); return;
L_08B2A848:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    // nop
    goto L_08B2A850;
L_08B2A850:
    ctx.execute_vfpu_vscl_ct<110u, 97u, 109u, 1u>();
    rt.unsupported(0x08B2A854u, 0x74616877u, "unknown not lowered yet"); return;
L_08B2A85C:
    rt.unsupported(0x08B2A85Cu, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B2A864:
    ctx.execute_vfpu_vscl_ct<108u, 101u, 118u, 1u>();
    rt.unsupported(0x08B2A868u, 0x756F206Cu, "unknown not lowered yet"); return;
L_08B2A878:
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 3u>();
    // nop
    goto L_08B2A880;
L_08B2A880:
    rt.unsupported(0x08B2A880u, 0x75746572u, "unknown not lowered yet"); return;
L_08B2A888:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 110u, 1u>();
    // nop
    goto L_08B2A890;
L_08B2A890:
    rt.unsupported(0x08B2A890u, 0x6E756F63u, "vfpu3 not lowered yet"); return;
L_08B2A898:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 4u>();
    rt.unsupported(0x08B2A89Cu, 0x74657220u, "unknown not lowered yet"); return;
L_08B2A8A4:
    ctx.execute_vfpu_vscl_ct<101u, 120u, 116u, 1u>();
    ctx.execute_vfpu_vcmp_ct<110u, 97u, 1u, 2u>();
    ctx.execute_vfpu_compare3(32u, 104u, 111u, 1u, 6u);
    (void)(0u < 0u ? 1u : 0u);
    goto L_08B2A8B4;
L_08B2A8B4:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B2A8B8u, 0x75626564u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 58u, 0x08B47E68u>(ctx, &aot_mem); return;
    }
    goto L_08B2A8BC;
L_08B2A8BC:
    ctx.gpr[7] = (~(ctx.gpr[1] | 0u));
    goto L_08B2A8C0;
L_08B2A8C0:
    rt.unsupported(0x08B2A8C0u, 0x746E6F63u, "unknown not lowered yet"); return;
L_08B2A8C8:
    // nop
    goto L_08B2A8CC;
L_08B2A8CC:
    if (0u == 0u) (void)(0u);
    goto L_08B2A8D0;
L_08B2A8D0:
    rt.unsupported(0x08B2A8D0u, 0x63617473u, "vfpu0 not lowered yet"); return;
L_08B2A8E4:
    ctx.gpr[14] = (ctx.gpr[17] < static_cast<std::uint32_t>(2314) ? 1u : 0u);
    rt.unsupported(0x08B2A8E8u, 0x0000002Eu, "special? not lowered yet"); return;
L_08B2A8EC:
    if (0u == 0u) ctx.gpr[1] = (0u);
    goto L_08B2A8F0;
L_08B2A8F0:
    ctx.lo = ctx.gpr[3];
    goto L_08B2A8F4;
L_08B2A8F4:
    ctx.gpr[14] = (ctx.gpr[1] | ctx.gpr[26]);
    goto L_08B2A8F8;
L_08B2A8F8:
    ctx.gpr[12] = (ctx.gpr[1] | ctx.gpr[26]);
    goto L_08B2A8FC;
L_08B2A8FC:
    rt.unsupported(0x08B2A8FCu, 0x206E6920u, "unknown not lowered yet"); return;
L_08B2A910:
    rt.unsupported(0x08B2A910u, 0x206E6920u, "unknown not lowered yet"); return;
L_08B2A920:
    { const bool signed_ok = ctx.execute_signed_add(7u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B2A920u, 0x00003F20u); return; } }
    goto L_08B2A924;
L_08B2A924:
    rt.unsupported(0x08B2A924u, 0x206E6920u, "unknown not lowered yet"); return;
L_08B2A93C:
    rt.unsupported(0x08B2A93Cu, 0x4152545Fu, "unknown not lowered yet"); return;
L_08B2A964:
    rt.unsupported(0x08B2A968u, 0x08A87BF8u, "control flow in delay slot"); return;
L_08B2A968:
    rt.unsupported(0x08B2A96Cu, 0x08A87BF8u, "control flow in delay slot"); return;
L_08B2A9A0:
    rt.unsupported(0x08B2A9A4u, 0x08A87BF8u, "control flow in delay slot"); return;
L_08B2A9D8:
    rt.unsupported(0x08B2A9D8u, 0x74726170u, "unknown not lowered yet"); return;
L_08B2A9E4:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vhdp(108u, 101u, 97u, 1u);
    ctx.gpr[31] = (ctx.gpr[18] | 12592u);
    rt.unsupported(0x08B2A9F0u, 0x00000034u, "special? not lowered yet"); return;
L_08B2A9F4:
    ctx.execute_vfpu_vscl_ct<103u, 97u, 109u, 1u>();
    ctx.execute_vfpu_vhdp(108u, 101u, 97u, 1u);
    ctx.gpr[31] = (ctx.gpr[18] | 12848u);
    rt.unsupported(0x08B2AA00u, 0x00000034u, "special? not lowered yet"); return;
L_08B2AA04:
    rt.unsupported(0x08B2AA04u, 0x7377656Eu, "unknown not lowered yet"); return;
L_08B2AA14:
    rt.unsupported(0x08B2AA14u, 0x7377656Eu, "unknown not lowered yet"); return;
L_08B2AA1C:
    if (static_cast<std::int32_t>(ctx.gpr[25]) > 0) {
    rt.unsupported(0x08B2AA20u, 0x00003436u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 482u, 0x08B36BE8u>(ctx, &aot_mem); return;
    }
    goto L_08B2AA24;
L_08B2AA24:
    // nop
    rt.unsupported(0x08B2AA28u, 0x4746432Eu, "cop1? not lowered yet"); return;
L_08B2AA70:
    rt.unsupported(0x08B2AA70u, 0x4B415242u, "cop2/vfpu not lowered yet"); return;
L_08B2AA9C:
    // nop
    ctx.execute_vfpu_vhdp(51u, 46u, 50u, 1u);
    // nop
    (void)(0u ^ 0u);
    // nop
    rt.unsupported(0x08B2AAB0u, 0x0066312Eu, "special? not lowered yet"); return;
L_08B2AAC0:
    ctx.gpr[5] = (ctx.gpr[11] < static_cast<std::uint32_t>(28271) ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<102u, 105u, 118u, 1u>();
    rt.unsupported(0x08B2AAC8u, 0x7268742Du, "unknown not lowered yet"); return;
L_08B2AAD0:
    rt.unsupported(0x08B2AAD0u, 0x203A7325u, "unknown not lowered yet"); return;
L_08B2AAF8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<118u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<99u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2AAFCu, 0x7274735Fu, "unknown not lowered yet"); return;
L_08B2AB04:
    ctx.execute_vfpu_vscl_ct<116u, 104u, 114u, 1u>();
    ctx.execute_vfpu_vscl_ct<97u, 100u, 115u, 1u>();
    ctx.gpr[12] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B2AB10;
L_08B2AB10:
    rt.unsupported(0x08B2AB10u, 0x203A7325u, "unknown not lowered yet"); return;
L_08B2AB38:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<99u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<101u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<115u, 116u, 114u, 1u>();
    rt.unsupported(0x08B2AB40u, 0x68546D61u, "unknown not lowered yet"); return;
L_08B2AB4C:
    rt.unsupported(0x08B2AB4Cu, 0x203A7325u, "unknown not lowered yet"); return;
L_08B2AB58:
    rt.unsupported(0x08B2AB58u, 0x7263206Fu, "unknown not lowered yet"); return;
L_08B2AB74:
    rt.unsupported(0x08B2AB74u, 0x203A7325u, "unknown not lowered yet"); return;
L_08B2AB7C:
    ctx.execute_vfpu_vhdp(32u, 105u, 110u, 1u);
    goto L_08B2AB80;
L_08B2AB80:
    rt.unsupported(0x08B2AB80u, 0x7025206Fu, "unknown not lowered yet"); return;
L_08B2AB88:
    rt.unsupported(0x08B2AB88u, 0x75657551u, "unknown not lowered yet"); return;
L_08B2AB94:
    ctx.gpr[1] = (static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B2AB98;
L_08B2AB98:
    rt.unsupported(0x08B2AB98u, 0x75657551u, "unknown not lowered yet"); return;
L_08B2ABA8:
    rt.unsupported(0x08B2ABA8u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B2ABAC:
    rt.unsupported(0x08B2ABACu, 0x20646574u, "unknown not lowered yet"); return;
L_08B2ABB0:
    rt.unsupported(0x08B2ABB0u, 0x74736463u, "unknown not lowered yet"); return;
L_08B2ABBC:
    // nop
    ctx.pc = 0x09918594u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B2ABC4:
    rt.unsupported(0x08B2ABC4u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B2ABD0:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B2ABD4u, 0x77206465u, "unknown not lowered yet"); return;
L_08B2ABDC:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B2ABE0u, 0x78302072u, "unknown not lowered yet"); return;
L_08B2ABE4:
    rt.unsupported(0x08B2ABE4u, 0x78383025u, "unknown not lowered yet"); return;
L_08B2ABEC:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<114u, 32u, 114u, 1u>();
    rt.unsupported(0x08B2ABF4u, 0x6E696461u, "vfpu3 not lowered yet"); return;
L_08B2ABFC:
    rt.unsupported(0x08B2ABFCu, 0x2021656Cu, "unknown not lowered yet"); return;
L_08B2AC1C:
    rt.unsupported(0x08B2AC1Cu, 0x43534944u, "unknown not lowered yet"); return;
L_08B2AC28:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    goto L_08B2AC2C;
L_08B2AC2C:
    rt.unsupported(0x08B2AC2Cu, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[10] = (0x08B2AC38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B2AC38u) goto L_08B2AC38;
    return;
L_08B2AC38:
    if (ctx.gpr[2] == ctx.gpr[6]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 13u, 0x08B3D0F4u>(ctx, &aot_mem); return;
    }
    goto L_08B2AC40;
L_08B2AC40:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B2AC44u, 0x676E6976u, "vfpu1 not lowered yet"); return;
L_08B2AC54:
    { const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    goto L_08B2AC58;
L_08B2AC58:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2AC5Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2AC6C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2AC70u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2AC78:
    ctx.execute_vfpu_vminmax(110u, 99u, 111u, 1u, false);
    rt.unsupported(0x08B2AC7Cu, 0x73657270u, "unknown not lowered yet"); return;
L_08B2AC88:
    if (ctx.gpr[26] == ctx.gpr[20]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 126u, 0x08B3F5B8u>(ctx, &aot_mem); return;
    }
    goto L_08B2AC90;
L_08B2AC8C:
    // nop
    goto L_08B2AC90;
L_08B2AC90:
    ctx.gpr[20] = (ctx.gpr[2] & 21067u);
    // nop
    goto L_08B2AC98;
L_08B2AC98:
    ctx.gpr[16] = (ctx.gpr[1] & 21067u);
    // nop
    goto L_08B2ACA0;
L_08B2ACA0:
    ctx.execute_vfpu_compare3(76u, 32u, 84u, 1u, 6u);
    (void)(0u | 0u);
    goto L_08B2ACA8;
L_08B2ACA8:
    ctx.execute_vfpu_vminmax(97u, 110u, 105u, 1u, false);
    rt.unsupported(0x08B2ACACu, 0x20732520u, "unknown not lowered yet"); return;
L_08B2ACC4:
    // nop
    goto L_08B2ACC8;
L_08B2ACC8:
    rt.unsupported(0x08B2ACC8u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B2ACCC:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B2ACD0u, 0x4E495952u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 354u, 0x08B33218u>(ctx, &aot_mem); return;
    }
    goto L_08B2ACD4;
L_08B2ACD4:
    rt.unsupported(0x08B2ACD4u, 0x4F542047u, "unknown not lowered yet"); return;
L_08B2ACDC:
    rt.unsupported(0x08B2ACDCu, 0x20455445u, "unknown not lowered yet"); return;
L_08B2ACF4:
    if (0u == 0u) (void)(0u);
    goto L_08B2ACF8;
L_08B2ACF8:
    ctx.execute_vfpu_vminmax(67u, 83u, 105u, 1u, false);
    rt.unsupported(0x08B2ACFCu, 0x4D656C70u, "unknown not lowered yet"); return;
L_08B2AD0C:
    // nop
    ctx.gpr[14] = (0u | ctx.gpr[10]);
    rt.unsupported(0x08B2AD14u, 0x00006272u, "special? not lowered yet"); return;
L_08B2AD20:
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[13] = (0u | 0u);
    rt.unsupported(0x08B2AD28u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B2AD30:
    rt.unsupported(0x08B2AD30u, 0x74737562u, "unknown not lowered yet"); return;
L_08B2AD3C:
    rt.unsupported(0x08B2AD3Cu, 0x74737562u, "unknown not lowered yet"); return;
L_08B2AD40:
    rt.unsupported(0x08B2AD40u, 0x0064255Fu, "special? not lowered yet"); return;
L_08B2AD44:
    ctx.execute_vfpu_vminmax(67u, 71u, 97u, 1u, false);
    rt.unsupported(0x08B2AD48u, 0x676F4C65u, "vfpu1 not lowered yet"); return;
L_08B2AD50:
    rt.unsupported(0x08B2AD50u, 0x74736552u, "unknown not lowered yet"); return;
L_08B2AD54:
    if (ctx.gpr[3] == ctx.gpr[5]) {
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 38u, 0x08B47714u>(ctx, &aot_mem); return;
    }
    goto L_08B2AD5C;
L_08B2AD58:
    ctx.execute_vfpu_vscl_ct<108u, 97u, 121u, 1u>();
    goto L_08B2AD5C;
L_08B2AD5C:
    rt.unsupported(0x08B2AD5Cu, 0x75745372u, "unknown not lowered yet"); return;
L_08B2AD78:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B2AD7Cu, 0x4E49524Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 2u, 0x08B3C2C4u>(ctx, &aot_mem); return;
    }
    goto L_08B2AD80;
L_08B2AD80:
    rt.unsupported(0x08B2AD80u, 0x4C502047u, "unknown not lowered yet"); return;
L_08B2AD8C:
    if (ctx.gpr[2] != ctx.gpr[9]) {
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(14880));
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 7u, 0x08B3C6E0u>(ctx, &aot_mem); return;
    }
    goto L_08B2AD94;
L_08B2AD94:
    rt.unsupported(0x08B2AD94u, 0x00000A73u, "special? not lowered yet"); return;
L_08B2AD98:
    rt.unsupported(0x08B2AD98u, 0x49584154u, "cop2/vfpu not lowered yet"); return;
L_08B2ADB4:
    rt.unsupported(0x08B2ADB8u, 0x08A8E118u, "control flow in delay slot"); return;
L_08B2ADC0:
    ctx.gpr[5] = (ctx.gpr[1] & 21059u);
    ctx.gpr[31] = (ctx.gpr[10] + static_cast<std::uint32_t>(25650));
    goto L_08B2ADC8;
L_08B2ADC8:
    rt.unsupported(0x08B2ADC8u, 0x00643230u, "special? not lowered yet"); return;
L_08B2ADCC:
    if (ctx.gpr[2] == ctx.gpr[15]) {
    rt.unsupported(0x08B2ADD0u, 0x474E4950u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 128u, 0x08B3FF1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2ADD4;
L_08B2ADD4:
    rt.unsupported(0x08B2ADD4u, 0x45524320u, "cop1? not lowered yet"); return;
L_08B2ADE0:
    rt.unsupported(0x08B2ADE0u, 0x72617453u, "unknown not lowered yet"); return;
L_08B2ADE4:
    rt.unsupported(0x08B2ADE4u, 0x676E6974u, "vfpu1 not lowered yet"); return;
L_08B2ADFC:
    rt.unsupported(0x08B2ADFCu, 0x44455243u, "unsupported CFC1 control register"); return;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<50u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<37u, 1u>(vfpu_d); }
    // nop
    rt.unsupported(0x08B2AE08u, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B2AE18:
    rt.unsupported(0x08B2AE1Cu, 0x08A8FAC0u, "control flow in delay slot"); return;
L_08B2AE50:
    rt.unsupported(0x08B2AE54u, 0x08A9069Cu, "control flow in delay slot"); return;
L_08B2AE84:
    rt.unsupported(0x08B2AE88u, 0x08A9069Cu, "control flow in delay slot"); return;
L_08B2AE90:
    rt.unsupported(0x08B2AE94u, 0x08A9069Cu, "control flow in delay slot"); return;
L_08B2AEA0:
    rt.unsupported(0x08B2AEA4u, 0x08A9069Cu, "control flow in delay slot"); return;
L_08B2AEB4:
    rt.unsupported(0x08B2AEB8u, 0x08A9069Cu, "control flow in delay slot"); return;
L_08B2AEEC:
    rt.unsupported(0x08B2AEF0u, 0x08A9069Cu, "control flow in delay slot"); return;
L_08B2AF00:
    rt.unsupported(0x08B2AF00u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2AF20:
    rt.unsupported(0x08B2AF20u, 0x6E776F64u, "vfpu3 not lowered yet"); return;
L_08B2AF30:
    ctx.execute_vfpu_vscl_ct<85u, 110u, 100u, 1u>();
    ctx.execute_vfpu_vscl_ct<102u, 105u, 110u, 1u>();
    rt.unsupported(0x08B2AF38u, 0x6E652064u, "vfpu3 not lowered yet"); return;
L_08B2AF4C:
    rt.unsupported(0x08B2AF4Cu, 0x45726574u, "cop1? not lowered yet"); return;
L_08B2AF64:
    rt.unsupported(0x08B2AF64u, 0x444F4F47u, "unsupported CFC1 control register"); return;
    ctx.gpr[9] = (ctx.gpr[25] >> 29u);
    // nop
    rt.unsupported(0x08B2AF74u, 0x08A92A7Cu, "control flow in delay slot"); return;
L_08B2AF80:
    rt.unsupported(0x08B2AF84u, 0x08A92AF4u, "control flow in delay slot"); return;
L_08B2AF88:
    rt.unsupported(0x08B2AF8Cu, 0x08A92A94u, "control flow in delay slot"); return;
L_08B2AFAC:
    rt.unsupported(0x08B2AFB0u, 0x08A92AE4u, "control flow in delay slot"); return;
L_08B2AFB8:
    rt.unsupported(0x08B2AFB8u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2AFC0:
    rt.unsupported(0x08B2AFC0u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2AFC8:
    rt.unsupported(0x08B2AFC8u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2AFD0:
    rt.unsupported(0x08B2AFD0u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B2AFD4:
    ctx.gpr[14] = (0u | 0u);
    goto L_08B2AFD8;
L_08B2AFD8:
    rt.unsupported(0x08B2AFD8u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2AFE0:
    rt.unsupported(0x08B2AFE0u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2AFE8:
    rt.unsupported(0x08B2AFE8u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2AFF0:
    rt.unsupported(0x08B2AFF0u, 0x41454843u, "unknown not lowered yet"); return;
L_08B2AFF8:
    rt.unsupported(0x08B2AFF8u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2B010:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<80u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<67u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2B014u, 0x61657220u, "vfpu0 not lowered yet"); return;
L_08B2B01C:
    rt.unsupported(0x08B2B01Cu, 0x4F434F4Eu, "unknown not lowered yet"); return;
L_08B2B024:
    rt.unsupported(0x08B2B024u, 0x4F435257u, "unknown not lowered yet"); return;
L_08B2B02C:
    ctx.execute_vfpu_vscl_ct<84u, 105u, 109u, 1u>();
    ctx.execute_vfpu_vscl_ct<32u, 119u, 104u, 1u>();
    goto L_08B2B034;
L_08B2B034:
    rt.unsupported(0x08B2B034u, 0x756A206Eu, "unknown not lowered yet"); return;
L_08B2B04C:
    rt.unsupported(0x08B2B04Cu, 0x62756F44u, "vfpu0 not lowered yet"); return;
L_08B2B054:
    ctx.execute_vfpu_vhdp(68u, 105u, 102u, 1u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<49u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vhdp(32u, 68u, 105u, 1u);
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(12902));
    ctx.gpr[1] = (0u & 0u);
    goto L_08B2B068;
L_08B2B068:
    ctx.execute_vfpu_vminmax(78u, 111u, 114u, 1u, false);
    rt.unsupported(0x08B2B06Cu, 0x203A6C61u, "unknown not lowered yet"); return;
L_08B2B088:
    rt.unsupported(0x08B2B088u, 0x00000A79u, "special? not lowered yet"); return;
L_08B2B0A0:
    rt.unsupported(0x08B2B0A4u, 0x08A96278u, "control flow in delay slot"); return;
L_08B2B0C0:
    rt.unsupported(0x08B2B0C0u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2B0C8:
    rt.unsupported(0x08B2B0C8u, 0x676E6973u, "vfpu1 not lowered yet"); return;
L_08B2B0E0:
    rt.unsupported(0x08B2B0E0u, 0x454C4C49u, "cop1? not lowered yet"); return;
L_08B2B0EC:
    rt.unsupported(0x08B2B0ECu, 0x4944202Du, "cop2/vfpu not lowered yet"); return;
L_08B2B0F8:
    if (0u == 0u) (void)(0u);
    rt.unsupported(0x08B2B0FCu, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B2B138:
    rt.unsupported(0x08B2B138u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2B158:
    rt.unsupported(0x08B2B158u, 0x706F5043u, "unknown not lowered yet"); return;
L_08B2B170:
    if (0u == 0u) (void)(0u);
    rt.unsupported(0x08B2B174u, 0x776F6420u, "unknown not lowered yet"); return;
L_08B2B188:
    rt.unsupported(0x08B2B188u, 0x6E6B6E55u, "vfpu3 not lowered yet"); return;
L_08B2B1A4:
    rt.unsupported(0x08B2B1A4u, 0x746E756Fu, "unknown not lowered yet"); return;
L_08B2B1B8:
    // nop
    rt.unsupported(0x08B2B1BCu, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B2B1C4:
    rt.unsupported(0x08B2B1C4u, 0x20646570u, "unknown not lowered yet"); return;
L_08B2B1D0:
    rt.unsupported(0x08B2B1D0u, 0x20746F6Eu, "unknown not lowered yet"); return;
L_08B2B1E0:
    rt.unsupported(0x08B2B1E0u, 0x6E6B6E55u, "vfpu3 not lowered yet"); return;
L_08B2B228:
    rt.unsupported(0x08B2B22Cu, 0x08A9ED38u, "control flow in delay slot"); return;
L_08B2B280:
    rt.unsupported(0x08B2B284u, 0x08A9EEACu, "control flow in delay slot"); return;
L_08B2B2B0:
    rt.unsupported(0x08B2B2B4u, 0x08A9EEDCu, "control flow in delay slot"); return;
L_08B2B368:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B2B36Cu, 0x46454420u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 8u, 0x08B3C88Cu>(ctx, &aot_mem); return;
    }
    goto L_08B2B370;
L_08B2B370:
    ctx.gpr[7] = (ctx.gpr[18] ^ 16722u);
    if (ctx.gpr[18] != ctx.gpr[15]) {
    rt.unsupported(0x08B2B378u, 0x20474E49u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 61u, 0x08B3E7F8u>(ctx, &aot_mem); return;
    }
    goto L_08B2B37C;
L_08B2B37C:
    rt.unsupported(0x08B2B37Cu, 0x42206925u, "unknown not lowered yet"); return;
L_08B2B388:
    rt.unsupported(0x08B2B388u, 0x4F4C4C41u, "unknown not lowered yet"); return;
L_08B2B39C:
    rt.unsupported(0x08B2B39Cu, 0x4C494146u, "unknown not lowered yet"); return;
L_08B2B3B8:
    rt.unsupported(0x08B2B3B8u, 0x204F5420u, "unknown not lowered yet"); return;
L_08B2B3D4:
    if (ctx.gpr[26] == ctx.gpr[5]) {
    rt.unsupported(0x08B2B3D8u, 0x41572054u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 215u, 0x08B3BC78u>(ctx, &aot_mem); return;
    }
    goto L_08B2B3DC;
L_08B2B3DC:
    rt.unsupported(0x08B2B3DCu, 0x69252053u, "unknown not lowered yet"); return;
L_08B2B3E4:
    rt.unsupported(0x08B2B3E4u, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B2B3F8:
    ctx.execute_vfpu_vscl_ct<101u, 113u, 117u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<116u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<115u, 1u>(vfpu_d); }
    ctx.gpr[9] = (ctx.gpr[3] < static_cast<std::uint32_t>(9504) ? 1u : 0u);
    rt.unsupported(0x08B2B404u, 0x61766120u, "vfpu0 not lowered yet"); return;
L_08B2B428:
    rt.unsupported(0x08B2B428u, 0x62206925u, "vfpu0 not lowered yet"); return;
L_08B2B43C:
    ctx.execute_vfpu_vscl_ct<115u, 105u, 122u, 1u>();
    rt.unsupported(0x08B2B440u, 0x20692520u, "unknown not lowered yet"); return;
L_08B2B458:
    rt.unsupported(0x08B2B458u, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B2B464:
    rt.unsupported(0x08B2B464u, 0x70252052u, "unknown not lowered yet"); return;
L_08B2B470:
    if (0u == 0u) (void)(0u);
    goto L_08B2B474;
L_08B2B474:
    ctx.execute_vfpu_vscl_ct<77u, 97u, 107u, 1u>();
    rt.unsupported(0x08B2B478u, 0x70616548u, "unknown not lowered yet"); return;
L_08B2B494:
    rt.unsupported(0x08B2B494u, 0x4B656373u, "cop2/vfpu not lowered yet"); return;
L_08B2B4AC:
    rt.unsupported(0x08B2B4ACu, 0x73692029u, "unknown not lowered yet"); return;
L_08B2B4B8:
    rt.unsupported(0x08B2B4B8u, 0x6E69614Du, "vfpu3 not lowered yet"); return;
L_08B2B4D4:
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[25] < static_cast<std::uint32_t>(12079) ? 1u : 0u);
    rt.unsupported(0x08B2B51Cu, 0x00002F2Fu, "special? not lowered yet"); return;
L_08B2B520:
    if (ctx.gpr[2] == ctx.gpr[1]) {
    rt.unsupported(0x08B2B524u, 0x4D554420u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 10u, 0x08B3CA44u>(ctx, &aot_mem); return;
    }
    goto L_08B2B528;
L_08B2B528:
    ctx.gpr[1] = (ctx.hi);
    goto L_08B2B52C;
L_08B2B52C:
    rt.unsupported(0x08B2B52Cu, 0x70616548u, "unknown not lowered yet"); return;
L_08B2B540:
    rt.unsupported(0x08B2B540u, 0x70616548u, "unknown not lowered yet"); return;
L_08B2B554:
    rt.unsupported(0x08B2B554u, 0x70616548u, "unknown not lowered yet"); return;
L_08B2B568:
    rt.unsupported(0x08B2B568u, 0x74736157u, "unknown not lowered yet"); return;
L_08B2B574:
    ctx.gpr[5] = (ctx.gpr[1] ^ 8224u);
    rt.unsupported(0x08B2B578u, 0x00000069u, "special? not lowered yet"); return;
L_08B2B57C:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 0u>();
    rt.unsupported(0x08B2B580u, 0x69382520u, "unknown not lowered yet"); return;
L_08B2B584:
    ctx.gpr[5] = (ctx.gpr[1] ^ 8250u);
    ctx.execute_vfpu_vcmp_ct<32u, 97u, 1u, 9u>();
    rt.unsupported(0x08B2B58Cu, 0x61636F6Cu, "vfpu0 not lowered yet"); return;
L_08B2B5A0:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 0u>();
    rt.unsupported(0x08B2B5A4u, 0x7A697320u, "unknown not lowered yet"); return;
L_08B2B5B0:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 0u>();
    ctx.execute_vfpu_vscl_ct<32u, 102u, 114u, 1u>();
    rt.unsupported(0x08B2B5B8u, 0x20203A65u, "unknown not lowered yet"); return;
L_08B2B5C0:
    rt.unsupported(0x08B2B5C0u, 0x616C7063u, "vfpu0 not lowered yet"); return;
L_08B2B5D4:
    rt.unsupported(0x08B2B5D4u, 0x616C7063u, "vfpu0 not lowered yet"); return;
L_08B2B5E0:
    ctx.execute_vfpu_vcmp_ct<100u, 101u, 1u, 15u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[15] = (0u | ctx.gpr[10]);
    goto L_08B2B5EC;
L_08B2B5EC:
    rt.unsupported(0x08B2B5ECu, 0x74696E69u, "unknown not lowered yet"); return;
L_08B2B5FC:
    rt.unsupported(0x08B2B5FCu, 0x74746573u, "unknown not lowered yet"); return;
L_08B2B614:
    rt.unsupported(0x08B2B614u, 0x756D2072u, "unknown not lowered yet"); return;
L_08B2B630:
    rt.unsupported(0x08B2B630u, 0x006C696Eu, "special? not lowered yet"); return;
L_08B2B634:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 2u>();
    ctx.gpr[12] = (ctx.gpr[3] | ctx.gpr[14]);
    goto L_08B2B63C;
L_08B2B63C:
    rt.unsupported(0x08B2B63Cu, 0x72657375u, "unknown not lowered yet"); return;
L_08B2B648:
    rt.unsupported(0x08B2B648u, 0x626D756Eu, "vfpu0 not lowered yet"); return;
L_08B2B650:
    rt.unsupported(0x08B2B650u, 0x69727473u, "unknown not lowered yet"); return;
L_08B2B658:
    ctx.execute_vfpu_vcmp_ct<97u, 98u, 1u, 4u>();
    (void)(0u | 0u);
    goto L_08B2B660;
L_08B2B660:
    rt.unsupported(0x08B2B660u, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B2B66C:
    ctx.execute_vfpu_vscl_ct<116u, 104u, 114u, 1u>();
    ctx.gpr[12] = (0u + 0u);
    goto L_08B2B674;
L_08B2B674:
    rt.unsupported(0x08B2B674u, 0x6E695F5Fu, "vfpu3 not lowered yet"); return;
L_08B2B67C:
    ctx.execute_vfpu_vscl_ct<95u, 95u, 110u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<119u, 1u>(vfpu_d); }
    ctx.gpr[15] = (0u | 0u);
    goto L_08B2B688;
L_08B2B688:
    rt.unsupported(0x08B2B688u, 0x73755F5Fu, "unknown not lowered yet"); return;
L_08B2B694:
    rt.unsupported(0x08B2B694u, 0x63675F5Fu, "vfpu0 not lowered yet"); return;
L_08B2B69C:
    ctx.execute_vfpu_compare3(95u, 95u, 109u, 1u, 6u);
    ctx.gpr[12] = (0u & 0u);
    goto L_08B2B6A4;
L_08B2B6A4:
    rt.unsupported(0x08B2B6A4u, 0x71655F5Fu, "unknown not lowered yet"); return;
L_08B2B6AC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<95u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<95u, 1u>(vfpu_d); }
    (void)(0u & 0u);
    goto L_08B2B6B4;
L_08B2B6B4:
    rt.unsupported(0x08B2B6B4u, 0x75735F5Fu, "unknown not lowered yet"); return;
L_08B2B6BC:
    rt.unsupported(0x08B2B6BCu, 0x756D5F5Fu, "unknown not lowered yet"); return;
L_08B2B6C4:
    rt.unsupported(0x08B2B6C4u, 0x69645F5Fu, "unknown not lowered yet"); return;
L_08B2B6CC:
    ctx.execute_vfpu_compare3(95u, 95u, 112u, 1u, 6u);
    rt.unsupported(0x08B2B6D0u, 0x00000077u, "special? not lowered yet"); return;
L_08B2B6D4:
    rt.unsupported(0x08B2B6D4u, 0x6E755F5Fu, "vfpu3 not lowered yet"); return;
L_08B2B6DC:
    rt.unsupported(0x08B2B6DCu, 0x746C5F5Fu, "unknown not lowered yet"); return;
L_08B2B6E4:
    ctx.execute_vfpu_vscl_ct<95u, 95u, 108u, 1u>();
    // nop
    goto L_08B2B6EC;
L_08B2B6EC:
    ctx.execute_vfpu_compare3(95u, 95u, 99u, 1u, 6u);
    rt.unsupported(0x08B2B6F0u, 0x7461636Eu, "unknown not lowered yet"); return;
L_08B2B6F8:
    rt.unsupported(0x08B2B6F8u, 0x61635F5Fu, "vfpu0 not lowered yet"); return;
L_08B2B708:
    rt.unsupported(0x08B2B708u, 0x206E6152u, "unknown not lowered yet"); return;
L_08B2B738:
    ctx.gpr[13] = (ctx.gpr[3] + ctx.gpr[4]);
    goto L_08B2B73C;
L_08B2B73C:
    rt.unsupported(0x08B2B73Cu, 0x61657262u, "vfpu0 not lowered yet"); return;
L_08B2B744:
    ctx.gpr[13] = (0u & 0u);
    goto L_08B2B748;
L_08B2B748:
    ctx.execute_vfpu_vscl_ct<101u, 108u, 115u, 1u>();
    goto L_08B2B74C;
L_08B2B74C:
    // nop
    goto L_08B2B750;
L_08B2B750:
    ctx.execute_vfpu_vscl_ct<101u, 108u, 115u, 1u>();
    rt.unsupported(0x08B2B754u, 0x00006669u, "special? not lowered yet"); return;
L_08B2B758:
    ctx.gpr[13] = (ctx.gpr[3] | ctx.gpr[4]);
    goto L_08B2B75C;
L_08B2B75C:
    rt.unsupported(0x08B2B75Cu, 0x736C6166u, "unknown not lowered yet"); return;
L_08B2B764:
    ctx.gpr[13] = (ctx.gpr[3] ^ ctx.gpr[18]);
    goto L_08B2B768;
L_08B2B768:
    rt.unsupported(0x08B2B768u, 0x636E7566u, "vfpu0 not lowered yet"); return;
L_08B2B774:
    rt.unsupported(0x08B2B774u, 0x00006669u, "special? not lowered yet"); return;
L_08B2B778:
    rt.unsupported(0x08B2B778u, 0x00006E69u, "special? not lowered yet"); return;
L_08B2B77C:
    rt.unsupported(0x08B2B77Cu, 0x61636F6Cu, "vfpu0 not lowered yet"); return;
L_08B2B784:
    rt.unsupported(0x08B2B784u, 0x006C696Eu, "special? not lowered yet"); return;
L_08B2B788:
    rt.unsupported(0x08B2B788u, 0x00746F6Eu, "special? not lowered yet"); return;
L_08B2B78C:
    rt.unsupported(0x08B2B78Cu, 0x0000726Fu, "special? not lowered yet"); return;
L_08B2B790:
    ctx.execute_vfpu_vscl_ct<114u, 101u, 112u, 1u>();
    ctx.gpr[14] = (0u + 0u);
    goto L_08B2B798;
L_08B2B798:
    rt.unsupported(0x08B2B798u, 0x75746572u, "unknown not lowered yet"); return;
L_08B2B7A0:
    rt.unsupported(0x08B2B7A0u, 0x6E656874u, "vfpu3 not lowered yet"); return;
L_08B2B7A8:
    ctx.execute_vfpu_vscl_ct<116u, 114u, 117u, 1u>();
    // nop
    goto L_08B2B7B0;
L_08B2B7B0:
    rt.unsupported(0x08B2B7B0u, 0x69746E75u, "unknown not lowered yet"); return;
L_08B2B7B8:
    ctx.execute_vfpu_vcmp_ct<104u, 105u, 1u, 7u>();
    (void)(0u | 0u);
    goto L_08B2B7C0;
L_08B2B7C0:
    ctx.execute_vfpu_vminmax(42u, 110u, 97u, 1u, false);
    (void)(0u | 0u);
    goto L_08B2B7C8;
L_08B2B7C8:
    rt.unsupported(0x08B2B7C8u, 0x00002E2Eu, "special? not lowered yet"); return;
L_08B2B7CC:
    rt.unsupported(0x08B2B7CCu, 0x002E2E2Eu, "special? not lowered yet"); return;
L_08B2B7D0:
    rt.unsupported(0x08B2B7D0u, 0x00003D3Du, "special? not lowered yet"); return;
L_08B2B7D4:
    rt.unsupported(0x08B2B7D4u, 0x00003D3Eu, "special? not lowered yet"); return;
L_08B2B7D8:
    rt.unsupported(0x08B2B7D8u, 0x00003D3Cu, "special? not lowered yet"); return;
L_08B2B7DC:
    rt.unsupported(0x08B2B7DCu, 0x00003D7Eu, "special? not lowered yet"); return;
L_08B2B7E0:
    ctx.gpr[7] = (0u + 0u);
    goto L_08B2B7E4;
L_08B2B7E4:
    ctx.execute_vfpu_vminmax(42u, 110u, 117u, 1u, false);
    { const bool signed_ok = ctx.execute_signed_sub(12u, 3u, 18u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B2B7E8u, 0x00726562u); return; } }
    goto L_08B2B7EC;
L_08B2B7EC:
    rt.unsupported(0x08B2B7ECu, 0x7274732Au, "unknown not lowered yet"); return;
L_08B2B7F4:
    ctx.execute_vfpu_vhdp(60u, 101u, 111u, 1u);
    rt.unsupported(0x08B2B7F8u, 0x0000003Eu, "special? not lowered yet"); return;
L_08B2B7FC:
    rt.unsupported(0x08B2B7FCu, 0x206F6F74u, "unknown not lowered yet"); return;
L_08B2B814:
    ctx.gpr[26] = (ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(14948));
    ctx.execute_vfpu_vscl_ct<115u, 32u, 110u, 1u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<114u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    ctx.gpr[14] = (ctx.gpr[1] | ctx.gpr[7]);
    goto L_08B2B828;
L_08B2B828:
    ctx.gpr[12] = (0u | 0u);
    goto L_08B2B82C;
L_08B2B82C:
    ctx.execute_vfpu_vscl_ct<108u, 105u, 110u, 1u>();
    rt.unsupported(0x08B2B830u, 0x6E692073u, "vfpu3 not lowered yet"); return;
L_08B2B840:
    rt.unsupported(0x08B2B840u, 0x69626D61u, "unknown not lowered yet"); return;
L_08B2B878:
    ctx.execute_vfpu_vhdp(109u, 97u, 108u, 1u);
    ctx.execute_vfpu_vscl_ct<111u, 114u, 109u, 1u>();
    rt.unsupported(0x08B2B880u, 0x756E2064u, "unknown not lowered yet"); return;
L_08B2B88C:
    rt.unsupported(0x08B2B88Cu, 0x69666E75u, "unknown not lowered yet"); return;
L_08B2B8A4:
    rt.unsupported(0x08B2B8A4u, 0x69666E75u, "unknown not lowered yet"); return;
L_08B2B8BC:
    rt.unsupported(0x08B2B8BCu, 0x69666E75u, "unknown not lowered yet"); return;
L_08B2B8D0:
    rt.unsupported(0x08B2B8D0u, 0x61637365u, "vfpu0 not lowered yet"); return;
L_08B2B8EC:
    rt.unsupported(0x08B2B8ECu, 0x61766E69u, "vfpu0 not lowered yet"); return;
L_08B2B904:
    rt.unsupported(0x08B2B904u, 0x72616863u, "unknown not lowered yet"); return;
L_08B2B9A0:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B2B9A4u, 0x74206465u, "unknown not lowered yet"); return;
L_08B2B9CC:
    rt.unsupported(0x08B2B9CCu, 0x70737553u, "unknown not lowered yet"); return;
L_08B2B9DC:
    rt.unsupported(0x08B2B9DCu, 0x70737553u, "unknown not lowered yet"); return;
L_08B2B9EC:
    rt.unsupported(0x08B2B9ECu, 0x70737553u, "unknown not lowered yet"); return;
L_08B2B9FC:
    rt.unsupported(0x08B2B9FCu, 0x70737553u, "unknown not lowered yet"); return;
L_08B2BA0C:
    rt.unsupported(0x08B2BA0Cu, 0x70737553u, "unknown not lowered yet"); return;
L_08B2BA1C:
    rt.unsupported(0x08B2BA1Cu, 0x70737553u, "unknown not lowered yet"); return;
L_08B2BA2C:
    ctx.gpr[21] = (ctx.gpr[19] ^ 18275u);
    rt.unsupported(0x08B2BA30u, 0x6E79533Au, "vfpu3 not lowered yet"); return;
L_08B2BA38:
    ctx.gpr[21] = (ctx.gpr[19] ^ 18275u);
    rt.unsupported(0x08B2BA3Cu, 0x6E79533Au, "vfpu3 not lowered yet"); return;
L_08B2BA58:
    rt.unsupported(0x08B2BA58u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B2BA64:
    rt.unsupported(0x08B2BA64u, 0x62206925u, "vfpu0 not lowered yet"); return;
L_08B2BA80:
    rt.unsupported(0x08B2BA80u, 0x61754C1Bu, "vfpu0 not lowered yet"); return;
L_08B2BA84:
    // nop
    rt.unsupported(0x08B2BA88u, 0x75706E69u, "unknown not lowered yet"); return;
L_08B2BC10:
    rt.unsupported(0x08B2BC14u, 0x08AB5C88u, "control flow in delay slot"); return;
L_08B2BD10:
    rt.unsupported(0x08B2BD14u, 0x08AB6860u, "control flow in delay slot"); return;
L_08B2BD40:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B2BD44u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B2BD60:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    goto L_08B2BD68;
L_08B2BD68:
    rt.unsupported(0x08B2BD68u, 0x432A2A2Au, "unknown not lowered yet"); return;
L_08B2BD78:
    rt.unsupported(0x08B2BD78u, 0x203A7265u, "unknown not lowered yet"); return;
L_08B2BD80:
    rt.unsupported(0x08B2BD80u, 0x73616C46u, "unknown not lowered yet"); return;
L_08B2BD88:
    ctx.execute_vfpu_vscl_ct<79u, 114u, 100u, 1u>();
    rt.unsupported(0x08B2BD8Cu, 0x00000072u, "special? not lowered yet"); return;
L_08B2BD90:
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 3u>();
    (void)(0u | 0u);
    goto L_08B2BD98;
L_08B2BD98:
    ctx.execute_vfpu_vcmp_ct<116u, 121u, 1u, 3u>();
    (void)(0u | 0u);
    goto L_08B2BDA0;
L_08B2BDA0:
    ctx.execute_vfpu_compare3(67u, 111u, 108u, 1u, 6u);
    rt.unsupported(0x08B2BDA4u, 0x00007275u, "special? not lowered yet"); return;
L_08B2BDA8:
    rt.unsupported(0x08B2BDA8u, 0x70617257u, "unknown not lowered yet"); return;
L_08B2BDB0:
    rt.unsupported(0x08B2BDB0u, 0x67696C41u, "vfpu1 not lowered yet"); return;
L_08B2BDB8:
    rt.unsupported(0x08B2BDB8u, 0x74786554u, "unknown not lowered yet"); return;
L_08B2BDC0:
    ctx.gpr[13] = (ctx.hi);
    goto L_08B2BDC4;
L_08B2BDC4:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B2BDC8u, 0x00006576u, "special? not lowered yet"); return;
L_08B2BDCC:
    rt.unsupported(0x08B2BDCCu, 0x63675F5Fu, "vfpu0 not lowered yet"); return;
L_08B2BDD4:
    rt.unsupported(0x08B2BDD4u, 0x6E697250u, "vfpu3 not lowered yet"); return;
L_08B2BDE0:
    rt.unsupported(0x08B2BDE0u, 0x74786554u, "unknown not lowered yet"); return;
L_08B2BDEC:
    rt.unsupported(0x08B2BDECu, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B2BE04:
    rt.unsupported(0x08B2BE04u, 0x74786574u, "unknown not lowered yet"); return;
L_08B2BE10:
    rt.unsupported(0x08B2BE10u, 0x4E495250u, "unknown not lowered yet"); return;
L_08B2BE1C:
    // nop
    ctx.gpr[18] = (ctx.gpr[17] < static_cast<std::uint32_t>(11825) ? 1u : 0u);
    rt.unsupported(0x08B2BE24u, 0x00000032u, "special? not lowered yet"); return;
L_08B2BE90:
    rt.unsupported(0x08B2BE90u, 0x69754243u, "unknown not lowered yet"); return;
L_08B2BEA8:
    if (ctx.gpr[26] != ctx.gpr[20]) {
    rt.unsupported(0x08B2BEACu, 0x4F505941u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 18u, 0x08B3D3F8u>(ctx, &aot_mem); return;
    }
    goto L_08B2BEB0;
L_08B2BEB0:
    jump_target = ctx.gpr[2];
    ctx.gpr[9] = (0x08B2BEB8u);
    rt.unsupported(0x08B2BEB4u, 0x41454C43u, "unknown not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B2BEB8u) goto L_08B2BEB8;
    return;
L_08B2BEB4:
    rt.unsupported(0x08B2BEB4u, 0x41454C43u, "unknown not lowered yet"); return;
L_08B2BEB8:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    rt.unsupported(0x08B2BEBCu, 0x4E494F50u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 19u, 0x08B41C04u>(ctx, &aot_mem); return;
    }
    goto L_08B2BEC0;
L_08B2BEC0:
    rt.unsupported(0x08B2BEC0u, 0x00000054u, "special? not lowered yet"); return;
L_08B2BEC4:
    if (ctx.gpr[26] != ctx.gpr[20]) {
    rt.unsupported(0x08B2BEC8u, 0x4F505941u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 54u, 0x08B3E3E8u>(ctx, &aot_mem); return;
    }
    goto L_08B2BECC;
L_08B2BECC:
    jump_target = ctx.gpr[2];
    ctx.gpr[9] = (0x08B2BED4u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B2BED4u) goto L_08B2BED4;
    return;
L_08B2BED0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    goto L_08B2BED4;
L_08B2BED4:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B2BEE0u, 0x45454E20u, "cop1? not lowered yet"); return;
L_08B2BEF0:
    rt.unsupported(0x08B2BEF4u, 0x564F4D20u, "control flow in delay slot"); return;
L_08B2BEF8:
    rt.unsupported(0x08B2BEF8u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B2BF0C:
    rt.unsupported(0x08B2BF0Cu, 0x00000A29u, "special? not lowered yet"); return;
L_08B2BF10:
    rt.unsupported(0x08B2BF10u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08B2BFA8:
    rt.unsupported(0x08B2BFACu, 0x08ABC260u, "control flow in delay slot"); return;
L_08B2BFD4:
    rt.unsupported(0x08B2BFD8u, 0x08ABC52Cu, "control flow in delay slot"); return;
L_08B2BFF4:
    rt.unsupported(0x08B2BFF8u, 0x08ABC644u, "control flow in delay slot"); return;
}

void recomp_unit_0201(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0201_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_201(Runtime &runtime) {
    runtime.register_generated_unit(201u, 0x08B28000u, 16384u, &recomp_unit_0201, &recomp_unit_0201_entry);
    runtime.register_function(0x08B280D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B280F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B281F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B282A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B282CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B282F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2836Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B283F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2851Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28590u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B285C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B285F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28630u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28668u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28698u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2869Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B286BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B286CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28720u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B287ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2899Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28A84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28AB0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28ABCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28B94u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28BF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C28u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C3Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28C60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DBCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DDCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28DF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28F20u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B28FF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29150u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2925Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B292C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B292ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29308u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29334u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29348u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29358u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29368u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29384u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B293A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B293D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29474u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B294E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29500u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2951Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29770u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29818u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B299E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A24u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A38u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A48u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29A60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29C18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29C44u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29D2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B29FACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A008u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A070u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A0ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A21Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A394u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A3CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A400u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A438u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A448u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A450u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A460u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A46Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A470u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A47Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A484u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A48Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A494u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A4ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A514u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A51Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A524u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A528u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A530u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A538u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A540u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A548u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A550u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A558u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A560u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A568u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A570u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A574u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A578u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A580u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A588u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A590u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A598u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A5E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A664u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A6ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A778u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A784u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A78Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A794u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A7FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A814u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A820u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A82Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A834u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A840u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A848u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A850u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A85Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A864u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A878u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A880u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A888u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A890u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A898u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8F0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A8FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A910u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A920u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A924u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A93Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A964u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A968u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2A9F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA14u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA24u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA70u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AA9Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AAC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AAD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AAF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB38u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB4Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB74u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB7Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB94u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AB98u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABB0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABBCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABDCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ABFCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC28u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC38u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC54u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC6Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC8Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AC98u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACCCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACDCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACF4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ACF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD20u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD3Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD44u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD54u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD5Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD8Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD94u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AD98u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADCCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADE0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADE4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2ADFCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE18u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE50u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AE90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AEA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AEB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AEECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF00u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF20u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF30u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF4Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF64u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AF88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFC8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFD0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFD8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFE0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFE8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2AFF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B010u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B01Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B024u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B02Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B034u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B04Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B054u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B068u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B088u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B0F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B138u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B158u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B170u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B188u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B1E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B228u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B280u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B2B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B368u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B370u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B37Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B388u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B39Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B3F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B428u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B43Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B458u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B464u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B470u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B474u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B494u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B4D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B520u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B528u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B52Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B540u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B554u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B568u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B574u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B57Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B584u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B5FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B614u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B630u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B634u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B63Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B648u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B650u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B658u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B660u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B66Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B674u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B67Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B688u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B694u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B69Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6ACu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6B4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6C4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B6F8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B708u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B738u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B73Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B744u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B748u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B74Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B750u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B758u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B75Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B764u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B768u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B774u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B778u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B77Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B784u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B788u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B78Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B790u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B798u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7A8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7B0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7B8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7C0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7C8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7D4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7D8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7E0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7E4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7F4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B7FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B814u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B828u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B82Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B840u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B878u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B88Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8A4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8BCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8D0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B8ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B904u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9A0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9CCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9DCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9ECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2B9FCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA2Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA38u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA58u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA64u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BA84u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BC10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD40u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD60u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD68u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD78u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD80u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD88u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BD98u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDA0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDB0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDCCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDE0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BDECu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE04u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE1Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BE90u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BEA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BEB0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BEB4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BEB8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BEC0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BEC4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BECCu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BED0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BED4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BEF0u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BEF8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF0Cu, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BF10u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFA8u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFD4u, &recomp_unit_0201, "recomp_unit_0201");
    runtime.register_function(0x08B2BFF4u, &recomp_unit_0201, "recomp_unit_0201");
}
} // namespace psprecomp
