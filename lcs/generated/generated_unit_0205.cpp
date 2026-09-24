#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0205[4065] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 18, 19, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 34, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 53, 0,
    54, 0, 55, 56, 57, 0, 58, 59, 60, 61, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73,
    0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0,
    0, 91, 0, 0, 92, 0, 0, 93, 0, 94, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 0, 102,
    0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0,
    113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0,
    0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134,
    0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0,
    145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 155, 0, 156, 157, 0, 0, 0, 158, 0, 159, 160, 161, 162, 0, 0, 0, 0, 0, 163, 0, 0, 164, 165, 166, 0, 167, 0, 168, 0,
    169, 170, 0, 171, 0, 0, 172, 0, 0, 173, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0,
    0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0,
    0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    220,
};
void recomp_unit_0205_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B38030u;
        entry_id = (entry_delta < 16260u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0205[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B38030;
    case 2u: goto L_08B38088;
    case 3u: goto L_08B380BC;
    case 4u: goto L_08B38194;
    case 5u: goto L_08B381B8;
    case 6u: goto L_08B3822C;
    case 7u: goto L_08B38278;
    case 8u: goto L_08B3827C;
    case 9u: goto L_08B382C0;
    case 10u: goto L_08B382EC;
    case 11u: goto L_08B38304;
    case 12u: goto L_08B38580;
    case 13u: goto L_08B38600;
    case 14u: goto L_08B386C8;
    case 15u: goto L_08B386E4;
    case 16u: goto L_08B38770;
    case 17u: goto L_08B38850;
    case 18u: goto L_08B38854;
    case 19u: goto L_08B38858;
    case 20u: goto L_08B38864;
    case 21u: goto L_08B3886C;
    case 22u: goto L_08B38898;
    case 23u: goto L_08B388A0;
    case 24u: goto L_08B388D4;
    case 25u: goto L_08B38998;
    case 26u: goto L_08B38AA8;
    case 27u: goto L_08B38B3C;
    case 28u: goto L_08B38B90;
    case 29u: goto L_08B38B9C;
    case 30u: goto L_08B38BC4;
    case 31u: goto L_08B38BCC;
    case 32u: goto L_08B38BD4;
    case 33u: goto L_08B38BDC;
    case 34u: goto L_08B38BE0;
    case 35u: goto L_08B38BE4;
    case 36u: goto L_08B38BEC;
    case 37u: goto L_08B38BF4;
    case 38u: goto L_08B38BFC;
    case 39u: goto L_08B38C04;
    case 40u: goto L_08B38C0C;
    case 41u: goto L_08B38C14;
    case 42u: goto L_08B38C1C;
    case 43u: goto L_08B38C54;
    case 44u: goto L_08B38C98;
    case 45u: goto L_08B38CA4;
    case 46u: goto L_08B38CCC;
    case 47u: goto L_08B38CE4;
    case 48u: goto L_08B38D6C;
    case 49u: goto L_08B38E5C;
    case 50u: goto L_08B38E6C;
    case 51u: goto L_08B38E9C;
    case 52u: goto L_08B38EA4;
    case 53u: goto L_08B38EA8;
    case 54u: goto L_08B38EB0;
    case 55u: goto L_08B38EB8;
    case 56u: goto L_08B38EBC;
    case 57u: goto L_08B38EC0;
    case 58u: goto L_08B38EC8;
    case 59u: goto L_08B38ECC;
    case 60u: goto L_08B38ED0;
    case 61u: goto L_08B38ED4;
    case 62u: goto L_08B38ED8;
    case 63u: goto L_08B38EE0;
    case 64u: goto L_08B38EE8;
    case 65u: goto L_08B38EF0;
    case 66u: goto L_08B38EF8;
    case 67u: goto L_08B38F00;
    case 68u: goto L_08B38F08;
    case 69u: goto L_08B38F10;
    case 70u: goto L_08B38F94;
    case 71u: goto L_08B38FBC;
    case 72u: goto L_08B39024;
    case 73u: goto L_08B3902C;
    case 74u: goto L_08B39034;
    case 75u: goto L_08B3903C;
    case 76u: goto L_08B39044;
    case 77u: goto L_08B390B4;
    case 78u: goto L_08B390BC;
    case 79u: goto L_08B390DC;
    case 80u: goto L_08B390E4;
    case 81u: goto L_08B390F0;
    case 82u: goto L_08B39108;
    case 83u: goto L_08B39140;
    case 84u: goto L_08B391E0;
    case 85u: goto L_08B391EC;
    case 86u: goto L_08B391F8;
    case 87u: goto L_08B39204;
    case 88u: goto L_08B39210;
    case 89u: goto L_08B3921C;
    case 90u: goto L_08B39228;
    case 91u: goto L_08B39234;
    case 92u: goto L_08B39240;
    case 93u: goto L_08B3924C;
    case 94u: goto L_08B39254;
    case 95u: goto L_08B39258;
    case 96u: goto L_08B39264;
    case 97u: goto L_08B39270;
    case 98u: goto L_08B3927C;
    case 99u: goto L_08B39288;
    case 100u: goto L_08B39294;
    case 101u: goto L_08B392A0;
    case 102u: goto L_08B392AC;
    case 103u: goto L_08B392B8;
    case 104u: goto L_08B392C4;
    case 105u: goto L_08B392D0;
    case 106u: goto L_08B392DC;
    case 107u: goto L_08B392E8;
    case 108u: goto L_08B392F4;
    case 109u: goto L_08B39300;
    case 110u: goto L_08B3930C;
    case 111u: goto L_08B39318;
    case 112u: goto L_08B39324;
    case 113u: goto L_08B39330;
    case 114u: goto L_08B3933C;
    case 115u: goto L_08B39348;
    case 116u: goto L_08B39354;
    case 117u: goto L_08B39360;
    case 118u: goto L_08B3936C;
    case 119u: goto L_08B39378;
    case 120u: goto L_08B39384;
    case 121u: goto L_08B39390;
    case 122u: goto L_08B3939C;
    case 123u: goto L_08B393A8;
    case 124u: goto L_08B393B4;
    case 125u: goto L_08B393C0;
    case 126u: goto L_08B393CC;
    case 127u: goto L_08B393D8;
    case 128u: goto L_08B393E4;
    case 129u: goto L_08B393F0;
    case 130u: goto L_08B393FC;
    case 131u: goto L_08B39408;
    case 132u: goto L_08B39414;
    case 133u: goto L_08B39420;
    case 134u: goto L_08B3942C;
    case 135u: goto L_08B39438;
    case 136u: goto L_08B39444;
    case 137u: goto L_08B39450;
    case 138u: goto L_08B3945C;
    case 139u: goto L_08B39468;
    case 140u: goto L_08B39474;
    case 141u: goto L_08B39480;
    case 142u: goto L_08B3948C;
    case 143u: goto L_08B39498;
    case 144u: goto L_08B394A4;
    case 145u: goto L_08B394B0;
    case 146u: goto L_08B394BC;
    case 147u: goto L_08B394E4;
    case 148u: goto L_08B39514;
    case 149u: goto L_08B39530;
    case 150u: goto L_08B3955C;
    case 151u: goto L_08B39578;
    case 152u: goto L_08B39580;
    case 153u: goto L_08B39590;
    case 154u: goto L_08B395A4;
    case 155u: goto L_08B395BC;
    case 156u: goto L_08B395C4;
    case 157u: goto L_08B395C8;
    case 158u: goto L_08B395D8;
    case 159u: goto L_08B395E0;
    case 160u: goto L_08B395E4;
    case 161u: goto L_08B395E8;
    case 162u: goto L_08B395EC;
    case 163u: goto L_08B39604;
    case 164u: goto L_08B39610;
    case 165u: goto L_08B39614;
    case 166u: goto L_08B39618;
    case 167u: goto L_08B39620;
    case 168u: goto L_08B39628;
    case 169u: goto L_08B39630;
    case 170u: goto L_08B39634;
    case 171u: goto L_08B3963C;
    case 172u: goto L_08B39648;
    case 173u: goto L_08B39654;
    case 174u: goto L_08B39658;
    case 175u: goto L_08B39664;
    case 176u: goto L_08B3967C;
    case 177u: goto L_08B39684;
    case 178u: goto L_08B396A0;
    case 179u: goto L_08B396A8;
    case 180u: goto L_08B396B4;
    case 181u: goto L_08B396BC;
    case 182u: goto L_08B396C4;
    case 183u: goto L_08B396CC;
    case 184u: goto L_08B396DC;
    case 185u: goto L_08B396F4;
    case 186u: goto L_08B39714;
    case 187u: goto L_08B39738;
    case 188u: goto L_08B397C8;
    case 189u: goto L_08B39824;
    case 190u: goto L_08B39830;
    case 191u: goto L_08B39858;
    case 192u: goto L_08B39C70;
    case 193u: goto L_08B39CD8;
    case 194u: goto L_08B39E9C;
    case 195u: goto L_08B39EEC;
    case 196u: goto L_08B39F18;
    case 197u: goto L_08B39F6C;
    case 198u: goto L_08B39F74;
    case 199u: goto L_08B39FC8;
    case 200u: goto L_08B3A010;
    case 201u: goto L_08B3A63C;
    case 202u: goto L_08B3A670;
    case 203u: goto L_08B3A694;
    case 204u: goto L_08B3AAD8;
    case 205u: goto L_08B3AAE4;
    case 206u: goto L_08B3AB34;
    case 207u: goto L_08B3ABBC;
    case 208u: goto L_08B3ACD0;
    case 209u: goto L_08B3B090;
    case 210u: goto L_08B3B098;
    case 211u: goto L_08B3B258;
    case 212u: goto L_08B3B2DC;
    case 213u: goto L_08B3B680;
    case 214u: goto L_08B3BA38;
    case 215u: goto L_08B3BC78;
    case 216u: goto L_08B3BDF8;
    case 217u: goto L_08B3BE00;
    case 218u: goto L_08B3BE40;
    case 219u: goto L_08B3BE4C;
    case 220u: goto L_08B3BFB0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B38030:
    rt.unsupported(0x08B38034u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C5B730u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B38088:
    rt.unsupported(0x08B3808Cu, 0x08B16DF0u, "control flow in delay slot"); return;
L_08B380BC:
    rt.unsupported(0x08B380C0u, 0x08B16E04u, "control flow in delay slot"); return;
L_08B38194:
    rt.unsupported(0x08B38198u, 0x08B16D28u, "control flow in delay slot"); return;
L_08B381B8:
    rt.unsupported(0x08B381B8u, 0x00000005u, "special? not lowered yet"); return;
L_08B3822C:
    rt.unsupported(0x08B3822Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B38278:
    (void)(0u << (0u & 31u));
    goto L_08B3827C;
L_08B3827C:
    rt.unsupported(0x08B38280u, 0x08B36F9Cu, "control flow in delay slot"); return;
L_08B382C0:
    (void)(0u << (0u & 31u));
    rt.unsupported(0x08B382C8u, 0x08B36F9Cu, "control flow in delay slot"); return;
L_08B382EC:
    rt.unsupported(0x08B382ECu, 0x00000001u, "special? not lowered yet"); return;
L_08B38304:
    rt.unsupported(0x08B38304u, 0x00000001u, "special? not lowered yet"); return;
L_08B38580:
    rt.unsupported(0x08B38584u, 0x08B16FE8u, "control flow in delay slot"); return;
L_08B38600:
    rt.unsupported(0x08B38604u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C5C040u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B386C8:
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    // nop
    // nop
    rt.unsupported(0x08B386DCu, 0x40000000u, "unknown not lowered yet"); return;
L_08B386E4:
    // nop
    rt.unsupported(0x08B386E8u, 0x00020001u, "special? not lowered yet"); return;
L_08B38770:
    (void)(0u << 16u);
    (void)(0u << 16u);
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    // nop
    ctx.gpr[12] = (52429u << 16u);
    // nop
    (void)(0u << 16u);
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    ctx.gpr[12] = (52429u << 16u);
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    (void)(0u << 16u);
    (void)(0u << 16u);
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    // nop
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.execute_vfpu_vminmax(0u, 1u, 85u, 1u, false);
    if (ctx.gpr[27] == ctx.gpr[15]) {
    rt.unsupported(0x08B3884Cu, 0x49616D65u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 107u, 0x08B4ADDCu>(ctx, &aot_mem); return;
    }
    goto L_08B38850;
L_08B38850:
    rt.unsupported(0x08B38850u, 0x0074696Eu, "special? not lowered yet"); return;
L_08B38854:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<109u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<95u, 1u>(vfpu_d); }
    goto L_08B38858;
L_08B38858:
    ctx.execute_vfpu_vcmp_ct<99u, 97u, 1u, 15u>();
    rt.unsupported(0x08B3885Cu, 0x6361626Cu, "vfpu0 not lowered yet"); return;
L_08B38864:
    if (ctx.gpr[19] == ctx.gpr[4]) {
    rt.unsupported(0x08B38868u, 0x79727465u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 20u, 0x08B53DBCu>(ctx, &aot_mem); return;
    }
    goto L_08B3886C;
L_08B3886C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<82u, 1u>(vfpu_d); }
    rt.unsupported(0x08B38870u, 0x6E797341u, "vfpu3 not lowered yet"); return;
L_08B38898:
    // nop
    // nop
    ctx.pc = 0x024DE6B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B388A0:
    // nop
    rt.unsupported(0x08B388A8u, 0x08B01830u, "control flow in delay slot"); return;
L_08B388D4:
    rt.unsupported(0x08B388D4u, 0x0000009Cu, "special? not lowered yet"); return;
L_08B38998:
    rt.unsupported(0x08B38998u, 0x000000CEu, "special? not lowered yet"); return;
L_08B38AA8:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B38B3C;
L_08B38B3C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(ctx.gpr[26] << 0u);
    rt.unsupported(0x08B38B60u, 0x009600FAu, "special? not lowered yet"); return;
L_08B38B90:
    // nop
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(-20257), ctx.gpr[8]));
    // nop
    goto L_08B38B9C;
L_08B38B9C:
    (void)(ctx.hi);
    (void)(ctx.hi);
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B38BB8u, 0x40666666u, "unknown not lowered yet"); return;
L_08B38BC4:
    // nop
    // nop
    goto L_08B38BCC;
L_08B38BCC:
    // nop
    // nop
    goto L_08B38BD4;
L_08B38BD4:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B38BDC;
L_08B38BDC:
    // nop
    goto L_08B38BE0;
L_08B38BE0:
    // nop
    goto L_08B38BE4;
L_08B38BE4:
    rt.unsupported(0x08B38BE8u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x02540410u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B38BEC:
    rt.unsupported(0x08B38BECu, 0x42480000u, "unknown not lowered yet"); return;
L_08B38BF4:
    // nop
    // nop
    goto L_08B38BFC;
L_08B38BFC:
    // nop
    // nop
    goto L_08B38C04;
L_08B38C04:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B38C0C;
L_08B38C0C:
    // nop
    // nop
    goto L_08B38C14;
L_08B38C14:
    // nop
    // nop
    goto L_08B38C1C;
L_08B38C1C:
    ctx.gpr[1] = (18350u << 16u);
    // nop
    // nop
    rt.unsupported(0x08B38C28u, 0x40666666u, "unknown not lowered yet"); return;
L_08B38C54:
    rt.unsupported(0x08B38C58u, 0x08961D24u, "control flow in delay slot"); return;
L_08B38C98:
    // nop
    // nop
    // nop
    ctx.pc = 0x02560AF0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B38CA4:
    // nop
    rt.unsupported(0x08B38CACu, 0x08B02C2Cu, "control flow in delay slot"); return;
L_08B38CCC:
    rt.unsupported(0x08B38CD0u, 0x08963280u, "control flow in delay slot"); return;
L_08B38CE4:
    rt.unsupported(0x08B38CE8u, 0x08962AF0u, "control flow in delay slot"); return;
L_08B38D6C:
    rt.unsupported(0x08B38D70u, 0x08963998u, "control flow in delay slot"); return;
L_08B38E5C:
    rt.unsupported(0x08B38E5Cu, 0x42480000u, "unknown not lowered yet"); return;
L_08B38E6C:
    // nop
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    // nop
    rt.unsupported(0x08B38E80u, 0x40666666u, "unknown not lowered yet"); return;
L_08B38E9C:
    // nop
    rt.unsupported(0x08B38EA4u, 0x08966010u, "control flow in delay slot"); return;
L_08B38EA4:
    rt.unsupported(0x08B38EA8u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x02598040u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B38EA8:
    rt.unsupported(0x08B38EA8u, 0x40666666u, "unknown not lowered yet"); return;
L_08B38EB0:
    // nop
    // nop
    goto L_08B38EB8;
L_08B38EB8:
    // nop
    goto L_08B38EBC;
L_08B38EBC:
    // nop
    goto L_08B38EC0;
L_08B38EC0:
    // nop
    ctx.gpr[3] = (ctx.gpr[24] ^ 4719u);
    goto L_08B38EC8;
L_08B38EC8:
    // nop
    goto L_08B38ECC;
L_08B38ECC:
    // nop
    goto L_08B38ED0;
L_08B38ED0:
    // nop
    goto L_08B38ED4;
L_08B38ED4:
    // nop
    goto L_08B38ED8;
L_08B38ED8:
    // nop
    // nop
    goto L_08B38EE0;
L_08B38EE0:
    // nop
    // nop
    goto L_08B38EE8;
L_08B38EE8:
    // nop
    // nop
    goto L_08B38EF0;
L_08B38EF0:
    // nop
    // nop
    goto L_08B38EF8;
L_08B38EF8:
    // nop
    // nop
    goto L_08B38F00;
L_08B38F00:
    // nop
    // nop
    goto L_08B38F08;
L_08B38F08:
    // nop
    // nop
    goto L_08B38F10;
L_08B38F10:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    // nop
    (void)(ctx.hi);
    { const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    (void)(0u << 1u);
    (void)(0u << 1u);
    // nop
    // nop
    rt.unsupported(0x08B38F70u, 0x40666666u, "unknown not lowered yet"); return;
L_08B38F94:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    // nop
    // nop
    goto L_08B38FBC;
L_08B38FBC:
    // nop
    rt.unsupported(0x08B38FC4u, 0x08B5E5ACu, "control flow in delay slot"); return;
L_08B39024:
    rt.unsupported(0x08B39028u, 0x08B5E610u, "control flow in delay slot"); return;
L_08B3902C:
    rt.unsupported(0x08B39030u, 0x08B5E618u, "control flow in delay slot"); return;
L_08B39034:
    rt.unsupported(0x08B39038u, 0x08B5E620u, "control flow in delay slot"); return;
L_08B3903C:
    rt.unsupported(0x08B39040u, 0x08B5E628u, "control flow in delay slot"); return;
L_08B39044:
    rt.unsupported(0x08B39048u, 0x08B5E630u, "control flow in delay slot"); return;
L_08B390B4:
    rt.unsupported(0x08B390B8u, 0x08B18D78u, "control flow in delay slot"); return;
L_08B390BC:
    rt.unsupported(0x08B390C0u, 0x08B18D88u, "control flow in delay slot"); return;
L_08B390DC:
    rt.unsupported(0x08B390E0u, 0x08B18DC8u, "control flow in delay slot"); return;
L_08B390E4:
    rt.unsupported(0x08B390E8u, 0x08B18DD8u, "control flow in delay slot"); return;
L_08B390F0:
    rt.unsupported(0x08B390F4u, 0x08B18DF0u, "control flow in delay slot"); return;
L_08B39108:
    rt.unsupported(0x08B3910Cu, 0x08B18E20u, "control flow in delay slot"); return;
L_08B39140:
    rt.unsupported(0x08B39144u, 0x08B18E90u, "control flow in delay slot"); return;
L_08B391E0:
    // nop
    rt.unsupported(0x08B391E8u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B391EC:
    // nop
    rt.unsupported(0x08B391F4u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B391F8:
    // nop
    rt.unsupported(0x08B39200u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39204:
    // nop
    rt.unsupported(0x08B3920Cu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39210:
    // nop
    rt.unsupported(0x08B39218u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B3921C:
    // nop
    rt.unsupported(0x08B39224u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39228:
    // nop
    rt.unsupported(0x08B39230u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39234:
    // nop
    rt.unsupported(0x08B3923Cu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39240:
    // nop
    rt.unsupported(0x08B39248u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B3924C:
    // nop
    rt.unsupported(0x08B39254u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39254:
    // nop
    ctx.pc = 0x02B4DE30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B39258:
    // nop
    rt.unsupported(0x08B39260u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39264:
    // nop
    rt.unsupported(0x08B3926Cu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39270:
    // nop
    rt.unsupported(0x08B39278u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B3927C:
    // nop
    rt.unsupported(0x08B39284u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39288:
    // nop
    rt.unsupported(0x08B39290u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39294:
    // nop
    rt.unsupported(0x08B3929Cu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B392A0:
    // nop
    rt.unsupported(0x08B392A8u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B392AC:
    // nop
    rt.unsupported(0x08B392B4u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B392B8:
    // nop
    rt.unsupported(0x08B392C0u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B392C4:
    // nop
    rt.unsupported(0x08B392CCu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B392D0:
    // nop
    rt.unsupported(0x08B392D8u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B392DC:
    // nop
    rt.unsupported(0x08B392E4u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B392E8:
    // nop
    rt.unsupported(0x08B392F0u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B392F4:
    // nop
    rt.unsupported(0x08B392FCu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39300:
    // nop
    rt.unsupported(0x08B39308u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B3930C:
    // nop
    rt.unsupported(0x08B39314u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39318:
    // nop
    rt.unsupported(0x08B39320u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39324:
    // nop
    rt.unsupported(0x08B3932Cu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39330:
    // nop
    rt.unsupported(0x08B39338u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B3933C:
    // nop
    rt.unsupported(0x08B39344u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39348:
    // nop
    rt.unsupported(0x08B39350u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39354:
    // nop
    rt.unsupported(0x08B3935Cu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39360:
    // nop
    rt.unsupported(0x08B39368u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B3936C:
    // nop
    rt.unsupported(0x08B39374u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39378:
    // nop
    rt.unsupported(0x08B39380u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39384:
    // nop
    rt.unsupported(0x08B3938Cu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39390:
    // nop
    rt.unsupported(0x08B39398u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B3939C:
    // nop
    rt.unsupported(0x08B393A4u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B393A8:
    // nop
    rt.unsupported(0x08B393B0u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B393B4:
    // nop
    rt.unsupported(0x08B393BCu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B393C0:
    // nop
    rt.unsupported(0x08B393C8u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B393CC:
    // nop
    rt.unsupported(0x08B393D4u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B393D8:
    // nop
    rt.unsupported(0x08B393E0u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B393E4:
    // nop
    rt.unsupported(0x08B393ECu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B393F0:
    // nop
    rt.unsupported(0x08B393F8u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B393FC:
    // nop
    rt.unsupported(0x08B39404u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39408:
    // nop
    rt.unsupported(0x08B39410u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39414:
    // nop
    rt.unsupported(0x08B3941Cu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39420:
    // nop
    rt.unsupported(0x08B39428u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B3942C:
    // nop
    rt.unsupported(0x08B39434u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39438:
    // nop
    rt.unsupported(0x08B39440u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39444:
    // nop
    rt.unsupported(0x08B3944Cu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39450:
    // nop
    rt.unsupported(0x08B39458u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B3945C:
    // nop
    rt.unsupported(0x08B39464u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39468:
    // nop
    rt.unsupported(0x08B39470u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39474:
    // nop
    rt.unsupported(0x08B3947Cu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39480:
    // nop
    rt.unsupported(0x08B39488u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B3948C:
    // nop
    rt.unsupported(0x08B39494u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B39498:
    // nop
    rt.unsupported(0x08B394A0u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B394A4:
    // nop
    rt.unsupported(0x08B394ACu, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B394B0:
    // nop
    rt.unsupported(0x08B394B8u, 0x08AD378Cu, "control flow in delay slot"); return;
L_08B394BC:
    // nop
    rt.unsupported(0x08B394C4u, 0x08B02CD8u, "control flow in delay slot"); return;
L_08B394E4:
    // nop
    rt.unsupported(0x08B394E8u, 0x40666666u, "unknown not lowered yet"); return;
L_08B39514:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B39530;
L_08B39530:
    // nop
    rt.unsupported(0x08B39538u, 0x08AFB17Cu, "control flow in delay slot"); return;
L_08B3955C:
    ctx.gpr[13] = (ctx.gpr[26] & 13876u);
    ctx.gpr[28] = (23096u << 16u);
    rt.unsupported(0x08B39564u, 0x62363400u, "vfpu0 not lowered yet"); return;
L_08B39578:
    ctx.gpr[19] = (ctx.gpr[1] ^ 24118u);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[1]) * static_cast<std::uint64_t>(ctx.gpr[28]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    goto L_08B39580;
L_08B39580:
    ctx.gpr[2] = (ctx.gpr[27] & 22597u);
    ctx.gpr[27] = (23097u << 16u);
    if (static_cast<std::int32_t>(ctx.gpr[10]) > 0) {
    ctx.gpr[9] = (ctx.gpr[26] ^ 14643u);
        (void)rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 53u, 0x08B4FD8Cu>(ctx, &aot_mem); return;
    }
    goto L_08B39590;
L_08B39590:
    ctx.gpr[20] = (ctx.gpr[17] | 60u);
    rt.unsupported(0x08B39594u, 0x495C455Du, "cop2/vfpu not lowered yet"); return;
L_08B395A4:
    rt.unsupported(0x08B395A4u, 0x454D3634u, "cop1? not lowered yet"); return;
L_08B395BC:
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[18] = (ctx.gpr[1] ^ 23624u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 6u, 0x08B486ACu>(ctx, &aot_mem); return;
    }
    goto L_08B395C4;
L_08B395C4:
    ctx.gpr[7] = (ctx.lo);
    goto L_08B395C8;
L_08B395C8:
    ctx.gpr[28] = (ctx.gpr[18] & 23893u);
    ctx.gpr[27] = (21048u << 16u);
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.gpr[18] = (ctx.gpr[26] ^ 14386u);
        (void)rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 50u, 0x08B4EDD4u>(ctx, &aot_mem); return;
    }
    goto L_08B395D8;
L_08B395D8:
    if (ctx.gpr[10] == ctx.gpr[21]) {
    ctx.gpr[24] = (ctx.gpr[1] ^ 12860u);
        goto L_08B396CC;
    }
    goto L_08B395E0;
L_08B395E0:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[18] = (ctx.gpr[1] ^ 15450u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 7u, 0x08B486D0u>(ctx, &aot_mem); return;
    }
    goto L_08B395E8;
L_08B395E4:
    ctx.gpr[18] = (ctx.gpr[1] ^ 15450u);
    goto L_08B395E8;
L_08B395E8:
    rt.unsupported(0x08B395E8u, 0x003C3B38u, "special? not lowered yet"); return;
L_08B395EC:
    ctx.gpr[27] = (ctx.gpr[25] & 22341u);
    ctx.gpr[28] = (14137u << 16u);
    ctx.gpr[9] = (ctx.gpr[26] ^ 23040u);
    ctx.gpr[23] = (14643u << 16u);
    rt.unsupported(0x08B39600u, 0x5E39544Du, "control flow in delay slot"); return;
L_08B39604:
    rt.unsupported(0x08B39604u, 0x46003D5Eu, "cop1.s? not lowered yet"); return;
L_08B39610:
    if (ctx.gpr[10] != ctx.gpr[13]) {
    ctx.gpr[31] = (21049u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 130u, 0x08B4BB7Cu>(ctx, &aot_mem); return;
    }
    goto L_08B39618;
L_08B39614:
    ctx.gpr[31] = (21049u << 16u);
    goto L_08B39618;
L_08B39618:
    rt.unsupported(0x08B3961Cu, 0x5F583955u, "control flow in delay slot"); return;
L_08B39620:
    rt.unsupported(0x08B39624u, 0x5839595Du, "control flow in delay slot"); return;
L_08B39628:
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[25] = (ctx.gpr[10] ^ 19802u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 10u, 0x08B48764u>(ctx, &aot_mem); return;
    }
    goto L_08B39630;
L_08B39630:
    ctx.gpr[9] = (ctx.lo);
    goto L_08B39634;
L_08B39634:
    rt.unsupported(0x08B39638u, 0x5F5E385Au, "control flow in delay slot"); return;
L_08B3963C:
    ctx.gpr[8] = (ctx.gpr[26] ^ 17664u);
    rt.unsupported(0x08B39644u, 0x5956005Eu, "control flow in delay slot"); return;
L_08B39648:
    ctx.gpr[10] = (ctx.gpr[2] ^ 17467u);
    rt.unsupported(0x08B39650u, 0x5B553B58u, "control flow in delay slot"); return;
L_08B39654:
    rt.unsupported(0x08B39654u, 0x004E4D38u, "special? not lowered yet"); return;
L_08B39658:
    rt.unsupported(0x08B39658u, 0x445F3633u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B39660u, 0x5F363300u, "control flow in delay slot"); return;
L_08B39664:
    rt.unsupported(0x08B39664u, 0x624A4A59u, "vfpu0 not lowered yet"); return;
L_08B3967C:
    if (ctx.gpr[10] != ctx.gpr[13]) {
    rt.unsupported(0x08B39680u, 0x4F4E4A5Bu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 31u, 0x08B46F50u>(ctx, &aot_mem); return;
    }
    goto L_08B39684;
L_08B39684:
    rt.unsupported(0x08B39684u, 0x62363400u, "vfpu0 not lowered yet"); return;
L_08B396A0:
    if (ctx.gpr[2] != ctx.gpr[30]) {
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<91u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<95u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<90u, 1u>(vfpu_d); }
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 36u, 0x08B47370u>(ctx, &aot_mem); return;
    }
    goto L_08B396A8;
L_08B396A8:
    rt.unsupported(0x08B396A8u, 0x62363400u, "vfpu0 not lowered yet"); return;
L_08B396B4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) <= 0) {
    (void)(0u | 24671u);
        (void)rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 52u, 0x08B4FC2Cu>(ctx, &aot_mem); return;
    }
    goto L_08B396BC;
L_08B396BC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) <= 0) {
    { const std::uint32_t dividend = ctx.gpr[3]; ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; }
        (void)rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 19u, 0x08B4CB98u>(ctx, &aot_mem); return;
    }
    goto L_08B396C4;
L_08B396C4:
    if (ctx.gpr[27] == ctx.gpr[2]) {
    rt.unsupported(0x08B396C8u, 0x4E5C5E5Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 32u, 0x08B4701Cu>(ctx, &aot_mem); return;
    }
    goto L_08B396CC;
L_08B396CC:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[25] = (ctx.gpr[25] | 22094u);
    if (ctx.gpr[16] != 0u) {
    rt.unsupported(0x08B396D8u, 0x4B453C37u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 13u, 0x08B487C8u>(ctx, &aot_mem); return;
    }
    goto L_08B396DC;
L_08B396DC:
    rt.unsupported(0x08B396DCu, 0x005F3C37u, "special? not lowered yet"); return;
L_08B396F4:
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    // nop
    // nop
    goto L_08B39714;
L_08B39714:
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[22] = (ctx.gpr[27] & 20545u);
    // nop
    rt.unsupported(0x08B39730u, 0x40666666u, "unknown not lowered yet"); return;
L_08B39738:
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B39760u, 0x40666666u, "unknown not lowered yet"); return;
L_08B397C8:
    // nop
    rt.unsupported(0x08B397D0u, 0x08B02F24u, "control flow in delay slot"); return;
L_08B39824:
    // nop
    rt.unsupported(0x08B3982Cu, 0x08806498u, "control flow in delay slot"); return;
L_08B39830:
    // nop
    rt.unsupported(0x08B39834u, 0x77073096u, "unknown not lowered yet"); return;
L_08B39858:
    rt.unsupported(0x08B39858u, 0xE0D5E91Eu, "unknown not lowered yet"); return;
L_08B39C70:
    rt.unsupported(0x08B39C74u, 0x08B1A718u, "control flow in delay slot"); return;
L_08B39CD8:
    rt.unsupported(0x08B39CDCu, 0x08B1A7F4u, "control flow in delay slot"); return;
L_08B39E9C:
    // nop
    ctx.pc = 0x02C69C60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B39EEC:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08B39EF4u, 0xCFCFFFFFu, "unknown not lowered yet"); return;
L_08B39F18:
    // nop
    // nop
    // nop
    ctx.pc = 0x02621550u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B39F6C:
    // nop
    // nop
    goto L_08B39F74;
L_08B39F74:
    rt.unsupported(0x08B39F78u, 0x0899721Cu, "control flow in delay slot"); return;
L_08B39FC8:
    // nop
    // nop
    rt.unsupported(0x08B39FD0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B3A010:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3A63C;
L_08B3A63C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3A670;
L_08B3A670:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3A694;
L_08B3A694:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3AAD8;
L_08B3AAD8:
    // nop
    // nop
    // nop
    goto L_08B3AAE4;
L_08B3AAE4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3AB34;
L_08B3AB34:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3ABBC;
L_08B3ABBC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3ACD0;
L_08B3ACD0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3B090;
L_08B3B090:
    // nop
    // nop
    goto L_08B3B098;
L_08B3B098:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3B258;
L_08B3B258:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3B2DC;
L_08B3B2DC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3B680;
L_08B3B680:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3BA38;
L_08B3BA38:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3BC78;
L_08B3BC78:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3BDF8;
L_08B3BDF8:
    // nop
    // nop
    goto L_08B3BE00;
L_08B3BE00:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3BE40;
L_08B3BE40:
    // nop
    // nop
    // nop
    goto L_08B3BE4C;
L_08B3BE4C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3BFB0;
L_08B3BFB0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x08B3C000u; return;
}

void recomp_unit_0205(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0205_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_205(Runtime &runtime) {
    runtime.register_generated_unit(205u, 0x08B38000u, 16384u, &recomp_unit_0205, &recomp_unit_0205_entry);
    runtime.register_function(0x08B38030u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38088u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B380BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38194u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B381B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3822Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38278u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3827Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B382C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B382ECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38304u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38580u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38600u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B386C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B386E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38770u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38850u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38854u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38858u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38864u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3886Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38898u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B388A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B388D4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38998u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38AA8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38B3Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38B90u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38B9Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BC4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BCCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BD4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BDCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BE0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BE4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BF4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38BFCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C04u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C0Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C14u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C1Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C54u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38C98u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38CA4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38CCCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38CE4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38D6Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E5Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E6Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38E9Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EA4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EA8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EB0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EB8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EBCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EC0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EC8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38ECCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38ED0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38ED4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38ED8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EE0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EE8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EF0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38EF8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F00u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F08u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F10u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38F94u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B38FBCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39024u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3902Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39034u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3903Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39044u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B390F0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39108u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39140u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B391E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B391ECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B391F8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39204u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39210u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3921Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39228u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39234u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39240u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3924Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39254u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39258u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39264u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39270u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3927Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39288u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39294u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392ACu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392B8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392D0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B392F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39300u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3930Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39318u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39324u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39330u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3933Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39348u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39354u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39360u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3936Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39378u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39384u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39390u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3939Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393C0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393CCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393F0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B393FCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39408u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39414u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39420u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3942Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39438u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39444u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39450u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3945Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39468u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39474u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39480u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3948Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39498u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394B0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B394E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39514u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39530u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3955Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39578u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39580u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39590u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395A4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395D8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395E0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395E4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395E8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B395ECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39604u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39610u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39614u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39618u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39620u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39628u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39630u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39634u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3963Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39648u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39654u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39658u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39664u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3967Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39684u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396A0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396A8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396B4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396BCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396C4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396CCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B396F4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39714u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39738u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B397C8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39824u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39830u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39858u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39C70u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39CD8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39E9Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39EECu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39F18u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39F6Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39F74u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B39FC8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A010u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A63Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A670u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3A694u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AAD8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AAE4u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3AB34u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ABBCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3ACD0u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B090u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B098u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B258u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B2DCu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3B680u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BA38u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BC78u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BDF8u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BE00u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BE40u, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BE4Cu, &recomp_unit_0205, "recomp_unit_0205");
    runtime.register_function(0x08B3BFB0u, &recomp_unit_0205, "recomp_unit_0205");
}
} // namespace psprecomp
