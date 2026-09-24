#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0203[4084] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0,
    52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 56, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 87, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 96, 0, 0, 97, 0, 0, 0, 98, 0, 99, 100, 0, 0, 0, 101, 0, 102, 103, 0, 0, 0, 104,
    0, 0, 105, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0,
    0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 120, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0,
    0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 131, 0, 0, 132, 133, 0, 0, 134, 0, 0,
    0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0,
    145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0,
    154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163,
    0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 174, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 178, 179, 0, 0,
    0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 183, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 201, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 206, 207, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0,
    214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 228, 229, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 253, 254, 0, 0,
    255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283,
    0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0,
    0, 288, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 292, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 302, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 336, 0, 0, 337, 0, 0, 338, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0,
    0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0,
    0, 352, 0, 0, 0, 353, 354, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0,
    0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 378, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 383, 384, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 397, 0, 0, 0, 0, 0, 0, 0,
    398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0,
    0, 0, 0, 0, 404, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 409, 0, 0, 0, 410, 0, 411, 0, 0, 0,
    0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0,
    0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0,
    430, 0, 431, 0, 432, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435,
};
void recomp_unit_0203_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B30000u;
        entry_id = (entry_delta < 16336u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0203[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B30000;
    case 2u: goto L_08B3000C;
    case 3u: goto L_08B30044;
    case 4u: goto L_08B3004C;
    case 5u: goto L_08B3007C;
    case 6u: goto L_08B30080;
    case 7u: goto L_08B30090;
    case 8u: goto L_08B300D4;
    case 9u: goto L_08B300F4;
    case 10u: goto L_08B30118;
    case 11u: goto L_08B30150;
    case 12u: goto L_08B30164;
    case 13u: goto L_08B301A0;
    case 14u: goto L_08B301B0;
    case 15u: goto L_08B301C0;
    case 16u: goto L_08B301DC;
    case 17u: goto L_08B30210;
    case 18u: goto L_08B30280;
    case 19u: goto L_08B302D0;
    case 20u: goto L_08B302DC;
    case 21u: goto L_08B30300;
    case 22u: goto L_08B30320;
    case 23u: goto L_08B30340;
    case 24u: goto L_08B30358;
    case 25u: goto L_08B30370;
    case 26u: goto L_08B30388;
    case 27u: goto L_08B303A8;
    case 28u: goto L_08B303C8;
    case 29u: goto L_08B303D8;
    case 30u: goto L_08B303E8;
    case 31u: goto L_08B30408;
    case 32u: goto L_08B30410;
    case 33u: goto L_08B30428;
    case 34u: goto L_08B30448;
    case 35u: goto L_08B30468;
    case 36u: goto L_08B30480;
    case 37u: goto L_08B30488;
    case 38u: goto L_08B304A8;
    case 39u: goto L_08B304AC;
    case 40u: goto L_08B304C8;
    case 41u: goto L_08B304E8;
    case 42u: goto L_08B30508;
    case 43u: goto L_08B30550;
    case 44u: goto L_08B30568;
    case 45u: goto L_08B30594;
    case 46u: goto L_08B305A8;
    case 47u: goto L_08B305D8;
    case 48u: goto L_08B305E0;
    case 49u: goto L_08B305E8;
    case 50u: goto L_08B305F0;
    case 51u: goto L_08B305F8;
    case 52u: goto L_08B30600;
    case 53u: goto L_08B30608;
    case 54u: goto L_08B30610;
    case 55u: goto L_08B30654;
    case 56u: goto L_08B30658;
    case 57u: goto L_08B3065C;
    case 58u: goto L_08B30728;
    case 59u: goto L_08B30758;
    case 60u: goto L_08B3075C;
    case 61u: goto L_08B30788;
    case 62u: goto L_08B307B0;
    case 63u: goto L_08B307B8;
    case 64u: goto L_08B307E8;
    case 65u: goto L_08B30874;
    case 66u: goto L_08B3087C;
    case 67u: goto L_08B30910;
    case 68u: goto L_08B309A4;
    case 69u: goto L_08B309C8;
    case 70u: goto L_08B309EC;
    case 71u: goto L_08B30A08;
    case 72u: goto L_08B30A18;
    case 73u: goto L_08B30A40;
    case 74u: goto L_08B30A9C;
    case 75u: goto L_08B30AA8;
    case 76u: goto L_08B30AC0;
    case 77u: goto L_08B30AE4;
    case 78u: goto L_08B30B00;
    case 79u: goto L_08B30B08;
    case 80u: goto L_08B30B2C;
    case 81u: goto L_08B30B58;
    case 82u: goto L_08B30B60;
    case 83u: goto L_08B30BB8;
    case 84u: goto L_08B30BBC;
    case 85u: goto L_08B30C40;
    case 86u: goto L_08B30CF0;
    case 87u: goto L_08B30CF4;
    case 88u: goto L_08B30DA4;
    case 89u: goto L_08B30DC4;
    case 90u: goto L_08B30DCC;
    case 91u: goto L_08B30DFC;
    case 92u: goto L_08B30E1C;
    case 93u: goto L_08B30E38;
    case 94u: goto L_08B30EB8;
    case 95u: goto L_08B30F24;
    case 96u: goto L_08B30F28;
    case 97u: goto L_08B30F34;
    case 98u: goto L_08B30F44;
    case 99u: goto L_08B30F4C;
    case 100u: goto L_08B30F50;
    case 101u: goto L_08B30F60;
    case 102u: goto L_08B30F68;
    case 103u: goto L_08B30F6C;
    case 104u: goto L_08B30F7C;
    case 105u: goto L_08B30F88;
    case 106u: goto L_08B30F98;
    case 107u: goto L_08B30FA4;
    case 108u: goto L_08B30FB0;
    case 109u: goto L_08B30FB4;
    case 110u: goto L_08B30FC0;
    case 111u: goto L_08B30FD0;
    case 112u: goto L_08B30FDC;
    case 113u: goto L_08B30FEC;
    case 114u: goto L_08B30FF8;
    case 115u: goto L_08B31008;
    case 116u: goto L_08B31014;
    case 117u: goto L_08B31024;
    case 118u: goto L_08B31030;
    case 119u: goto L_08B31040;
    case 120u: goto L_08B31048;
    case 121u: goto L_08B3104C;
    case 122u: goto L_08B3105C;
    case 123u: goto L_08B31068;
    case 124u: goto L_08B31078;
    case 125u: goto L_08B31084;
    case 126u: goto L_08B31094;
    case 127u: goto L_08B310A0;
    case 128u: goto L_08B310B0;
    case 129u: goto L_08B310BC;
    case 130u: goto L_08B310CC;
    case 131u: goto L_08B310D8;
    case 132u: goto L_08B310E4;
    case 133u: goto L_08B310E8;
    case 134u: goto L_08B310F4;
    case 135u: goto L_08B31104;
    case 136u: goto L_08B31110;
    case 137u: goto L_08B31120;
    case 138u: goto L_08B3112C;
    case 139u: goto L_08B3113C;
    case 140u: goto L_08B31148;
    case 141u: goto L_08B3114C;
    case 142u: goto L_08B31158;
    case 143u: goto L_08B31164;
    case 144u: goto L_08B31174;
    case 145u: goto L_08B31180;
    case 146u: goto L_08B31190;
    case 147u: goto L_08B3119C;
    case 148u: goto L_08B311AC;
    case 149u: goto L_08B311B8;
    case 150u: goto L_08B311C8;
    case 151u: goto L_08B311D4;
    case 152u: goto L_08B311E4;
    case 153u: goto L_08B311F0;
    case 154u: goto L_08B31200;
    case 155u: goto L_08B3120C;
    case 156u: goto L_08B3121C;
    case 157u: goto L_08B31228;
    case 158u: goto L_08B31238;
    case 159u: goto L_08B31244;
    case 160u: goto L_08B31254;
    case 161u: goto L_08B31260;
    case 162u: goto L_08B31270;
    case 163u: goto L_08B3127C;
    case 164u: goto L_08B3128C;
    case 165u: goto L_08B31298;
    case 166u: goto L_08B312A8;
    case 167u: goto L_08B312B4;
    case 168u: goto L_08B312C4;
    case 169u: goto L_08B312D0;
    case 170u: goto L_08B312DC;
    case 171u: goto L_08B312E0;
    case 172u: goto L_08B31350;
    case 173u: goto L_08B31384;
    case 174u: goto L_08B31398;
    case 175u: goto L_08B3139C;
    case 176u: goto L_08B313B8;
    case 177u: goto L_08B313EC;
    case 178u: goto L_08B313F0;
    case 179u: goto L_08B313F4;
    case 180u: goto L_08B31404;
    case 181u: goto L_08B31414;
    case 182u: goto L_08B31424;
    case 183u: goto L_08B31428;
    case 184u: goto L_08B31434;
    case 185u: goto L_08B3143C;
    case 186u: goto L_08B31444;
    case 187u: goto L_08B31454;
    case 188u: goto L_08B31460;
    case 189u: goto L_08B31498;
    case 190u: goto L_08B314BC;
    case 191u: goto L_08B314C8;
    case 192u: goto L_08B314F4;
    case 193u: goto L_08B31510;
    case 194u: goto L_08B31520;
    case 195u: goto L_08B3152C;
    case 196u: goto L_08B3153C;
    case 197u: goto L_08B31570;
    case 198u: goto L_08B31588;
    case 199u: goto L_08B3159C;
    case 200u: goto L_08B315B4;
    case 201u: goto L_08B315B8;
    case 202u: goto L_08B315BC;
    case 203u: goto L_08B315EC;
    case 204u: goto L_08B31624;
    case 205u: goto L_08B31658;
    case 206u: goto L_08B3165C;
    case 207u: goto L_08B31660;
    case 208u: goto L_08B31688;
    case 209u: goto L_08B31694;
    case 210u: goto L_08B316C0;
    case 211u: goto L_08B316C4;
    case 212u: goto L_08B316DC;
    case 213u: goto L_08B316F4;
    case 214u: goto L_08B31700;
    case 215u: goto L_08B31718;
    case 216u: goto L_08B31720;
    case 217u: goto L_08B3172C;
    case 218u: goto L_08B31754;
    case 219u: goto L_08B31780;
    case 220u: goto L_08B317A8;
    case 221u: goto L_08B317CC;
    case 222u: goto L_08B317E8;
    case 223u: goto L_08B318E0;
    case 224u: goto L_08B31908;
    case 225u: goto L_08B3192C;
    case 226u: goto L_08B31940;
    case 227u: goto L_08B31A08;
    case 228u: goto L_08B31A10;
    case 229u: goto L_08B31A14;
    case 230u: goto L_08B31A20;
    case 231u: goto L_08B31A30;
    case 232u: goto L_08B31A3C;
    case 233u: goto L_08B31A44;
    case 234u: goto L_08B31A54;
    case 235u: goto L_08B31A60;
    case 236u: goto L_08B31A90;
    case 237u: goto L_08B31AA8;
    case 238u: goto L_08B31ABC;
    case 239u: goto L_08B31AD0;
    case 240u: goto L_08B31AD8;
    case 241u: goto L_08B31AE4;
    case 242u: goto L_08B31B08;
    case 243u: goto L_08B31B34;
    case 244u: goto L_08B31B48;
    case 245u: goto L_08B31B58;
    case 246u: goto L_08B31B6C;
    case 247u: goto L_08B31BC8;
    case 248u: goto L_08B31BCC;
    case 249u: goto L_08B31C38;
    case 250u: goto L_08B31C40;
    case 251u: goto L_08B31C50;
    case 252u: goto L_08B31C5C;
    case 253u: goto L_08B31C70;
    case 254u: goto L_08B31C74;
    case 255u: goto L_08B31C80;
    case 256u: goto L_08B31C94;
    case 257u: goto L_08B31CB8;
    case 258u: goto L_08B31D18;
    case 259u: goto L_08B31D68;
    case 260u: goto L_08B31DB8;
    case 261u: goto L_08B31DC0;
    case 262u: goto L_08B31DF0;
    case 263u: goto L_08B31E14;
    case 264u: goto L_08B31E3C;
    case 265u: goto L_08B31E58;
    case 266u: goto L_08B31E60;
    case 267u: goto L_08B31EBC;
    case 268u: goto L_08B31F2C;
    case 269u: goto L_08B31F8C;
    case 270u: goto L_08B31FA0;
    case 271u: goto L_08B31FA8;
    case 272u: goto L_08B31FB0;
    case 273u: goto L_08B3202C;
    case 274u: goto L_08B32098;
    case 275u: goto L_08B320A4;
    case 276u: goto L_08B320AC;
    case 277u: goto L_08B320B4;
    case 278u: goto L_08B32108;
    case 279u: goto L_08B32148;
    case 280u: goto L_08B321B8;
    case 281u: goto L_08B321D0;
    case 282u: goto L_08B321F0;
    case 283u: goto L_08B321FC;
    case 284u: goto L_08B32214;
    case 285u: goto L_08B322F4;
    case 286u: goto L_08B323C8;
    case 287u: goto L_08B323E4;
    case 288u: goto L_08B32404;
    case 289u: goto L_08B32408;
    case 290u: goto L_08B324E0;
    case 291u: goto L_08B324F0;
    case 292u: goto L_08B324F4;
    case 293u: goto L_08B325CC;
    case 294u: goto L_08B32608;
    case 295u: goto L_08B32694;
    case 296u: goto L_08B3271C;
    case 297u: goto L_08B32760;
    case 298u: goto L_08B32790;
    case 299u: goto L_08B327A8;
    case 300u: goto L_08B32818;
    case 301u: goto L_08B32834;
    case 302u: goto L_08B3283C;
    case 303u: goto L_08B32840;
    case 304u: goto L_08B32854;
    case 305u: goto L_08B328FC;
    case 306u: goto L_08B3293C;
    case 307u: goto L_08B32948;
    case 308u: goto L_08B329D4;
    case 309u: goto L_08B329D8;
    case 310u: goto L_08B329F8;
    case 311u: goto L_08B32A58;
    case 312u: goto L_08B32A60;
    case 313u: goto L_08B32B24;
    case 314u: goto L_08B32B74;
    case 315u: goto L_08B32B90;
    case 316u: goto L_08B32BAC;
    case 317u: goto L_08B32BC4;
    case 318u: goto L_08B32BD0;
    case 319u: goto L_08B32C8C;
    case 320u: goto L_08B32D5C;
    case 321u: goto L_08B32D88;
    case 322u: goto L_08B32DA0;
    case 323u: goto L_08B32DAC;
    case 324u: goto L_08B32DCC;
    case 325u: goto L_08B32DDC;
    case 326u: goto L_08B32E54;
    case 327u: goto L_08B32E80;
    case 328u: goto L_08B32EB8;
    case 329u: goto L_08B32ED8;
    case 330u: goto L_08B32EE8;
    case 331u: goto L_08B32F0C;
    case 332u: goto L_08B32F28;
    case 333u: goto L_08B32F34;
    case 334u: goto L_08B32F44;
    case 335u: goto L_08B32F5C;
    case 336u: goto L_08B32F60;
    case 337u: goto L_08B32F6C;
    case 338u: goto L_08B32F78;
    case 339u: goto L_08B32FCC;
    case 340u: goto L_08B32FD8;
    case 341u: goto L_08B32FE8;
    case 342u: goto L_08B32FF8;
    case 343u: goto L_08B33020;
    case 344u: goto L_08B33038;
    case 345u: goto L_08B33050;
    case 346u: goto L_08B330E4;
    case 347u: goto L_08B330EC;
    case 348u: goto L_08B33104;
    case 349u: goto L_08B33140;
    case 350u: goto L_08B33164;
    case 351u: goto L_08B331F8;
    case 352u: goto L_08B33204;
    case 353u: goto L_08B33214;
    case 354u: goto L_08B33218;
    case 355u: goto L_08B33220;
    case 356u: goto L_08B33230;
    case 357u: goto L_08B33310;
    case 358u: goto L_08B33318;
    case 359u: goto L_08B33330;
    case 360u: goto L_08B33338;
    case 361u: goto L_08B33420;
    case 362u: goto L_08B3346C;
    case 363u: goto L_08B334AC;
    case 364u: goto L_08B334D0;
    case 365u: goto L_08B33508;
    case 366u: goto L_08B33534;
    case 367u: goto L_08B33568;
    case 368u: goto L_08B33574;
    case 369u: goto L_08B33598;
    case 370u: goto L_08B335D8;
    case 371u: goto L_08B33618;
    case 372u: goto L_08B33658;
    case 373u: goto L_08B33670;
    case 374u: goto L_08B33698;
    case 375u: goto L_08B336CC;
    case 376u: goto L_08B337DC;
    case 377u: goto L_08B337E4;
    case 378u: goto L_08B337F0;
    case 379u: goto L_08B33840;
    case 380u: goto L_08B338AC;
    case 381u: goto L_08B3390C;
    case 382u: goto L_08B33970;
    case 383u: goto L_08B33984;
    case 384u: goto L_08B33988;
    case 385u: goto L_08B3398C;
    case 386u: goto L_08B339A8;
    case 387u: goto L_08B339B4;
    case 388u: goto L_08B339C4;
    case 389u: goto L_08B33A08;
    case 390u: goto L_08B33A50;
    case 391u: goto L_08B33AB0;
    case 392u: goto L_08B33B34;
    case 393u: goto L_08B33B54;
    case 394u: goto L_08B33B88;
    case 395u: goto L_08B33BC8;
    case 396u: goto L_08B33BDC;
    case 397u: goto L_08B33BE0;
    case 398u: goto L_08B33C00;
    case 399u: goto L_08B33C14;
    case 400u: goto L_08B33C30;
    case 401u: goto L_08B33C64;
    case 402u: goto L_08B33C70;
    case 403u: goto L_08B33C78;
    case 404u: goto L_08B33C90;
    case 405u: goto L_08B33C94;
    case 406u: goto L_08B33CA8;
    case 407u: goto L_08B33CC0;
    case 408u: goto L_08B33CD0;
    case 409u: goto L_08B33CD8;
    case 410u: goto L_08B33CE8;
    case 411u: goto L_08B33CF0;
    case 412u: goto L_08B33D04;
    case 413u: goto L_08B33D28;
    case 414u: goto L_08B33D68;
    case 415u: goto L_08B33D94;
    case 416u: goto L_08B33DA0;
    case 417u: goto L_08B33DBC;
    case 418u: goto L_08B33DE4;
    case 419u: goto L_08B33E04;
    case 420u: goto L_08B33E18;
    case 421u: goto L_08B33E50;
    case 422u: goto L_08B33E88;
    case 423u: goto L_08B33E9C;
    case 424u: goto L_08B33EC4;
    case 425u: goto L_08B33ED0;
    case 426u: goto L_08B33ED8;
    case 427u: goto L_08B33EE0;
    case 428u: goto L_08B33F24;
    case 429u: goto L_08B33F64;
    case 430u: goto L_08B33F80;
    case 431u: goto L_08B33F88;
    case 432u: goto L_08B33F90;
    case 433u: goto L_08B33F94;
    case 434u: goto L_08B33FA0;
    case 435u: goto L_08B33FCC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B30000:
    rt.unsupported(0x08B30004u, 0x088056A4u, "control flow in delay slot"); return;
L_08B3000C:
    rt.unsupported(0x08B30010u, 0x08B0C700u, "control flow in delay slot"); return;
L_08B30044:
    rt.unsupported(0x08B30048u, 0x08B0C73Cu, "control flow in delay slot"); return;
L_08B3004C:
    rt.unsupported(0x08B30050u, 0x08B0C74Cu, "control flow in delay slot"); return;
L_08B3007C:
    // nop
    goto L_08B30080;
L_08B30080:
    rt.unsupported(0x08B30084u, 0x08806064u, "control flow in delay slot"); return;
L_08B30090:
    rt.unsupported(0x08B30094u, 0x08805F18u, "control flow in delay slot"); return;
L_08B300D4:
    // nop
    // nop
    // nop
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    // nop
    (void)(0u << 16u);
    goto L_08B300F4;
L_08B300F4:
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    goto L_08B30118;
L_08B30118:
    // nop
    ctx.gpr[19] = (13107u << 16u);
    // nop
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    // nop
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    // nop
    // nop
    goto L_08B30150;
L_08B30150:
    (void)(ctx.hi);
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    goto L_08B30164;
L_08B30164:
    // nop
    // nop
    rt.unsupported(0x08B30170u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x0201DFD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B301A0:
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B301B0;
L_08B301B0:
    // nop
    // nop
    // nop
    // nop
    goto L_08B301C0;
L_08B301C0:
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[23] = (ctx.gpr[17] ^ 32820u);
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B301DC;
L_08B301DC:
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // nop
    rt.memory().aot_store_word_right(ctx.gpr[27] + static_cast<std::uint32_t>(24642), ctx.gpr[5]);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    // nop
    goto L_08B30210;
L_08B30210:
    // nop
    rt.unsupported(0x08B30218u, 0x0880AB60u, "control flow in delay slot"); return;
L_08B30280:
    rt.unsupported(0x08B30280u, 0x40666666u, "unknown not lowered yet"); return;
L_08B302D0:
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B302DC;
L_08B302DC:
    (void)(ctx.gpr[5] << 0u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (0u & 31u)));
    (void)(ctx.gpr[7] << 0u);
    rt.unsupported(0x08B302ECu, 0x00000005u, "special? not lowered yet"); return;
L_08B30300:
    (void)(ctx.gpr[9] << 0u);
    (void)(0u << (0u & 31u));
    rt.unsupported(0x08B30308u, 0x00090005u, "special? not lowered yet"); return;
L_08B30320:
    rt.unsupported(0x08B30320u, 0x00060005u, "special? not lowered yet"); return;
L_08B30340:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[24] = (20972u << 16u);
    ctx.gpr[5] = (58196u << 16u);
    ctx.gpr[24] = (20972u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B30358;
L_08B30358:
    ctx.gpr[5] = (58196u << 16u);
    ctx.gpr[5] = (58196u << 16u);
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    goto L_08B30370;
L_08B30370:
    (void)(ctx.gpr[1] << 0u);
    rt.unsupported(0x08B30374u, 0x00010005u, "special? not lowered yet"); return;
L_08B30388:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B303A8;
L_08B303A8:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B303C8;
L_08B303C8:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B303D8;
L_08B303D8:
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B303E8;
L_08B303E8:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B30408;
L_08B30408:
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B30410;
L_08B30410:
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B30428;
L_08B30428:
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B30448;
L_08B30448:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B30468;
L_08B30468:
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B30480;
L_08B30480:
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B30488;
L_08B30488:
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B304A8;
L_08B304A8:
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B304AC;
L_08B304AC:
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B304C8;
L_08B304C8:
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B304E8;
L_08B304E8:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B30508;
L_08B30508:
    (void)(ctx.gpr[2] << 0u);
    rt.unsupported(0x08B3050Cu, 0x00010001u, "special? not lowered yet"); return;
L_08B30550:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B30568;
L_08B30568:
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // nop
    // nop
    goto L_08B30594;
L_08B30594:
    // nop
    rt.unsupported(0x08B3059Cu, 0x088248CCu, "control flow in delay slot"); return;
L_08B305A8:
    // nop
    // nop
    // nop
    ctx.pc = 0x0209A350u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B305D8:
    // nop
    // nop
    ctx.pc = 0x020B3050u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B305E0:
    // nop
    // nop
    ctx.pc = 0x020B4E20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B305E8:
    // nop
    // nop
    ctx.pc = 0x020CA4E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B305F0:
    // nop
    // nop
    ctx.pc = 0x020CBE00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B305F8:
    // nop
    // nop
    ctx.pc = 0x020B6990u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B30600:
    // nop
    // nop
    ctx.pc = 0x020BDB30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B30608:
    // nop
    // nop
    ctx.pc = 0x020C8E30u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B30610:
    // nop
    rt.unsupported(0x08B30618u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x020B01F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B30654:
    // nop
    goto L_08B30658;
L_08B30658:
    // nop
    goto L_08B3065C;
L_08B3065C:
    // nop
    ctx.pc = 0x02C34120u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B30728:
    // nop
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B30748u, 0x0F000F00u, "control flow in delay slot"); return;
L_08B30758:
    (void)(0u << 16u);
    goto L_08B3075C;
L_08B3075C:
    ctx.gpr[19] = (13107u << 16u);
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B30788;
L_08B30788:
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    ctx.gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B307B0;
L_08B307B0:
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    goto L_08B307B8;
L_08B307B8:
    // nop
    (void)(0u << 16u);
    (void)(0u << 16u);
    // nop
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B307E8;
L_08B307E8:
    // nop
    rt.unsupported(0x08B307ECu, 0x42700000u, "unknown not lowered yet"); return;
L_08B30874:
    rt.unsupported(0x08B30874u, 0xC2C80000u, "unknown not lowered yet"); return;
L_08B3087C:
    rt.unsupported(0x08B3087Cu, 0x42C80000u, "unknown not lowered yet"); return;
L_08B30910:
    rt.unsupported(0x08B30910u, 0x40000000u, "unknown not lowered yet"); return;
L_08B309A4:
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[5] = (7864u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[10] = (15729u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    goto L_08B309C8;
L_08B309C8:
    // nop
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[5] = (7864u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B309EC;
L_08B309EC:
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    goto L_08B30A08;
L_08B30A08:
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    rt.unsupported(0x08B30A10u, 0x40666666u, "unknown not lowered yet"); return;
L_08B30A18:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[7] = (ctx.gpr[1] << 2u);
    // nop
    // nop
    // nop
    goto L_08B30A40;
L_08B30A40:
    // nop
    rt.unsupported(0x08B30A48u, 0x08AFB1CCu, "control flow in delay slot"); return;
L_08B30A9C:
    (void)(0u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    goto L_08B30AA8;
L_08B30AA8:
    ctx.gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B30AC0;
L_08B30AC0:
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    goto L_08B30AE4;
L_08B30AE4:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B30B00;
L_08B30B00:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    goto L_08B30B08;
L_08B30B08:
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    goto L_08B30B2C;
L_08B30B2C:
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    rt.unsupported(0x08B30B50u, 0x40600000u, "unknown not lowered yet"); return;
L_08B30B58:
    // nop
    ctx.gpr[16] = (0u << 16u);
    goto L_08B30B60;
L_08B30B60:
    // nop
    rt.unsupported(0x08B30B68u, 0x08AFB24Cu, "control flow in delay slot"); return;
L_08B30BB8:
    rt.unsupported(0x08B30BBCu, 0x08806364u, "control flow in delay slot"); return;
L_08B30BBC:
    rt.unsupported(0x08B30BC0u, 0x08B0DCE0u, "control flow in delay slot"); return;
L_08B30C40:
    // nop
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B30C64u, 0x42340000u, "unknown not lowered yet"); return;
L_08B30CF0:
    // nop
    goto L_08B30CF4;
L_08B30CF4:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    // nop
    (void)(ctx.hi);
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    { const bool signed_ok = ctx.execute_signed_add(4u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B30D18u, 0x00002020u); return; } }
    // nop
    rt.unsupported(0x08B30D20u, 0x40666666u, "unknown not lowered yet"); return;
L_08B30DA4:
    // nop
    // nop
    // nop
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    // nop
    rt.unsupported(0x08B30DB8u, 0x0000157Cu, "special? not lowered yet"); return;
L_08B30DC4:
    rt.unsupported(0x08B30DC4u, 0x42480000u, "unknown not lowered yet"); return;
L_08B30DCC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B30DFC;
L_08B30DFC:
    // vflush: architectural no-op that retains VFPU prefixes
    rt.unsupported(0x08B30E00u, 0x000000FFu, "special? not lowered yet"); return;
L_08B30E1C:
    rt.unsupported(0x08B30E20u, 0x08C17E80u, "control flow in delay slot"); return;
L_08B30E38:
    rt.unsupported(0x08B30E3Cu, 0x08BB0680u, "control flow in delay slot"); return;
L_08B30EB8:
    // nop
    ctx.pc = 0x02EC1A00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B30F24:
    rt.unsupported(0x08B30F28u, 0x46532F30u, "cop1? not lowered yet"); return;
    ctx.pc = 0x0301DA00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B30F28:
    rt.unsupported(0x08B30F28u, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B30F34:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 9u, 0x08B450BCu>(ctx, &aot_mem); return;
    }
    goto L_08B30F44;
L_08B30F44:
    rt.unsupported(0x08B30F44u, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B30F4C:
    ctx.lo = 0u;
    goto L_08B30F50;
L_08B30F50:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 11u, 0x08B450D8u>(ctx, &aot_mem); return;
    }
    goto L_08B30F60;
L_08B30F60:
    rt.unsupported(0x08B30F60u, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B30F68:
    ctx.lo = 0u;
    goto L_08B30F6C;
L_08B30F6C:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 12u, 0x08B450F4u>(ctx, &aot_mem); return;
    }
    goto L_08B30F7C;
L_08B30F7C:
    rt.unsupported(0x08B30F7Cu, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B30F88:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] | 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 13u, 0x08B45110u>(ctx, &aot_mem); return;
    }
    goto L_08B30F98;
L_08B30F98:
    rt.unsupported(0x08B30F98u, 0x46532F30u, "cop1? not lowered yet"); return;
L_08B30FA4:
    ctx.gpr[16] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] ^ 18003u);
    if (ctx.gpr[2] == ctx.gpr[19]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 14u, 0x08B4512Cu>(ctx, &aot_mem); return;
    }
    goto L_08B30FB4;
L_08B30FB0:
    // nop
    goto L_08B30FB4;
L_08B30FB4:
    rt.unsupported(0x08B30FB4u, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B30FC0:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 21u, 0x08B48C90u>(ctx, &aot_mem); return;
    }
    goto L_08B30FD0;
L_08B30FD0:
    rt.unsupported(0x08B30FD0u, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B30FDC:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 24u, 0x08B48CB4u>(ctx, &aot_mem); return;
    }
    goto L_08B30FEC;
L_08B30FEC:
    rt.unsupported(0x08B30FECu, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B30FF8:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 26u, 0x08B48CD8u>(ctx, &aot_mem); return;
    }
    goto L_08B31008;
L_08B31008:
    rt.unsupported(0x08B31008u, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B31014:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 28u, 0x08B48CFCu>(ctx, &aot_mem); return;
    }
    goto L_08B31024;
L_08B31024:
    rt.unsupported(0x08B31024u, 0x46532F31u, "cop1? not lowered yet"); return;
L_08B31030:
    ctx.gpr[17] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 31u, 0x08B48D20u>(ctx, &aot_mem); return;
    }
    goto L_08B31040;
L_08B31040:
    rt.unsupported(0x08B31040u, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B31048:
    ctx.gpr[10] = (ctx.hi);
    goto L_08B3104C;
L_08B3104C:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 30u, 0x08B48D1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B3105C;
L_08B3105C:
    rt.unsupported(0x08B3105Cu, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B31068:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 32u, 0x08B48D40u>(ctx, &aot_mem); return;
    }
    goto L_08B31078;
L_08B31078:
    rt.unsupported(0x08B31078u, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B31084:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 34u, 0x08B48D64u>(ctx, &aot_mem); return;
    }
    goto L_08B31094;
L_08B31094:
    rt.unsupported(0x08B31094u, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B310A0:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 35u, 0x08B48D88u>(ctx, &aot_mem); return;
    }
    goto L_08B310B0;
L_08B310B0:
    rt.unsupported(0x08B310B0u, 0x46532F32u, "cop1? not lowered yet"); return;
L_08B310BC:
    ctx.gpr[18] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 38u, 0x08B48DACu>(ctx, &aot_mem); return;
    }
    goto L_08B310CC;
L_08B310CC:
    rt.unsupported(0x08B310CCu, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B310D8:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 37u, 0x08B48DA8u>(ctx, &aot_mem); return;
    }
    goto L_08B310E8;
L_08B310E4:
    (void)(ctx.hi);
    goto L_08B310E8;
L_08B310E8:
    rt.unsupported(0x08B310E8u, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B310F4:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 40u, 0x08B48DCCu>(ctx, &aot_mem); return;
    }
    goto L_08B31104;
L_08B31104:
    rt.unsupported(0x08B31104u, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B31110:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 41u, 0x08B48DF0u>(ctx, &aot_mem); return;
    }
    goto L_08B31120;
L_08B31120:
    rt.unsupported(0x08B31120u, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B3112C:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 43u, 0x08B48E14u>(ctx, &aot_mem); return;
    }
    goto L_08B3113C;
L_08B3113C:
    rt.unsupported(0x08B3113Cu, 0x46532F33u, "cop1? not lowered yet"); return;
L_08B31148:
    ctx.gpr[19] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    goto L_08B3114C;
L_08B3114C:
    ctx.gpr[24] = (ctx.gpr[26] & 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 45u, 0x08B48E38u>(ctx, &aot_mem); return;
    }
    goto L_08B31158;
L_08B31158:
    rt.unsupported(0x08B31158u, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B31164:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 44u, 0x08B48E34u>(ctx, &aot_mem); return;
    }
    goto L_08B31174;
L_08B31174:
    rt.unsupported(0x08B31174u, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B31180:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 47u, 0x08B48E58u>(ctx, &aot_mem); return;
    }
    goto L_08B31190;
L_08B31190:
    rt.unsupported(0x08B31190u, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B3119C:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 48u, 0x08B48E7Cu>(ctx, &aot_mem); return;
    }
    goto L_08B311AC;
L_08B311AC:
    rt.unsupported(0x08B311ACu, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B311B8:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 49u, 0x08B48EA0u>(ctx, &aot_mem); return;
    }
    goto L_08B311C8;
L_08B311C8:
    rt.unsupported(0x08B311C8u, 0x46532F34u, "cop1? not lowered yet"); return;
L_08B311D4:
    ctx.gpr[20] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[2] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 51u, 0x08B48EC4u>(ctx, &aot_mem); return;
    }
    goto L_08B311E4;
L_08B311E4:
    rt.unsupported(0x08B311E4u, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B311F0:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 50u, 0x08B48EC0u>(ctx, &aot_mem); return;
    }
    goto L_08B31200;
L_08B31200:
    rt.unsupported(0x08B31200u, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B3120C:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 52u, 0x08B48EE4u>(ctx, &aot_mem); return;
    }
    goto L_08B3121C;
L_08B3121C:
    rt.unsupported(0x08B3121Cu, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B31228:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 53u, 0x08B48F08u>(ctx, &aot_mem); return;
    }
    goto L_08B31238;
L_08B31238:
    rt.unsupported(0x08B31238u, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B31244:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 54u, 0x08B48F2Cu>(ctx, &aot_mem); return;
    }
    goto L_08B31254;
L_08B31254:
    rt.unsupported(0x08B31254u, 0x46532F35u, "cop1? not lowered yet"); return;
L_08B31260:
    ctx.gpr[21] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[10] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 56u, 0x08B48F50u>(ctx, &aot_mem); return;
    }
    goto L_08B31270;
L_08B31270:
    rt.unsupported(0x08B31270u, 0x46532F36u, "cop1? not lowered yet"); return;
L_08B3127C:
    ctx.gpr[22] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 55u, 0x08B48F4Cu>(ctx, &aot_mem); return;
    }
    goto L_08B3128C;
L_08B3128C:
    rt.unsupported(0x08B3128Cu, 0x46532F36u, "cop1? not lowered yet"); return;
L_08B31298:
    ctx.gpr[22] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 57u, 0x08B48F70u>(ctx, &aot_mem); return;
    }
    goto L_08B312A8;
L_08B312A8:
    rt.unsupported(0x08B312A8u, 0x46532F36u, "cop1? not lowered yet"); return;
L_08B312B4:
    ctx.gpr[22] = (ctx.gpr[25] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[24] = (ctx.gpr[18] | 18003u);
    if (ctx.gpr[26] == ctx.gpr[16]) {
    (void)(ctx.hi);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 58u, 0x08B48F94u>(ctx, &aot_mem); return;
    }
    goto L_08B312C4;
L_08B312C4:
    rt.unsupported(0x08B312C4u, 0x46532F36u, "cop1? not lowered yet"); return;
L_08B312D0:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    goto L_08B312DC;
L_08B312DC:
    // nop
    goto L_08B312E0;
L_08B312E0:
    // nop
    // nop
    rt.unsupported(0x08B312E8u, 0x40666666u, "unknown not lowered yet"); return;
L_08B31350:
    // nop
    rt.unsupported(0x08B31358u, 0x0884E360u, "control flow in delay slot"); return;
L_08B31384:
    rt.unsupported(0x08B31384u, 0x40200000u, "unknown not lowered yet"); return;
L_08B31398:
    rt.unsupported(0x08B31398u, 0x41200000u, "unknown not lowered yet"); return;
L_08B3139C:
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    rt.unsupported(0x08B313B0u, 0x00000028u, "special? not lowered yet"); return;
L_08B313B8:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    rt.unsupported(0x08B313C0u, 0x00000014u, "special? not lowered yet"); return;
L_08B313EC:
    rt.unsupported(0x08B313ECu, 0x40540000u, "unknown not lowered yet"); return;
L_08B313F0:
    rt.unsupported(0x08B313F0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B313F4:
    rt.unsupported(0x08B313F4u, 0x42480000u, "unknown not lowered yet"); return;
L_08B31404:
    // nop
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B31414;
L_08B31414:
    // nop
    // nop
    // nop
    rt.unsupported(0x08B31420u, 0x40666666u, "unknown not lowered yet"); return;
L_08B31424:
    rt.unsupported(0x08B31424u, 0x42480000u, "unknown not lowered yet"); return;
L_08B31428:
    // nop
    // nop
    // nop
    goto L_08B31434;
L_08B31434:
    // nop
    // nop
    goto L_08B3143C;
L_08B3143C:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B31444;
L_08B31444:
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    goto L_08B31454;
L_08B31454:
    // nop
    // nop
    // nop
    goto L_08B31460;
L_08B31460:
    rt.unsupported(0x08B31460u, 0x40666666u, "unknown not lowered yet"); return;
L_08B31498:
    // nop
    // nop
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B314BC;
L_08B314BC:
    // nop
    // nop
    // nop
    goto L_08B314C8;
L_08B314C8:
    // nop
    // nop
    rt.unsupported(0x08B314D0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B314F4:
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31510;
L_08B31510:
    // nop
    // nop
    // nop
    // nop
    goto L_08B31520;
L_08B31520:
    // nop
    // nop
    // nop
    goto L_08B3152C;
L_08B3152C:
    // nop
    // nop
    // nop
    // nop
    goto L_08B3153C;
L_08B3153C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    // nop
    rt.unsupported(0x08B31564u, 0x40490000u, "unknown not lowered yet"); return;
L_08B31570:
    // nop
    rt.unsupported(0x08B31578u, 0x08868E98u, "control flow in delay slot"); return;
L_08B31588:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3159C;
L_08B3159C:
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    // nop
    // nop
    // nop
    // nop
    goto L_08B315B4;
L_08B315B4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.lo = ctx.gpr[2];
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 98u, 0x08B42AD0u>(ctx, &aot_mem); return;
    }
    goto L_08B315BC;
L_08B315B8:
    ctx.lo = ctx.gpr[2];
    goto L_08B315BC;
L_08B315BC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B315EC;
L_08B315EC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31624;
L_08B31624:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31658;
L_08B31658:
    // nop
    goto L_08B3165C;
L_08B3165C:
    // nop
    goto L_08B31660;
L_08B31660:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31688;
L_08B31688:
    // nop
    // nop
    // nop
    goto L_08B31694;
L_08B31694:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B316C0;
L_08B316C0:
    // nop
    goto L_08B316C4;
L_08B316C4:
    // nop
    rt.unsupported(0x08B316C8u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B316DC:
    ctx.gpr[1] = (ctx.gpr[16] << 16u);
    rt.unsupported(0x08B316E0u, 0x0003003Cu, "special? not lowered yet"); return;
L_08B316F4:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[8] = (ctx.gpr[1] << (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 100u, 0x08B42C14u>(ctx, &aot_mem); return;
    }
    goto L_08B31700;
L_08B31700:
    ctx.gpr[1] = (ctx.gpr[16] << 16u);
    (void)(0u & ctx.gpr[3]);
    rt.unsupported(0x08B31708u, 0x45460004u, "cop1? not lowered yet"); return;
L_08B31718:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    goto L_08B31720;
L_08B31720:
    // nop
    // nop
    // nop
    goto L_08B3172C;
L_08B3172C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31754;
L_08B31754:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31780;
L_08B31780:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B317A8;
L_08B317A8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B317CC;
L_08B317CC:
    // nop
    // nop
    // nop
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[9] >> 9u);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 101u, 0x08B42CFCu>(ctx, &aot_mem); return;
    }
    goto L_08B317E8;
L_08B317E8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B318E0;
L_08B318E0:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B318F4u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B31908:
    (void)(ctx.gpr[16] << 12u);
    rt.unsupported(0x08B3190Cu, 0x00020028u, "special? not lowered yet"); return;
L_08B3192C:
    (void)(ctx.gpr[16] << 12u);
    (void)(std::rotr(ctx.gpr[2], static_cast<int>(0u & 31u)));
    rt.unsupported(0x08B31934u, 0x45460027u, "cop1? not lowered yet"); return;
L_08B31940:
    rt.unsupported(0x08B31940u, 0x005500F0u, "special? not lowered yet"); return;
L_08B31A08:
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B31A10u, 0x00445541u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 106u, 0x08B42F28u>(ctx, &aot_mem); return;
    }
    goto L_08B31A14;
L_08B31A10:
    rt.unsupported(0x08B31A10u, 0x00445541u, "special? not lowered yet"); return;
L_08B31A14:
    rt.unsupported(0x08B31A14u, 0x4546000Eu, "cop1? not lowered yet"); return;
L_08B31A20:
    rt.unsupported(0x08B31A20u, 0x002800F0u, "special? not lowered yet"); return;
L_08B31A30:
    (void)(ctx.gpr[16] << 16u);
    rt.unsupported(0x08B31A34u, 0x0002003Cu, "special? not lowered yet"); return;
L_08B31A3C:
    rt.unsupported(0x08B31A40u, 0x04000033u, "control flow in delay slot"); return;
L_08B31A44:
    rt.unsupported(0x08B31A44u, 0x005000F0u, "special? not lowered yet"); return;
L_08B31A54:
    (void)(ctx.gpr[16] << 16u);
    (void)(0u & ctx.gpr[2]);
    // nop
    goto L_08B31A60;
L_08B31A60:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31A90;
L_08B31A90:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31AA8;
L_08B31AA8:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31ABC;
L_08B31ABC:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31AD0;
L_08B31AD0:
    // nop
    // nop
    goto L_08B31AD8;
L_08B31AD8:
    // nop
    // nop
    // nop
    goto L_08B31AE4;
L_08B31AE4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31B08;
L_08B31B08:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B31B20u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B31B34:
    (void)(ctx.gpr[16] << 20u);
    rt.unsupported(0x08B31B38u, 0x0002003Cu, "special? not lowered yet"); return;
L_08B31B48:
    rt.unsupported(0x08B31B48u, 0x005000F0u, "special? not lowered yet"); return;
L_08B31B58:
    (void)(ctx.gpr[16] << 20u);
    (void)(0u & ctx.gpr[2]);
    rt.unsupported(0x08B31B60u, 0x45460023u, "cop1? not lowered yet"); return;
L_08B31B6C:
    rt.unsupported(0x08B31B6Cu, 0x007800F0u, "special? not lowered yet"); return;
L_08B31BC8:
    // nop
    goto L_08B31BCC;
L_08B31BCC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31C38;
L_08B31C38:
    rt.unsupported(0x08B31C3Cu, 0x004E414Cu, "control flow in delay slot"); return;
L_08B31C40:
    rt.unsupported(0x08B31C40u, 0x45460012u, "cop1? not lowered yet"); return;
L_08B31C50:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[5] >> (ctx.gpr[2] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 112u, 0x08B43170u>(ctx, &aot_mem); return;
    }
    goto L_08B31C5C;
L_08B31C5C:
    (void)(ctx.gpr[16] << 24u);
    (void)(ctx.hi);
    rt.unsupported(0x08B31C64u, 0x45460014u, "cop1? not lowered yet"); return;
L_08B31C70:
    rt.unsupported(0x08B31C70u, 0x006400F0u, "special? not lowered yet"); return;
L_08B31C74:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 0u));
    rt.unsupported(0x08B31C7Cu, 0x00415449u, "control flow in delay slot"); return;
L_08B31C80:
    (void)(ctx.gpr[16] << 24u);
    rt.unsupported(0x08B31C84u, 0x00030078u, "special? not lowered yet"); return;
L_08B31C94:
    rt.unsupported(0x08B31C94u, 0x008C00F0u, "special? not lowered yet"); return;
L_08B31CB8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31D18;
L_08B31D18:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B31D4Cu, 0x45460000u, "cop1? not lowered yet"); return;
L_08B31D68:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31DB8;
L_08B31DB8:
    // nop
    // nop
    goto L_08B31DC0;
L_08B31DC0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31DF0;
L_08B31DF0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31E14;
L_08B31E14:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31E3C;
L_08B31E3C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31E58;
L_08B31E58:
    // nop
    // nop
    goto L_08B31E60;
L_08B31E60:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31EBC;
L_08B31EBC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B31F2C;
L_08B31F2C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B31F78u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B31F8C:
    // nop
    // nop
    rt.unsupported(0x08B31F94u, 0x45460003u, "cop1? not lowered yet"); return;
L_08B31FA0:
    rt.unsupported(0x08B31FA0u, 0x00AA00F0u, "special? not lowered yet"); return;
L_08B31FA8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[2]) * static_cast<std::uint64_t>(ctx.gpr[19]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 115u, 0x08B434C4u>(ctx, &aot_mem); return;
    }
    goto L_08B31FB0;
L_08B31FB0:
    ctx.gpr[1] = (ctx.gpr[16] << 4u);
    rt.unsupported(0x08B31FB4u, 0x000300BEu, "special? not lowered yet"); return;
L_08B3202C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B32094u, 0x0041474Cu, "control flow in delay slot"); return;
L_08B32098:
    rt.unsupported(0x08B32098u, 0x45460001u, "cop1? not lowered yet"); return;
L_08B320A4:
    // nop
    (void)(ctx.gpr[3] << 0u);
    goto L_08B320AC;
L_08B320AC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B320B0u, 0x00004F4Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 117u, 0x08B435C8u>(ctx, &aot_mem); return;
    }
    goto L_08B320B4;
L_08B320B4:
    (void)(ctx.gpr[16] << 4u);
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    rt.unsupported(0x08B320BCu, 0x45460002u, "cop1? not lowered yet"); return;
L_08B32108:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32148;
L_08B32148:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B321A4u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B321B8:
    // nop
    // nop
    rt.unsupported(0x08B321C0u, 0x45460004u, "cop1? not lowered yet"); return;
L_08B321D0:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B321F0;
L_08B321F0:
    // nop
    // nop
    // nop
    goto L_08B321FC;
L_08B321FC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32214;
L_08B32214:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B322F4;
L_08B322F4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B323C8;
L_08B323C8:
    // nop
    // nop
    rt.unsupported(0x08B323D0u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B323E4:
    // nop
    // nop
    rt.unsupported(0x08B323ECu, 0x45460003u, "cop1? not lowered yet"); return;
L_08B32404:
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[2]) * static_cast<std::uint64_t>(ctx.gpr[19]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    goto L_08B32408;
L_08B32408:
    (void)(ctx.gpr[16] << 4u);
    rt.unsupported(0x08B3240Cu, 0x000300BEu, "special? not lowered yet"); return;
L_08B324E0:
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B324ECu, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 123u, 0x08B43A04u>(ctx, &aot_mem); return;
    }
    goto L_08B324F0;
L_08B324F0:
    // nop
    goto L_08B324F4;
L_08B324F4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B325CC;
L_08B325CC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B325FCu, 0x45460000u, "cop1? not lowered yet"); return;
L_08B32608:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32694;
L_08B32694:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B32718u, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 126u, 0x08B43C30u>(ctx, &aot_mem); return;
    }
    goto L_08B3271C;
L_08B3271C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32760;
L_08B32760:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32790;
L_08B32790:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B327A8;
L_08B327A8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32818;
L_08B32818:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B32828u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B32834:
    rt.unsupported(0x08B32838u, 0x00494649u, "control flow in delay slot"); return;
L_08B3283C:
    // nop
    goto L_08B32840;
L_08B32840:
    // nop
    rt.unsupported(0x08B32844u, 0x45460004u, "cop1? not lowered yet"); return;
L_08B32854:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B328FC;
L_08B328FC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B3293C;
L_08B3293C:
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B32944u, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 128u, 0x08B43E5Cu>(ctx, &aot_mem); return;
    }
    goto L_08B32948;
L_08B32948:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B329D4;
L_08B329D4:
    // nop
    goto L_08B329D8;
L_08B329D8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B329F8;
L_08B329F8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B32A54u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B32A58:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 102u, 0x08B4A77Cu>(ctx, &aot_mem); return;
    }
    goto L_08B32A60;
L_08B32A60:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32B24;
L_08B32B24:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B32B70u, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 2u, 0x08B44088u>(ctx, &aot_mem); return;
    }
    goto L_08B32B74;
L_08B32B74:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32B90;
L_08B32B90:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32BAC;
L_08B32BAC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32BC4;
L_08B32BC4:
    // nop
    // nop
    // nop
    goto L_08B32BD0;
L_08B32BD0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B32C80u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B32C8C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32D5C;
L_08B32D5C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32D88;
L_08B32D88:
    // nop
    // nop
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B32D9Cu, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 3u, 0x08B442B4u>(ctx, &aot_mem); return;
    }
    goto L_08B32DA0;
L_08B32DA0:
    // nop
    // nop
    // nop
    goto L_08B32DAC;
L_08B32DAC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32DCC;
L_08B32DCC:
    // nop
    // nop
    // nop
    // nop
    goto L_08B32DDC;
L_08B32DDC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32E54;
L_08B32E54:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32E80;
L_08B32E80:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B32EACu, 0x45460000u, "cop1? not lowered yet"); return;
L_08B32EB8:
    rt.unsupported(0x08B32EB8u, 0x4C525653u, "unknown not lowered yet"); return;
L_08B32ED8:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    // nop
    // nop
    goto L_08B32EE8;
L_08B32EE8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32F0C;
L_08B32F0C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32F28;
L_08B32F28:
    // nop
    // nop
    // nop
    goto L_08B32F34;
L_08B32F34:
    // nop
    // nop
    // nop
    // nop
    goto L_08B32F44;
L_08B32F44:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B32F5C;
L_08B32F5C:
    // nop
    goto L_08B32F60;
L_08B32F60:
    // nop
    // nop
    // nop
    goto L_08B32F6C;
L_08B32F6C:
    // nop
    // nop
    // nop
    goto L_08B32F78;
L_08B32F78:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B32FC8u, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 4u, 0x08B444E0u>(ctx, &aot_mem); return;
    }
    goto L_08B32FCC;
L_08B32FCC:
    rt.unsupported(0x08B32FCCu, 0x454E0001u, "cop1? not lowered yet"); return;
L_08B32FD8:
    // nop
    (void)(ctx.gpr[4] << 0u);
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 5u, 0x08B444FCu>(ctx, &aot_mem); return;
    }
    goto L_08B32FE8;
L_08B32FE8:
    ctx.gpr[1] = (ctx.gpr[16] << 24u);
    rt.unsupported(0x08B32FECu, 0x000300B4u, "special? not lowered yet"); return;
L_08B32FF8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33020;
L_08B33020:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33038;
L_08B33038:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33050;
L_08B33050:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B330D8u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B330E4:
    if (ctx.gpr[18] != ctx.gpr[19]) {
    ctx.gpr[10] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 29u, 0x08B46E20u>(ctx, &aot_mem); return;
    }
    goto L_08B330EC;
L_08B330EC:
    // nop
    // nop
    rt.unsupported(0x08B330F4u, 0x45460004u, "cop1? not lowered yet"); return;
L_08B33104:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33140;
L_08B33140:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33164;
L_08B33164:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B331F4u, 0x0000504Du, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 6u, 0x08B4470Cu>(ctx, &aot_mem); return;
    }
    goto L_08B331F8;
L_08B331F8:
    rt.unsupported(0x08B331F8u, 0x4C430001u, "unknown not lowered yet"); return;
L_08B33204:
    // nop
    (void)(ctx.gpr[4] << 0u);
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.memory().memory_barrier();
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 7u, 0x08B44728u>(ctx, &aot_mem); return;
    }
    goto L_08B33214;
L_08B33214:
    ctx.gpr[1] = (ctx.gpr[16] << 24u);
    goto L_08B33218;
L_08B33218:
    rt.unsupported(0x08B33218u, 0x000300B4u, "special? not lowered yet"); return;
L_08B33220:
    // nop
    // nop
    // nop
    // nop
    goto L_08B33230;
L_08B33230:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B33304u, 0x45460000u, "cop1? not lowered yet"); return;
L_08B33310:
    if (ctx.gpr[2] != ctx.gpr[4]) {
    rt.unsupported(0x08B33314u, 0x004D4145u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 120u, 0x08B4381Cu>(ctx, &aot_mem); return;
    }
    goto L_08B33318;
L_08B33318:
    // nop
    // nop
    rt.unsupported(0x08B33320u, 0x45460004u, "cop1? not lowered yet"); return;
L_08B33330:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    goto L_08B33338;
L_08B33338:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33420;
L_08B33420:
    rt.unsupported(0x08B33424u, 0x0886A554u, "control flow in delay slot"); return;
L_08B3346C:
    // nop
    rt.unsupported(0x08B33470u, 0x40666666u, "unknown not lowered yet"); return;
L_08B334AC:
    // nop
    rt.unsupported(0x08B334B0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B334D0:
    // nop
    // nop
    rt.unsupported(0x08B334D8u, 0x40666666u, "unknown not lowered yet"); return;
L_08B33508:
    rt.unsupported(0x08B3350Cu, 0x088729E0u, "control flow in delay slot"); return;
L_08B33534:
    // nop
    rt.unsupported(0x08B3353Cu, 0x08AFA4D4u, "control flow in delay slot"); return;
L_08B33568:
    (void)(ctx.hi);
    (void)(ctx.hi);
    // nop
    goto L_08B33574;
L_08B33574:
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[1] = (18350u << 16u);
    rt.unsupported(0x08B33588u, 0x457A0000u, "cop1? not lowered yet"); return;
L_08B33598:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // PSP CACHE is a no-op in coherent host memory.
    // nop
    // nop
    // nop
    // nop
    goto L_08B335D8;
L_08B335D8:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33618;
L_08B33618:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33658;
L_08B33658:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33670;
L_08B33670:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33698;
L_08B33698:
    // nop
    rt.unsupported(0x08B336A0u, 0x08873E34u, "control flow in delay slot"); return;
L_08B336CC:
    rt.unsupported(0x08B336D0u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C3CD80u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B337DC:
    rt.unsupported(0x08B337E0u, 0x08B0F4CCu, "control flow in delay slot"); return;
L_08B337E4:
    (void)(0u << (0u & 31u));
    rt.unsupported(0x08B337ECu, 0x08B0F4D4u, "control flow in delay slot"); return;
L_08B337F0:
    // nop
    rt.unsupported(0x08B337F4u, 0x00000601u, "special? not lowered yet"); return;
L_08B33840:
    rt.unsupported(0x08B33844u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C3D410u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B338AC:
    rt.unsupported(0x08B338B0u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C3D5E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B3390C:
    rt.unsupported(0x08B33910u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C3D780u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33970:
    (void)(0u << (0u & 31u));
    { const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    rt.unsupported(0x08B3397Cu, 0x00000005u, "special? not lowered yet"); return;
    ctx.pc = 0x02C3D930u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33984:
    (void)(0u >> (0u & 31u));
    ctx.pc = 0x02C3D960u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33988:
    (void)(0u >> (0u & 31u));
    goto L_08B3398C;
L_08B3398C:
    { const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    ctx.pc = 0x02C3D990u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B339A8:
    rt.unsupported(0x08B339ACu, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C3D9C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B339B4:
    (void)(0u >> 0u);
    ctx.pc = 0x02C3DA00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B339C4:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    // nop
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C3DA60u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33A08:
    (void)(0u >> 0u);
    ctx.pc = 0x02C3DB00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33A50:
    rt.unsupported(0x08B33A54u, 0x00000001u, "special? not lowered yet"); return;
    ctx.pc = 0x02C3D9C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33AB0:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    ctx.pc = 0x02C3D290u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33B34:
    (void)(0u << (0u & 31u));
    (void)(0u >> (0u & 31u));
    rt.unsupported(0x08B33B3Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B33B54:
    rt.unsupported(0x08B33B58u, 0x08B33840u, "control flow in delay slot"); return;
L_08B33B88:
    // nop
    rt.unsupported(0x08B33B90u, 0x08AFDF08u, "control flow in delay slot"); return;
L_08B33BC8:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33BDC;
L_08B33BDC:
    // nop
    goto L_08B33BE0;
L_08B33BE0:
    rt.unsupported(0x08B33BE4u, 0x088788C8u, "control flow in delay slot"); return;
L_08B33C00:
    // nop
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    // nop
    rt.unsupported(0x08B33C10u, 0x40666666u, "unknown not lowered yet"); return;
L_08B33C14:
    rt.unsupported(0x08B33C14u, 0x42480000u, "unknown not lowered yet"); return;
L_08B33C30:
    rt.unsupported(0x08B33C30u, 0x00000015u, "special? not lowered yet"); return;
L_08B33C64:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    // nop
    goto L_08B33C70;
L_08B33C70:
    rt.unsupported(0x08B33C70u, 0x00010001u, "special? not lowered yet"); return;
L_08B33C78:
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    // nop
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B33C90:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 1u));
    goto L_08B33C94;
L_08B33C94:
    (void)(ctx.gpr[9] << (ctx.gpr[2] & 31u));
    (void)(ctx.gpr[1] << 0u);
    if (0u == 0u) (void)(0u);
    (void)(ctx.gpr[22] >> 1u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[1]) >> 0u));
    goto L_08B33CA8;
L_08B33CA8:
    rt.unsupported(0x08B33CA8u, 0x00030077u, "special? not lowered yet"); return;
L_08B33CC0:
    rt.unsupported(0x08B33CC0u, 0x000001F4u, "special? not lowered yet"); return;
L_08B33CD0:
    rt.unsupported(0x08B33CD0u, 0x00000BB8u, "special? not lowered yet"); return;
L_08B33CD8:
    (void)(ctx.hi);
    // nop
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B33CE8:
    (void)(0u & 0u);
    // nop
    goto L_08B33CF0;
L_08B33CF0:
    rt.unsupported(0x08B33CF0u, 0x00000005u, "special? not lowered yet"); return;
L_08B33D04:
    // nop
    { const bool signed_ok = ctx.execute_signed_add(9u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B33D08u, 0x00004E20u); return; } }
    // nop
    (void)(0u << (0u & 31u));
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    rt.unsupported(0x08B33D20u, 0x000005DCu, "special? not lowered yet"); return;
L_08B33D28:
    (void)(ctx.hi);
    // nop
    { const bool signed_ok = ctx.execute_signed_add(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B33D30u, 0x00000FA0u); return; } }
    // nop
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    // nop
    rt.unsupported(0x08B33D40u, 0x0000044Cu, "syscall not lowered yet"); return;
L_08B33D68:
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    ctx.gpr[5] = (7864u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B33D94;
L_08B33D94:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    rt.unsupported(0x08B33D9Cu, 0x40000000u, "unknown not lowered yet"); return;
L_08B33DA0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33DBC;
L_08B33DBC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33DE4;
L_08B33DE4:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B33E04;
L_08B33E04:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    rt.memory().aot_store_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(4719), ctx.gpr[3]);
    rt.unsupported(0x08B33E14u, 0x42C80000u, "unknown not lowered yet"); return;
L_08B33E18:
    (void)(0u << 16u);
    rt.unsupported(0x08B33E1Cu, 0x41200000u, "unknown not lowered yet"); return;
L_08B33E50:
    rt.unsupported(0x08B33E50u, 0xD2F1A9FCu, "vfpu4 not lowered yet"); return;
L_08B33E88:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B33E9C:
    // nop
    rt.unsupported(0x08B33EA4u, 0x08806498u, "control flow in delay slot"); return;
L_08B33EC4:
    // nop
    // nop
    // nop
    goto L_08B33ED0;
L_08B33ED0:
    // nop
    // nop
    ctx.pc = 0x022A81D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33ED8:
    // nop
    // nop
    ctx.pc = 0x022A87C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33EE0:
    // nop
    rt.unsupported(0x08B33EE8u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x022A9B40u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33F24:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33F64;
L_08B33F64:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B33F80;
L_08B33F80:
    // nop
    // nop
    goto L_08B33F88;
L_08B33F88:
    // nop
    // nop
    goto L_08B33F90;
L_08B33F90:
    // nop
    goto L_08B33F94;
L_08B33F94:
    // nop
    // nop
    // nop
    ctx.pc = 0x022AF130u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33FA0:
    // nop
    // nop
    // nop
    ctx.pc = 0x022AF150u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B33FCC:
    // nop
    rt.unsupported(0x08B33FD4u, 0x088B0114u, "control flow in delay slot"); return;
}

void recomp_unit_0203(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0203_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_203(Runtime &runtime) {
    runtime.register_generated_unit(203u, 0x08B30000u, 16384u, &recomp_unit_0203, &recomp_unit_0203_entry);
    runtime.register_function(0x08B30000u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3000Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30044u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3004Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3007Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30080u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30090u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B300D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B300F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30118u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30150u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30164u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B301A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B301B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B301C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B301DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30210u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30280u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B302D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B302DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30300u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30320u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30340u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30358u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30370u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30388u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B303A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B303C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B303D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B303E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30408u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30410u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30428u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30448u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30468u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30480u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30488u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B304A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B304ACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B304C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B304E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30508u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30550u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30568u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30594u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B305A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B305D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B305E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B305E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B305F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B305F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30600u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30608u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30610u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30654u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30658u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3065Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30728u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30758u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3075Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30788u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B307B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B307B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B307E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30874u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3087Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30910u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B309A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B309C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B309ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30A08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30A18u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30A40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30A9Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30AA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30AC0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30AE4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B00u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B2Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B58u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30B60u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30BB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30BBCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30C40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30CF0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30CF4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DA4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DC4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DCCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30DFCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30E1Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30E38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30EB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F24u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F28u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F34u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F44u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F4Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F50u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F60u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F68u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F6Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F7Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F88u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30F98u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30FA4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30FB0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30FB4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30FC0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30FD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30FDCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30FECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B30FF8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31008u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31014u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31024u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31030u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31040u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31048u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3104Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3105Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31068u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31078u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31084u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31094u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310A0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310B0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B310F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31104u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31110u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31120u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3112Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3113Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31148u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3114Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31158u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31164u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31174u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31180u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31190u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3119Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311ACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B311F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31200u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3120Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3121Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31228u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31238u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31244u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31254u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31260u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31270u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3127Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3128Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31298u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B312E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31350u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31384u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31398u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3139Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B313F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31404u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31414u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31424u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31428u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31434u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3143Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31444u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31454u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31460u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31498u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B314BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B314C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B314F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31510u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31520u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3152Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3153Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31570u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31588u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3159Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B315B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B315B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B315BCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B315ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31624u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31658u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3165Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31660u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31688u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31694u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B316C0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B316C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B316DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B316F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31700u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31718u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31720u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3172Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31754u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31780u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B317A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B317CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B317E8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B318E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31908u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3192Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31940u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A10u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A14u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A20u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A3Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A44u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A54u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A60u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31A90u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31AA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31ABCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31AD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31AD8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31AE4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B34u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B48u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B58u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31B6Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31BC8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31BCCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C38u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C40u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C50u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C5Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C70u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C74u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C80u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31C94u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31CB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D18u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31D68u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31DB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31DC0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31DF0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E14u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E3Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E58u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31E60u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31EBCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31F2Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31F8Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31FA0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31FA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B31FB0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3202Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32098u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B320A4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B320ACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B320B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32108u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32148u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321B8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B321FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32214u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B322F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B323C8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B323E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32404u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32408u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B324E0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B324F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B324F4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B325CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32608u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32694u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3271Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32760u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32790u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B327A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32818u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32834u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3283Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32840u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32854u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B328FCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3293Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32948u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B329D4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B329D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B329F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A58u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32A60u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B24u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B74u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32B90u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32BACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32BC4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32BD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32C8Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32D5Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32D88u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32DA0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32DACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32DCCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32DDCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32E54u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32E80u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32EB8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32ED8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32EE8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F0Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F28u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F34u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F44u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F5Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F60u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F6Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32F78u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32FCCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32FD8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32FE8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B32FF8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33020u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33038u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33050u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B330E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B330ECu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33104u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33140u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33164u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B331F8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33204u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33214u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33218u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33220u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33230u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33310u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33318u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33330u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33338u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33420u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3346Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B334ACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B334D0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33508u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33534u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33568u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33574u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33598u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B335D8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33618u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33658u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33670u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33698u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B336CCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B337DCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B337E4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B337F0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33840u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B338ACu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3390Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33970u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33984u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33988u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B3398Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B339A8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B339B4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B339C4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33A08u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33A50u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33AB0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33B34u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33B54u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33B88u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33BC8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33BDCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33BE0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C00u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C14u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C30u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C64u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C70u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C78u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C90u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33C94u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CA8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CC0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CD0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CD8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CE8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33CF0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D04u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D28u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D68u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33D94u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33DA0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33DBCu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33DE4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33E04u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33E18u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33E50u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33E88u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33E9Cu, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33EC4u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33ED0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33ED8u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33EE0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F24u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F64u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F80u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F88u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F90u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33F94u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33FA0u, &recomp_unit_0203, "recomp_unit_0203");
    runtime.register_function(0x08B33FCCu, &recomp_unit_0203, "recomp_unit_0203");
}
} // namespace psprecomp
