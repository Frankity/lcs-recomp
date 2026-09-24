#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0156[4091] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0,
    25, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 32, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0,
    0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    45, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 59, 60,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0,
    0, 0, 63, 0, 64, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132,
    0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0,
    0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    203, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 208, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227,
    0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 250, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252,
    0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0,
    0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 273,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 280, 0,
    281, 0, 0, 282, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0, 0, 0, 290, 0,
    291, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 323, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 331, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 337, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0,
    0, 345, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351,
    0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0,
    358, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 376, 0, 377, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0,
    382, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397,
    0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0,
    0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0,
    442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0,
    0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457,
    0, 0, 0, 458, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0, 474, 0, 0, 475, 0, 476, 0, 0, 477, 0,
    478, 0, 0, 479, 0, 0, 480, 0, 481, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 485, 0, 486, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 489, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 0, 495, 0, 496, 0, 0, 497, 0, 0, 498, 0, 499, 500, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 505, 0, 506, 0, 0, 507, 0,
    508, 0, 0, 509, 0, 0, 510, 0, 511, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513,
    0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0,
    0, 521, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0,
    0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0,
    0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0,
    0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0,
    541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0,
    0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0,
    0, 555, 0, 556, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 561, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0,
    0, 571, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 575, 576, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0,
    0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0,
    584, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 591,
};
void recomp_unit_0156_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A74000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0156[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A74000;
    case 2u: goto L_08A7401C;
    case 3u: goto L_08A74024;
    case 4u: goto L_08A7402C;
    case 5u: goto L_08A74058;
    case 6u: goto L_08A74080;
    case 7u: goto L_08A740A8;
    case 8u: goto L_08A740B4;
    case 9u: goto L_08A740C0;
    case 10u: goto L_08A740D0;
    case 11u: goto L_08A740DC;
    case 12u: goto L_08A740F4;
    case 13u: goto L_08A74130;
    case 14u: goto L_08A74154;
    case 15u: goto L_08A74170;
    case 16u: goto L_08A74180;
    case 17u: goto L_08A74190;
    case 18u: goto L_08A741A4;
    case 19u: goto L_08A741B0;
    case 20u: goto L_08A741BC;
    case 21u: goto L_08A741C4;
    case 22u: goto L_08A741DC;
    case 23u: goto L_08A741E8;
    case 24u: goto L_08A741F8;
    case 25u: goto L_08A74200;
    case 26u: goto L_08A74210;
    case 27u: goto L_08A74218;
    case 28u: goto L_08A74224;
    case 29u: goto L_08A74234;
    case 30u: goto L_08A7423C;
    case 31u: goto L_08A7424C;
    case 32u: goto L_08A74250;
    case 33u: goto L_08A7425C;
    case 34u: goto L_08A7426C;
    case 35u: goto L_08A74274;
    case 36u: goto L_08A74284;
    case 37u: goto L_08A7428C;
    case 38u: goto L_08A74294;
    case 39u: goto L_08A7429C;
    case 40u: goto L_08A742A4;
    case 41u: goto L_08A742B0;
    case 42u: goto L_08A742C4;
    case 43u: goto L_08A742D4;
    case 44u: goto L_08A742F0;
    case 45u: goto L_08A74300;
    case 46u: goto L_08A74318;
    case 47u: goto L_08A74320;
    case 48u: goto L_08A74338;
    case 49u: goto L_08A74344;
    case 50u: goto L_08A7434C;
    case 51u: goto L_08A74390;
    case 52u: goto L_08A74398;
    case 53u: goto L_08A743A8;
    case 54u: goto L_08A743C4;
    case 55u: goto L_08A743D4;
    case 56u: goto L_08A743DC;
    case 57u: goto L_08A743E4;
    case 58u: goto L_08A743EC;
    case 59u: goto L_08A743F8;
    case 60u: goto L_08A743FC;
    case 61u: goto L_08A74470;
    case 62u: goto L_08A74478;
    case 63u: goto L_08A74488;
    case 64u: goto L_08A74490;
    case 65u: goto L_08A74494;
    case 66u: goto L_08A744D0;
    case 67u: goto L_08A74540;
    case 68u: goto L_08A7455C;
    case 69u: goto L_08A74588;
    case 70u: goto L_08A74594;
    case 71u: goto L_08A7459C;
    case 72u: goto L_08A745B4;
    case 73u: goto L_08A745BC;
    case 74u: goto L_08A745C4;
    case 75u: goto L_08A7460C;
    case 76u: goto L_08A74620;
    case 77u: goto L_08A7462C;
    case 78u: goto L_08A7463C;
    case 79u: goto L_08A74654;
    case 80u: goto L_08A74688;
    case 81u: goto L_08A7469C;
    case 82u: goto L_08A746E4;
    case 83u: goto L_08A746EC;
    case 84u: goto L_08A74720;
    case 85u: goto L_08A74734;
    case 86u: goto L_08A74794;
    case 87u: goto L_08A747C8;
    case 88u: goto L_08A747DC;
    case 89u: goto L_08A74838;
    case 90u: goto L_08A74858;
    case 91u: goto L_08A748C0;
    case 92u: goto L_08A748F4;
    case 93u: goto L_08A74908;
    case 94u: goto L_08A74950;
    case 95u: goto L_08A74984;
    case 96u: goto L_08A74998;
    case 97u: goto L_08A749F4;
    case 98u: goto L_08A74A28;
    case 99u: goto L_08A74A84;
    case 100u: goto L_08A74AB8;
    case 101u: goto L_08A74B18;
    case 102u: goto L_08A74B4C;
    case 103u: goto L_08A74B60;
    case 104u: goto L_08A74BBC;
    case 105u: goto L_08A74BF0;
    case 106u: goto L_08A74C50;
    case 107u: goto L_08A74C84;
    case 108u: goto L_08A74C98;
    case 109u: goto L_08A74CF4;
    case 110u: goto L_08A74D34;
    case 111u: goto L_08A74D48;
    case 112u: goto L_08A74D58;
    case 113u: goto L_08A74D64;
    case 114u: goto L_08A74DC8;
    case 115u: goto L_08A74DFC;
    case 116u: goto L_08A74E10;
    case 117u: goto L_08A74E70;
    case 118u: goto L_08A74EA4;
    case 119u: goto L_08A74EB8;
    case 120u: goto L_08A74F18;
    case 121u: goto L_08A74F24;
    case 122u: goto L_08A74F30;
    case 123u: goto L_08A74F38;
    case 124u: goto L_08A74F44;
    case 125u: goto L_08A74F68;
    case 126u: goto L_08A74F8C;
    case 127u: goto L_08A74FD8;
    case 128u: goto L_08A74FE4;
    case 129u: goto L_08A74FEC;
    case 130u: goto L_08A74FF8;
    case 131u: goto L_08A7501C;
    case 132u: goto L_08A7507C;
    case 133u: goto L_08A75088;
    case 134u: goto L_08A75090;
    case 135u: goto L_08A7509C;
    case 136u: goto L_08A750C0;
    case 137u: goto L_08A75124;
    case 138u: goto L_08A75140;
    case 139u: goto L_08A7514C;
    case 140u: goto L_08A7515C;
    case 141u: goto L_08A7516C;
    case 142u: goto L_08A75184;
    case 143u: goto L_08A751B8;
    case 144u: goto L_08A751C8;
    case 145u: goto L_08A751EC;
    case 146u: goto L_08A751F8;
    case 147u: goto L_08A75228;
    case 148u: goto L_08A7527C;
    case 149u: goto L_08A752D0;
    case 150u: goto L_08A75304;
    case 151u: goto L_08A7532C;
    case 152u: goto L_08A75360;
    case 153u: goto L_08A75388;
    case 154u: goto L_08A75394;
    case 155u: goto L_08A753AC;
    case 156u: goto L_08A753BC;
    case 157u: goto L_08A753CC;
    case 158u: goto L_08A753D8;
    case 159u: goto L_08A753F0;
    case 160u: goto L_08A75400;
    case 161u: goto L_08A75410;
    case 162u: goto L_08A7541C;
    case 163u: goto L_08A75440;
    case 164u: goto L_08A75474;
    case 165u: goto L_08A75484;
    case 166u: goto L_08A75494;
    case 167u: goto L_08A754C0;
    case 168u: goto L_08A754D8;
    case 169u: goto L_08A754E8;
    case 170u: goto L_08A75508;
    case 171u: goto L_08A7551C;
    case 172u: goto L_08A75524;
    case 173u: goto L_08A75540;
    case 174u: goto L_08A75550;
    case 175u: goto L_08A7556C;
    case 176u: goto L_08A75580;
    case 177u: goto L_08A75588;
    case 178u: goto L_08A75598;
    case 179u: goto L_08A755B8;
    case 180u: goto L_08A755CC;
    case 181u: goto L_08A755D4;
    case 182u: goto L_08A755F0;
    case 183u: goto L_08A75604;
    case 184u: goto L_08A75610;
    case 185u: goto L_08A75618;
    case 186u: goto L_08A75628;
    case 187u: goto L_08A75648;
    case 188u: goto L_08A7565C;
    case 189u: goto L_08A75664;
    case 190u: goto L_08A75674;
    case 191u: goto L_08A75690;
    case 192u: goto L_08A756A4;
    case 193u: goto L_08A756AC;
    case 194u: goto L_08A756C4;
    case 195u: goto L_08A756D8;
    case 196u: goto L_08A756F4;
    case 197u: goto L_08A75714;
    case 198u: goto L_08A75724;
    case 199u: goto L_08A75738;
    case 200u: goto L_08A75744;
    case 201u: goto L_08A75750;
    case 202u: goto L_08A75778;
    case 203u: goto L_08A75780;
    case 204u: goto L_08A75788;
    case 205u: goto L_08A75790;
    case 206u: goto L_08A757C0;
    case 207u: goto L_08A757DC;
    case 208u: goto L_08A757E0;
    case 209u: goto L_08A7580C;
    case 210u: goto L_08A7582C;
    case 211u: goto L_08A75838;
    case 212u: goto L_08A7584C;
    case 213u: goto L_08A75858;
    case 214u: goto L_08A7586C;
    case 215u: goto L_08A75884;
    case 216u: goto L_08A75890;
    case 217u: goto L_08A758A0;
    case 218u: goto L_08A758AC;
    case 219u: goto L_08A758BC;
    case 220u: goto L_08A758D0;
    case 221u: goto L_08A758E4;
    case 222u: goto L_08A75900;
    case 223u: goto L_08A75914;
    case 224u: goto L_08A75928;
    case 225u: goto L_08A75940;
    case 226u: goto L_08A7595C;
    case 227u: goto L_08A7597C;
    case 228u: goto L_08A75990;
    case 229u: goto L_08A759A0;
    case 230u: goto L_08A75A04;
    case 231u: goto L_08A75A4C;
    case 232u: goto L_08A75A94;
    case 233u: goto L_08A75ADC;
    case 234u: goto L_08A75B24;
    case 235u: goto L_08A75B6C;
    case 236u: goto L_08A75BB4;
    case 237u: goto L_08A75BFC;
    case 238u: goto L_08A75C44;
    case 239u: goto L_08A75C8C;
    case 240u: goto L_08A75CD4;
    case 241u: goto L_08A75D18;
    case 242u: goto L_08A75D28;
    case 243u: goto L_08A75D34;
    case 244u: goto L_08A75D44;
    case 245u: goto L_08A75D50;
    case 246u: goto L_08A75D60;
    case 247u: goto L_08A75D74;
    case 248u: goto L_08A75D90;
    case 249u: goto L_08A75DA4;
    case 250u: goto L_08A75DAC;
    case 251u: goto L_08A75DB0;
    case 252u: goto L_08A75DFC;
    case 253u: goto L_08A75E04;
    case 254u: goto L_08A75E10;
    case 255u: goto L_08A75E1C;
    case 256u: goto L_08A75E30;
    case 257u: goto L_08A75E38;
    case 258u: goto L_08A75E4C;
    case 259u: goto L_08A75E54;
    case 260u: goto L_08A75E68;
    case 261u: goto L_08A75E78;
    case 262u: goto L_08A75E88;
    case 263u: goto L_08A75EB0;
    case 264u: goto L_08A75EC0;
    case 265u: goto L_08A75EC8;
    case 266u: goto L_08A75ED4;
    case 267u: goto L_08A75EE0;
    case 268u: goto L_08A75F20;
    case 269u: goto L_08A75F38;
    case 270u: goto L_08A75F48;
    case 271u: goto L_08A75F68;
    case 272u: goto L_08A75F70;
    case 273u: goto L_08A75F7C;
    case 274u: goto L_08A75FBC;
    case 275u: goto L_08A76038;
    case 276u: goto L_08A760AC;
    case 277u: goto L_08A760D4;
    case 278u: goto L_08A760E0;
    case 279u: goto L_08A760E8;
    case 280u: goto L_08A760F8;
    case 281u: goto L_08A76100;
    case 282u: goto L_08A7610C;
    case 283u: goto L_08A76114;
    case 284u: goto L_08A76120;
    case 285u: goto L_08A76138;
    case 286u: goto L_08A76150;
    case 287u: goto L_08A76158;
    case 288u: goto L_08A76160;
    case 289u: goto L_08A76168;
    case 290u: goto L_08A76178;
    case 291u: goto L_08A76180;
    case 292u: goto L_08A76184;
    case 293u: goto L_08A761B0;
    case 294u: goto L_08A761C8;
    case 295u: goto L_08A761D8;
    case 296u: goto L_08A76200;
    case 297u: goto L_08A76218;
    case 298u: goto L_08A76220;
    case 299u: goto L_08A76234;
    case 300u: goto L_08A76248;
    case 301u: goto L_08A7627C;
    case 302u: goto L_08A76294;
    case 303u: goto L_08A762AC;
    case 304u: goto L_08A762C4;
    case 305u: goto L_08A762CC;
    case 306u: goto L_08A762EC;
    case 307u: goto L_08A7632C;
    case 308u: goto L_08A763A4;
    case 309u: goto L_08A763D0;
    case 310u: goto L_08A7640C;
    case 311u: goto L_08A76424;
    case 312u: goto L_08A76460;
    case 313u: goto L_08A76480;
    case 314u: goto L_08A76490;
    case 315u: goto L_08A764A4;
    case 316u: goto L_08A764B4;
    case 317u: goto L_08A764C4;
    case 318u: goto L_08A764D4;
    case 319u: goto L_08A76518;
    case 320u: goto L_08A7652C;
    case 321u: goto L_08A76594;
    case 322u: goto L_08A765A8;
    case 323u: goto L_08A765B0;
    case 324u: goto L_08A765B4;
    case 325u: goto L_08A765E0;
    case 326u: goto L_08A765F0;
    case 327u: goto L_08A76608;
    case 328u: goto L_08A76624;
    case 329u: goto L_08A76630;
    case 330u: goto L_08A76640;
    case 331u: goto L_08A76648;
    case 332u: goto L_08A7664C;
    case 333u: goto L_08A76664;
    case 334u: goto L_08A7667C;
    case 335u: goto L_08A766B4;
    case 336u: goto L_08A766C8;
    case 337u: goto L_08A766D0;
    case 338u: goto L_08A766D4;
    case 339u: goto L_08A766EC;
    case 340u: goto L_08A76718;
    case 341u: goto L_08A76720;
    case 342u: goto L_08A7673C;
    case 343u: goto L_08A76754;
    case 344u: goto L_08A76764;
    case 345u: goto L_08A76784;
    case 346u: goto L_08A76798;
    case 347u: goto L_08A767A0;
    case 348u: goto L_08A767BC;
    case 349u: goto L_08A767CC;
    case 350u: goto L_08A767E8;
    case 351u: goto L_08A767FC;
    case 352u: goto L_08A76804;
    case 353u: goto L_08A76814;
    case 354u: goto L_08A76834;
    case 355u: goto L_08A76848;
    case 356u: goto L_08A76850;
    case 357u: goto L_08A7686C;
    case 358u: goto L_08A76880;
    case 359u: goto L_08A7688C;
    case 360u: goto L_08A76894;
    case 361u: goto L_08A768A4;
    case 362u: goto L_08A768C4;
    case 363u: goto L_08A768D8;
    case 364u: goto L_08A768E0;
    case 365u: goto L_08A768F0;
    case 366u: goto L_08A7690C;
    case 367u: goto L_08A76920;
    case 368u: goto L_08A76928;
    case 369u: goto L_08A76944;
    case 370u: goto L_08A76960;
    case 371u: goto L_08A7697C;
    case 372u: goto L_08A769A0;
    case 373u: goto L_08A769AC;
    case 374u: goto L_08A769D0;
    case 375u: goto L_08A769DC;
    case 376u: goto L_08A769E4;
    case 377u: goto L_08A769EC;
    case 378u: goto L_08A76A18;
    case 379u: goto L_08A76A30;
    case 380u: goto L_08A76A58;
    case 381u: goto L_08A76A74;
    case 382u: goto L_08A76A80;
    case 383u: goto L_08A76A8C;
    case 384u: goto L_08A76A9C;
    case 385u: goto L_08A76AB4;
    case 386u: goto L_08A76ABC;
    case 387u: goto L_08A76AC4;
    case 388u: goto L_08A76AD0;
    case 389u: goto L_08A76ADC;
    case 390u: goto L_08A76AE8;
    case 391u: goto L_08A76AF0;
    case 392u: goto L_08A76B14;
    case 393u: goto L_08A76B2C;
    case 394u: goto L_08A76B40;
    case 395u: goto L_08A76B54;
    case 396u: goto L_08A76B68;
    case 397u: goto L_08A76B7C;
    case 398u: goto L_08A76B90;
    case 399u: goto L_08A76B9C;
    case 400u: goto L_08A76BA8;
    case 401u: goto L_08A76BB4;
    case 402u: goto L_08A76BF8;
    case 403u: goto L_08A76C20;
    case 404u: goto L_08A76C34;
    case 405u: goto L_08A76C7C;
    case 406u: goto L_08A76CA8;
    case 407u: goto L_08A76CB0;
    case 408u: goto L_08A76CC8;
    case 409u: goto L_08A76CE0;
    case 410u: goto L_08A76D0C;
    case 411u: goto L_08A76D20;
    case 412u: goto L_08A76D50;
    case 413u: goto L_08A76D58;
    case 414u: goto L_08A76D84;
    case 415u: goto L_08A76D98;
    case 416u: goto L_08A76DE0;
    case 417u: goto L_08A76E0C;
    case 418u: goto L_08A76E20;
    case 419u: goto L_08A76E68;
    case 420u: goto L_08A76E88;
    case 421u: goto L_08A76EE8;
    case 422u: goto L_08A76F14;
    case 423u: goto L_08A76F28;
    case 424u: goto L_08A76F58;
    case 425u: goto L_08A76F84;
    case 426u: goto L_08A76F98;
    case 427u: goto L_08A76FDC;
    case 428u: goto L_08A77004;
    case 429u: goto L_08A77048;
    case 430u: goto L_08A77070;
    case 431u: goto L_08A770B8;
    case 432u: goto L_08A770E0;
    case 433u: goto L_08A770F4;
    case 434u: goto L_08A77138;
    case 435u: goto L_08A77160;
    case 436u: goto L_08A771A8;
    case 437u: goto L_08A771D4;
    case 438u: goto L_08A771E8;
    case 439u: goto L_08A7722C;
    case 440u: goto L_08A7725C;
    case 441u: goto L_08A77270;
    case 442u: goto L_08A77280;
    case 443u: goto L_08A7728C;
    case 444u: goto L_08A772D4;
    case 445u: goto L_08A77300;
    case 446u: goto L_08A77314;
    case 447u: goto L_08A7735C;
    case 448u: goto L_08A77388;
    case 449u: goto L_08A7739C;
    case 450u: goto L_08A773E4;
    case 451u: goto L_08A773EC;
    case 452u: goto L_08A7740C;
    case 453u: goto L_08A77418;
    case 454u: goto L_08A77428;
    case 455u: goto L_08A77438;
    case 456u: goto L_08A77450;
    case 457u: goto L_08A7747C;
    case 458u: goto L_08A7748C;
    case 459u: goto L_08A77494;
    case 460u: goto L_08A774A0;
    case 461u: goto L_08A774E0;
    case 462u: goto L_08A7750C;
    case 463u: goto L_08A77538;
    case 464u: goto L_08A77564;
    case 465u: goto L_08A77570;
    case 466u: goto L_08A7759C;
    case 467u: goto L_08A775A8;
    case 468u: goto L_08A775B0;
    case 469u: goto L_08A775DC;
    case 470u: goto L_08A775F0;
    case 471u: goto L_08A77640;
    case 472u: goto L_08A77648;
    case 473u: goto L_08A77650;
    case 474u: goto L_08A77658;
    case 475u: goto L_08A77664;
    case 476u: goto L_08A7766C;
    case 477u: goto L_08A77678;
    case 478u: goto L_08A77680;
    case 479u: goto L_08A7768C;
    case 480u: goto L_08A77698;
    case 481u: goto L_08A776A0;
    case 482u: goto L_08A776A4;
    case 483u: goto L_08A776D0;
    case 484u: goto L_08A776DC;
    case 485u: goto L_08A776EC;
    case 486u: goto L_08A776F4;
    case 487u: goto L_08A7771C;
    case 488u: goto L_08A77740;
    case 489u: goto L_08A77784;
    case 490u: goto L_08A7778C;
    case 491u: goto L_08A77794;
    case 492u: goto L_08A7779C;
    case 493u: goto L_08A777A8;
    case 494u: goto L_08A777B0;
    case 495u: goto L_08A777BC;
    case 496u: goto L_08A777C4;
    case 497u: goto L_08A777D0;
    case 498u: goto L_08A777DC;
    case 499u: goto L_08A777E4;
    case 500u: goto L_08A777E8;
    case 501u: goto L_08A77840;
    case 502u: goto L_08A77848;
    case 503u: goto L_08A77850;
    case 504u: goto L_08A77858;
    case 505u: goto L_08A77864;
    case 506u: goto L_08A7786C;
    case 507u: goto L_08A77878;
    case 508u: goto L_08A77880;
    case 509u: goto L_08A7788C;
    case 510u: goto L_08A77898;
    case 511u: goto L_08A778A0;
    case 512u: goto L_08A778A4;
    case 513u: goto L_08A778FC;
    case 514u: goto L_08A77918;
    case 515u: goto L_08A77924;
    case 516u: goto L_08A77930;
    case 517u: goto L_08A7793C;
    case 518u: goto L_08A77950;
    case 519u: goto L_08A77968;
    case 520u: goto L_08A77974;
    case 521u: goto L_08A77984;
    case 522u: goto L_08A77990;
    case 523u: goto L_08A779A0;
    case 524u: goto L_08A779B4;
    case 525u: goto L_08A779C8;
    case 526u: goto L_08A779E4;
    case 527u: goto L_08A779F8;
    case 528u: goto L_08A77A0C;
    case 529u: goto L_08A77A24;
    case 530u: goto L_08A77A40;
    case 531u: goto L_08A77A60;
    case 532u: goto L_08A77A74;
    case 533u: goto L_08A77A84;
    case 534u: goto L_08A77AD8;
    case 535u: goto L_08A77AF0;
    case 536u: goto L_08A77B08;
    case 537u: goto L_08A77B20;
    case 538u: goto L_08A77B38;
    case 539u: goto L_08A77B50;
    case 540u: goto L_08A77B68;
    case 541u: goto L_08A77B80;
    case 542u: goto L_08A77B98;
    case 543u: goto L_08A77BB0;
    case 544u: goto L_08A77BC8;
    case 545u: goto L_08A77BE0;
    case 546u: goto L_08A77BF4;
    case 547u: goto L_08A77C04;
    case 548u: goto L_08A77C10;
    case 549u: goto L_08A77C1C;
    case 550u: goto L_08A77C28;
    case 551u: goto L_08A77C38;
    case 552u: goto L_08A77C4C;
    case 553u: goto L_08A77C54;
    case 554u: goto L_08A77C68;
    case 555u: goto L_08A77C84;
    case 556u: goto L_08A77C8C;
    case 557u: goto L_08A77C94;
    case 558u: goto L_08A77C9C;
    case 559u: goto L_08A77CB8;
    case 560u: goto L_08A77CCC;
    case 561u: goto L_08A77CD4;
    case 562u: goto L_08A77CD8;
    case 563u: goto L_08A77D34;
    case 564u: goto L_08A77D4C;
    case 565u: goto L_08A77D7C;
    case 566u: goto L_08A77DCC;
    case 567u: goto L_08A77DD4;
    case 568u: goto L_08A77DFC;
    case 569u: goto L_08A77E58;
    case 570u: goto L_08A77E74;
    case 571u: goto L_08A77E84;
    case 572u: goto L_08A77E94;
    case 573u: goto L_08A77EA4;
    case 574u: goto L_08A77EBC;
    case 575u: goto L_08A77EC8;
    case 576u: goto L_08A77ECC;
    case 577u: goto L_08A77EF0;
    case 578u: goto L_08A77F04;
    case 579u: goto L_08A77F24;
    case 580u: goto L_08A77F30;
    case 581u: goto L_08A77F4C;
    case 582u: goto L_08A77F60;
    case 583u: goto L_08A77F78;
    case 584u: goto L_08A77F80;
    case 585u: goto L_08A77F90;
    case 586u: goto L_08A77F98;
    case 587u: goto L_08A77FAC;
    case 588u: goto L_08A77FB8;
    case 589u: goto L_08A77FCC;
    case 590u: goto L_08A77FDC;
    case 591u: goto L_08A77FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A74000:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 100u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 195u);
      if (branch_taken) {
          goto L_08A740A8;
      }
      goto L_08A7401C;
    }
L_08A7401C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 772u, 0x08A73FECu>(ctx, &aot_mem); return;
      }
      goto L_08A74024;
    }
L_08A74024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A74494;
      }
      goto L_08A7402C;
    }
L_08A7402C:
    ctx.gpr[5] = (17383u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (0u | 1782u);
    ctx.gpr[5] = (16856u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 100u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[30] = (0u | 195u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A740A8;
      }
      goto L_08A74058;
    }
L_08A74058:
    ctx.gpr[5] = (17397u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (0u | 1888u);
    ctx.gpr[5] = (16856u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 100u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[30] = (0u | 195u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A740A8;
      }
      goto L_08A74080;
    }
L_08A74080:
    ctx.gpr[5] = (17458u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (0u | 3775u);
    ctx.gpr[5] = (17150u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[30] = (0u | 195u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08A740A8;
L_08A740A8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x08A740B4u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A740B4u) goto L_08A740B4;
    return;
L_08A740B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A74130;
      }
      goto L_08A740C0;
    }
L_08A740C0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25440));
    ctx.gpr[31] = (0x08A740D0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 27u, 0x08A980DCu>(ctx, &aot_mem) && ctx.pc == 0x08A740D0u) goto L_08A740D0;
    return;
L_08A740D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A740DCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1088u, 0x08A97F64u>(ctx, &aot_mem) && ctx.pc == 0x08A740DCu) goto L_08A740DC;
    return;
L_08A740DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
        goto L_08A740F4;
    }
    goto L_08A740F4;
L_08A740F4:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[22] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A74170;
      }
      goto L_08A74130;
    }
L_08A74130:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(588)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(592)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(948))))));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A74154;
    }
    goto L_08A74154;
L_08A74154:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[22] = (0u | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    goto L_08A74170;
L_08A74170:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
        goto L_08A74190;
    }
    goto L_08A74180;
L_08A74180:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A741A4;
      }
      goto L_08A74190;
    }
L_08A74190:
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[6]);
    goto L_08A741A4;
L_08A741A4:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A741BC;
      }
      goto L_08A741B0;
    }
L_08A741B0:
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[16] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] >> 3u);
    goto L_08A741BC;
L_08A741BC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74284;
      }
      goto L_08A741C4;
    }
L_08A741C4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11188)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11192)));
      if (branch_taken) {
          goto L_08A74218;
      }
      goto L_08A741DC;
    }
L_08A741DC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74200;
      }
      goto L_08A741E8;
    }
L_08A741E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[7] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08A741F8;
    }
    goto L_08A741F8;
L_08A741F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A74250;
      }
      goto L_08A74200;
    }
L_08A74200:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[7] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08A74210;
    }
    goto L_08A74210;
L_08A74210:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A74250;
      }
      goto L_08A74218;
    }
L_08A74218:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7423C;
      }
      goto L_08A74224;
    }
L_08A74224:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-100));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08A74234;
    }
    goto L_08A74234;
L_08A74234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A74250;
      }
      goto L_08A7423C;
    }
L_08A7423C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_08A7424C;
    }
    goto L_08A7424C;
L_08A7424C:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A74250;
L_08A74250:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74274;
      }
      goto L_08A7425C;
    }
L_08A7425C:
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_08A7426C;
    }
    goto L_08A7426C;
L_08A7426C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74284;
      }
      goto L_08A74274;
    }
L_08A74274:
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_08A74284;
    }
    goto L_08A74284;
L_08A74284:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A74390;
      }
      goto L_08A7428C;
    }
L_08A7428C:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A742C4;
      }
      goto L_08A74294;
    }
L_08A74294:
    ctx.gpr[31] = (0x08A7429Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 622u, 0x0889EFE4u>(ctx, &aot_mem) && ctx.pc == 0x08A7429Cu) goto L_08A7429C;
    return;
L_08A7429C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A742C4;
      }
      goto L_08A742A4;
    }
L_08A742A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74390;
      }
      goto L_08A742B0;
    }
L_08A742B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74390;
      }
      goto L_08A742C4;
    }
L_08A742C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A742D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A742D4u) goto L_08A742D4;
    return;
L_08A742D4:
    ctx.gpr[6] = (17184u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A742F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A742F0u) goto L_08A742F0;
    return;
L_08A742F0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A74390;
      }
      goto L_08A74300;
    }
L_08A74300:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A74320;
      }
      goto L_08A74318;
    }
L_08A74318:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A74320;
L_08A74320:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[4] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74344;
      }
      goto L_08A74338;
    }
L_08A74338:
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7434C;
      }
      goto L_08A74344;
    }
L_08A74344:
    ctx.gpr[4] = (0u | 14u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A7434C;
L_08A7434C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A74390u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A74390u) goto L_08A74390;
    return;
L_08A74390:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A74470;
      }
      goto L_08A74398;
    }
L_08A74398:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A743A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A743A8u) goto L_08A743A8;
    return;
L_08A743A8:
    ctx.gpr[6] = (17184u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A743C4u);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A743C4u) goto L_08A743C4;
    return;
L_08A743C4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A74470;
      }
      goto L_08A743D4;
    }
L_08A743D4:
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
        goto L_08A743FC;
    }
    goto L_08A743DC;
L_08A743DC:
    ctx.gpr[31] = (0x08A743E4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 622u, 0x0889EFE4u>(ctx, &aot_mem) && ctx.pc == 0x08A743E4u) goto L_08A743E4;
    return;
L_08A743E4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
        goto L_08A743FC;
    }
    goto L_08A743EC;
L_08A743EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74470;
      }
      goto L_08A743F8;
    }
L_08A743F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    goto L_08A743FC;
L_08A743FC:
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 6000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 39u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 173u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6000));
    ctx.gpr[31] = (0x08A74470u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A74470u) goto L_08A74470;
    return;
L_08A74470:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74488;
      }
      goto L_08A74478;
    }
L_08A74478:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11192), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11188), ctx.gpr[16]);
    goto L_08A74488;
L_08A74488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A74494;
      }
      goto L_08A74490;
    }
L_08A74490:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A74494;
L_08A74494:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A744D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[19] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A75E10;
      }
      goto L_08A74540;
    }
L_08A74540:
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[23] = (0u | 41u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[21] = (0u | 42u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-25456));
    goto L_08A7455C;
L_08A7455C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[18] = (ctx.gpr[20] + ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 186 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 187 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A745B4;
      }
      goto L_08A74588;
    }
L_08A74588:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 57 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A75DFC;
      }
      goto L_08A74594;
    }
L_08A74594:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-33));
      if (branch_taken) {
          goto L_08A75DFC;
      }
      goto L_08A7459C;
    }
L_08A7459C:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26664)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A745B4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 188 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A75ADC;
      }
      goto L_08A745BC;
    }
L_08A745BC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75DFC;
      }
      goto L_08A745C4;
    }
L_08A745C4:
    ctx.gpr[5] = (0u | 172u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75D18;
      }
      goto L_08A7460C;
    }
L_08A7460C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7462C;
      }
      goto L_08A74620;
    }
L_08A74620:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_08A75E04;
      }
      goto L_08A7462C;
    }
L_08A7462C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A74F18;
      }
      goto L_08A7463C;
    }
L_08A7463C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26568)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A74654:
    ctx.gpr[4] = (0u | 252u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74688u);
    ctx.gpr[5] = (0u | 252u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A74688u) goto L_08A74688;
    return;
L_08A74688:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A7469Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7469Cu) goto L_08A7469C;
    return;
L_08A7469C:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (18017u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A746E4;
L_08A746E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75E10;
      }
      goto L_08A746EC;
    }
L_08A746EC:
    ctx.gpr[4] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74720u);
    ctx.gpr[5] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A74720u) goto L_08A74720;
    return;
L_08A74720:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A74734u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A74734u) goto L_08A74734;
    return;
L_08A74734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A74794;
    }
L_08A74794:
    ctx.gpr[4] = (0u | 266u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A747C8u);
    ctx.gpr[5] = (0u | 266u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A747C8u) goto L_08A747C8;
    return;
L_08A747C8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A747DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A747DCu) goto L_08A747DC;
    return;
L_08A747DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(95));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A74838;
    }
L_08A74838:
    ctx.gpr[4] = (0u | 174u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74858u);
    ctx.gpr[5] = (0u | 174u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A74858u) goto L_08A74858;
    return;
L_08A74858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17761u << 16u);
    ctx.gpr[21] = (0u | 105u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A748C0;
    }
L_08A748C0:
    ctx.gpr[4] = (0u | 216u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A748F4u);
    ctx.gpr[5] = (0u | 216u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A748F4u) goto L_08A748F4;
    return;
L_08A748F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A74908u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A74908u) goto L_08A74908;
    return;
L_08A74908:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (18017u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A74950;
    }
L_08A74950:
    ctx.gpr[4] = (0u | 225u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74984u);
    ctx.gpr[5] = (0u | 225u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A74984u) goto L_08A74984;
    return;
L_08A74984:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A74998u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A74998u) goto L_08A74998;
    return;
L_08A74998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(113));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A749F4;
    }
L_08A749F4:
    ctx.gpr[4] = (0u | 291u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A74A28u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A74A28u) goto L_08A74A28;
    return;
L_08A74A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(17000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(85));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A74A84;
    }
L_08A74A84:
    ctx.gpr[4] = (0u | 291u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A74AB8u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A74AB8u) goto L_08A74AB8;
    return;
L_08A74AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 34000u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(85));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A74B18;
    }
L_08A74B18:
    ctx.gpr[4] = (0u | 269u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74B4Cu);
    ctx.gpr[5] = (0u | 269u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A74B4Cu) goto L_08A74B4C;
    return;
L_08A74B4C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A74B60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A74B60u) goto L_08A74B60;
    return;
L_08A74B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A74BBC;
    }
L_08A74BBC:
    ctx.gpr[4] = (0u | 269u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A74BF0u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A74BF0u) goto L_08A74BF0;
    return;
L_08A74BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 43150u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A74C50;
    }
L_08A74C50:
    ctx.gpr[4] = (0u | 305u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74C84u);
    ctx.gpr[5] = (0u | 305u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A74C84u) goto L_08A74C84;
    return;
L_08A74C84:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A74C98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A74C98u) goto L_08A74C98;
    return;
L_08A74C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(113));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A74CF4;
    }
L_08A74CF4:
    ctx.gpr[4] = (0u | 281u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A74D48;
      }
      goto L_08A74D34;
    }
L_08A74D34:
    ctx.gpr[4] = (0u | 25472u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 25472u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 796u);
      if (branch_taken) {
          goto L_08A74D58;
      }
      goto L_08A74D48;
    }
L_08A74D48:
    ctx.gpr[4] = (0u | 20182u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 20182u);
    ctx.gpr[4] = (0u | 630u);
    goto L_08A74D58;
L_08A74D58:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A74D64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A74D64u) goto L_08A74D64;
    return;
L_08A74D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A74DC8;
    }
L_08A74DC8:
    ctx.gpr[4] = (0u | 284u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74DFCu);
    ctx.gpr[5] = (0u | 284u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A74DFCu) goto L_08A74DFC;
    return;
L_08A74DFC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A74E10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A74E10u) goto L_08A74E10;
    return;
L_08A74E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A74E70;
    }
L_08A74E70:
    ctx.gpr[4] = (0u | 275u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74EA4u);
    ctx.gpr[5] = (0u | 275u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A74EA4u) goto L_08A74EA4;
    return;
L_08A74EA4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 5u);
    ctx.gpr[31] = (0x08A74EB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A74EB8u) goto L_08A74EB8;
    return;
L_08A74EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A74F18;
    }
L_08A74F18:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_08A75E04;
      }
      goto L_08A74F24;
    }
L_08A74F24:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74F30u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A74F30u) goto L_08A74F30;
    return;
L_08A74F30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A74F68;
      }
      goto L_08A74F38;
    }
L_08A74F38:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74F44u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 298u, 0x088B5D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74F44u) goto L_08A74F44;
    return;
L_08A74F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_08A75E04;
      }
      goto L_08A74F68;
    }
L_08A74F68:
    ctx.gpr[4] = (0u | 5560u);
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A74F8Cu);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A74F8Cu) goto L_08A74F8C;
    return;
L_08A74F8C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A74FD8;
    }
L_08A74FD8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74FE4u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A74FE4u) goto L_08A74FE4;
    return;
L_08A74FE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 5560u);
      if (branch_taken) {
          goto L_08A7501C;
      }
      goto L_08A74FEC;
    }
L_08A74FEC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A74FF8u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 298u, 0x088B5D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A74FF8u) goto L_08A74FF8;
    return;
L_08A74FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_08A75E04;
      }
      goto L_08A7501C;
    }
L_08A7501C:
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 27000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A7507C;
    }
L_08A7507C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A75088u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A75088u) goto L_08A75088;
    return;
L_08A75088:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 5559u);
      if (branch_taken) {
          goto L_08A750C0;
      }
      goto L_08A75090;
    }
L_08A75090:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A7509Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 298u, 0x088B5D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7509Cu) goto L_08A7509C;
    return;
L_08A7509C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_08A75E04;
      }
      goto L_08A750C0;
    }
L_08A750C0:
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 27000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.gpr[21] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A75124;
    }
L_08A75124:
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(5972)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
        goto L_08A7514C;
    }
    goto L_08A75140;
L_08A75140:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7515C;
      }
      goto L_08A7514C;
    }
L_08A7514C:
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08A7515C;
L_08A7515C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75388;
      }
      goto L_08A7516C;
    }
L_08A7516C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26488)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75184:
    ctx.gpr[4] = (0u | 240u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 75u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A751B8u);
    ctx.gpr[5] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A751B8u) goto L_08A751B8;
    return;
L_08A751B8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A751C8u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A751C8u) goto L_08A751C8;
    return;
L_08A751C8:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.gpr[4] = (17505u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[18] = (0u | 5u);
    goto L_08A751EC;
L_08A751EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A751F8u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A751F8u) goto L_08A751F8;
    return;
L_08A751F8:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A75228;
    }
L_08A75228:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (0u | 39243u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 75u);
    ctx.gpr[4] = (17505u << 16u);
    ctx.gpr[19] = (0u | 39243u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_08A751EC;
      }
      goto L_08A7527C;
    }
L_08A7527C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (0u | 30290u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 75u);
    ctx.gpr[4] = (17505u << 16u);
    ctx.gpr[19] = (0u | 30290u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_08A751EC;
      }
      goto L_08A752D0;
    }
L_08A752D0:
    ctx.gpr[4] = (0u | 267u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 75u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A75304u);
    ctx.gpr[5] = (0u | 267u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A75304u) goto L_08A75304;
    return;
L_08A75304:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_08A751EC;
      }
      goto L_08A7532C;
    }
L_08A7532C:
    ctx.gpr[4] = (0u | 263u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 75u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A75360u);
    ctx.gpr[5] = (0u | 263u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A75360u) goto L_08A75360;
    return;
L_08A75360:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_08A751EC;
      }
      goto L_08A75388;
    }
L_08A75388:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_08A75E04;
      }
      goto L_08A75394;
    }
L_08A75394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A753CC;
    }
    goto L_08A753AC;
L_08A753AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A753BCu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08A753BCu) goto L_08A753BC;
    return;
L_08A753BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A753CC;
L_08A753CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A7541C;
      }
      goto L_08A753D8;
    }
L_08A753D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08A75410;
    }
    goto L_08A753F0;
L_08A753F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A75400u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08A75400u) goto L_08A75400;
    return;
L_08A75400:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08A75410;
L_08A75410:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
        goto L_08A75440;
    }
    goto L_08A7541C;
L_08A7541C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_08A75E04;
      }
      goto L_08A75440;
    }
L_08A75440:
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (17352u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (0u | 5u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A75494;
      }
      goto L_08A75474;
    }
L_08A75474:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[31] = (0x08A75484u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08A75484u) goto L_08A75484;
    return;
L_08A75484:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A75494;
L_08A75494:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(342)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(5962)));
      if (branch_taken) {
          goto L_08A756AC;
      }
      goto L_08A754C0;
    }
L_08A754C0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26408)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A754D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[5] = (0u | 61u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
        goto L_08A75508;
    }
    goto L_08A754E8;
L_08A754E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21928)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 61u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5633));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7551C;
      }
      goto L_08A75508;
    }
L_08A75508:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A7551C;
L_08A7551C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A756C4;
      }
      goto L_08A75524;
    }
L_08A75524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(139));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A756C4;
      }
      goto L_08A75540;
    }
L_08A75540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[5] = (0u | 66u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
        goto L_08A7556C;
    }
    goto L_08A75550;
L_08A75550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (0u | 66u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5657));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A75580;
      }
      goto L_08A7556C;
    }
L_08A7556C:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A75580;
L_08A75580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A756C4;
      }
      goto L_08A75588;
    }
L_08A75588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[5] = (0u | 62u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
        goto L_08A755B8;
    }
    goto L_08A75598;
L_08A75598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21940)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 62u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5638));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A755CC;
      }
      goto L_08A755B8;
    }
L_08A755B8:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A755CC;
L_08A755CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A756C4;
      }
      goto L_08A755D4;
    }
L_08A755D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[6] = (0u | 63u);
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A75604;
      }
      goto L_08A755F0;
    }
L_08A755F0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5643));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 63u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A75610;
      }
      goto L_08A75604;
    }
L_08A75604:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08A75610;
L_08A75610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A756C4;
      }
      goto L_08A75618;
    }
L_08A75618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
        goto L_08A75648;
    }
    goto L_08A75628;
L_08A75628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 64u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5648));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7565C;
      }
      goto L_08A75648;
    }
L_08A75648:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A7565C;
L_08A7565C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A756C4;
      }
      goto L_08A75664;
    }
L_08A75664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[5] = (0u | 65u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
        goto L_08A75690;
    }
    goto L_08A75674;
L_08A75674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 65u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5653));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A756A4;
      }
      goto L_08A75690;
    }
L_08A75690:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A756A4;
L_08A756A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A756C4;
      }
      goto L_08A756AC;
    }
L_08A756AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A756C4;
L_08A756C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A756D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A756D8u) goto L_08A756D8;
    return;
L_08A756D8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 17u);
    { const std::uint32_t dividend = ctx.gpr[16]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08A756F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A756F4u) goto L_08A756F4;
    return;
L_08A756F4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(344)));
        goto L_08A75738;
    }
    goto L_08A75714;
L_08A75714:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(19));
    ctx.gpr[31] = (0x08A75724u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08A75724u) goto L_08A75724;
    return;
L_08A75724:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(344)));
    goto L_08A75738;
L_08A75738:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A75778;
      }
      goto L_08A75744;
    }
L_08A75744:
    ctx.gpr[4] = (0u | 2u);
    if (ctx.gpr[18] != ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
        goto L_08A757E0;
    }
    goto L_08A75750;
L_08A75750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A757DC;
      }
      goto L_08A75778;
    }
L_08A75778:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A75790;
      }
      goto L_08A75780;
    }
L_08A75780:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
        goto L_08A757C0;
    }
    goto L_08A75788;
L_08A75788:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
      if (branch_taken) {
          goto L_08A757E0;
      }
      goto L_08A75790;
    }
L_08A75790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 1u));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A757DC;
      }
      goto L_08A757C0;
    }
L_08A757C0:
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A757DC;
L_08A757DC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    goto L_08A757E0;
L_08A757E0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A7580C;
    }
L_08A7580C:
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (0u | 3u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75838;
      }
      goto L_08A7582C;
    }
L_08A7582C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7584C;
      }
      goto L_08A75838;
    }
L_08A75838:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08A7584C;
L_08A7584C:
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[7] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21940)));
        goto L_08A7595C;
    }
    goto L_08A75858;
L_08A75858:
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75928;
      }
      goto L_08A7586C;
    }
L_08A7586C:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26280)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75884:
    ctx.gpr[4] = (0u | 51u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A758A0;
      }
      goto L_08A75890;
    }
L_08A75890:
    ctx.gpr[4] = (0u | 213u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 213u);
      if (branch_taken) {
          goto L_08A758AC;
      }
      goto L_08A758A0;
    }
L_08A758A0:
    ctx.gpr[4] = (0u | 214u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 214u);
    goto L_08A758AC;
L_08A758AC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A758BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A758BCu) goto L_08A758BC;
    return;
L_08A758BC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] >> 5u);
    ctx.gpr[31] = (0x08A758D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A758D0u) goto L_08A758D0;
    return;
L_08A758D0:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11193)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A759A0;
      }
      goto L_08A758E4;
    }
L_08A758E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(197));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A75900u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A75900u) goto L_08A75900;
    return;
L_08A75900:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] >> 5u);
    ctx.gpr[31] = (0x08A75914u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A75914u) goto L_08A75914;
    return;
L_08A75914:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11193)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A759A0;
      }
      goto L_08A75928;
    }
L_08A75928:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A75940u);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A75940u) goto L_08A75940;
    return;
L_08A75940:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11193)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A759A0;
      }
      goto L_08A7595C;
    }
L_08A7595C:
    ctx.gpr[5] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08A7597Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7597Cu) goto L_08A7597C;
    return;
L_08A7597C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] >> 4u);
    ctx.gpr[31] = (0x08A75990u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A75990u) goto L_08A75990;
    return;
L_08A75990:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A759A0;
L_08A759A0:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A75A04;
    }
L_08A75A04:
    ctx.gpr[5] = (0u | 169u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75D18;
      }
      goto L_08A75A4C;
    }
L_08A75A4C:
    ctx.gpr[5] = (0u | 169u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75D18;
      }
      goto L_08A75A94;
    }
L_08A75A94:
    ctx.gpr[5] = (0u | 169u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75D18;
      }
      goto L_08A75ADC;
    }
L_08A75ADC:
    ctx.gpr[5] = (0u | 170u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75D18;
      }
      goto L_08A75B24;
    }
L_08A75B24:
    ctx.gpr[5] = (0u | 170u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75D18;
      }
      goto L_08A75B6C;
    }
L_08A75B6C:
    ctx.gpr[5] = (0u | 170u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75D18;
      }
      goto L_08A75BB4;
    }
L_08A75BB4:
    ctx.gpr[5] = (0u | 171u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 18000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75D18;
      }
      goto L_08A75BFC;
    }
L_08A75BFC:
    ctx.gpr[5] = (0u | 171u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75D18;
      }
      goto L_08A75C44;
    }
L_08A75C44:
    ctx.gpr[5] = (0u | 171u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75D18;
      }
      goto L_08A75C8C;
    }
L_08A75C8C:
    ctx.gpr[5] = (0u | 172u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16500u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75D18;
      }
      goto L_08A75CD4;
    }
L_08A75CD4:
    ctx.gpr[5] = (0u | 172u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 20000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (17505u << 16u);
    ctx.gpr[22] = (0u | 3u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[21] = (0u | 26u);
    ctx.gpr[18] = (2229u << 16u);
    goto L_08A75D18;
L_08A75D18:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
        goto L_08A75D34;
    }
    goto L_08A75D28;
L_08A75D28:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A75D44;
      }
      goto L_08A75D34;
    }
L_08A75D34:
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08A75D44;
L_08A75D44:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[6] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21940)));
        goto L_08A75D74;
    }
    goto L_08A75D50;
L_08A75D50:
    ctx.gpr[4] = (ctx.gpr[5] >> 8u);
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
        goto L_08A75DB0;
    }
    goto L_08A75D60;
L_08A75D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(197));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A75DAC;
      }
      goto L_08A75D74;
    }
L_08A75D74:
    ctx.gpr[5] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08A75D90u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A75D90u) goto L_08A75D90;
    return;
L_08A75D90:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[19] >> 4u);
    ctx.gpr[31] = (0x08A75DA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A75DA4u) goto L_08A75DA4;
    return;
L_08A75DA4:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A75DAC;
L_08A75DAC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08A75DB0;
L_08A75DB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21936)));
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A746E4;
      }
      goto L_08A75DFC;
    }
L_08A75DFC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    goto L_08A75E04;
L_08A75E04:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7455C;
      }
      goto L_08A75E10;
    }
L_08A75E10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A75E38;
      }
      goto L_08A75E1C;
    }
L_08A75E1C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A75E38;
      }
      goto L_08A75E30;
    }
L_08A75E30:
    ctx.gpr[6] = (0u | 21u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08A75E38;
L_08A75E38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A75F7C;
      }
      goto L_08A75E4C;
    }
L_08A75E4C:
    ctx.gpr[31] = (0x08A75E54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A75E54u) goto L_08A75E54;
    return;
L_08A75E54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A75E68u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A75E68u) goto L_08A75E68;
    return;
L_08A75E68:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A75F7C;
      }
      goto L_08A75E78;
    }
L_08A75E78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_08A75EC8;
      }
      goto L_08A75E88;
    }
L_08A75E88:
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A75EC0;
      }
      goto L_08A75EB0;
    }
L_08A75EB0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A75EC8;
      }
      goto L_08A75EC0;
    }
L_08A75EC0:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A75EC8;
L_08A75EC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A75ED4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A75ED4u) goto L_08A75ED4;
    return;
L_08A75ED4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A75F7C;
      }
      goto L_08A75EE0;
    }
L_08A75EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75F48;
      }
      goto L_08A75F20;
    }
L_08A75F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 31u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A75F48;
      }
      goto L_08A75F38;
    }
L_08A75F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A75F70;
      }
      goto L_08A75F48;
    }
L_08A75F48:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11193)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A75F70;
      }
      goto L_08A75F68;
    }
L_08A75F68:
    ctx.gpr[5] = (0u | 21u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11193), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A75F70;
L_08A75F70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A75F7Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A75F7Cu) goto L_08A75F7C;
    return;
L_08A75F7C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A75FBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 14u, 0x08A78128u>(ctx, &aot_mem); return;
      }
      goto L_08A76038;
    }
L_08A76038:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (2233u << 16u);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (0u | 3u);
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (18017u << 16u);
    ctx.gpr[14] = (0u | 192u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[13] = (0u | 286u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[12] = (0u | 169u);
    ctx.gpr[10] = (0u | 18000u);
    ctx.gpr[9] = (0u | 16500u);
    ctx.gpr[8] = (0u | 20000u);
    ctx.gpr[3] = (0u | 170u);
    ctx.gpr[2] = (0u | 171u);
    ctx.gpr[11] = (0u | 172u);
    ctx.gpr[24] = (0u | 1u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[15] = (32768u << 16u);
    ctx.gpr[20] = (2229u << 16u);
    goto L_08A760AC;
L_08A760AC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 186 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A76114;
      }
      goto L_08A760D4;
    }
L_08A760D4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 62 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 33 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A76100;
      }
      goto L_08A760E0;
    }
L_08A760E0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-33));
      if (branch_taken) {
          goto L_08A76138;
      }
      goto L_08A760E8;
    }
L_08A760E8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A760F8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 15u, 0x08A78170u>(ctx, &aot_mem) && ctx.pc == 0x08A760F8u) goto L_08A760F8;
    return;
L_08A760F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A76100;
    }
L_08A76100:
    ctx.gpr[4] = (0u | 163u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A760E8;
      }
      goto L_08A7610C;
    }
L_08A7610C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77D34;
      }
      goto L_08A76114;
    }
L_08A76114:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 207 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-186));
      if (branch_taken) {
          goto L_08A760E8;
      }
      goto L_08A76120;
    }
L_08A76120:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26240)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76138:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26152)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76150:
    ctx.gpr[31] = (0x08A76158u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A76158u) goto L_08A76158;
    return;
L_08A76158:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A76168;
      }
      goto L_08A76160;
    }
L_08A76160:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A76168;
    }
L_08A76168:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A76184;
    }
    goto L_08A76178;
L_08A76178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A76180;
    }
L_08A76180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A76184;
L_08A76184:
    ctx.gpr[6] = (ctx.gpr[23] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A76218;
      }
      goto L_08A761B0;
    }
L_08A761B0:
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (17076u << 16u);
        goto L_08A761D8;
    }
    goto L_08A761C8;
L_08A761C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5972), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (17076u << 16u);
    goto L_08A761D8;
L_08A761D8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-202));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A762C4;
      }
      goto L_08A76200;
    }
L_08A76200:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26032)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A76220;
    }
L_08A76220:
    ctx.gpr[4] = (0u | 5571u);
    ctx.gpr[5] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 5571u);
    goto L_08A76234;
L_08A76234:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 71u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A76248u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A76248u) goto L_08A76248;
    return;
L_08A76248:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17249u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A7627C;
    }
L_08A7627C:
    ctx.gpr[4] = (0u | 5583u);
    ctx.gpr[5] = (0u | 23u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5583u);
      if (branch_taken) {
          goto L_08A76234;
      }
      goto L_08A76294;
    }
L_08A76294:
    ctx.gpr[4] = (0u | 5579u);
    ctx.gpr[5] = (0u | 22u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5579u);
      if (branch_taken) {
          goto L_08A76234;
      }
      goto L_08A762AC;
    }
L_08A762AC:
    ctx.gpr[4] = (0u | 5575u);
    ctx.gpr[5] = (0u | 21u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5575u);
      if (branch_taken) {
          goto L_08A76234;
      }
      goto L_08A762C4;
    }
L_08A762C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A762CC;
    }
L_08A762CC:
    ctx.gpr[4] = (0u | 219u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A762ECu);
    ctx.gpr[5] = (0u | 219u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A762ECu) goto L_08A762EC;
    return;
L_08A762EC:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (18095u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 51200u);
    ctx.gpr[18] = (0u | 127u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A7632C;
    }
L_08A7632C:
    ctx.gpr[5] = (17150u << 16u);
    ctx.gpr[6] = (0u | 218u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[6] = (0u | 69u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (0u | 18569u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (18095u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 51200u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A763A4;
    }
L_08A763A4:
    ctx.gpr[4] = (0u | 220u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (ctx.gpr[24] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A763D0u);
    ctx.gpr[5] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A763D0u) goto L_08A763D0;
    return;
L_08A763D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (18095u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[4] | 51200u);
    ctx.gpr[18] = (0u | 127u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A7640C;
    }
L_08A7640C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[14]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (ctx.gpr[24] | 0u);
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[31] = (0x08A76424u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A76424u) goto L_08A76424;
    return;
L_08A76424:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17948u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.gpr[18] = (0u | 127u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A76460;
    }
L_08A76460:
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A76490;
      }
      goto L_08A76480;
    }
L_08A76480:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A764A4;
      }
      goto L_08A76490;
    }
L_08A76490:
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[15]);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    goto L_08A764A4;
L_08A764A4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08A764C4;
    }
    goto L_08A764B4;
L_08A764B4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
      if (branch_taken) {
          goto L_08A764D4;
      }
      goto L_08A764C4;
    }
L_08A764C4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    goto L_08A764D4;
L_08A764D4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(278));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[21] = (ctx.gpr[24] | 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17000));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A7652C;
      }
      goto L_08A76518;
    }
L_08A76518:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A7652C;
L_08A7652C:
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17352u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(70));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A76594;
    }
L_08A76594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A765B4;
      }
      goto L_08A765A8;
    }
L_08A765A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A765B0;
    }
L_08A765B0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08A765B4;
L_08A765B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[9] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (17505u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(325)));
    ctx.gpr[8] = (0u | 19u);
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[7] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76624;
      }
      goto L_08A765E0;
    }
L_08A765E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[6] = (0u | 65u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A76608;
    }
    goto L_08A765F0;
L_08A765F0:
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5653));
    ctx.gpr[5] = (0u | 65u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A7664C;
      }
      goto L_08A76608;
    }
L_08A76608:
    ctx.gpr[4] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7664C;
      }
      goto L_08A76624;
    }
L_08A76624:
    ctx.gpr[4] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A76640;
      }
      goto L_08A76630;
    }
L_08A76630:
    ctx.gpr[4] = (0u | 19u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A76648;
      }
      goto L_08A76640;
    }
L_08A76640:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[9]);
    ctx.gpr[4] = (0u | 20u);
    goto L_08A76648;
L_08A76648:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08A7664C;
L_08A7664C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[31] = (0x08A76664u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A76664u) goto L_08A76664;
    return;
L_08A76664:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const std::uint32_t dividend = ctx.gpr[20]; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08A7667Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7667Cu) goto L_08A7667C;
    return;
L_08A7667C:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[2]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A766B4;
    }
L_08A766B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
        goto L_08A766D4;
    }
    goto L_08A766C8;
L_08A766C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A766D0;
    }
L_08A766D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    goto L_08A766D4;
L_08A766D4:
    ctx.gpr[4] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A766ECu);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A766ECu) goto L_08A766EC;
    return;
L_08A766EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5956)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(5962)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A76720;
      }
      goto L_08A76718;
    }
L_08A76718:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    goto L_08A76720;
L_08A76720:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(325)));
    ctx.gpr[6] = (17352u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (0u | 5u);
      if (branch_taken) {
          goto L_08A76928;
      }
      goto L_08A7673C;
    }
L_08A7673C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25992)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[6] = (0u | 61u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A76784;
    }
    goto L_08A76764;
L_08A76764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 61u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5633));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76798;
      }
      goto L_08A76784;
    }
L_08A76784:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A76798;
L_08A76798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76944;
      }
      goto L_08A767A0;
    }
L_08A767A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(139));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76944;
      }
      goto L_08A767BC;
    }
L_08A767BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[6] = (0u | 66u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A767E8;
    }
    goto L_08A767CC;
L_08A767CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[6] = (0u | 66u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5657));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08A767FC;
      }
      goto L_08A767E8;
    }
L_08A767E8:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A767FC;
L_08A767FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76944;
      }
      goto L_08A76804;
    }
L_08A76804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[6] = (0u | 62u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A76834;
    }
    goto L_08A76814;
L_08A76814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 62u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5638));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76848;
      }
      goto L_08A76834;
    }
L_08A76834:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A76848;
L_08A76848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76944;
      }
      goto L_08A76850;
    }
L_08A76850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[7] = (0u | 63u);
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A76880;
      }
      goto L_08A7686C;
    }
L_08A7686C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5643));
    ctx.gpr[6] = (0u | 63u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08A7688C;
      }
      goto L_08A76880;
    }
L_08A76880:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08A7688C;
L_08A7688C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76944;
      }
      goto L_08A76894;
    }
L_08A76894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[6] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A768C4;
    }
    goto L_08A768A4;
L_08A768A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 64u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5648));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A768D8;
      }
      goto L_08A768C4;
    }
L_08A768C4:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A768D8;
L_08A768D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76944;
      }
      goto L_08A768E0;
    }
L_08A768E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21956)));
    ctx.gpr[6] = (0u | 65u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A7690C;
    }
    goto L_08A768F0;
L_08A768F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[6] = (0u | 65u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5653));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08A76920;
      }
      goto L_08A7690C;
    }
L_08A7690C:
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A76920;
L_08A76920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76944;
      }
      goto L_08A76928;
    }
L_08A76928:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[4] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(178));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A76944;
L_08A76944:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76960u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A76960u) goto L_08A76960;
    return;
L_08A76960:
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const std::uint32_t dividend = ctx.gpr[19]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08A7697Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7697Cu) goto L_08A7697C;
    return;
L_08A7697C:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[9] = (0u | 10u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08A769D0;
      }
      goto L_08A769A0;
    }
L_08A769A0:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A76A30;
      }
      goto L_08A769AC;
    }
L_08A769AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76A30;
      }
      goto L_08A769D0;
    }
L_08A769D0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A769EC;
      }
      goto L_08A769DC;
    }
L_08A769DC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08A76A18;
    }
    goto L_08A769E4;
L_08A769E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76A30;
      }
      goto L_08A769EC;
    }
L_08A769EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76A30;
      }
      goto L_08A76A18;
    }
L_08A76A18:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A76A30;
L_08A76A30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A76A58;
    }
L_08A76A58:
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08A76A80;
    }
    goto L_08A76A74;
L_08A76A74:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A76A8C;
      }
      goto L_08A76A80;
    }
L_08A76A80:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[15]);
    goto L_08A76A8C;
L_08A76A8C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A76AE8;
      }
      goto L_08A76A9C;
    }
L_08A76A9C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25864)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76AB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[13]);
      if (branch_taken) {
          goto L_08A76AF0;
      }
      goto L_08A76ABC;
    }
L_08A76ABC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[13]);
      if (branch_taken) {
          goto L_08A76AF0;
      }
      goto L_08A76AC4;
    }
L_08A76AC4:
    ctx.gpr[4] = (0u | 304u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76AF0;
      }
      goto L_08A76AD0;
    }
L_08A76AD0:
    ctx.gpr[4] = (0u | 293u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76AF0;
      }
      goto L_08A76ADC;
    }
L_08A76ADC:
    ctx.gpr[4] = (0u | 271u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A76AF0;
      }
      goto L_08A76AE8;
    }
L_08A76AE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A76AF0;
    }
L_08A76AF0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A76B90;
      }
      goto L_08A76B14;
    }
L_08A76B14:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25800)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76B2C:
    ctx.gpr[4] = (0u | 26000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 26000u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1625u);
      if (branch_taken) {
          goto L_08A76BA8;
      }
      goto L_08A76B40;
    }
L_08A76B40:
    ctx.gpr[4] = (0u | 13000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 13000u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 812u);
      if (branch_taken) {
          goto L_08A76BA8;
      }
      goto L_08A76B54;
    }
L_08A76B54:
    ctx.gpr[4] = (0u | 15600u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 15600u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 975u);
      if (branch_taken) {
          goto L_08A76BA8;
      }
      goto L_08A76B68;
    }
L_08A76B68:
    ctx.gpr[4] = (0u | 7904u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 7904u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 494u);
      if (branch_taken) {
          goto L_08A76BA8;
      }
      goto L_08A76B7C;
    }
L_08A76B7C:
    ctx.gpr[4] = (0u | 9959u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 9959u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 622u);
      if (branch_taken) {
          goto L_08A76BA8;
      }
      goto L_08A76B90;
    }
L_08A76B90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A76B9Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A76B9Cu) goto L_08A76B9C;
    return;
L_08A76B9C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] >> 4u);
    goto L_08A76BA8;
L_08A76BA8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A76BB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A76BB4u) goto L_08A76BB4;
    return;
L_08A76BB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[4] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(95));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A76BF8;
    }
L_08A76BF8:
    ctx.gpr[4] = (0u | 176u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A76C20u);
    ctx.gpr[5] = (0u | 176u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A76C20u) goto L_08A76C20;
    return;
L_08A76C20:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x08A76C34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A76C34u) goto L_08A76C34;
    return;
L_08A76C34:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17761u << 16u);
    ctx.gpr[18] = (0u | 85u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A76C7C;
    }
L_08A76C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[8] = (0u | 291u);
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 269u);
      if (branch_taken) {
          goto L_08A76CB0;
      }
      goto L_08A76CA8;
    }
L_08A76CA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A76CB0;
    }
L_08A76CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A773E4;
      }
      goto L_08A76CC8;
    }
L_08A76CC8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25768)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A76CE0:
    ctx.gpr[4] = (0u | 252u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76D0Cu);
    ctx.gpr[5] = (0u | 252u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A76D0Cu) goto L_08A76D0C;
    return;
L_08A76D0C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A76D20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A76D20u) goto L_08A76D20;
    return;
L_08A76D20:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[18] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    goto L_08A76D50;
L_08A76D50:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A76D58;
    }
L_08A76D58:
    ctx.gpr[4] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76D84u);
    ctx.gpr[5] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A76D84u) goto L_08A76D84;
    return;
L_08A76D84:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A76D98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A76D98u) goto L_08A76D98;
    return;
L_08A76D98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[4] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76D50;
      }
      goto L_08A76DE0;
    }
L_08A76DE0:
    ctx.gpr[4] = (0u | 266u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76E0Cu);
    ctx.gpr[5] = (0u | 266u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A76E0Cu) goto L_08A76E0C;
    return;
L_08A76E0C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A76E20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A76E20u) goto L_08A76E20;
    return;
L_08A76E20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[4] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(95));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76D50;
      }
      goto L_08A76E68;
    }
L_08A76E68:
    ctx.gpr[4] = (0u | 174u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76E88u);
    ctx.gpr[5] = (0u | 174u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A76E88u) goto L_08A76E88;
    return;
L_08A76E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.gpr[18] = (0u | 105u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08A76D50;
      }
      goto L_08A76EE8;
    }
L_08A76EE8:
    ctx.gpr[4] = (0u | 216u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76F14u);
    ctx.gpr[5] = (0u | 216u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A76F14u) goto L_08A76F14;
    return;
L_08A76F14:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A76F28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A76F28u) goto L_08A76F28;
    return;
L_08A76F28:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A76D50;
      }
      goto L_08A76F58;
    }
L_08A76F58:
    ctx.gpr[4] = (0u | 225u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A76F84u);
    ctx.gpr[5] = (0u | 225u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A76F84u) goto L_08A76F84;
    return;
L_08A76F84:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A76F98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A76F98u) goto L_08A76F98;
    return;
L_08A76F98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(113));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76D50;
      }
      goto L_08A76FDC;
    }
L_08A76FDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77004u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A77004u) goto L_08A77004;
    return;
L_08A77004:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(17000));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(85));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76D50;
      }
      goto L_08A77048;
    }
L_08A77048:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77070u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A77070u) goto L_08A77070;
    return;
L_08A77070:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 34000u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(85));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76D50;
      }
      goto L_08A770B8;
    }
L_08A770B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A770E0u);
    ctx.gpr[5] = (0u | 269u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A770E0u) goto L_08A770E0;
    return;
L_08A770E0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A770F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A770F4u) goto L_08A770F4;
    return;
L_08A770F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76D50;
      }
      goto L_08A77138;
    }
L_08A77138:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77160u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A77160u) goto L_08A77160;
    return;
L_08A77160:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 43150u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(105));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76D50;
      }
      goto L_08A771A8;
    }
L_08A771A8:
    ctx.gpr[4] = (0u | 305u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A771D4u);
    ctx.gpr[5] = (0u | 305u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A771D4u) goto L_08A771D4;
    return;
L_08A771D4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A771E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A771E8u) goto L_08A771E8;
    return;
L_08A771E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(113));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76D50;
      }
      goto L_08A7722C;
    }
L_08A7722C:
    ctx.gpr[4] = (0u | 281u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A77270;
      }
      goto L_08A7725C;
    }
L_08A7725C:
    ctx.gpr[4] = (0u | 25472u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 25472u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 796u);
      if (branch_taken) {
          goto L_08A77280;
      }
      goto L_08A77270;
    }
L_08A77270:
    ctx.gpr[4] = (0u | 20182u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 20182u);
    ctx.gpr[4] = (0u | 630u);
    goto L_08A77280;
L_08A77280:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A7728Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7728Cu) goto L_08A7728C;
    return;
L_08A7728C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[4] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76D50;
      }
      goto L_08A772D4;
    }
L_08A772D4:
    ctx.gpr[4] = (0u | 284u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A77300u);
    ctx.gpr[5] = (0u | 284u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A77300u) goto L_08A77300;
    return;
L_08A77300:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A77314u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A77314u) goto L_08A77314;
    return;
L_08A77314:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[4] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76D50;
      }
      goto L_08A7735C;
    }
L_08A7735C:
    ctx.gpr[4] = (0u | 275u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A77388u);
    ctx.gpr[5] = (0u | 275u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A77388u) goto L_08A77388;
    return;
L_08A77388:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A7739Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7739Cu) goto L_08A7739C;
    return;
L_08A7739C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[4] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(115));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A76D50;
      }
      goto L_08A773E4;
    }
L_08A773E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A773EC;
    }
L_08A773EC:
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[5] = (0u | 2u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08A77418;
      }
      goto L_08A7740C;
    }
L_08A7740C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A77428;
      }
      goto L_08A77418;
    }
L_08A77418:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[15]);
    goto L_08A77428;
L_08A77428:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A775A8;
      }
      goto L_08A77438;
    }
L_08A77438:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25688)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77450:
    ctx.gpr[4] = (0u | 240u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 75u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A7747Cu);
    ctx.gpr[5] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7747Cu) goto L_08A7747C;
    return;
L_08A7747C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7748Cu);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7748Cu) goto L_08A7748C;
    return;
L_08A7748C:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    goto L_08A77494;
L_08A77494:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A774A0u);
    ctx.gpr[5] = (0u | 300u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A774A0u) goto L_08A774A0;
    return;
L_08A774A0:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (17505u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A774E0;
    }
L_08A774E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 39243u);
    ctx.gpr[18] = (0u | 75u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 39243u);
      if (branch_taken) {
          goto L_08A77494;
      }
      goto L_08A7750C;
    }
L_08A7750C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 30290u);
    ctx.gpr[18] = (0u | 75u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 30290u);
      if (branch_taken) {
          goto L_08A77494;
      }
      goto L_08A77538;
    }
L_08A77538:
    ctx.gpr[4] = (0u | 267u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 75u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A77564u);
    ctx.gpr[5] = (0u | 267u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A77564u) goto L_08A77564;
    return;
L_08A77564:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A77494;
      }
      goto L_08A77570;
    }
L_08A77570:
    ctx.gpr[4] = (0u | 263u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 75u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A7759Cu);
    ctx.gpr[5] = (0u | 263u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7759Cu) goto L_08A7759C;
    return;
L_08A7759C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A77494;
      }
      goto L_08A775A8;
    }
L_08A775A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A775B0;
    }
L_08A775B0:
    ctx.gpr[4] = (0u | 28u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A775DCu);
    ctx.gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A775DCu) goto L_08A775DC;
    return;
L_08A775DC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 3u);
    ctx.gpr[31] = (0x08A775F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A775F0u) goto L_08A775F0;
    return;
L_08A775F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[4] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (16880u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (17505u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(90));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A77640;
    }
L_08A77640:
    ctx.gpr[31] = (0x08A77648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x08A77648u) goto L_08A77648;
    return;
L_08A77648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77658;
      }
      goto L_08A77650;
    }
L_08A77650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A77658;
    }
L_08A77658:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A77664u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A77664u) goto L_08A77664;
    return;
L_08A77664:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A77680;
      }
      goto L_08A7766C;
    }
L_08A7766C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A77678u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 298u, 0x088B5D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77678u) goto L_08A77678;
    return;
L_08A77678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A77680;
    }
L_08A77680:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A7768Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A7768Cu) goto L_08A7768C;
    return;
L_08A7768C:
    ctx.gpr[4] = (0u | 2u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A776A4;
    }
    goto L_08A77698;
L_08A77698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A776A0;
    }
L_08A776A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A776A4;
L_08A776A4:
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08A776DC;
    }
    goto L_08A776D0;
L_08A776D0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A776EC;
      }
      goto L_08A776DC;
    }
L_08A776DC:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A776EC;
L_08A776EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A7771C;
      }
      goto L_08A776F4;
    }
L_08A776F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[9] = (15800u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 20972u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[31] = (0x08A7771Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 296u, 0x08AB5FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A7771Cu) goto L_08A7771C;
    return;
L_08A7771C:
    ctx.gpr[4] = (0u | 5560u);
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77740u);
    ctx.gpr[5] = (0u | 500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A77740u) goto L_08A77740;
    return;
L_08A77740:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22000));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.gpr[18] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A77784;
    }
L_08A77784:
    ctx.gpr[31] = (0x08A7778Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x08A7778Cu) goto L_08A7778C;
    return;
L_08A7778C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7779C;
      }
      goto L_08A77794;
    }
L_08A77794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A7779C;
    }
L_08A7779C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A777A8u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A777A8u) goto L_08A777A8;
    return;
L_08A777A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A777C4;
      }
      goto L_08A777B0;
    }
L_08A777B0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A777BCu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 298u, 0x088B5D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A777BCu) goto L_08A777BC;
    return;
L_08A777BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A777C4;
    }
L_08A777C4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A777D0u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A777D0u) goto L_08A777D0;
    return;
L_08A777D0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 5560u);
      if (branch_taken) {
          goto L_08A777E8;
      }
      goto L_08A777DC;
    }
L_08A777DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A777E4;
    }
L_08A777E4:
    ctx.gpr[4] = (0u | 5560u);
    goto L_08A777E8;
L_08A777E8:
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 27000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.gpr[18] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A77840;
    }
L_08A77840:
    ctx.gpr[31] = (0x08A77848u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x08A77848u) goto L_08A77848;
    return;
L_08A77848:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77858;
      }
      goto L_08A77850;
    }
L_08A77850:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A77858;
    }
L_08A77858:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A77864u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A77864u) goto L_08A77864;
    return;
L_08A77864:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A77880;
      }
      goto L_08A7786C;
    }
L_08A7786C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A77878u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 298u, 0x088B5D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A77878u) goto L_08A77878;
    return;
L_08A77878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A77880;
    }
L_08A77880:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A7788Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A7788Cu) goto L_08A7788C;
    return;
L_08A7788C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 5559u);
      if (branch_taken) {
          goto L_08A778A4;
      }
      goto L_08A77898;
    }
L_08A77898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A778A0;
    }
L_08A778A0:
    ctx.gpr[4] = (0u | 5559u);
    goto L_08A778A4;
L_08A778A4:
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 70u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 27000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.gpr[18] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A778FC;
    }
L_08A778FC:
    ctx.gpr[6] = (ctx.gpr[23] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08A77924;
    }
    goto L_08A77918;
L_08A77918:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A77930;
      }
      goto L_08A77924;
    }
L_08A77924:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[15]);
    goto L_08A77930;
L_08A77930:
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[6] != ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
        goto L_08A77A40;
    }
    goto L_08A7793C;
L_08A7793C:
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77A0C;
      }
      goto L_08A77950;
    }
L_08A77950:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25608)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77968:
    ctx.gpr[4] = (0u | 51u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A77984;
      }
      goto L_08A77974;
    }
L_08A77974:
    ctx.gpr[4] = (0u | 213u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 213u);
      if (branch_taken) {
          goto L_08A77990;
      }
      goto L_08A77984;
    }
L_08A77984:
    ctx.gpr[4] = (0u | 214u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 214u);
    goto L_08A77990;
L_08A77990:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A779A0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A779A0u) goto L_08A779A0;
    return;
L_08A779A0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A779B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A779B4u) goto L_08A779B4;
    return;
L_08A779B4:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A77A84;
      }
      goto L_08A779C8;
    }
L_08A779C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(197));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A779E4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A779E4u) goto L_08A779E4;
    return;
L_08A779E4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A779F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A779F8u) goto L_08A779F8;
    return;
L_08A779F8:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A77A84;
      }
      goto L_08A77A0C;
    }
L_08A77A0C:
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77A24u);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A77A24u) goto L_08A77A24;
    return;
L_08A77A24:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A77A84;
      }
      goto L_08A77A40;
    }
L_08A77A40:
    ctx.gpr[4] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08A77A60u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A77A60u) goto L_08A77A60;
    return;
L_08A77A60:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x08A77A74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A77A74u) goto L_08A77A74;
    return;
L_08A77A74:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A77A84;
L_08A77A84:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17505u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A77AD8;
    }
L_08A77AD8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[12]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77BF4;
      }
      goto L_08A77AF0;
    }
L_08A77AF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[12]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77BF4;
      }
      goto L_08A77B08;
    }
L_08A77B08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[12]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77BF4;
      }
      goto L_08A77B20;
    }
L_08A77B20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77BF4;
      }
      goto L_08A77B38;
    }
L_08A77B38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77BF4;
      }
      goto L_08A77B50;
    }
L_08A77B50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77BF4;
      }
      goto L_08A77B68;
    }
L_08A77B68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77BF4;
      }
      goto L_08A77B80;
    }
L_08A77B80:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77BF4;
      }
      goto L_08A77B98;
    }
L_08A77B98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77BF4;
      }
      goto L_08A77BB0;
    }
L_08A77BB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77BF4;
      }
      goto L_08A77BC8;
    }
L_08A77BC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
      if (branch_taken) {
          goto L_08A77BF4;
      }
      goto L_08A77BE0;
    }
L_08A77BE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    goto L_08A77BF4;
L_08A77BF4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08A77C10;
    }
    goto L_08A77C04;
L_08A77C04:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A77C1C;
      }
      goto L_08A77C10;
    }
L_08A77C10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[15]);
    goto L_08A77C1C;
L_08A77C1C:
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
        goto L_08A77C9C;
    }
    goto L_08A77C28;
L_08A77C28:
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
        goto L_08A77CD8;
    }
    goto L_08A77C38;
L_08A77C38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_08A77CD4;
      }
      goto L_08A77C4C;
    }
L_08A77C4C:
    if (ctx.gpr[4] == ctx.gpr[6]) {
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
        goto L_08A77CD8;
    }
    goto L_08A77C54;
L_08A77C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(197));
      if (branch_taken) {
          goto L_08A77C94;
      }
      goto L_08A77C68;
    }
L_08A77C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77C8C;
      }
      goto L_08A77C84;
    }
L_08A77C84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A77CD4;
      }
      goto L_08A77C8C;
    }
L_08A77C8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A77CD4;
      }
      goto L_08A77C94;
    }
L_08A77C94:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A77CD4;
      }
      goto L_08A77C9C;
    }
L_08A77C9C:
    ctx.gpr[4] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08A77CB8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A77CB8u) goto L_08A77CB8;
    return;
L_08A77CB8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x08A77CCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A77CCCu) goto L_08A77CCC;
    return;
L_08A77CCC:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A77CD4;
L_08A77CD4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08A77CD8;
L_08A77CD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 26u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17505u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A77D34;
    }
L_08A77D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11204)));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08A77DCC;
      }
      goto L_08A77D4C;
    }
L_08A77D4C:
    ctx.gpr[6] = (0u | 287u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11204), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (ctx.gpr[24] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77D7Cu);
    ctx.gpr[5] = (0u | 1400u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A77D7Cu) goto L_08A77D7C;
    return;
L_08A77D7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[4] = (0u | 30u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(20000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(70));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A77DCC;
    }
L_08A77DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
      }
      goto L_08A77DD4;
    }
L_08A77DD4:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11208)));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(237));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77DFCu);
    ctx.gpr[5] = (0u | 6000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A77DFCu) goto L_08A77DFC;
    return;
L_08A77DFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[4] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11208)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11208), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11208)));
    ctx.gpr[5] = (17608u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11208), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77F78;
      }
      goto L_08A77E58;
    }
L_08A77E58:
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08A77E84;
    }
    goto L_08A77E74;
L_08A77E74:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] >> 8u);
      if (branch_taken) {
          goto L_08A77E94;
      }
      goto L_08A77E84;
    }
L_08A77E84:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[15]);
    ctx.gpr[17] = (ctx.gpr[17] >> 8u);
    goto L_08A77E94;
L_08A77E94:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A77EC8;
      }
      goto L_08A77EA4;
    }
L_08A77EA4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25568)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A77EBC:
    ctx.gpr[4] = (0u | 215u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A77ECC;
      }
      goto L_08A77EC8;
    }
L_08A77EC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[14]);
    goto L_08A77ECC;
L_08A77ECC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[21] = (ctx.gpr[24] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A77EF0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A77EF0u) goto L_08A77EF0;
    return;
L_08A77EF0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[18] >> 4u);
    ctx.gpr[31] = (0x08A77F04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A77F04u) goto L_08A77F04;
    return;
L_08A77F04:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A77F30;
      }
      goto L_08A77F24;
    }
L_08A77F24:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[17] != ctx.gpr[4]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A77F4C;
    }
    goto L_08A77F30;
L_08A77F30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[4] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(35));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A77F60;
      }
      goto L_08A77F4C;
    }
L_08A77F4C:
    ctx.gpr[4] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(70));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    goto L_08A77F60;
L_08A77F60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (17505u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A77F78;
L_08A77F78:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A77F98;
      }
      goto L_08A77F80;
    }
L_08A77F80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A77F98;
      }
      goto L_08A77F90;
    }
L_08A77F90:
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A77F98;
L_08A77F98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
    }
    goto L_08A77FAC;
L_08A77FAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77FB8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A77FB8u) goto L_08A77FB8;
    return;
L_08A77FB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A77FCCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A77FCCu) goto L_08A77FCC;
    return;
L_08A77FCC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 13u, 0x08A780D4u>(ctx, &aot_mem); return;
    }
    goto L_08A77FDC;
L_08A77FDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 4u, 0x08A78020u>(ctx, &aot_mem); return;
      }
      goto L_08A77FE8;
    }
L_08A77FE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    ctx.pc = 0x08A78000u; return;
}

void recomp_unit_0156(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0156_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_156(Runtime &runtime) {
    runtime.register_generated_unit(156u, 0x08A74000u, 16384u, &recomp_unit_0156, &recomp_unit_0156_entry);
    runtime.register_function(0x08A74000u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7401Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74024u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7402Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74058u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74080u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A740F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74130u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74154u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74170u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74180u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74190u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A741F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74200u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74210u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74218u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74224u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74234u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7423Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7424Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74250u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7425Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7426Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74274u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74284u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7428Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74294u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7429Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A742F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74300u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74318u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74320u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74338u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74344u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7434Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74390u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74398u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A743FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74470u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74478u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74488u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74490u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74494u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A744D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74540u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7455Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74588u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74594u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7459Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A745C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7460Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74620u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7462Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7463Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74654u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74688u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7469Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A746E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A746ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74720u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74734u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74794u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A747C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A747DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74838u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74858u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A748C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A748F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74908u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74950u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74984u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74998u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A749F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74A28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74A84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74AB8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74B60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74BBCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74BF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74C98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74CF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74D34u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74D48u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74D58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74D64u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74DC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74DFCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E10u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74E70u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74EB8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F24u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74F8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FD8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FE4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A74FF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7501Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7507Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75088u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75090u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7509Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A750C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75124u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75140u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7514Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7515Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7516Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75184u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A751F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75228u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7527Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A752D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75304u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7532Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75360u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75388u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75394u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A753F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75400u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75410u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7541Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75440u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75474u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75484u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75494u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A754E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75508u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7551Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75524u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75540u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75550u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7556Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75580u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75588u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75598u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A755B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A755CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A755D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A755F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75604u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75610u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75618u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75628u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75648u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7565Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75664u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75674u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75690u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A756F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75714u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75724u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75738u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75744u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75750u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75778u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75780u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75788u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75790u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757C0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A757E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7580Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7582Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75838u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7584Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75858u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7586Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75884u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75890u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A758E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75900u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75914u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75928u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75940u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7595Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7597Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75990u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A759A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75A94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75ADCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B24u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75B6Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75BB4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75BFCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75C8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75CD4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D34u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D44u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75D90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75DA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75DACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75DB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75DFCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E10u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E78u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75E88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75EB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75EC0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75EC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75ED4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75EE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F48u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F70u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75F7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A75FBCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76038u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A760F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76100u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7610Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76114u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76120u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76138u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76150u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76158u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76160u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76168u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76178u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76180u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76184u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A761D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76200u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76218u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76220u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76234u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76248u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7627Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76294u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A762ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A762C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A762CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A762ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7632Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A763A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A763D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7640Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76424u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76460u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76480u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76490u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A764A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A764B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A764C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A764D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76518u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7652Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76594u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A765A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A765B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A765B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A765E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A765F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76608u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76624u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76630u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76640u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76648u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7664Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76664u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7667Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A766B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A766C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A766D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A766D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A766ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76718u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76720u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7673Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76754u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76764u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76784u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76798u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767CCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A767FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76804u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76814u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76834u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76848u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76850u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7686Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76880u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7688Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76894u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768D8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A768F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7690Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76920u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76928u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76944u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76960u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7697Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769ACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A769ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A18u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76A9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AB4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76ABCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AC4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AD0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76ADCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76AF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B14u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B2Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76B9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BA8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BB4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76BF8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C34u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76C7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76CA8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76CB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76CC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76CE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76D98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76DE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76E88u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76EE8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F14u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76F98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A76FDCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77004u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77048u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77070u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770B8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A770F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77138u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77160u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A771A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A771D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A771E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7722Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7725Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77270u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77280u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7728Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A772D4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77300u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77314u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7735Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77388u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7739Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A773E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A773ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7740Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77418u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77428u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77438u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77450u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7747Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7748Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77494u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A774A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A774E0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7750Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77538u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77564u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77570u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7759Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A775F0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77640u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77648u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77650u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77658u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77664u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7766Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77678u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77680u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7768Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77698u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776ECu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A776F4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7771Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77740u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77784u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7778Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77794u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7779Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777A8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777B0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777BCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777C4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777D0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777DCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A777E8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77840u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77848u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77850u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77858u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77864u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7786Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77878u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77880u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7788Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77898u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778A4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A778FCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77918u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77924u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77930u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A7793Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77950u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77968u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77974u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77984u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77990u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779A0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779B4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779C8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779E4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A779F8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A0Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A24u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A40u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77A84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AD8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77AF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B08u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B20u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B50u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77B98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77BB0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77BC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77BE0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77BF4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C10u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C1Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C28u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C38u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C54u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C68u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C8Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77C9Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77CB8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77CCCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77CD4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77CD8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D34u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77D7Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DCCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DD4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77DFCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E58u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E74u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E84u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77E94u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EA4u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EBCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EC8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77ECCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77EF0u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F04u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F24u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F30u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F4Cu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F60u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F78u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F80u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F90u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77F98u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77FACu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77FB8u, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77FCCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77FDCu, &recomp_unit_0156, "recomp_unit_0156");
    runtime.register_function(0x08A77FE8u, &recomp_unit_0156, "recomp_unit_0156");
}
} // namespace psprecomp
