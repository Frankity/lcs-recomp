#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0213[4074] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 21, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 26,
    0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 31, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 54, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 66,
    0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 81,
    0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 0,
    0, 96, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132,
    0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0,
    0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212,
    0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228,
    0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 269, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 272, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284, 0,
    285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0,
    301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0,
    317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0,
    333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0,
    349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364, 0,
    365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 380, 0,
    381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0,
    397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0,
    0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 440, 441, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 443,
};
void recomp_unit_0213_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B58000u;
        entry_id = (entry_delta < 16296u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0213[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B58000;
    case 2u: goto L_08B58034;
    case 3u: goto L_08B58064;
    case 4u: goto L_08B58080;
    case 5u: goto L_08B580B0;
    case 6u: goto L_08B580C0;
    case 7u: goto L_08B580CC;
    case 8u: goto L_08B580E0;
    case 9u: goto L_08B580EC;
    case 10u: goto L_08B580F8;
    case 11u: goto L_08B58118;
    case 12u: goto L_08B5812C;
    case 13u: goto L_08B5813C;
    case 14u: goto L_08B58154;
    case 15u: goto L_08B5815C;
    case 16u: goto L_08B58164;
    case 17u: goto L_08B5816C;
    case 18u: goto L_08B58174;
    case 19u: goto L_08B58188;
    case 20u: goto L_08B581A4;
    case 21u: goto L_08B581A8;
    case 22u: goto L_08B581B4;
    case 23u: goto L_08B581C8;
    case 24u: goto L_08B581DC;
    case 25u: goto L_08B581F0;
    case 26u: goto L_08B581FC;
    case 27u: goto L_08B58218;
    case 28u: goto L_08B58220;
    case 29u: goto L_08B58250;
    case 30u: goto L_08B5825C;
    case 31u: goto L_08B58260;
    case 32u: goto L_08B58274;
    case 33u: goto L_08B58294;
    case 34u: goto L_08B5829C;
    case 35u: goto L_08B582B4;
    case 36u: goto L_08B582C8;
    case 37u: goto L_08B582D8;
    case 38u: goto L_08B582E4;
    case 39u: goto L_08B582F8;
    case 40u: goto L_08B58310;
    case 41u: goto L_08B5832C;
    case 42u: goto L_08B58344;
    case 43u: goto L_08B58358;
    case 44u: goto L_08B58360;
    case 45u: goto L_08B58368;
    case 46u: goto L_08B58394;
    case 47u: goto L_08B583A4;
    case 48u: goto L_08B583D4;
    case 49u: goto L_08B583FC;
    case 50u: goto L_08B58404;
    case 51u: goto L_08B58420;
    case 52u: goto L_08B58428;
    case 53u: goto L_08B58434;
    case 54u: goto L_08B5844C;
    case 55u: goto L_08B58450;
    case 56u: goto L_08B58470;
    case 57u: goto L_08B58478;
    case 58u: goto L_08B5849C;
    case 59u: goto L_08B584A8;
    case 60u: goto L_08B584B4;
    case 61u: goto L_08B584BC;
    case 62u: goto L_08B584C4;
    case 63u: goto L_08B584DC;
    case 64u: goto L_08B584E8;
    case 65u: goto L_08B584F0;
    case 66u: goto L_08B584FC;
    case 67u: goto L_08B5850C;
    case 68u: goto L_08B58518;
    case 69u: goto L_08B58524;
    case 70u: goto L_08B58550;
    case 71u: goto L_08B58558;
    case 72u: goto L_08B58570;
    case 73u: goto L_08B58598;
    case 74u: goto L_08B585A4;
    case 75u: goto L_08B585B4;
    case 76u: goto L_08B585BC;
    case 77u: goto L_08B585D8;
    case 78u: goto L_08B585E4;
    case 79u: goto L_08B585EC;
    case 80u: goto L_08B585F4;
    case 81u: goto L_08B585FC;
    case 82u: goto L_08B58614;
    case 83u: goto L_08B5861C;
    case 84u: goto L_08B58624;
    case 85u: goto L_08B58630;
    case 86u: goto L_08B5864C;
    case 87u: goto L_08B58668;
    case 88u: goto L_08B58684;
    case 89u: goto L_08B586A0;
    case 90u: goto L_08B586B4;
    case 91u: goto L_08B586BC;
    case 92u: goto L_08B586C8;
    case 93u: goto L_08B586DC;
    case 94u: goto L_08B586E4;
    case 95u: goto L_08B586F4;
    case 96u: goto L_08B58704;
    case 97u: goto L_08B5870C;
    case 98u: goto L_08B58718;
    case 99u: goto L_08B58728;
    case 100u: goto L_08B58730;
    case 101u: goto L_08B58738;
    case 102u: goto L_08B58740;
    case 103u: goto L_08B5874C;
    case 104u: goto L_08B58780;
    case 105u: goto L_08B587B4;
    case 106u: goto L_08B587B8;
    case 107u: goto L_08B587E0;
    case 108u: goto L_08B587F0;
    case 109u: goto L_08B58810;
    case 110u: goto L_08B58828;
    case 111u: goto L_08B58890;
    case 112u: goto L_08B58898;
    case 113u: goto L_08B58924;
    case 114u: goto L_08B58940;
    case 115u: goto L_08B589C0;
    case 116u: goto L_08B58ACC;
    case 117u: goto L_08B58D6C;
    case 118u: goto L_08B58D78;
    case 119u: goto L_08B58D98;
    case 120u: goto L_08B58DEC;
    case 121u: goto L_08B58F14;
    case 122u: goto L_08B58F2C;
    case 123u: goto L_08B58FEC;
    case 124u: goto L_08B59004;
    case 125u: goto L_08B590DC;
    case 126u: goto L_08B590EC;
    case 127u: goto L_08B59104;
    case 128u: goto L_08B5911C;
    case 129u: goto L_08B59134;
    case 130u: goto L_08B5914C;
    case 131u: goto L_08B59164;
    case 132u: goto L_08B5917C;
    case 133u: goto L_08B59194;
    case 134u: goto L_08B591AC;
    case 135u: goto L_08B591C4;
    case 136u: goto L_08B591DC;
    case 137u: goto L_08B591F4;
    case 138u: goto L_08B59214;
    case 139u: goto L_08B59224;
    case 140u: goto L_08B5923C;
    case 141u: goto L_08B59254;
    case 142u: goto L_08B5926C;
    case 143u: goto L_08B59284;
    case 144u: goto L_08B5929C;
    case 145u: goto L_08B592B4;
    case 146u: goto L_08B592CC;
    case 147u: goto L_08B592E4;
    case 148u: goto L_08B592FC;
    case 149u: goto L_08B59314;
    case 150u: goto L_08B5932C;
    case 151u: goto L_08B59344;
    case 152u: goto L_08B59364;
    case 153u: goto L_08B59374;
    case 154u: goto L_08B5938C;
    case 155u: goto L_08B593A4;
    case 156u: goto L_08B593BC;
    case 157u: goto L_08B593D4;
    case 158u: goto L_08B593EC;
    case 159u: goto L_08B59404;
    case 160u: goto L_08B5941C;
    case 161u: goto L_08B59434;
    case 162u: goto L_08B5944C;
    case 163u: goto L_08B59464;
    case 164u: goto L_08B5947C;
    case 165u: goto L_08B5949C;
    case 166u: goto L_08B594AC;
    case 167u: goto L_08B594C4;
    case 168u: goto L_08B594DC;
    case 169u: goto L_08B594F4;
    case 170u: goto L_08B5950C;
    case 171u: goto L_08B59524;
    case 172u: goto L_08B5953C;
    case 173u: goto L_08B59554;
    case 174u: goto L_08B5956C;
    case 175u: goto L_08B59584;
    case 176u: goto L_08B5959C;
    case 177u: goto L_08B595B4;
    case 178u: goto L_08B595CC;
    case 179u: goto L_08B595EC;
    case 180u: goto L_08B595FC;
    case 181u: goto L_08B59614;
    case 182u: goto L_08B5962C;
    case 183u: goto L_08B59644;
    case 184u: goto L_08B5965C;
    case 185u: goto L_08B59674;
    case 186u: goto L_08B5968C;
    case 187u: goto L_08B596A4;
    case 188u: goto L_08B596BC;
    case 189u: goto L_08B596D4;
    case 190u: goto L_08B596EC;
    case 191u: goto L_08B59704;
    case 192u: goto L_08B59724;
    case 193u: goto L_08B59734;
    case 194u: goto L_08B5974C;
    case 195u: goto L_08B59764;
    case 196u: goto L_08B5977C;
    case 197u: goto L_08B59794;
    case 198u: goto L_08B597AC;
    case 199u: goto L_08B597C4;
    case 200u: goto L_08B597DC;
    case 201u: goto L_08B597F4;
    case 202u: goto L_08B5980C;
    case 203u: goto L_08B59824;
    case 204u: goto L_08B5983C;
    case 205u: goto L_08B5985C;
    case 206u: goto L_08B5986C;
    case 207u: goto L_08B59884;
    case 208u: goto L_08B5989C;
    case 209u: goto L_08B598B4;
    case 210u: goto L_08B598CC;
    case 211u: goto L_08B598E4;
    case 212u: goto L_08B598FC;
    case 213u: goto L_08B59914;
    case 214u: goto L_08B5992C;
    case 215u: goto L_08B59944;
    case 216u: goto L_08B5995C;
    case 217u: goto L_08B59974;
    case 218u: goto L_08B59994;
    case 219u: goto L_08B599A4;
    case 220u: goto L_08B599BC;
    case 221u: goto L_08B599D4;
    case 222u: goto L_08B599EC;
    case 223u: goto L_08B59A04;
    case 224u: goto L_08B59A1C;
    case 225u: goto L_08B59A34;
    case 226u: goto L_08B59A4C;
    case 227u: goto L_08B59A64;
    case 228u: goto L_08B59A7C;
    case 229u: goto L_08B59A94;
    case 230u: goto L_08B59AAC;
    case 231u: goto L_08B59ACC;
    case 232u: goto L_08B59B78;
    case 233u: goto L_08B59BEC;
    case 234u: goto L_08B59C18;
    case 235u: goto L_08B59C20;
    case 236u: goto L_08B59C48;
    case 237u: goto L_08B59D48;
    case 238u: goto L_08B59D80;
    case 239u: goto L_08B59D90;
    case 240u: goto L_08B59DA0;
    case 241u: goto L_08B59DA8;
    case 242u: goto L_08B59DD0;
    case 243u: goto L_08B59DD8;
    case 244u: goto L_08B59DE8;
    case 245u: goto L_08B59E0C;
    case 246u: goto L_08B59E2C;
    case 247u: goto L_08B59EB0;
    case 248u: goto L_08B5A094;
    case 249u: goto L_08B5A0EC;
    case 250u: goto L_08B5A144;
    case 251u: goto L_08B5A1A0;
    case 252u: goto L_08B5A1C8;
    case 253u: goto L_08B5A378;
    case 254u: goto L_08B5A568;
    case 255u: goto L_08B5A5C0;
    case 256u: goto L_08B5A5D0;
    case 257u: goto L_08B5A5F0;
    case 258u: goto L_08B5A600;
    case 259u: goto L_08B5A614;
    case 260u: goto L_08B5A658;
    case 261u: goto L_08B5A688;
    case 262u: goto L_08B5A6A0;
    case 263u: goto L_08B5A6C8;
    case 264u: goto L_08B5A6D0;
    case 265u: goto L_08B5A6D8;
    case 266u: goto L_08B5A6F0;
    case 267u: goto L_08B5A700;
    case 268u: goto L_08B5A774;
    case 269u: goto L_08B5A778;
    case 270u: goto L_08B5A7C8;
    case 271u: goto L_08B5A7EC;
    case 272u: goto L_08B5A7F0;
    case 273u: goto L_08B5A818;
    case 274u: goto L_08B5A828;
    case 275u: goto L_08B5A830;
    case 276u: goto L_08B5A838;
    case 277u: goto L_08B5A840;
    case 278u: goto L_08B5A848;
    case 279u: goto L_08B5A850;
    case 280u: goto L_08B5A858;
    case 281u: goto L_08B5A860;
    case 282u: goto L_08B5A868;
    case 283u: goto L_08B5A870;
    case 284u: goto L_08B5A878;
    case 285u: goto L_08B5A880;
    case 286u: goto L_08B5A888;
    case 287u: goto L_08B5A890;
    case 288u: goto L_08B5A898;
    case 289u: goto L_08B5A8A0;
    case 290u: goto L_08B5A8A8;
    case 291u: goto L_08B5A8B0;
    case 292u: goto L_08B5A8B8;
    case 293u: goto L_08B5A8C0;
    case 294u: goto L_08B5A8C8;
    case 295u: goto L_08B5A8D0;
    case 296u: goto L_08B5A8D8;
    case 297u: goto L_08B5A8E0;
    case 298u: goto L_08B5A8E8;
    case 299u: goto L_08B5A8F0;
    case 300u: goto L_08B5A8F8;
    case 301u: goto L_08B5A900;
    case 302u: goto L_08B5A908;
    case 303u: goto L_08B5A910;
    case 304u: goto L_08B5A918;
    case 305u: goto L_08B5A920;
    case 306u: goto L_08B5A928;
    case 307u: goto L_08B5A930;
    case 308u: goto L_08B5A938;
    case 309u: goto L_08B5A940;
    case 310u: goto L_08B5A948;
    case 311u: goto L_08B5A950;
    case 312u: goto L_08B5A958;
    case 313u: goto L_08B5A960;
    case 314u: goto L_08B5A968;
    case 315u: goto L_08B5A970;
    case 316u: goto L_08B5A978;
    case 317u: goto L_08B5A980;
    case 318u: goto L_08B5A988;
    case 319u: goto L_08B5A990;
    case 320u: goto L_08B5A998;
    case 321u: goto L_08B5A9A0;
    case 322u: goto L_08B5A9A8;
    case 323u: goto L_08B5A9B0;
    case 324u: goto L_08B5A9B8;
    case 325u: goto L_08B5A9C0;
    case 326u: goto L_08B5A9C8;
    case 327u: goto L_08B5A9D0;
    case 328u: goto L_08B5A9D8;
    case 329u: goto L_08B5A9E0;
    case 330u: goto L_08B5A9E8;
    case 331u: goto L_08B5A9F0;
    case 332u: goto L_08B5A9F8;
    case 333u: goto L_08B5AA00;
    case 334u: goto L_08B5AA08;
    case 335u: goto L_08B5AA10;
    case 336u: goto L_08B5AA18;
    case 337u: goto L_08B5AA20;
    case 338u: goto L_08B5AA28;
    case 339u: goto L_08B5AA30;
    case 340u: goto L_08B5AA38;
    case 341u: goto L_08B5AA40;
    case 342u: goto L_08B5AA48;
    case 343u: goto L_08B5AA50;
    case 344u: goto L_08B5AA58;
    case 345u: goto L_08B5AA60;
    case 346u: goto L_08B5AA68;
    case 347u: goto L_08B5AA70;
    case 348u: goto L_08B5AA78;
    case 349u: goto L_08B5AA80;
    case 350u: goto L_08B5AA88;
    case 351u: goto L_08B5AA90;
    case 352u: goto L_08B5AA98;
    case 353u: goto L_08B5AAA0;
    case 354u: goto L_08B5AAA8;
    case 355u: goto L_08B5AAB0;
    case 356u: goto L_08B5AAB8;
    case 357u: goto L_08B5AAC0;
    case 358u: goto L_08B5AAC8;
    case 359u: goto L_08B5AAD0;
    case 360u: goto L_08B5AAD8;
    case 361u: goto L_08B5AAE0;
    case 362u: goto L_08B5AAE8;
    case 363u: goto L_08B5AAF0;
    case 364u: goto L_08B5AAF8;
    case 365u: goto L_08B5AB00;
    case 366u: goto L_08B5AB08;
    case 367u: goto L_08B5AB10;
    case 368u: goto L_08B5AB18;
    case 369u: goto L_08B5AB20;
    case 370u: goto L_08B5AB28;
    case 371u: goto L_08B5AB30;
    case 372u: goto L_08B5AB38;
    case 373u: goto L_08B5AB40;
    case 374u: goto L_08B5AB48;
    case 375u: goto L_08B5AB50;
    case 376u: goto L_08B5AB58;
    case 377u: goto L_08B5AB60;
    case 378u: goto L_08B5AB68;
    case 379u: goto L_08B5AB70;
    case 380u: goto L_08B5AB78;
    case 381u: goto L_08B5AB80;
    case 382u: goto L_08B5AB88;
    case 383u: goto L_08B5AB90;
    case 384u: goto L_08B5AB98;
    case 385u: goto L_08B5ABA0;
    case 386u: goto L_08B5ABA8;
    case 387u: goto L_08B5ABB0;
    case 388u: goto L_08B5ABB8;
    case 389u: goto L_08B5ABC0;
    case 390u: goto L_08B5ABC8;
    case 391u: goto L_08B5ABD0;
    case 392u: goto L_08B5ABD8;
    case 393u: goto L_08B5ABE0;
    case 394u: goto L_08B5ABE8;
    case 395u: goto L_08B5ABF0;
    case 396u: goto L_08B5ABF8;
    case 397u: goto L_08B5AC00;
    case 398u: goto L_08B5AC08;
    case 399u: goto L_08B5AC10;
    case 400u: goto L_08B5AC18;
    case 401u: goto L_08B5AC20;
    case 402u: goto L_08B5ACD8;
    case 403u: goto L_08B5ACEC;
    case 404u: goto L_08B5ADF4;
    case 405u: goto L_08B5AE44;
    case 406u: goto L_08B5AE5C;
    case 407u: goto L_08B5AEBC;
    case 408u: goto L_08B5AEEC;
    case 409u: goto L_08B5AF74;
    case 410u: goto L_08B5AF9C;
    case 411u: goto L_08B5B030;
    case 412u: goto L_08B5B090;
    case 413u: goto L_08B5B130;
    case 414u: goto L_08B5B280;
    case 415u: goto L_08B5B294;
    case 416u: goto L_08B5B2BC;
    case 417u: goto L_08B5B34C;
    case 418u: goto L_08B5B49C;
    case 419u: goto L_08B5B534;
    case 420u: goto L_08B5B544;
    case 421u: goto L_08B5B5EC;
    case 422u: goto L_08B5B6A4;
    case 423u: goto L_08B5B75C;
    case 424u: goto L_08B5B7F4;
    case 425u: goto L_08B5B804;
    case 426u: goto L_08B5B82C;
    case 427u: goto L_08B5B8C4;
    case 428u: goto L_08B5B984;
    case 429u: goto L_08B5B994;
    case 430u: goto L_08B5B9C4;
    case 431u: goto L_08B5BA34;
    case 432u: goto L_08B5BB94;
    case 433u: goto L_08B5BBF4;
    case 434u: goto L_08B5BCAC;
    case 435u: goto L_08B5BD5C;
    case 436u: goto L_08B5BDBC;
    case 437u: goto L_08B5BE7C;
    case 438u: goto L_08B5BED8;
    case 439u: goto L_08B5BEE0;
    case 440u: goto L_08B5BEEC;
    case 441u: goto L_08B5BEF0;
    case 442u: goto L_08B5BF30;
    case 443u: goto L_08B5BFA4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B58000:
    rt.unsupported(0x08B58000u, 0x4148204Cu, "unknown not lowered yet"); return;
L_08B58034:
    rt.unsupported(0x08B58034u, 0x4E45504Fu, "unknown not lowered yet"); return;
L_08B58064:
    rt.unsupported(0x08B58064u, 0x4C00202Eu, "unknown not lowered yet"); return;
L_08B58080:
    rt.unsupported(0x08B58080u, 0x4C4C4143u, "unknown not lowered yet"); return;
L_08B580B0:
    rt.unsupported(0x08B580B0u, 0x20594853u, "unknown not lowered yet"); return;
L_08B580C0:
    rt.unsupported(0x08B580C0u, 0x204E5255u, "unknown not lowered yet"); return;
L_08B580CC:
    rt.unsupported(0x08B580CCu, 0x424F4A20u, "unknown not lowered yet"); return;
L_08B580E0:
    rt.unsupported(0x08B580E0u, 0x46494C20u, "cop1? not lowered yet"); return;
L_08B580EC:
    rt.unsupported(0x08B580ECu, 0x20534920u, "unknown not lowered yet"); return;
L_08B580F8:
    rt.unsupported(0x08B580F8u, 0x204C414Eu, "unknown not lowered yet"); return;
L_08B58118:
    rt.unsupported(0x08B58118u, 0x4E205455u, "unknown not lowered yet"); return;
L_08B5812C:
    rt.unsupported(0x08B5812Cu, 0x20464655u, "unknown not lowered yet"); return;
L_08B5813C:
    rt.unsupported(0x08B5813Cu, 0x204E4148u, "unknown not lowered yet"); return;
L_08B58154:
    rt.unsupported(0x08B58158u, 0x54454720u, "control flow in delay slot"); return;
L_08B5815C:
    if (ctx.gpr[17] != 0u) {
    rt.unsupported(0x08B58160u, 0x4F454449u, "unknown not lowered yet"); return;
        ctx.pc = 0x08B645E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B58164;
L_08B58164:
    rt.unsupported(0x08B58168u, 0x54544553u, "control flow in delay slot"); return;
L_08B5816C:
    if (ctx.gpr[18] == ctx.gpr[6]) {
    (void)(ctx.gpr[17] < static_cast<std::uint32_t>(17733) ? 1u : 0u);
        ctx.pc = 0x08B60284u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B58174;
L_08B58174:
    (void)(ctx.gpr[17] < static_cast<std::uint32_t>(11808) ? 1u : 0u);
    rt.unsupported(0x08B58178u, 0x45570020u, "cop1? not lowered yet"); return;
L_08B58188:
    rt.unsupported(0x08B58188u, 0x4E574F44u, "unknown not lowered yet"); return;
L_08B581A4:
    rt.unsupported(0x08B581A4u, 0x4F532044u, "unknown not lowered yet"); return;
L_08B581A8:
    rt.unsupported(0x08B581A8u, 0x43554D20u, "unknown not lowered yet"); return;
L_08B581B4:
    rt.unsupported(0x08B581B4u, 0x4F205441u, "unknown not lowered yet"); return;
L_08B581C8:
    rt.unsupported(0x08B581C8u, 0x4E574F44u, "unknown not lowered yet"); return;
L_08B581DC:
    rt.unsupported(0x08B581DCu, 0x4E414D20u, "unknown not lowered yet"); return;
L_08B581F0:
    rt.unsupported(0x08B581F0u, 0x49535542u, "cop2/vfpu not lowered yet"); return;
L_08B581FC:
    rt.unsupported(0x08B581FCu, 0x4E452047u, "unknown not lowered yet"); return;
L_08B58218:
    (void)(ctx.gpr[17] < static_cast<std::uint32_t>(11808) ? 1u : 0u);
    { const bool signed_ok = ctx.execute_signed_add(5u, 1u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B5821Cu, 0x00202E20u); return; } }
    goto L_08B58220;
L_08B58220:
    rt.unsupported(0x08B58220u, 0x43455053u, "unknown not lowered yet"); return;
L_08B58250:
    rt.unsupported(0x08B58250u, 0x464F204Cu, "cop1? not lowered yet"); return;
L_08B5825C:
    { const bool signed_ok = ctx.execute_signed_add(5u, 1u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B5825Cu, 0x00202E20u); return; } }
    goto L_08B58260;
L_08B58260:
    rt.unsupported(0x08B58260u, 0x4C505041u, "unknown not lowered yet"); return;
L_08B58274:
    rt.unsupported(0x08B58274u, 0x41204452u, "unknown not lowered yet"); return;
L_08B58294:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B58298u, 0x202E2045u, "unknown not lowered yet"); return;
        ctx.pc = 0x08B6A3A4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B5829C;
L_08B5829C:
    rt.unsupported(0x08B5829Cu, 0x202E202Eu, "unknown not lowered yet"); return;
L_08B582B4:
    rt.unsupported(0x08B582B4u, 0x454E2920u, "cop1? not lowered yet"); return;
L_08B582C8:
    rt.unsupported(0x08B582C8u, 0x2029544Fu, "unknown not lowered yet"); return;
L_08B582D8:
    rt.unsupported(0x08B582D8u, 0x44432053u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[10] != ctx.gpr[14]) {
    rt.unsupported(0x08B582E0u, 0x2044454Bu, "unknown not lowered yet"); return;
        ctx.pc = 0x08B62790u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B582E4;
L_08B582E4:
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[10]) < 17481 ? 1u : 0u);
    rt.unsupported(0x08B582E8u, 0x4E49203Au, "unknown not lowered yet"); return;
L_08B582F8:
    rt.unsupported(0x08B582F8u, 0x47494220u, "cop1? not lowered yet"); return;
L_08B58310:
    rt.unsupported(0x08B58310u, 0x20544148u, "unknown not lowered yet"); return;
L_08B5832C:
    rt.unsupported(0x08B5832Cu, 0x202E2029u, "unknown not lowered yet"); return;
L_08B58344:
    rt.unsupported(0x08B58344u, 0x20524F46u, "unknown not lowered yet"); return;
L_08B58358:
    if (ctx.gpr[18] != ctx.gpr[4]) {
    rt.unsupported(0x08B5835Cu, 0x45522044u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08B604ACu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B58360;
L_08B58360:
    if (ctx.gpr[26] == ctx.gpr[1]) {
    rt.unsupported(0x08B58364u, 0x464F2045u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08B69894u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B58368;
L_08B58368:
    rt.unsupported(0x08B58368u, 0x45485420u, "cop1? not lowered yet"); return;
L_08B58394:
    rt.unsupported(0x08B58394u, 0x20474E49u, "unknown not lowered yet"); return;
L_08B583A4:
    ctx.gpr[5] = (ctx.gpr[18] < static_cast<std::uint32_t>(20047) ? 1u : 0u);
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[10]) < 18720 ? 1u : 0u);
    rt.unsupported(0x08B583ACu, 0x4F4E2053u, "unknown not lowered yet"); return;
L_08B583D4:
    rt.unsupported(0x08B583D4u, 0x202E202Eu, "unknown not lowered yet"); return;
L_08B583FC:
    if (ctx.gpr[25] == 0u) {
    rt.unsupported(0x08B58400u, 0x204E4950u, "unknown not lowered yet"); return;
        ctx.pc = 0x08B68880u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B58404;
L_08B58404:
    rt.unsupported(0x08B58404u, 0x41444F54u, "unknown not lowered yet"); return;
L_08B58420:
    rt.unsupported(0x08B58424u, 0x5453203Au, "control flow in delay slot"); return;
L_08B58428:
    rt.unsupported(0x08B58428u, 0x49524545u, "cop2/vfpu not lowered yet"); return;
L_08B58434:
    rt.unsupported(0x08B58434u, 0x4720592Du, "cop1? not lowered yet"); return;
L_08B5844C:
    { const bool signed_ok = ctx.execute_signed_add(4u, 1u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B5844Cu, 0x00202020u); return; } }
    goto L_08B58450;
L_08B58450:
    rt.unsupported(0x08B58450u, 0x414E4946u, "unknown not lowered yet"); return;
L_08B58470:
    if (ctx.gpr[1] != 0u) {
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[10]) < 16712 ? 1u : 0u);
        ctx.pc = 0x08B63CF4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B58478;
L_08B58478:
    rt.unsupported(0x08B58478u, 0x20412053u, "unknown not lowered yet"); return;
L_08B5849C:
    ctx.gpr[5] = (22089u << 16u);
    if (ctx.gpr[18] == ctx.gpr[21]) {
    rt.unsupported(0x08B584A4u, 0x4C415320u, "unknown not lowered yet"); return;
        ctx.pc = 0x08B6C124u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B584A8;
L_08B584A8:
    rt.unsupported(0x08B584A8u, 0x454D5345u, "cop1? not lowered yet"); return;
L_08B584B4:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B584B8u, 0x4154204Fu, "unknown not lowered yet"); return;
        ctx.pc = 0x08B69A00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B584BC;
L_08B584BC:
    if (static_cast<std::int32_t>(ctx.gpr[9]) <= 0) {
    rt.unsupported(0x08B584C0u, 0x4620554Fu, "cop1? not lowered yet"); return;
        ctx.pc = 0x08B699ECu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B584C4;
L_08B584C4:
    rt.unsupported(0x08B584C4u, 0x4120524Fu, "unknown not lowered yet"); return;
L_08B584DC:
    rt.unsupported(0x08B584DCu, 0x4120534Cu, "unknown not lowered yet"); return;
L_08B584E8:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B584ECu, 0x204C4145u, "unknown not lowered yet"); return;
        ctx.pc = 0x08B605F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B584F0;
L_08B584F0:
    rt.unsupported(0x08B584F0u, 0x43204557u, "unknown not lowered yet"); return;
L_08B584FC:
    rt.unsupported(0x08B584FCu, 0x45502050u, "cop1? not lowered yet"); return;
L_08B5850C:
    rt.unsupported(0x08B5850Cu, 0x20454854u, "unknown not lowered yet"); return;
L_08B58518:
    rt.unsupported(0x08B58518u, 0x202E202Eu, "unknown not lowered yet"); return;
L_08B58524:
    rt.unsupported(0x08B58524u, 0x43205255u, "unknown not lowered yet"); return;
L_08B58550:
    if (ctx.gpr[26] == ctx.gpr[5]) {
    rt.unsupported(0x08B58554u, 0x4854203Au, "cop2/vfpu not lowered yet"); return;
        ctx.pc = 0x08B6B658u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B58558;
L_08B58558:
    rt.unsupported(0x08B58558u, 0x4E4F2045u, "unknown not lowered yet"); return;
L_08B58570:
    rt.unsupported(0x08B58570u, 0x4449534Eu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B58574u, 0x4F442045u, "unknown not lowered yet"); return;
L_08B58598:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[10]) < 20033 ? 1u : 0u);
    rt.unsupported(0x08B585A0u, 0x5245424Du, "control flow in delay slot"); return;
L_08B585A4:
    rt.unsupported(0x08B585A4u, 0x454E4F20u, "cop1? not lowered yet"); return;
L_08B585B4:
    (void)(ctx.gpr[17] < static_cast<std::uint32_t>(11808) ? 1u : 0u);
    { const bool signed_ok = ctx.execute_signed_add(4u, 1u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B585B8u, 0x00202020u); return; } }
    goto L_08B585BC;
L_08B585BC:
    rt.unsupported(0x08B585BCu, 0x49504143u, "cop2/vfpu not lowered yet"); return;
L_08B585D8:
    rt.unsupported(0x08B585D8u, 0x4E495245u, "unknown not lowered yet"); return;
L_08B585E4:
    if (ctx.gpr[10] != ctx.gpr[15]) {
    rt.unsupported(0x08B585E8u, 0x44204847u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08B6CF08u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B585EC;
L_08B585EC:
    if (ctx.gpr[26] == ctx.gpr[12]) {
    rt.unsupported(0x08B585F0u, 0x444E4120u, "unsupported CFC1 control register"); return;
        ctx.pc = 0x08B68B04u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B585F4;
L_08B585F4:
    rt.unsupported(0x08B585F8u, 0x56412059u, "control flow in delay slot"); return;
L_08B585FC:
    rt.unsupported(0x08B585FCu, 0x414C4941u, "unknown not lowered yet"); return;
L_08B58614:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    rt.unsupported(0x08B58618u, 0x204E4F53u, "unknown not lowered yet"); return;
        ctx.pc = 0x08B6C698u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B5861C;
L_08B5861C:
    if (ctx.gpr[10] != ctx.gpr[17]) {
    rt.unsupported(0x08B58620u, 0x44455249u, "unsupported CFC1 control register"); return;
        ctx.pc = 0x08B69B68u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B58624;
L_08B58624:
    rt.unsupported(0x08B58624u, 0x202E202Eu, "unknown not lowered yet"); return;
L_08B58630:
    rt.unsupported(0x08B58630u, 0x20455641u, "unknown not lowered yet"); return;
L_08B5864C:
    rt.unsupported(0x08B5864Cu, 0x49485449u, "cop2/vfpu not lowered yet"); return;
L_08B58668:
    rt.unsupported(0x08B58668u, 0x204F5420u, "unknown not lowered yet"); return;
L_08B58684:
    rt.unsupported(0x08B58684u, 0x20202E20u, "unknown not lowered yet"); return;
L_08B586A0:
    rt.unsupported(0x08B586A0u, 0x45535255u, "cop1? not lowered yet"); return;
L_08B586B4:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B586B8u, 0x41475241u, "unknown not lowered yet"); return;
        ctx.pc = 0x08B6B3C4u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B586BC;
L_08B586BC:
    ctx.gpr[19] = (ctx.gpr[18] < static_cast<std::uint32_t>(17741) ? 1u : 0u);
    rt.unsupported(0x08B586C0u, 0x204D4F43u, "unknown not lowered yet"); return;
L_08B586C8:
    ctx.gpr[23] = (ctx.gpr[18] < static_cast<std::uint32_t>(22359) ? 1u : 0u);
    rt.unsupported(0x08B586CCu, 0x4E415247u, "unknown not lowered yet"); return;
L_08B586DC:
    rt.unsupported(0x08B586DCu, 0x204D4F43u, "unknown not lowered yet"); return;
L_08B586E4:
    ctx.gpr[23] = (ctx.gpr[18] < static_cast<std::uint32_t>(22359) ? 1u : 0u);
    rt.unsupported(0x08B586E8u, 0x4B434F52u, "cop2/vfpu not lowered yet"); return;
L_08B586F4:
    rt.unsupported(0x08B586F4u, 0x4F432E53u, "unknown not lowered yet"); return;
L_08B58704:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B58708u, 0x454C5241u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08B6B414u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B5870C;
L_08B5870C:
    ctx.gpr[19] = (ctx.gpr[18] < static_cast<std::uint32_t>(17477) ? 1u : 0u);
    rt.unsupported(0x08B58710u, 0x204D4F43u, "unknown not lowered yet"); return;
L_08B58718:
    ctx.gpr[23] = (ctx.gpr[18] < static_cast<std::uint32_t>(22359) ? 1u : 0u);
    rt.unsupported(0x08B5871Cu, 0x4B434F52u, "cop2/vfpu not lowered yet"); return;
L_08B58728:
    rt.unsupported(0x08B58728u, 0x4F432E53u, "unknown not lowered yet"); return;
L_08B58730:
    if (ctx.gpr[26] != ctx.gpr[23]) {
    rt.unsupported(0x08B58734u, 0x4F522E57u, "unknown not lowered yet"); return;
        goto L_08B587B4;
    }
    goto L_08B58738;
L_08B58738:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B5873Cu, 0x454C5241u, "cop1? not lowered yet"); return;
        ctx.pc = 0x08B6B448u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B58740;
L_08B58740:
    ctx.gpr[19] = (ctx.gpr[18] < static_cast<std::uint32_t>(17477) ? 1u : 0u);
    rt.unsupported(0x08B58744u, 0x204D4F43u, "unknown not lowered yet"); return;
L_08B5874C:
    (void)(ctx.gpr[1] << 0u);
    rt.unsupported(0x08B58750u, 0x00020001u, "special? not lowered yet"); return;
L_08B58780:
    rt.unsupported(0x08B58780u, 0x000E000Du, "special? not lowered yet"); return;
L_08B587B4:
    // nop
    goto L_08B587B8;
L_08B587B8:
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[6] = (26214u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    // nop
    // nop
    // nop
    goto L_08B587E0;
L_08B587E0:
    // nop
    // nop
    // nop
    // nop
    goto L_08B587F0;
L_08B587F0:
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[24] = (0u << 16u);
    // nop
    rt.unsupported(0x08B5880Cu, 0x406FE000u, "unknown not lowered yet"); return;
L_08B58810:
    // nop
    // nop
    // nop
    // nop
    (void)(0u >> 0u);
    // nop
    goto L_08B58828;
L_08B58828:
    // nop
    // nop
    // nop
    ctx.pc = 0x02B0F910u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B58890:
    if (ctx.gpr[3] != ctx.gpr[4]) {
    rt.unsupported(0x08B58894u, 0x61657268u, "vfpu0 not lowered yet"); return;
        ctx.pc = 0x08B73DE8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B58898;
L_08B58898:
    (void)(0u & 0u);
    // nop
    rt.unsupported(0x08B588A0u, 0x00049828u, "special? not lowered yet"); return;
L_08B58924:
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B58940;
L_08B58940:
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
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B58990u, 0x40666666u, "unknown not lowered yet"); return;
L_08B589C0:
    rt.unsupported(0x08B589C4u, 0x08ACAB58u, "control flow in delay slot"); return;
L_08B58ACC:
    rt.unsupported(0x08B58AD0u, 0x08ACEFA0u, "control flow in delay slot"); return;
L_08B58D6C:
    // nop
    rt.unsupported(0x08B58D74u, 0x08B0B5B0u, "control flow in delay slot"); return;
L_08B58D78:
    rt.unsupported(0x08B58D78u, 0x0000000Cu, "syscall not lowered yet"); return;
L_08B58D98:
    // nop
    rt.unsupported(0x08B58DA0u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x02B6B540u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B58DEC:
    rt.unsupported(0x08B58DF0u, 0x08B2DA5Cu, "control flow in delay slot"); return;
L_08B58F14:
    rt.unsupported(0x08B58F18u, 0x08B2DA5Cu, "control flow in delay slot"); return;
L_08B58F2C:
    rt.unsupported(0x08B58F2Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B58FEC:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.pc = 0x02CB6970u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B59004:
    rt.unsupported(0x08B59004u, 0x00000001u, "special? not lowered yet"); return;
L_08B590DC:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B590E0u, 0x000000B0u, "special? not lowered yet"); return;
L_08B590EC:
    rt.unsupported(0x08B590ECu, 0x00000001u, "special? not lowered yet"); return;
L_08B59104:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59110u, 0x0000008Du, "special? not lowered yet"); return;
L_08B5911C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.lo);
        ctx.pc = 0x08B6A648u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B59134;
L_08B59134:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    if (ctx.gpr[13] == 0u) ctx.gpr[10] = (ctx.gpr[2]);
        ctx.pc = 0x08B6A660u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B5914C;
L_08B5914C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B59160u, 0x0041464Cu, "control flow in delay slot"); return;
L_08B59164:
    rt.unsupported(0x08B59164u, 0x00000001u, "special? not lowered yet"); return;
L_08B5917C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59188u, 0x0000008Du, "special? not lowered yet"); return;
L_08B59194:
    rt.unsupported(0x08B59194u, 0x00000001u, "special? not lowered yet"); return;
L_08B591AC:
    rt.unsupported(0x08B591ACu, 0x00000001u, "special? not lowered yet"); return;
L_08B591C4:
    rt.unsupported(0x08B591C4u, 0x00000001u, "special? not lowered yet"); return;
L_08B591DC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B591E8u, 0x000000A2u); return; } }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> (ctx.gpr[2] & 31u));
        ctx.pc = 0x08B6A708u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B591F4;
L_08B591F4:
    rt.unsupported(0x08B591F4u, 0x00000001u, "special? not lowered yet"); return;
L_08B59214:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59218u, 0x000000A8u, "special? not lowered yet"); return;
L_08B59224:
    rt.unsupported(0x08B59224u, 0x00000001u, "special? not lowered yet"); return;
L_08B5923C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59248u, 0x0000008Du, "special? not lowered yet"); return;
L_08B59254:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B59268u, 0x00434341u, "special? not lowered yet"); return;
        ctx.pc = 0x08B6A780u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B5926C;
L_08B5926C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> 9u);
        ctx.pc = 0x08B6A798u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B59284;
L_08B59284:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B59298u, 0x00004C4Cu, "control flow in delay slot"); return;
L_08B5929C:
    rt.unsupported(0x08B5929Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B592B4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B592C8u, 0x00524F48u, "control flow in delay slot"); return;
L_08B592CC:
    rt.unsupported(0x08B592CCu, 0x00000001u, "special? not lowered yet"); return;
L_08B592E4:
    rt.unsupported(0x08B592E4u, 0x00000001u, "special? not lowered yet"); return;
L_08B592FC:
    rt.unsupported(0x08B592FCu, 0x00000001u, "special? not lowered yet"); return;
L_08B59314:
    rt.unsupported(0x08B59314u, 0x00000001u, "special? not lowered yet"); return;
L_08B5932C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59338u, 0x000000B3u, "special? not lowered yet"); return;
L_08B59344:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    rt.unsupported(0x08B5935Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59364:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59368u, 0x0000008Eu, "special? not lowered yet"); return;
L_08B59374:
    rt.unsupported(0x08B59374u, 0x00000001u, "special? not lowered yet"); return;
L_08B5938C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59398u, 0x0000008Du, "special? not lowered yet"); return;
L_08B593A4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.lo);
        ctx.pc = 0x08B6A8D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B593BC;
L_08B593BC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    if (ctx.gpr[13] == 0u) ctx.gpr[10] = (ctx.gpr[2]);
        ctx.pc = 0x08B6A8E8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B593D4;
L_08B593D4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B593E8u, 0x0041464Cu, "control flow in delay slot"); return;
L_08B593EC:
    rt.unsupported(0x08B593ECu, 0x00000001u, "special? not lowered yet"); return;
L_08B59404:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> (ctx.gpr[2] & 31u));
        ctx.pc = 0x08B6A930u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B5941C;
L_08B5941C:
    rt.unsupported(0x08B5941Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59434:
    rt.unsupported(0x08B59434u, 0x00000001u, "special? not lowered yet"); return;
L_08B5944C:
    rt.unsupported(0x08B5944Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59464:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59470u, 0x000000B2u, "special? not lowered yet"); return;
L_08B5947C:
    rt.unsupported(0x08B5947Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B5949C:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B594A0u, 0x0000008Eu, "special? not lowered yet"); return;
L_08B594AC:
    rt.unsupported(0x08B594ACu, 0x00000001u, "special? not lowered yet"); return;
L_08B594C4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B594D0u, 0x0000008Du, "special? not lowered yet"); return;
L_08B594DC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B594F0u, 0x00434341u, "special? not lowered yet"); return;
        ctx.pc = 0x08B6AA08u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B594F4;
L_08B594F4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> 9u);
        ctx.pc = 0x08B6AA20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B5950C;
L_08B5950C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B59520u, 0x00004C4Cu, "control flow in delay slot"); return;
L_08B59524:
    rt.unsupported(0x08B59524u, 0x00000001u, "special? not lowered yet"); return;
L_08B5953C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59548u, 0x000000B2u, "special? not lowered yet"); return;
L_08B59554:
    rt.unsupported(0x08B59554u, 0x00000001u, "special? not lowered yet"); return;
L_08B5956C:
    rt.unsupported(0x08B5956Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59584:
    rt.unsupported(0x08B59584u, 0x00000001u, "special? not lowered yet"); return;
L_08B5959C:
    rt.unsupported(0x08B5959Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B595B4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B595C0u, 0x000000B3u, "special? not lowered yet"); return;
L_08B595CC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    rt.unsupported(0x08B595E4u, 0x00000001u, "special? not lowered yet"); return;
L_08B595EC:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B595F0u, 0x000000B0u, "special? not lowered yet"); return;
L_08B595FC:
    rt.unsupported(0x08B595FCu, 0x00000001u, "special? not lowered yet"); return;
L_08B59614:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59620u, 0x0000008Du, "special? not lowered yet"); return;
L_08B5962C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.lo);
        ctx.pc = 0x08B6AB58u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B59644;
L_08B59644:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    if (ctx.gpr[13] == 0u) ctx.gpr[10] = (ctx.gpr[2]);
        ctx.pc = 0x08B6AB70u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B5965C;
L_08B5965C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B59670u, 0x0041464Cu, "control flow in delay slot"); return;
L_08B59674:
    rt.unsupported(0x08B59674u, 0x00000001u, "special? not lowered yet"); return;
L_08B5968C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59698u, 0x0000008Du, "special? not lowered yet"); return;
L_08B596A4:
    rt.unsupported(0x08B596A4u, 0x00000001u, "special? not lowered yet"); return;
L_08B596BC:
    rt.unsupported(0x08B596BCu, 0x00000001u, "special? not lowered yet"); return;
L_08B596D4:
    rt.unsupported(0x08B596D4u, 0x00000001u, "special? not lowered yet"); return;
L_08B596EC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B596F8u, 0x000000A2u); return; } }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> (ctx.gpr[2] & 31u));
        ctx.pc = 0x08B6AC18u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B59704;
L_08B59704:
    rt.unsupported(0x08B59704u, 0x00000001u, "special? not lowered yet"); return;
L_08B59724:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59728u, 0x000000A8u, "special? not lowered yet"); return;
L_08B59734:
    rt.unsupported(0x08B59734u, 0x00000001u, "special? not lowered yet"); return;
L_08B5974C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59758u, 0x0000008Du, "special? not lowered yet"); return;
L_08B59764:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B59778u, 0x00434341u, "special? not lowered yet"); return;
        ctx.pc = 0x08B6AC90u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B5977C;
L_08B5977C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> 9u);
        ctx.pc = 0x08B6ACA8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B59794;
L_08B59794:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B597A8u, 0x00464F4Cu, "control flow in delay slot"); return;
L_08B597AC:
    rt.unsupported(0x08B597ACu, 0x00000001u, "special? not lowered yet"); return;
L_08B597C4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B597D8u, 0x00524F48u, "control flow in delay slot"); return;
L_08B597DC:
    rt.unsupported(0x08B597DCu, 0x00000001u, "special? not lowered yet"); return;
L_08B597F4:
    rt.unsupported(0x08B597F4u, 0x00000001u, "special? not lowered yet"); return;
L_08B5980C:
    rt.unsupported(0x08B5980Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59824:
    rt.unsupported(0x08B59824u, 0x00000001u, "special? not lowered yet"); return;
L_08B5983C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    rt.unsupported(0x08B59854u, 0x00000001u, "special? not lowered yet"); return;
L_08B5985C:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59860u, 0x0000008Eu, "special? not lowered yet"); return;
L_08B5986C:
    rt.unsupported(0x08B5986Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59884:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B59890u, 0x0000008Du, "special? not lowered yet"); return;
L_08B5989C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.lo);
        ctx.pc = 0x08B6ADC8u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B598B4;
L_08B598B4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    if (ctx.gpr[13] == 0u) ctx.gpr[10] = (ctx.gpr[2]);
        ctx.pc = 0x08B6ADE0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B598CC;
L_08B598CC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B598E0u, 0x0041464Cu, "control flow in delay slot"); return;
L_08B598E4:
    rt.unsupported(0x08B598E4u, 0x00000001u, "special? not lowered yet"); return;
L_08B598FC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> (ctx.gpr[2] & 31u));
        ctx.pc = 0x08B6AE28u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B59914;
L_08B59914:
    rt.unsupported(0x08B59914u, 0x00000001u, "special? not lowered yet"); return;
L_08B5992C:
    rt.unsupported(0x08B5992Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59944:
    rt.unsupported(0x08B59944u, 0x00000001u, "special? not lowered yet"); return;
L_08B5995C:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59968u, 0x000000B2u, "special? not lowered yet"); return;
L_08B59974:
    rt.unsupported(0x08B59974u, 0x00000001u, "special? not lowered yet"); return;
L_08B59994:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59998u, 0x0000008Eu, "special? not lowered yet"); return;
L_08B599A4:
    rt.unsupported(0x08B599A4u, 0x00000001u, "special? not lowered yet"); return;
L_08B599BC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B599C8u, 0x0000008Du, "special? not lowered yet"); return;
L_08B599D4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B599E8u, 0x00434341u, "special? not lowered yet"); return;
        ctx.pc = 0x08B6AF00u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B599EC;
L_08B599EC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(~(0u | 0u));
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[10] = (ctx.gpr[1] >> 9u);
        ctx.pc = 0x08B6AF18u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B59A04;
L_08B59A04:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    rt.unsupported(0x08B59A18u, 0x00464F4Cu, "control flow in delay slot"); return;
L_08B59A1C:
    rt.unsupported(0x08B59A1Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59A34:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 2u));
    rt.unsupported(0x08B59A40u, 0x000000B2u, "special? not lowered yet"); return;
L_08B59A4C:
    rt.unsupported(0x08B59A4Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59A64:
    rt.unsupported(0x08B59A64u, 0x00000001u, "special? not lowered yet"); return;
L_08B59A7C:
    rt.unsupported(0x08B59A7Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B59A94:
    rt.unsupported(0x08B59A94u, 0x00000001u, "special? not lowered yet"); return;
L_08B59AAC:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    // nop
    rt.unsupported(0x08B59AC4u, 0x00000001u, "special? not lowered yet"); return;
L_08B59ACC:
    rt.unsupported(0x08B59AD0u, 0x08B59214u, "control flow in delay slot"); return;
L_08B59B78:
    // nop
    rt.unsupported(0x08B59B80u, 0x08AD704Cu, "control flow in delay slot"); return;
L_08B59BEC:
    ctx.gpr[6] = (26214u << 16u);
    rt.unsupported(0x08B59BF0u, 0x40000000u, "unknown not lowered yet"); return;
L_08B59C18:
    if (ctx.gpr[15] == ctx.gpr[11]) {
    ctx.gpr[25] = (7864u << 16u);
        (void)rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 210u, 0x08B3B098u>(ctx, &aot_mem); return;
    }
    goto L_08B59C20;
L_08B59C20:
    rt.unsupported(0x08B59C20u, 0x40666666u, "unknown not lowered yet"); return;
L_08B59C48:
    (void)(~(0u | 0u));
    ctx.pc = 0x02CB93A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B59D48:
    // nop
    rt.unsupported(0x08B59D50u, 0x08839C84u, "control flow in delay slot"); return;
L_08B59D80:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B59D84u, 0x00000020u); return; } }
    (void)(0u << 16u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(0u + static_cast<std::uint32_t>(0))))));
    goto L_08B59D90;
L_08B59D90:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B59D94u, 0x00000020u); return; } }
    (void)(0u << 16u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(0u + static_cast<std::uint32_t>(0))))));
    goto L_08B59DA0;
L_08B59DA0:
    // nop
    ctx.pc = 0x02BA9E10u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B59DA8:
    rt.unsupported(0x08B59DA8u, 0x20202000u, "unknown not lowered yet"); return;
L_08B59DD0:
    rt.unsupported(0x08B59DD4u, 0x10101010u, "control flow in delay slot"); return;
L_08B59DD8:
    rt.unsupported(0x08B59DD8u, 0x04040410u, "regimm? not lowered yet"); return;
L_08B59DE8:
    rt.unsupported(0x08B59DE8u, 0x41411010u, "unknown not lowered yet"); return;
L_08B59E0C:
    rt.unsupported(0x08B59E0Cu, 0x42424242u, "unknown not lowered yet"); return;
L_08B59E2C:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B59EB0;
L_08B59EB0:
    // nop
    rt.unsupported(0x08B59EB8u, 0x08B5A0ECu, "control flow in delay slot"); return;
L_08B5A094:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B5A0EC;
L_08B5A0EC:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B5A144;
L_08B5A144:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    if (ctx.gpr[1] == 0u) (void)(0u);
    ctx.pc = 0x02D67AC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5A1A0:
    if (ctx.gpr[1] == 0u) (void)(0u);
    (void)(ctx.gpr[3] >> 0u);
    (void)(ctx.gpr[5] << (0u & 31u));
    (void)(ctx.gpr[7] >> (0u & 31u));
    jump_target = 0u;
    if (ctx.gpr[11] == 0u) (void)(0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5A1C8:
    rt.unsupported(0x08B5A1C8u, 0x00000001u, "special? not lowered yet"); return;
L_08B5A378:
    rt.unsupported(0x08B5A378u, 0x00000005u, "special? not lowered yet"); return;
L_08B5A568:
    ctx.gpr[18] = (ctx.gpr[25] & 12592u);
    ctx.gpr[22] = (ctx.gpr[25] | 13620u);
    rt.unsupported(0x08B5A570u, 0x62613938u, "vfpu0 not lowered yet"); return;
L_08B5A5C0:
    rt.unsupported(0x08B5A5C0u, 0x20202020u, "unknown not lowered yet"); return;
L_08B5A5D0:
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    // nop
    rt.unsupported(0x08B5A5E4u, 0xC0100000u, "unknown not lowered yet"); return;
L_08B5A5F0:
    rt.unsupported(0x08B5A5F0u, 0x20202020u, "unknown not lowered yet"); return;
L_08B5A600:
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    ctx.gpr[16] = (ctx.gpr[1] & 12336u);
    rt.unsupported(0x08B5A610u, 0x00000001u, "special? not lowered yet"); return;
L_08B5A614:
    rt.unsupported(0x08B5A618u, 0x08B2F784u, "control flow in delay slot"); return;
L_08B5A658:
    // nop
    // nop
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(0u + static_cast<std::uint32_t>(0))))));
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    ctx.gpr[6] = (11842u << 16u);
    ctx.gpr[25] = (ctx.gpr[11] | 15478u);
    ctx.gpr[10] = (14831u << 16u);
    // nop
    rt.unsupported(0x08B5A67Cu, 0x43500000u, "unknown not lowered yet"); return;
L_08B5A688:
    ctx.gpr[23] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(-1532), ctx.gpr[23]));
    ctx.gpr[25] = (39321u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[1] + static_cast<std::uint32_t>(-27815)));
    ctx.gpr[18] = (18724u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) > 0;
    ctx.gpr[12] = (29125u << 16u);
      if (branch_taken) {
          ctx.pc = 0x08B78958u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
      }
      goto L_08B5A6A0;
    }
L_08B5A6A0:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(990)));
    ctx.gpr[7] = (18020u << 16u);
    { const float vfpu_constant = std::bit_cast<float>(0x00000000u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<31u, 4u>(vfpu_value); }
    ctx.gpr[3] = (39433u << 16u);
    { const float vfpu_value[1]{static_cast<float>(21060)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<62u, 1u>(vfpu_value); }
    ctx.gpr[2] = (61714u << 16u);
    // nop
    // nop
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    ctx.gpr[27] = (52091u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0211_entry, 211u, 19u, 0x08B53AFCu>(ctx, &aot_mem); return;
      }
      goto L_08B5A6C8;
    }
L_08B5A6C8:
    if (ctx.gpr[4] == ctx.gpr[31]) {
    ctx.gpr[19] = (17427u << 16u);
        ctx.pc = 0x08B726CCu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
    }
    goto L_08B5A6D0;
L_08B5A6D0:
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[17];
    ctx.gpr[25] = (65267u << 16u);
      if (branch_taken) {
          ctx.pc = 0x08B653ACu; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
      }
      goto L_08B5A6D8;
    }
L_08B5A6D8:
    // nop
    ctx.gpr[16] = ((ctx.gpr[31] >> 0u) & 0x00000001u);
    // nop
    rt.unsupported(0x08B5A6E4u, 0xC3500000u, "unknown not lowered yet"); return;
L_08B5A6F0:
    // nop
    (void)(0u << 16u);
    // nop
    rt.unsupported(0x08B5A6FCu, 0x40000000u, "unknown not lowered yet"); return;
L_08B5A700:
    // nop
    ctx.gpr[16] = (0u << 16u);
    // nop
    rt.unsupported(0x08B5A70Cu, 0x40240000u, "unknown not lowered yet"); return;
L_08B5A774:
    rt.unsupported(0x08B5A774u, 0x42D6BCC4u, "unknown not lowered yet"); return;
L_08B5A778:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(0));
    rt.unsupported(0x08B5A77Cu, 0x430C6BF5u, "unknown not lowered yet"); return;
L_08B5A7C8:
    (void)(ctx.gpr[31] | 32768u);
    rt.unsupported(0x08B5A7CCu, 0x4341C379u, "unknown not lowered yet"); return;
L_08B5A7EC:
    rt.unsupported(0x08B5A7ECu, 0x75154FDDu, "unknown not lowered yet"); return;
L_08B5A7F0:
    ctx.gpr[24] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(-30276)));
    ctx.gpr[28] = (53938u << 16u);
    rt.unsupported(0x08B5A7F8u, 0xD5A8A733u, "vfpu not lowered yet"); return;
L_08B5A818:
    rt.unsupported(0x08B5A818u, 0x00000005u, "special? not lowered yet"); return;
L_08B5A828:
    // nop
    // nop
    goto L_08B5A830;
L_08B5A830:
    rt.unsupported(0x08B5A834u, 0x08B5A828u, "control flow in delay slot"); return;
L_08B5A838:
    rt.unsupported(0x08B5A83Cu, 0x08B5A830u, "control flow in delay slot"); return;
L_08B5A840:
    rt.unsupported(0x08B5A844u, 0x08B5A838u, "control flow in delay slot"); return;
L_08B5A848:
    rt.unsupported(0x08B5A84Cu, 0x08B5A840u, "control flow in delay slot"); return;
L_08B5A850:
    rt.unsupported(0x08B5A854u, 0x08B5A848u, "control flow in delay slot"); return;
L_08B5A858:
    rt.unsupported(0x08B5A85Cu, 0x08B5A850u, "control flow in delay slot"); return;
L_08B5A860:
    rt.unsupported(0x08B5A864u, 0x08B5A858u, "control flow in delay slot"); return;
L_08B5A868:
    rt.unsupported(0x08B5A86Cu, 0x08B5A860u, "control flow in delay slot"); return;
L_08B5A870:
    rt.unsupported(0x08B5A874u, 0x08B5A868u, "control flow in delay slot"); return;
L_08B5A878:
    rt.unsupported(0x08B5A87Cu, 0x08B5A870u, "control flow in delay slot"); return;
L_08B5A880:
    rt.unsupported(0x08B5A884u, 0x08B5A878u, "control flow in delay slot"); return;
L_08B5A888:
    rt.unsupported(0x08B5A88Cu, 0x08B5A880u, "control flow in delay slot"); return;
L_08B5A890:
    rt.unsupported(0x08B5A894u, 0x08B5A888u, "control flow in delay slot"); return;
L_08B5A898:
    rt.unsupported(0x08B5A89Cu, 0x08B5A890u, "control flow in delay slot"); return;
L_08B5A8A0:
    rt.unsupported(0x08B5A8A4u, 0x08B5A898u, "control flow in delay slot"); return;
L_08B5A8A8:
    rt.unsupported(0x08B5A8ACu, 0x08B5A8A0u, "control flow in delay slot"); return;
L_08B5A8B0:
    rt.unsupported(0x08B5A8B4u, 0x08B5A8A8u, "control flow in delay slot"); return;
L_08B5A8B8:
    rt.unsupported(0x08B5A8BCu, 0x08B5A8B0u, "control flow in delay slot"); return;
L_08B5A8C0:
    rt.unsupported(0x08B5A8C4u, 0x08B5A8B8u, "control flow in delay slot"); return;
L_08B5A8C8:
    rt.unsupported(0x08B5A8CCu, 0x08B5A8C0u, "control flow in delay slot"); return;
L_08B5A8D0:
    rt.unsupported(0x08B5A8D4u, 0x08B5A8C8u, "control flow in delay slot"); return;
L_08B5A8D8:
    rt.unsupported(0x08B5A8DCu, 0x08B5A8D0u, "control flow in delay slot"); return;
L_08B5A8E0:
    rt.unsupported(0x08B5A8E4u, 0x08B5A8D8u, "control flow in delay slot"); return;
L_08B5A8E8:
    rt.unsupported(0x08B5A8ECu, 0x08B5A8E0u, "control flow in delay slot"); return;
L_08B5A8F0:
    rt.unsupported(0x08B5A8F4u, 0x08B5A8E8u, "control flow in delay slot"); return;
L_08B5A8F8:
    rt.unsupported(0x08B5A8FCu, 0x08B5A8F0u, "control flow in delay slot"); return;
L_08B5A900:
    rt.unsupported(0x08B5A904u, 0x08B5A8F8u, "control flow in delay slot"); return;
L_08B5A908:
    rt.unsupported(0x08B5A90Cu, 0x08B5A900u, "control flow in delay slot"); return;
L_08B5A910:
    rt.unsupported(0x08B5A914u, 0x08B5A908u, "control flow in delay slot"); return;
L_08B5A918:
    rt.unsupported(0x08B5A91Cu, 0x08B5A910u, "control flow in delay slot"); return;
L_08B5A920:
    rt.unsupported(0x08B5A924u, 0x08B5A918u, "control flow in delay slot"); return;
L_08B5A928:
    rt.unsupported(0x08B5A92Cu, 0x08B5A920u, "control flow in delay slot"); return;
L_08B5A930:
    rt.unsupported(0x08B5A934u, 0x08B5A928u, "control flow in delay slot"); return;
L_08B5A938:
    rt.unsupported(0x08B5A93Cu, 0x08B5A930u, "control flow in delay slot"); return;
L_08B5A940:
    rt.unsupported(0x08B5A944u, 0x08B5A938u, "control flow in delay slot"); return;
L_08B5A948:
    rt.unsupported(0x08B5A94Cu, 0x08B5A940u, "control flow in delay slot"); return;
L_08B5A950:
    rt.unsupported(0x08B5A954u, 0x08B5A948u, "control flow in delay slot"); return;
L_08B5A958:
    rt.unsupported(0x08B5A95Cu, 0x08B5A950u, "control flow in delay slot"); return;
L_08B5A960:
    rt.unsupported(0x08B5A964u, 0x08B5A958u, "control flow in delay slot"); return;
L_08B5A968:
    rt.unsupported(0x08B5A96Cu, 0x08B5A960u, "control flow in delay slot"); return;
L_08B5A970:
    rt.unsupported(0x08B5A974u, 0x08B5A968u, "control flow in delay slot"); return;
L_08B5A978:
    rt.unsupported(0x08B5A97Cu, 0x08B5A970u, "control flow in delay slot"); return;
L_08B5A980:
    rt.unsupported(0x08B5A984u, 0x08B5A978u, "control flow in delay slot"); return;
L_08B5A988:
    rt.unsupported(0x08B5A98Cu, 0x08B5A980u, "control flow in delay slot"); return;
L_08B5A990:
    rt.unsupported(0x08B5A994u, 0x08B5A988u, "control flow in delay slot"); return;
L_08B5A998:
    rt.unsupported(0x08B5A99Cu, 0x08B5A990u, "control flow in delay slot"); return;
L_08B5A9A0:
    rt.unsupported(0x08B5A9A4u, 0x08B5A998u, "control flow in delay slot"); return;
L_08B5A9A8:
    rt.unsupported(0x08B5A9ACu, 0x08B5A9A0u, "control flow in delay slot"); return;
L_08B5A9B0:
    rt.unsupported(0x08B5A9B4u, 0x08B5A9A8u, "control flow in delay slot"); return;
L_08B5A9B8:
    rt.unsupported(0x08B5A9BCu, 0x08B5A9B0u, "control flow in delay slot"); return;
L_08B5A9C0:
    rt.unsupported(0x08B5A9C4u, 0x08B5A9B8u, "control flow in delay slot"); return;
L_08B5A9C8:
    rt.unsupported(0x08B5A9CCu, 0x08B5A9C0u, "control flow in delay slot"); return;
L_08B5A9D0:
    rt.unsupported(0x08B5A9D4u, 0x08B5A9C8u, "control flow in delay slot"); return;
L_08B5A9D8:
    rt.unsupported(0x08B5A9DCu, 0x08B5A9D0u, "control flow in delay slot"); return;
L_08B5A9E0:
    rt.unsupported(0x08B5A9E4u, 0x08B5A9D8u, "control flow in delay slot"); return;
L_08B5A9E8:
    rt.unsupported(0x08B5A9ECu, 0x08B5A9E0u, "control flow in delay slot"); return;
L_08B5A9F0:
    rt.unsupported(0x08B5A9F4u, 0x08B5A9E8u, "control flow in delay slot"); return;
L_08B5A9F8:
    rt.unsupported(0x08B5A9FCu, 0x08B5A9F0u, "control flow in delay slot"); return;
L_08B5AA00:
    rt.unsupported(0x08B5AA04u, 0x08B5A9F8u, "control flow in delay slot"); return;
L_08B5AA08:
    rt.unsupported(0x08B5AA0Cu, 0x08B5AA00u, "control flow in delay slot"); return;
L_08B5AA10:
    rt.unsupported(0x08B5AA14u, 0x08B5AA08u, "control flow in delay slot"); return;
L_08B5AA18:
    rt.unsupported(0x08B5AA1Cu, 0x08B5AA10u, "control flow in delay slot"); return;
L_08B5AA20:
    rt.unsupported(0x08B5AA24u, 0x08B5AA18u, "control flow in delay slot"); return;
L_08B5AA28:
    rt.unsupported(0x08B5AA2Cu, 0x08B5AA20u, "control flow in delay slot"); return;
L_08B5AA30:
    rt.unsupported(0x08B5AA34u, 0x08B5AA28u, "control flow in delay slot"); return;
L_08B5AA38:
    rt.unsupported(0x08B5AA3Cu, 0x08B5AA30u, "control flow in delay slot"); return;
L_08B5AA40:
    rt.unsupported(0x08B5AA44u, 0x08B5AA38u, "control flow in delay slot"); return;
L_08B5AA48:
    rt.unsupported(0x08B5AA4Cu, 0x08B5AA40u, "control flow in delay slot"); return;
L_08B5AA50:
    rt.unsupported(0x08B5AA54u, 0x08B5AA48u, "control flow in delay slot"); return;
L_08B5AA58:
    rt.unsupported(0x08B5AA5Cu, 0x08B5AA50u, "control flow in delay slot"); return;
L_08B5AA60:
    rt.unsupported(0x08B5AA64u, 0x08B5AA58u, "control flow in delay slot"); return;
L_08B5AA68:
    rt.unsupported(0x08B5AA6Cu, 0x08B5AA60u, "control flow in delay slot"); return;
L_08B5AA70:
    rt.unsupported(0x08B5AA74u, 0x08B5AA68u, "control flow in delay slot"); return;
L_08B5AA78:
    rt.unsupported(0x08B5AA7Cu, 0x08B5AA70u, "control flow in delay slot"); return;
L_08B5AA80:
    rt.unsupported(0x08B5AA84u, 0x08B5AA78u, "control flow in delay slot"); return;
L_08B5AA88:
    rt.unsupported(0x08B5AA8Cu, 0x08B5AA80u, "control flow in delay slot"); return;
L_08B5AA90:
    rt.unsupported(0x08B5AA94u, 0x08B5AA88u, "control flow in delay slot"); return;
L_08B5AA98:
    rt.unsupported(0x08B5AA9Cu, 0x08B5AA90u, "control flow in delay slot"); return;
L_08B5AAA0:
    rt.unsupported(0x08B5AAA4u, 0x08B5AA98u, "control flow in delay slot"); return;
L_08B5AAA8:
    rt.unsupported(0x08B5AAACu, 0x08B5AAA0u, "control flow in delay slot"); return;
L_08B5AAB0:
    rt.unsupported(0x08B5AAB4u, 0x08B5AAA8u, "control flow in delay slot"); return;
L_08B5AAB8:
    rt.unsupported(0x08B5AABCu, 0x08B5AAB0u, "control flow in delay slot"); return;
L_08B5AAC0:
    rt.unsupported(0x08B5AAC4u, 0x08B5AAB8u, "control flow in delay slot"); return;
L_08B5AAC8:
    rt.unsupported(0x08B5AACCu, 0x08B5AAC0u, "control flow in delay slot"); return;
L_08B5AAD0:
    rt.unsupported(0x08B5AAD4u, 0x08B5AAC8u, "control flow in delay slot"); return;
L_08B5AAD8:
    rt.unsupported(0x08B5AADCu, 0x08B5AAD0u, "control flow in delay slot"); return;
L_08B5AAE0:
    rt.unsupported(0x08B5AAE4u, 0x08B5AAD8u, "control flow in delay slot"); return;
L_08B5AAE8:
    rt.unsupported(0x08B5AAECu, 0x08B5AAE0u, "control flow in delay slot"); return;
L_08B5AAF0:
    rt.unsupported(0x08B5AAF4u, 0x08B5AAE8u, "control flow in delay slot"); return;
L_08B5AAF8:
    rt.unsupported(0x08B5AAFCu, 0x08B5AAF0u, "control flow in delay slot"); return;
L_08B5AB00:
    rt.unsupported(0x08B5AB04u, 0x08B5AAF8u, "control flow in delay slot"); return;
L_08B5AB08:
    rt.unsupported(0x08B5AB0Cu, 0x08B5AB00u, "control flow in delay slot"); return;
L_08B5AB10:
    rt.unsupported(0x08B5AB14u, 0x08B5AB08u, "control flow in delay slot"); return;
L_08B5AB18:
    rt.unsupported(0x08B5AB1Cu, 0x08B5AB10u, "control flow in delay slot"); return;
L_08B5AB20:
    rt.unsupported(0x08B5AB24u, 0x08B5AB18u, "control flow in delay slot"); return;
L_08B5AB28:
    rt.unsupported(0x08B5AB2Cu, 0x08B5AB20u, "control flow in delay slot"); return;
L_08B5AB30:
    rt.unsupported(0x08B5AB34u, 0x08B5AB28u, "control flow in delay slot"); return;
L_08B5AB38:
    rt.unsupported(0x08B5AB3Cu, 0x08B5AB30u, "control flow in delay slot"); return;
L_08B5AB40:
    rt.unsupported(0x08B5AB44u, 0x08B5AB38u, "control flow in delay slot"); return;
L_08B5AB48:
    rt.unsupported(0x08B5AB4Cu, 0x08B5AB40u, "control flow in delay slot"); return;
L_08B5AB50:
    rt.unsupported(0x08B5AB54u, 0x08B5AB48u, "control flow in delay slot"); return;
L_08B5AB58:
    rt.unsupported(0x08B5AB5Cu, 0x08B5AB50u, "control flow in delay slot"); return;
L_08B5AB60:
    rt.unsupported(0x08B5AB64u, 0x08B5AB58u, "control flow in delay slot"); return;
L_08B5AB68:
    rt.unsupported(0x08B5AB6Cu, 0x08B5AB60u, "control flow in delay slot"); return;
L_08B5AB70:
    rt.unsupported(0x08B5AB74u, 0x08B5AB68u, "control flow in delay slot"); return;
L_08B5AB78:
    rt.unsupported(0x08B5AB7Cu, 0x08B5AB70u, "control flow in delay slot"); return;
L_08B5AB80:
    rt.unsupported(0x08B5AB84u, 0x08B5AB78u, "control flow in delay slot"); return;
L_08B5AB88:
    rt.unsupported(0x08B5AB8Cu, 0x08B5AB80u, "control flow in delay slot"); return;
L_08B5AB90:
    rt.unsupported(0x08B5AB94u, 0x08B5AB88u, "control flow in delay slot"); return;
L_08B5AB98:
    rt.unsupported(0x08B5AB9Cu, 0x08B5AB90u, "control flow in delay slot"); return;
L_08B5ABA0:
    rt.unsupported(0x08B5ABA4u, 0x08B5AB98u, "control flow in delay slot"); return;
L_08B5ABA8:
    rt.unsupported(0x08B5ABACu, 0x08B5ABA0u, "control flow in delay slot"); return;
L_08B5ABB0:
    rt.unsupported(0x08B5ABB4u, 0x08B5ABA8u, "control flow in delay slot"); return;
L_08B5ABB8:
    rt.unsupported(0x08B5ABBCu, 0x08B5ABB0u, "control flow in delay slot"); return;
L_08B5ABC0:
    rt.unsupported(0x08B5ABC4u, 0x08B5ABB8u, "control flow in delay slot"); return;
L_08B5ABC8:
    rt.unsupported(0x08B5ABCCu, 0x08B5ABC0u, "control flow in delay slot"); return;
L_08B5ABD0:
    rt.unsupported(0x08B5ABD4u, 0x08B5ABC8u, "control flow in delay slot"); return;
L_08B5ABD8:
    rt.unsupported(0x08B5ABDCu, 0x08B5ABD0u, "control flow in delay slot"); return;
L_08B5ABE0:
    rt.unsupported(0x08B5ABE4u, 0x08B5ABD8u, "control flow in delay slot"); return;
L_08B5ABE8:
    rt.unsupported(0x08B5ABECu, 0x08B5ABE0u, "control flow in delay slot"); return;
L_08B5ABF0:
    rt.unsupported(0x08B5ABF4u, 0x08B5ABE8u, "control flow in delay slot"); return;
L_08B5ABF8:
    rt.unsupported(0x08B5ABFCu, 0x08B5ABF0u, "control flow in delay slot"); return;
L_08B5AC00:
    rt.unsupported(0x08B5AC04u, 0x08B5ABF8u, "control flow in delay slot"); return;
L_08B5AC08:
    rt.unsupported(0x08B5AC0Cu, 0x08B5AC00u, "control flow in delay slot"); return;
L_08B5AC10:
    rt.unsupported(0x08B5AC14u, 0x08B5AC08u, "control flow in delay slot"); return;
L_08B5AC18:
    rt.unsupported(0x08B5AC1Cu, 0x08B5AC10u, "control flow in delay slot"); return;
L_08B5AC20:
    rt.unsupported(0x08B5AC24u, 0x08B5AC18u, "control flow in delay slot"); return;
L_08B5ACD8:
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B5ACEC;
L_08B5ACEC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5ADF4:
    // nop
    // nop
    ctx.pc = 0x0202FDC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5AE44:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x020E00F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5AE5C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02BEC730u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5AEBC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5AEEC:
    // nop
    // nop
    ctx.pc = 0x028BB690u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5AF74:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5AF9C:
    // nop
    // nop
    ctx.pc = 0x028BB160u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B030:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02BF7C20u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B090:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021E14A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B130:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B280:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02BF8FA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B294:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B2BC:
    // nop
    // nop
    ctx.pc = 0x028BB160u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B34C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B49C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C04270u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B534:
    // nop
    // nop
    ctx.pc = 0x02B143A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B544:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x028C0210u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B5EC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C04BC0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B6A4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B75C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C062E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B7F4:
    // nop
    // nop
    ctx.pc = 0x02B143A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B804:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B82C:
    // nop
    // nop
    ctx.pc = 0x02676AB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B8C4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B984:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C07DB0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B994:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x021E14A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5B9C4:
    // nop
    // nop
    ctx.pc = 0x028BB690u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BA34:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BB94:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02BEC5F0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BBF4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BCAC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C0C760u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BD5C:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C0D3E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BDBC:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BE7C:
    rt.unsupported(0x08B5BE7Cu, 0x00000035u, "special? not lowered yet"); return;
L_08B5BED8:
    { const bool branch_taken = static_cast<std::int32_t>(0u) <= 0;
    (void)(0u & 89u);
      if (branch_taken) {
          goto L_08B5BEF0;
      }
      goto L_08B5BEE0;
    }
L_08B5BEE0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 1u>(vfpu_d); }
    rt.unsupported(0x08B5BEE4u, 0xC0000001u, "unknown not lowered yet"); return;
L_08B5BEEC:
    // nop
    goto L_08B5BEF0;
L_08B5BEF0:
    // nop
    // nop
    // nop
    ctx.pc = 0x0283FBA0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BF30:
    // nop
    ctx.pc = 0x028BC8B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B5BFA4:
    // nop
    // nop
    // nop
    // nop
    ctx.pc = 0x02C141C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
}

void recomp_unit_0213(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0213_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_213(Runtime &runtime) {
    runtime.register_generated_unit(213u, 0x08B58000u, 16384u, &recomp_unit_0213, &recomp_unit_0213_entry);
    runtime.register_function(0x08B58000u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58034u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58064u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58080u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B580F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58118u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5812Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5813Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58154u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5815Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58164u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5816Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58174u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58188u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B581FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58218u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58220u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58250u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5825Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58260u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58274u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58294u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5829Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B582F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58310u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5832Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58344u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58358u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58360u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58368u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58394u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B583A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B583D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B583FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58404u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58420u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58428u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58434u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5844Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58450u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58470u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58478u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5849Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B584FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5850Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58518u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58524u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58550u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58558u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58570u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58598u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B585FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58614u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5861Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58624u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58630u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5864Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58668u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58684u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B586F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58704u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5870Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58718u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58728u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58730u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58738u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58740u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5874Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58780u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B587B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B587B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B587E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B587F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58810u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58828u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58890u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58898u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58924u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58940u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B589C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58ACCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58D6Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58D78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58D98u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58DECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F14u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58F2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B58FECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59004u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B590DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B590ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59104u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5911Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59134u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5914Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59164u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5917Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59194u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B591ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B591C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B591DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B591F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59214u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59224u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5923Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59254u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5926Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59284u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5929Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B592B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B592CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B592E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B592FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59314u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5932Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59344u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59364u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59374u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5938Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B593A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B593BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B593D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B593ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59404u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5941Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59434u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5944Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59464u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5947Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5949Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B594ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B594C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B594DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B594F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5950Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59524u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5953Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59554u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5956Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59584u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5959Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B595B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B595CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B595ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B595FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59614u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5962Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59644u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5965Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59674u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5968Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B596ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59704u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59724u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59734u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5974Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59764u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5977Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59794u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597ACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597DCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B597F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5980Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59824u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5983Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5985Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5986Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59884u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5989Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B598B4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B598CCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B598E4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B598FCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59914u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5992Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59944u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5995Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59974u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59994u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599D4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B599ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A04u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A1Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A34u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A4Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A64u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A7Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59A94u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59AACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59ACCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59B78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59BECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C18u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59C48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59D90u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59DA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59DA8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59DD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59DD8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59DE8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E0Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59E2Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B59EB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A094u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A0ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A144u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A1A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A1C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A378u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A568u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A5C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A5D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A5F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A600u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A614u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A658u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A688u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A6A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A6C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A6D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A6D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A6F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A700u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A774u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A778u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A7C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A7ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A7F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A818u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A828u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A830u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A838u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A840u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A848u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A850u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A858u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A860u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A868u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A870u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A878u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A880u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A888u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A890u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A898u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A8F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A900u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A908u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A910u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A918u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A920u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A928u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A930u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A938u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A940u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A948u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A950u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A958u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A960u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A968u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A970u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A978u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A980u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A988u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A990u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A998u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9A0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9A8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9B0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9B8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9C0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9C8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9D0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9D8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9E0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9E8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9F0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5A9F8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA10u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA18u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA28u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA30u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA38u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA50u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA60u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA68u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA70u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA90u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AA98u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAA8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAB8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAC8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAD8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAE0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAE8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AAF8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB10u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB18u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB28u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB30u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB38u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB40u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB48u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB50u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB58u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB60u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB68u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB70u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB78u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB80u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB88u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB90u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AB98u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABA0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABA8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABB0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABB8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABC0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABC8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABD0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABD8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABE0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABE8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ABF8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC00u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC08u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC10u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC18u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AC20u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACD8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ACECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5ADF4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AE44u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AE5Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AEBCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AEECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AF74u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5AF9Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B030u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B090u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B130u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B280u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B294u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B2BCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B34Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B49Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B534u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B544u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B5ECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B6A4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B75Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B7F4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B804u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B82Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B8C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B984u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B994u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5B9C4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BA34u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BB94u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BBF4u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BCACu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BD5Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BDBCu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BE7Cu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BED8u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BEE0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BEECu, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BEF0u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BF30u, &recomp_unit_0213, "recomp_unit_0213");
    runtime.register_function(0x08B5BFA4u, &recomp_unit_0213, "recomp_unit_0213");
}
} // namespace psprecomp
