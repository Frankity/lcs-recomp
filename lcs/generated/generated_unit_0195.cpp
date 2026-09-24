#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0195[3992] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 0, 0, 0, 0, 0, 0,
    0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0,
    67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0,
    0, 0, 0, 76, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 91, 0, 0, 92, 0, 93, 0, 94, 95,
    0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0,
    105, 0, 0, 0, 106, 0, 0, 107, 0, 108, 0, 109, 0, 110, 111, 0, 0, 112, 0, 113, 0, 0, 114, 0, 0, 0, 115, 116, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 124, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 135, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 146, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0,
    0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 160, 161, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0,
    0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181,
    0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188,
    0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 196, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 0, 0, 203, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0, 233, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 250, 251, 0, 0, 0, 0, 0, 0,
    0, 0, 252, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267,
    0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283,
    0, 284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299,
    0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315,
    0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 323, 0, 324, 0, 325, 0, 326, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332,
    0, 333, 0, 334, 0, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0,
    348, 0, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 0,
    363, 0, 364, 0, 365, 0, 366, 0, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0,
    378, 0, 379, 0, 380, 0, 0, 381, 0, 382, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    385, 0, 0, 0, 386, 0, 0, 387, 0, 0, 388, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393,
    394, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 404, 0, 405, 0, 406,
    0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0,
    0, 0, 416, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420,
    0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0,
    0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431,
    0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 443, 0, 444, 0, 445, 446, 0, 447, 0, 0,
    0, 448, 449, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0,
    455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 0,
    460, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0,
    0, 0, 0, 471, 0, 472, 0, 0, 0, 473, 0, 474, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0,
    0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0,
    0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 0,
    0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0,
    500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0,
    512, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 0, 523,
    0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 528, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 0, 0, 534, 0, 0,
    0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 543, 0, 544, 0, 545, 546,
};
void recomp_unit_0195_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B10000u;
        entry_id = (entry_delta < 15968u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0195[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B10000;
    case 2u: goto L_08B10010;
    case 3u: goto L_08B1003C;
    case 4u: goto L_08B1004C;
    case 5u: goto L_08B10058;
    case 6u: goto L_08B10068;
    case 7u: goto L_08B1008C;
    case 8u: goto L_08B100B4;
    case 9u: goto L_08B100C8;
    case 10u: goto L_08B100F8;
    case 11u: goto L_08B10120;
    case 12u: goto L_08B10144;
    case 13u: goto L_08B1014C;
    case 14u: goto L_08B10154;
    case 15u: goto L_08B1017C;
    case 16u: goto L_08B10184;
    case 17u: goto L_08B1019C;
    case 18u: goto L_08B101BC;
    case 19u: goto L_08B101C0;
    case 20u: goto L_08B101C4;
    case 21u: goto L_08B101C8;
    case 22u: goto L_08B101CC;
    case 23u: goto L_08B101D0;
    case 24u: goto L_08B101D4;
    case 25u: goto L_08B101D8;
    case 26u: goto L_08B101DC;
    case 27u: goto L_08B101E0;
    case 28u: goto L_08B101E4;
    case 29u: goto L_08B10208;
    case 30u: goto L_08B10214;
    case 31u: goto L_08B10B68;
    case 32u: goto L_08B10CB8;
    case 33u: goto L_08B10FD8;
    case 34u: goto L_08B1102C;
    case 35u: goto L_08B1103C;
    case 36u: goto L_08B11050;
    case 37u: goto L_08B11058;
    case 38u: goto L_08B11070;
    case 39u: goto L_08B1108C;
    case 40u: goto L_08B11098;
    case 41u: goto L_08B110B0;
    case 42u: goto L_08B110B8;
    case 43u: goto L_08B110C0;
    case 44u: goto L_08B110D0;
    case 45u: goto L_08B110E0;
    case 46u: goto L_08B110F0;
    case 47u: goto L_08B1111C;
    case 48u: goto L_08B11124;
    case 49u: goto L_08B1113C;
    case 50u: goto L_08B11154;
    case 51u: goto L_08B1118C;
    case 52u: goto L_08B111AC;
    case 53u: goto L_08B111DC;
    case 54u: goto L_08B11200;
    case 55u: goto L_08B1120C;
    case 56u: goto L_08B1122C;
    case 57u: goto L_08B11248;
    case 58u: goto L_08B11254;
    case 59u: goto L_08B11290;
    case 60u: goto L_08B112B0;
    case 61u: goto L_08B112D0;
    case 62u: goto L_08B112D8;
    case 63u: goto L_08B112F8;
    case 64u: goto L_08B1131C;
    case 65u: goto L_08B1133C;
    case 66u: goto L_08B1136C;
    case 67u: goto L_08B11380;
    case 68u: goto L_08B11388;
    case 69u: goto L_08B1139C;
    case 70u: goto L_08B113B8;
    case 71u: goto L_08B113C0;
    case 72u: goto L_08B113D4;
    case 73u: goto L_08B113E8;
    case 74u: goto L_08B113F0;
    case 75u: goto L_08B113F8;
    case 76u: goto L_08B1140C;
    case 77u: goto L_08B1141C;
    case 78u: goto L_08B11424;
    case 79u: goto L_08B11450;
    case 80u: goto L_08B11478;
    case 81u: goto L_08B114A0;
    case 82u: goto L_08B114B8;
    case 83u: goto L_08B114E0;
    case 84u: goto L_08B114EC;
    case 85u: goto L_08B11504;
    case 86u: goto L_08B11530;
    case 87u: goto L_08B11538;
    case 88u: goto L_08B11580;
    case 89u: goto L_08B115D0;
    case 90u: goto L_08B115D8;
    case 91u: goto L_08B115DC;
    case 92u: goto L_08B115E8;
    case 93u: goto L_08B115F0;
    case 94u: goto L_08B115F8;
    case 95u: goto L_08B115FC;
    case 96u: goto L_08B11604;
    case 97u: goto L_08B1160C;
    case 98u: goto L_08B1161C;
    case 99u: goto L_08B11630;
    case 100u: goto L_08B11638;
    case 101u: goto L_08B11650;
    case 102u: goto L_08B11664;
    case 103u: goto L_08B11670;
    case 104u: goto L_08B11678;
    case 105u: goto L_08B11680;
    case 106u: goto L_08B11690;
    case 107u: goto L_08B1169C;
    case 108u: goto L_08B116A4;
    case 109u: goto L_08B116AC;
    case 110u: goto L_08B116B4;
    case 111u: goto L_08B116B8;
    case 112u: goto L_08B116C4;
    case 113u: goto L_08B116CC;
    case 114u: goto L_08B116D8;
    case 115u: goto L_08B116E8;
    case 116u: goto L_08B116EC;
    case 117u: goto L_08B11708;
    case 118u: goto L_08B11738;
    case 119u: goto L_08B11740;
    case 120u: goto L_08B11748;
    case 121u: goto L_08B11760;
    case 122u: goto L_08B11768;
    case 123u: goto L_08B11770;
    case 124u: goto L_08B11778;
    case 125u: goto L_08B11794;
    case 126u: goto L_08B117C4;
    case 127u: goto L_08B117F4;
    case 128u: goto L_08B11830;
    case 129u: goto L_08B11858;
    case 130u: goto L_08B11890;
    case 131u: goto L_08B118F4;
    case 132u: goto L_08B11928;
    case 133u: goto L_08B11944;
    case 134u: goto L_08B11964;
    case 135u: goto L_08B11968;
    case 136u: goto L_08B11990;
    case 137u: goto L_08B119C0;
    case 138u: goto L_08B119E4;
    case 139u: goto L_08B11A0C;
    case 140u: goto L_08B11A30;
    case 141u: goto L_08B11A4C;
    case 142u: goto L_08B11A78;
    case 143u: goto L_08B11AA0;
    case 144u: goto L_08B11AC8;
    case 145u: goto L_08B11AE0;
    case 146u: goto L_08B11AE4;
    case 147u: goto L_08B11B00;
    case 148u: goto L_08B11B2C;
    case 149u: goto L_08B11B6C;
    case 150u: goto L_08B11B78;
    case 151u: goto L_08B11BA0;
    case 152u: goto L_08B11BC8;
    case 153u: goto L_08B11BE8;
    case 154u: goto L_08B11BF0;
    case 155u: goto L_08B11C04;
    case 156u: goto L_08B11C18;
    case 157u: goto L_08B11C28;
    case 158u: goto L_08B11C3C;
    case 159u: goto L_08B11C44;
    case 160u: goto L_08B11C48;
    case 161u: goto L_08B11C4C;
    case 162u: goto L_08B11C58;
    case 163u: goto L_08B11C60;
    case 164u: goto L_08B11C88;
    case 165u: goto L_08B11C94;
    case 166u: goto L_08B11CC4;
    case 167u: goto L_08B11CCC;
    case 168u: goto L_08B11CD4;
    case 169u: goto L_08B11CE8;
    case 170u: goto L_08B11CF8;
    case 171u: goto L_08B11D0C;
    case 172u: goto L_08B11D18;
    case 173u: goto L_08B11D20;
    case 174u: goto L_08B11D38;
    case 175u: goto L_08B11D40;
    case 176u: goto L_08B11D54;
    case 177u: goto L_08B11D5C;
    case 178u: goto L_08B11D64;
    case 179u: goto L_08B11D6C;
    case 180u: goto L_08B11D74;
    case 181u: goto L_08B11D7C;
    case 182u: goto L_08B11D84;
    case 183u: goto L_08B11D8C;
    case 184u: goto L_08B11DA8;
    case 185u: goto L_08B11DB8;
    case 186u: goto L_08B11DD0;
    case 187u: goto L_08B11DE0;
    case 188u: goto L_08B11DFC;
    case 189u: goto L_08B11E0C;
    case 190u: goto L_08B11E1C;
    case 191u: goto L_08B11E2C;
    case 192u: goto L_08B11E3C;
    case 193u: goto L_08B11E4C;
    case 194u: goto L_08B11E5C;
    case 195u: goto L_08B11E70;
    case 196u: goto L_08B11E9C;
    case 197u: goto L_08B11EA0;
    case 198u: goto L_08B11EAC;
    case 199u: goto L_08B11EC8;
    case 200u: goto L_08B11EE8;
    case 201u: goto L_08B11EF0;
    case 202u: goto L_08B11F04;
    case 203u: goto L_08B11F20;
    case 204u: goto L_08B11F24;
    case 205u: goto L_08B11F2C;
    case 206u: goto L_08B11F4C;
    case 207u: goto L_08B11F68;
    case 208u: goto L_08B11F80;
    case 209u: goto L_08B11F8C;
    case 210u: goto L_08B11F94;
    case 211u: goto L_08B11FA8;
    case 212u: goto L_08B11FC8;
    case 213u: goto L_08B11FE0;
    case 214u: goto L_08B11FF8;
    case 215u: goto L_08B12000;
    case 216u: goto L_08B120A8;
    case 217u: goto L_08B120CC;
    case 218u: goto L_08B120E8;
    case 219u: goto L_08B1210C;
    case 220u: goto L_08B12128;
    case 221u: goto L_08B12150;
    case 222u: goto L_08B12160;
    case 223u: goto L_08B12184;
    case 224u: goto L_08B12198;
    case 225u: goto L_08B121A8;
    case 226u: goto L_08B121BC;
    case 227u: goto L_08B121C0;
    case 228u: goto L_08B121D8;
    case 229u: goto L_08B121E8;
    case 230u: goto L_08B12228;
    case 231u: goto L_08B12234;
    case 232u: goto L_08B1223C;
    case 233u: goto L_08B12244;
    case 234u: goto L_08B12248;
    case 235u: goto L_08B12264;
    case 236u: goto L_08B122B4;
    case 237u: goto L_08B122C0;
    case 238u: goto L_08B122F8;
    case 239u: goto L_08B12314;
    case 240u: goto L_08B12320;
    case 241u: goto L_08B12328;
    case 242u: goto L_08B12338;
    case 243u: goto L_08B12388;
    case 244u: goto L_08B123AC;
    case 245u: goto L_08B123C8;
    case 246u: goto L_08B123E0;
    case 247u: goto L_08B125C8;
    case 248u: goto L_08B125D0;
    case 249u: goto L_08B125D8;
    case 250u: goto L_08B125E0;
    case 251u: goto L_08B125E4;
    case 252u: goto L_08B12608;
    case 253u: goto L_08B1260C;
    case 254u: goto L_08B12614;
    case 255u: goto L_08B1261C;
    case 256u: goto L_08B12624;
    case 257u: goto L_08B1262C;
    case 258u: goto L_08B12634;
    case 259u: goto L_08B1263C;
    case 260u: goto L_08B12644;
    case 261u: goto L_08B1264C;
    case 262u: goto L_08B12654;
    case 263u: goto L_08B1265C;
    case 264u: goto L_08B12664;
    case 265u: goto L_08B1266C;
    case 266u: goto L_08B12674;
    case 267u: goto L_08B1267C;
    case 268u: goto L_08B12684;
    case 269u: goto L_08B1268C;
    case 270u: goto L_08B12694;
    case 271u: goto L_08B1269C;
    case 272u: goto L_08B126A4;
    case 273u: goto L_08B126AC;
    case 274u: goto L_08B126B4;
    case 275u: goto L_08B126BC;
    case 276u: goto L_08B126C4;
    case 277u: goto L_08B126CC;
    case 278u: goto L_08B126D4;
    case 279u: goto L_08B126DC;
    case 280u: goto L_08B126E4;
    case 281u: goto L_08B126EC;
    case 282u: goto L_08B126F4;
    case 283u: goto L_08B126FC;
    case 284u: goto L_08B12704;
    case 285u: goto L_08B1270C;
    case 286u: goto L_08B12714;
    case 287u: goto L_08B1271C;
    case 288u: goto L_08B12724;
    case 289u: goto L_08B1272C;
    case 290u: goto L_08B12734;
    case 291u: goto L_08B1273C;
    case 292u: goto L_08B12744;
    case 293u: goto L_08B1274C;
    case 294u: goto L_08B12754;
    case 295u: goto L_08B1275C;
    case 296u: goto L_08B12764;
    case 297u: goto L_08B1276C;
    case 298u: goto L_08B12774;
    case 299u: goto L_08B1277C;
    case 300u: goto L_08B12784;
    case 301u: goto L_08B1278C;
    case 302u: goto L_08B12794;
    case 303u: goto L_08B1279C;
    case 304u: goto L_08B127A4;
    case 305u: goto L_08B127AC;
    case 306u: goto L_08B127B4;
    case 307u: goto L_08B127BC;
    case 308u: goto L_08B127C4;
    case 309u: goto L_08B127CC;
    case 310u: goto L_08B127D4;
    case 311u: goto L_08B127DC;
    case 312u: goto L_08B127E4;
    case 313u: goto L_08B127EC;
    case 314u: goto L_08B127F4;
    case 315u: goto L_08B127FC;
    case 316u: goto L_08B12804;
    case 317u: goto L_08B1280C;
    case 318u: goto L_08B12814;
    case 319u: goto L_08B1281C;
    case 320u: goto L_08B12824;
    case 321u: goto L_08B1282C;
    case 322u: goto L_08B12834;
    case 323u: goto L_08B12838;
    case 324u: goto L_08B12840;
    case 325u: goto L_08B12848;
    case 326u: goto L_08B12850;
    case 327u: goto L_08B12854;
    case 328u: goto L_08B1285C;
    case 329u: goto L_08B12864;
    case 330u: goto L_08B1286C;
    case 331u: goto L_08B12874;
    case 332u: goto L_08B1287C;
    case 333u: goto L_08B12884;
    case 334u: goto L_08B1288C;
    case 335u: goto L_08B12898;
    case 336u: goto L_08B128A0;
    case 337u: goto L_08B128A8;
    case 338u: goto L_08B128B0;
    case 339u: goto L_08B128B8;
    case 340u: goto L_08B128C0;
    case 341u: goto L_08B128C8;
    case 342u: goto L_08B128D0;
    case 343u: goto L_08B128D8;
    case 344u: goto L_08B128E0;
    case 345u: goto L_08B128E8;
    case 346u: goto L_08B128F0;
    case 347u: goto L_08B128F8;
    case 348u: goto L_08B12900;
    case 349u: goto L_08B1290C;
    case 350u: goto L_08B12914;
    case 351u: goto L_08B1291C;
    case 352u: goto L_08B12924;
    case 353u: goto L_08B1292C;
    case 354u: goto L_08B12934;
    case 355u: goto L_08B1293C;
    case 356u: goto L_08B12944;
    case 357u: goto L_08B1294C;
    case 358u: goto L_08B12954;
    case 359u: goto L_08B1295C;
    case 360u: goto L_08B12964;
    case 361u: goto L_08B1296C;
    case 362u: goto L_08B12974;
    case 363u: goto L_08B12980;
    case 364u: goto L_08B12988;
    case 365u: goto L_08B12990;
    case 366u: goto L_08B12998;
    case 367u: goto L_08B129A4;
    case 368u: goto L_08B129AC;
    case 369u: goto L_08B129B4;
    case 370u: goto L_08B129BC;
    case 371u: goto L_08B129C4;
    case 372u: goto L_08B129CC;
    case 373u: goto L_08B129D8;
    case 374u: goto L_08B129E0;
    case 375u: goto L_08B129E8;
    case 376u: goto L_08B129F0;
    case 377u: goto L_08B129F8;
    case 378u: goto L_08B12A00;
    case 379u: goto L_08B12A08;
    case 380u: goto L_08B12A10;
    case 381u: goto L_08B12A1C;
    case 382u: goto L_08B12A24;
    case 383u: goto L_08B12A30;
    case 384u: goto L_08B12A44;
    case 385u: goto L_08B12A80;
    case 386u: goto L_08B12A90;
    case 387u: goto L_08B12A9C;
    case 388u: goto L_08B12AA8;
    case 389u: goto L_08B12AAC;
    case 390u: goto L_08B12AC0;
    case 391u: goto L_08B12AD4;
    case 392u: goto L_08B12AEC;
    case 393u: goto L_08B12AFC;
    case 394u: goto L_08B12B00;
    case 395u: goto L_08B12B08;
    case 396u: goto L_08B12B1C;
    case 397u: goto L_08B12B3C;
    case 398u: goto L_08B12B64;
    case 399u: goto L_08B12B98;
    case 400u: goto L_08B12BB8;
    case 401u: goto L_08B12BC0;
    case 402u: goto L_08B12BD4;
    case 403u: goto L_08B12BDC;
    case 404u: goto L_08B12BEC;
    case 405u: goto L_08B12BF4;
    case 406u: goto L_08B12BFC;
    case 407u: goto L_08B12C0C;
    case 408u: goto L_08B12C24;
    case 409u: goto L_08B12C40;
    case 410u: goto L_08B12C64;
    case 411u: goto L_08B12C7C;
    case 412u: goto L_08B12C90;
    case 413u: goto L_08B12CA4;
    case 414u: goto L_08B12CB8;
    case 415u: goto L_08B12CEC;
    case 416u: goto L_08B12D08;
    case 417u: goto L_08B12D0C;
    case 418u: goto L_08B12D38;
    case 419u: goto L_08B12D54;
    case 420u: goto L_08B12D7C;
    case 421u: goto L_08B12D94;
    case 422u: goto L_08B12DB4;
    case 423u: goto L_08B12DEC;
    case 424u: goto L_08B12E24;
    case 425u: goto L_08B12E48;
    case 426u: goto L_08B12E68;
    case 427u: goto L_08B12E74;
    case 428u: goto L_08B12E94;
    case 429u: goto L_08B12EB0;
    case 430u: goto L_08B12EE8;
    case 431u: goto L_08B12EFC;
    case 432u: goto L_08B12F04;
    case 433u: goto L_08B12F0C;
    case 434u: goto L_08B12F14;
    case 435u: goto L_08B12F1C;
    case 436u: goto L_08B12F24;
    case 437u: goto L_08B12F2C;
    case 438u: goto L_08B12F34;
    case 439u: goto L_08B12F3C;
    case 440u: goto L_08B12F44;
    case 441u: goto L_08B12F4C;
    case 442u: goto L_08B12F54;
    case 443u: goto L_08B12F58;
    case 444u: goto L_08B12F60;
    case 445u: goto L_08B12F68;
    case 446u: goto L_08B12F6C;
    case 447u: goto L_08B12F74;
    case 448u: goto L_08B12F84;
    case 449u: goto L_08B12F88;
    case 450u: goto L_08B12F90;
    case 451u: goto L_08B12FA4;
    case 452u: goto L_08B12FC8;
    case 453u: goto L_08B12FDC;
    case 454u: goto L_08B12FF4;
    case 455u: goto L_08B13000;
    case 456u: goto L_08B13028;
    case 457u: goto L_08B1303C;
    case 458u: goto L_08B1306C;
    case 459u: goto L_08B13078;
    case 460u: goto L_08B13080;
    case 461u: goto L_08B13088;
    case 462u: goto L_08B13094;
    case 463u: goto L_08B130AC;
    case 464u: goto L_08B130C4;
    case 465u: goto L_08B1310C;
    case 466u: goto L_08B13120;
    case 467u: goto L_08B13134;
    case 468u: goto L_08B13154;
    case 469u: goto L_08B13168;
    case 470u: goto L_08B13174;
    case 471u: goto L_08B1318C;
    case 472u: goto L_08B13194;
    case 473u: goto L_08B131A4;
    case 474u: goto L_08B131AC;
    case 475u: goto L_08B131B4;
    case 476u: goto L_08B131C0;
    case 477u: goto L_08B131EC;
    case 478u: goto L_08B13210;
    case 479u: goto L_08B13244;
    case 480u: goto L_08B13260;
    case 481u: goto L_08B13274;
    case 482u: goto L_08B13298;
    case 483u: goto L_08B132A4;
    case 484u: goto L_08B132BC;
    case 485u: goto L_08B132E4;
    case 486u: goto L_08B133C8;
    case 487u: goto L_08B133D0;
    case 488u: goto L_08B133EC;
    case 489u: goto L_08B133F4;
    case 490u: goto L_08B1340C;
    case 491u: goto L_08B134A0;
    case 492u: goto L_08B134A8;
    case 493u: goto L_08B134B0;
    case 494u: goto L_08B134C4;
    case 495u: goto L_08B134D8;
    case 496u: goto L_08B134F0;
    case 497u: goto L_08B1351C;
    case 498u: goto L_08B13544;
    case 499u: goto L_08B13564;
    case 500u: goto L_08B13580;
    case 501u: goto L_08B13638;
    case 502u: goto L_08B13658;
    case 503u: goto L_08B13680;
    case 504u: goto L_08B136A0;
    case 505u: goto L_08B13808;
    case 506u: goto L_08B1381C;
    case 507u: goto L_08B13840;
    case 508u: goto L_08B13854;
    case 509u: goto L_08B13864;
    case 510u: goto L_08B13BE0;
    case 511u: goto L_08B13BF0;
    case 512u: goto L_08B13C00;
    case 513u: goto L_08B13C10;
    case 514u: goto L_08B13C20;
    case 515u: goto L_08B13C30;
    case 516u: goto L_08B13C40;
    case 517u: goto L_08B13C48;
    case 518u: goto L_08B13C50;
    case 519u: goto L_08B13C58;
    case 520u: goto L_08B13C60;
    case 521u: goto L_08B13C68;
    case 522u: goto L_08B13C70;
    case 523u: goto L_08B13C7C;
    case 524u: goto L_08B13C84;
    case 525u: goto L_08B13C90;
    case 526u: goto L_08B13C9C;
    case 527u: goto L_08B13CAC;
    case 528u: goto L_08B13CBC;
    case 529u: goto L_08B13CC4;
    case 530u: goto L_08B13CCC;
    case 531u: goto L_08B13CD4;
    case 532u: goto L_08B13CDC;
    case 533u: goto L_08B13CE4;
    case 534u: goto L_08B13CF4;
    case 535u: goto L_08B13D08;
    case 536u: goto L_08B13D18;
    case 537u: goto L_08B13D30;
    case 538u: goto L_08B13DC0;
    case 539u: goto L_08B13DE0;
    case 540u: goto L_08B13E1C;
    case 541u: goto L_08B13E30;
    case 542u: goto L_08B13E40;
    case 543u: goto L_08B13E48;
    case 544u: goto L_08B13E50;
    case 545u: goto L_08B13E58;
    case 546u: goto L_08B13E5C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B10000:
    rt.unsupported(0x08B10000u, 0x72642073u, "unknown not lowered yet"); return;
L_08B10010:
    rt.unsupported(0x08B10010u, 0x2074754Fu, "unknown not lowered yet"); return;
L_08B1003C:
    rt.unsupported(0x08B1003Cu, 0x6B63614Au, "unknown not lowered yet"); return;
L_08B1004C:
    ctx.execute_vfpu_vcmp_ct<111u, 108u, 1u, 6u>();
    if (ctx.gpr[1] == 0u) {
    rt.unsupported(0x08B10054u, 0x4F206465u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0202_entry, 202u, 448u, 0x08B2DE10u>(ctx, &aot_mem); return;
    }
    goto L_08B10058;
L_08B10058:
    rt.unsupported(0x08B10058u, 0x63656A62u, "vfpu0 not lowered yet"); return;
L_08B10068:
    rt.unsupported(0x08B10068u, 0x6A726143u, "unknown not lowered yet"); return;
L_08B1008C:
    rt.unsupported(0x08B1008Cu, 0x6320794Du, "vfpu0 not lowered yet"); return;
L_08B100B4:
    rt.unsupported(0x08B100B4u, 0x6320654Du, "vfpu0 not lowered yet"); return;
L_08B100C8:
    rt.unsupported(0x08B100C8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B100F8:
    rt.unsupported(0x08B100F8u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B10120:
    rt.unsupported(0x08B10120u, 0x454B4942u, "cop1? not lowered yet"); return;
L_08B10144:
    if (ctx.gpr[2] == ctx.gpr[31]) {
    rt.unsupported(0x08B10148u, 0x45535341u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 468u, 0x08B24E4Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1014C;
L_08B1014C:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    rt.unsupported(0x08B10150u, 0x74202D20u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 247u, 0x08B21E88u>(ctx, &aot_mem); return;
    }
    goto L_08B10154;
L_08B10154:
    rt.unsupported(0x08B10154u, 0x20736968u, "unknown not lowered yet"); return;
L_08B1017C:
    rt.unsupported(0x08B1017Cu, 0x45524548u, "cop1? not lowered yet"); return;
L_08B10184:
    rt.unsupported(0x08B10184u, 0x20726143u, "unknown not lowered yet"); return;
L_08B1019C:
    rt.unsupported(0x08B1019Cu, 0x202A2A2Au, "unknown not lowered yet"); return;
L_08B101BC:
    rt.unsupported(0x08B101BCu, 0x00002031u, "special? not lowered yet"); return;
L_08B101C0:
    rt.unsupported(0x08B101C0u, 0x00002032u, "special? not lowered yet"); return;
L_08B101C4:
    rt.unsupported(0x08B101C4u, 0x00002033u, "special? not lowered yet"); return;
L_08B101C8:
    ctx.gpr[12] = (ctx.gpr[1] | 0u);
    goto L_08B101CC;
L_08B101CC:
    rt.unsupported(0x08B101CCu, 0x00002038u, "special? not lowered yet"); return;
L_08B101D0:
    rt.unsupported(0x08B101D0u, 0x00002039u, "special? not lowered yet"); return;
L_08B101D4:
    rt.unsupported(0x08B101D4u, 0x00203031u, "special? not lowered yet"); return;
L_08B101D8:
    rt.unsupported(0x08B101D8u, 0x00203131u, "special? not lowered yet"); return;
L_08B101DC:
    rt.unsupported(0x08B101DCu, 0x00203231u, "special? not lowered yet"); return;
L_08B101E0:
    if (0u == 0u) (void)(0u);
    goto L_08B101E4;
L_08B101E4:
    rt.unsupported(0x08B101E4u, 0x736F500Au, "unknown not lowered yet"); return;
L_08B10208:
    rt.unsupported(0x08B10208u, 0x63637553u, "vfpu0 not lowered yet"); return;
L_08B10214:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B10218u, 0x20216465u, "unknown not lowered yet"); return;
L_08B10B68:
    rt.unsupported(0x08B10B6Cu, 0x088983D8u, "control flow in delay slot"); return;
L_08B10CB8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B10CBCu, 0x6361202Au, "vfpu0 not lowered yet"); return;
L_08B10FD8:
    rt.unsupported(0x08B10FD8u, 0x4E524157u, "unknown not lowered yet"); return;
L_08B1102C:
    ctx.gpr[13] = (ctx.gpr[9] < static_cast<std::uint32_t>(11565) ? 1u : 0u);
    ctx.gpr[13] = (ctx.gpr[9] < static_cast<std::uint32_t>(11565) ? 1u : 0u);
    if (ctx.gpr[25] == 0u) {
    rt.unsupported(0x08B11038u, 0x74747568u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 51u, 0x08B1C4ECu>(ctx, &aot_mem); return;
    }
    goto L_08B1103C;
L_08B1103C:
    rt.unsupported(0x08B1103Cu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B11050:
    if (ctx.gpr[1] == 0u) {
    (void)(static_cast<std::int32_t>(ctx.gpr[1]) < 26917 ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 78u, 0x08B20548u>(ctx, &aot_mem); return;
    }
    goto L_08B11058;
L_08B11058:
    rt.unsupported(0x08B11058u, 0x20297325u, "unknown not lowered yet"); return;
L_08B11070:
    rt.unsupported(0x08B11070u, 0x21212121u, "unknown not lowered yet"); return;
L_08B1108C:
    rt.unsupported(0x08B1108Cu, 0x20444544u, "unknown not lowered yet"); return;
L_08B11098:
    rt.unsupported(0x08B11098u, 0x74696177u, "unknown not lowered yet"); return;
L_08B110B0:
    if (ctx.gpr[18] != ctx.gpr[3]) {
    rt.unsupported(0x08B110B4u, 0x474F4C20u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 425u, 0x08B225FCu>(ctx, &aot_mem); return;
    }
    goto L_08B110B8;
L_08B110B8:
    if (ctx.gpr[18] == ctx.gpr[15]) {
    rt.unsupported(0x08B110BCu, 0x414C5020u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 532u, 0x08B2293Cu>(ctx, &aot_mem); return;
    }
    goto L_08B110C0;
L_08B110C0:
    rt.unsupported(0x08B110C0u, 0x20524559u, "unknown not lowered yet"); return;
L_08B110D0:
    rt.unsupported(0x08B110D0u, 0x444E4553u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B110D4u, 0x474F4C20u, "cop1? not lowered yet"); return;
L_08B110E0:
    rt.unsupported(0x08B110E0u, 0x20524559u, "unknown not lowered yet"); return;
L_08B110F0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B110F4u, 0x696E4920u, "unknown not lowered yet"); return;
L_08B1111C:
    rt.unsupported(0x08B1111Cu, 0x4E5F4F4Eu, "unknown not lowered yet"); return;
L_08B11124:
    rt.unsupported(0x08B11124u, 0x4D414554u, "unknown not lowered yet"); return;
L_08B1113C:
    rt.unsupported(0x08B1113Cu, 0x4D414554u, "unknown not lowered yet"); return;
L_08B11154:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[1]) < 10280 ? 1u : 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[1]) < 10280 ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<40u, 32u, 83u, 1u>();
    rt.unsupported(0x08B11160u, 0x6E69646Eu, "vfpu3 not lowered yet"); return;
L_08B1118C:
    rt.unsupported(0x08B1118Cu, 0x69746E45u, "unknown not lowered yet"); return;
L_08B111AC:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<83u, 1u>(vfpu_d); }
    rt.unsupported(0x08B111B0u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B111DC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B111E8u, 0x754D6320u, "unknown not lowered yet"); return;
L_08B11200:
    ctx.execute_vfpu_compare3(114u, 70u, 114u, 1u, 6u);
    ctx.execute_vfpu_vminmax(109u, 71u, 97u, 1u, false);
    ctx.gpr[1] = (0u | 0u);
    goto L_08B1120C;
L_08B1120C:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<42u, 32u, 82u, 1u>();
    ctx.execute_vfpu_vscl_ct<109u, 111u, 118u, 1u>();
    rt.unsupported(0x08B11218u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B1122C:
    rt.unsupported(0x08B1122Cu, 0x6E69616Du, "vfpu3 not lowered yet"); return;
L_08B11248:
    rt.unsupported(0x08B11248u, 0x4D5E545Eu, "unknown not lowered yet"); return;
L_08B11254:
    rt.unsupported(0x08B11254u, 0x20746F4Eu, "unknown not lowered yet"); return;
L_08B11290:
    rt.unsupported(0x08B11290u, 0x61206557u, "vfpu0 not lowered yet"); return;
L_08B112B0:
    ctx.execute_vfpu_compare3(82u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B112B4u, 0x676E6976u, "vfpu1 not lowered yet"); return;
L_08B112D0:
    ctx.execute_vfpu_vscl_ct<65u, 102u, 116u, 1u>();
    rt.unsupported(0x08B112D4u, 0x000A3A72u, "special? not lowered yet"); return;
L_08B112D8:
    rt.unsupported(0x08B112D8u, 0x74736544u, "unknown not lowered yet"); return;
L_08B112F8:
    rt.unsupported(0x08B112F8u, 0x76726553u, "unknown not lowered yet"); return;
L_08B1131C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<72u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11320u, 0x676E696Cu, "vfpu1 not lowered yet"); return;
L_08B1133C:
    ctx.execute_vfpu_vscl_ct<67u, 108u, 105u, 1u>();
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(29806));
    ctx.execute_vfpu_vscl_ct<100u, 32u, 114u, 1u>();
    rt.unsupported(0x08B11348u, 0x73657571u, "unknown not lowered yet"); return;
L_08B1136C:
    rt.unsupported(0x08B1136Cu, 0x69676552u, "unknown not lowered yet"); return;
L_08B11380:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    rt.unsupported(0x08B11384u, 0x63205858u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1080u, 0x08B274E4u>(ctx, &aot_mem); return;
    }
    goto L_08B11388;
L_08B11388:
    rt.unsupported(0x08B11388u, 0x746C754Du, "unknown not lowered yet"); return;
L_08B1139C:
    rt.unsupported(0x08B1139Cu, 0x6E696F44u, "vfpu3 not lowered yet"); return;
L_08B113B8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    rt.unsupported(0x08B113BCu, 0x63205858u, "vfpu0 not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1081u, 0x08B2751Cu>(ctx, &aot_mem); return;
    }
    goto L_08B113C0;
L_08B113C0:
    rt.unsupported(0x08B113C0u, 0x746C754Du, "unknown not lowered yet"); return;
L_08B113D4:
    ctx.execute_vfpu_vscl_ct<68u, 101u, 108u, 1u>();
    rt.unsupported(0x08B113D8u, 0x676E6974u, "vfpu1 not lowered yet"); return;
L_08B113E8:
    if (ctx.gpr[26] == ctx.gpr[31]) {
    rt.unsupported(0x08B113ECu, 0x0057454Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 696u, 0x08B25520u>(ctx, &aot_mem); return;
    }
    goto L_08B113F0;
L_08B113F0:
    if (ctx.gpr[1] == 0u) {
    (void)(static_cast<std::int32_t>(ctx.gpr[1]) < 26917 ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 104u, 0x08B208E8u>(ctx, &aot_mem); return;
    }
    goto L_08B113F8;
L_08B113F8:
    rt.unsupported(0x08B113F8u, 0x20297325u, "unknown not lowered yet"); return;
L_08B1140C:
    rt.unsupported(0x08B1140Cu, 0x6E6E6F43u, "vfpu3 not lowered yet"); return;
L_08B1141C:
    ctx.gpr[14] = (ctx.gpr[17] < static_cast<std::uint32_t>(29554) ? 1u : 0u);
    rt.unsupported(0x08B11420u, 0x00000A2Eu, "special? not lowered yet"); return;
L_08B11424:
    rt.unsupported(0x08B11424u, 0x20736148u, "unknown not lowered yet"); return;
L_08B11450:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_compare3(42u, 32u, 67u, 1u, 6u);
    rt.unsupported(0x08B11458u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B11478:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    ctx.execute_vfpu_compare3(42u, 32u, 78u, 1u, 6u);
    ctx.execute_vfpu_compare3(116u, 32u, 67u, 1u, 6u);
    rt.unsupported(0x08B11484u, 0x63656E6Eu, "vfpu0 not lowered yet"); return;
L_08B114A0:
    rt.unsupported(0x08B114A0u, 0x6E696F4Au, "vfpu3 not lowered yet"); return;
L_08B114B8:
    rt.unsupported(0x08B114B8u, 0x4E706D21u, "unknown not lowered yet"); return;
L_08B114E0:
    rt.unsupported(0x08B114E0u, 0x6E6F5A70u, "vfpu3 not lowered yet"); return;
L_08B114EC:
    rt.unsupported(0x08B114ECu, 0x41747361u, "unknown not lowered yet"); return;
L_08B11504:
    ctx.execute_vfpu_vscl_ct<116u, 105u, 109u, 1u>();
    rt.unsupported(0x08B11508u, 0x70202D20u, "unknown not lowered yet"); return;
L_08B11530:
    rt.unsupported(0x08B11530u, 0x4F5F454Du, "unknown not lowered yet"); return;
L_08B11538:
    rt.unsupported(0x08B11538u, 0x61682049u, "vfpu0 not lowered yet"); return;
L_08B11580:
    rt.unsupported(0x08B11580u, 0x72656550u, "unknown not lowered yet"); return;
L_08B115D0:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    rt.unsupported(0x08B115D4u, 0x494B5245u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 229u, 0x08B24714u>(ctx, &aot_mem); return;
    }
    goto L_08B115D8;
L_08B115D8:
    rt.unsupported(0x08B115D8u, 0x00004C4Cu, "syscall not lowered yet"); return;
L_08B115DC:
    rt.unsupported(0x08B115DCu, 0x4B43494Bu, "cop2/vfpu not lowered yet"); return;
L_08B115E8:
    if (ctx.gpr[10] != ctx.gpr[17]) {
    rt.unsupported(0x08B115ECu, 0x4B545345u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 598u, 0x08B22B34u>(ctx, &aot_mem); return;
    }
    goto L_08B115F0;
L_08B115F0:
    if (ctx.gpr[2] == ctx.gpr[11]) {
    rt.unsupported(0x08B115F4u, 0x4559414Cu, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 328u, 0x08B22318u>(ctx, &aot_mem); return;
    }
    goto L_08B115F8;
L_08B115F8:
    (void)(ctx.lo);
    goto L_08B115FC;
L_08B115FC:
    rt.unsupported(0x08B11600u, 0x534D4145u, "control flow in delay slot"); return;
L_08B11604:
    rt.unsupported(0x08B11604u, 0x45524F43u, "cop1? not lowered yet"); return;
L_08B1160C:
    rt.unsupported(0x08B1160Cu, 0x444E4553u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B11610u, 0x4147504Du, "unknown not lowered yet"); return;
L_08B1161C:
    rt.unsupported(0x08B1161Cu, 0x43524F46u, "unknown not lowered yet"); return;
L_08B11630:
    if (ctx.gpr[18] != ctx.gpr[20]) {
    rt.unsupported(0x08B11634u, 0x43494845u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 609u, 0x08B22B80u>(ctx, &aot_mem); return;
    }
    goto L_08B11638;
L_08B11638:
    rt.unsupported(0x08B11638u, 0x4D45454Cu, "unknown not lowered yet"); return;
L_08B11650:
    rt.unsupported(0x08B11650u, 0x43544553u, "unknown not lowered yet"); return;
L_08B11664:
    rt.unsupported(0x08B11664u, 0x41504552u, "unknown not lowered yet"); return;
L_08B11670:
    rt.unsupported(0x08B11674u, 0x53455259u, "control flow in delay slot"); return;
L_08B11678:
    if (ctx.gpr[10] != ctx.gpr[2]) {
    ctx.gpr[10] = (ctx.lo);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 648u, 0x08B253B4u>(ctx, &aot_mem); return;
    }
    goto L_08B11680;
L_08B11680:
    rt.unsupported(0x08B11680u, 0x454C4544u, "cop1? not lowered yet"); return;
L_08B11690:
    rt.unsupported(0x08B11690u, 0x454D4147u, "cop1? not lowered yet"); return;
L_08B1169C:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    rt.unsupported(0x08B116A0u, 0x4F4D4552u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 257u, 0x08B247E0u>(ctx, &aot_mem); return;
    }
    goto L_08B116A4;
L_08B116A4:
    rt.unsupported(0x08B116A4u, 0x4F534554u, "unknown not lowered yet"); return;
L_08B116AC:
    if (ctx.gpr[18] == ctx.gpr[1]) {
    rt.unsupported(0x08B116B0u, 0x41454254u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 619u, 0x08B22BD0u>(ctx, &aot_mem); return;
    }
    goto L_08B116B4;
L_08B116B4:
    rt.unsupported(0x08B116B4u, 0x00000054u, "special? not lowered yet"); return;
L_08B116B8:
    rt.unsupported(0x08B116B8u, 0x4E415254u, "unknown not lowered yet"); return;
L_08B116C4:
    rt.unsupported(0x08B116C4u, 0x434F4C43u, "unknown not lowered yet"); return;
L_08B116CC:
    rt.unsupported(0x08B116CCu, 0x454D4147u, "cop1? not lowered yet"); return;
L_08B116D8:
    rt.unsupported(0x08B116D8u, 0x47524154u, "cop1? not lowered yet"); return;
L_08B116E8:
    rt.unsupported(0x08B116E8u, 0x00000029u, "special? not lowered yet"); return;
L_08B116EC:
    rt.unsupported(0x08B116ECu, 0x63656843u, "vfpu0 not lowered yet"); return;
L_08B11708:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B1170Cu, 0x20216465u, "unknown not lowered yet"); return;
L_08B11738:
    if (ctx.gpr[2] == ctx.gpr[13]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 1169u, 0x08B23C88u>(ctx, &aot_mem); return;
    }
    goto L_08B11740;
L_08B11740:
    if (ctx.gpr[2] != ctx.gpr[16]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 974u, 0x08B26090u>(ctx, &aot_mem); return;
    }
    goto L_08B11748;
L_08B11748:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B1174Cu, 0x69616620u, "unknown not lowered yet"); return;
L_08B11760:
    rt.unsupported(0x08B11760u, 0x45475247u, "cop1? not lowered yet"); return;
L_08B11768:
    if (ctx.gpr[18] == ctx.gpr[25]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 283u, 0x08B248ACu>(ctx, &aot_mem); return;
    }
    goto L_08B11770;
L_08B11770:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1017u, 0x08B268C0u>(ctx, &aot_mem); return;
    }
    goto L_08B11778;
L_08B11778:
    ctx.execute_vfpu_vscl_ct<71u, 97u, 109u, 1u>();
    rt.unsupported(0x08B1177Cu, 0x63757320u, "vfpu0 not lowered yet"); return;
L_08B11794:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11798u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B117C4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B117C8u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B117F4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B117F8u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11830:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11834u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11858:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1185Cu, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11890:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11894u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B118F4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B118F8u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11928:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1192Cu, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11944:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11948u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11964:
    rt.unsupported(0x08B11964u, 0x00000A2Eu, "special? not lowered yet"); return;
L_08B11968:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B1196Cu, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11990:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11994u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B119C0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B119C4u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B119E4:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B119E8u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11A0C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11A10u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11A30:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11A34u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11A4C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11A50u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11A78:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11A7Cu, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11AA0:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11AA4u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11AC8:
    rt.unsupported(0x08B11AC8u, 0x63726F46u, "vfpu0 not lowered yet"); return;
L_08B11AE0:
    // nop
    goto L_08B11AE4;
L_08B11AE4:
    rt.unsupported(0x08B11AE4u, 0x63726F46u, "vfpu0 not lowered yet"); return;
L_08B11B00:
    ctx.execute_vfpu_vcmp_ct<105u, 108u, 1u, 11u>();
    rt.unsupported(0x08B11B04u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B11B2C:
    rt.unsupported(0x08B11B2Cu, 0x4E524157u, "unknown not lowered yet"); return;
L_08B11B6C:
    rt.unsupported(0x08B11B6Cu, 0x736D656Du, "unknown not lowered yet"); return;
L_08B11B78:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B11B7Cu, 0x74206465u, "unknown not lowered yet"); return;
L_08B11BA0:
    ctx.execute_vfpu_vcmp_ct<97u, 105u, 1u, 6u>();
    rt.unsupported(0x08B11BA4u, 0x74206465u, "unknown not lowered yet"); return;
L_08B11BC8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<105u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<70u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11BCCu, 0x20676E69u, "unknown not lowered yet"); return;
L_08B11BE8:
    ctx.execute_vfpu_vscl_ct<68u, 111u, 110u, 1u>();
    if (0u == 0u) (void)(0u);
    goto L_08B11BF0;
L_08B11BF0:
    ctx.gpr[16] = (ctx.gpr[17] ^ 29549u);
    ctx.gpr[16] = (ctx.gpr[26] < static_cast<std::uint32_t>(21328) ? 1u : 0u);
    rt.unsupported(0x08B11BF8u, 0x45564153u, "cop1? not lowered yet"); return;
L_08B11C04:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11C08u, 0x20676E69u, "unknown not lowered yet"); return;
L_08B11C18:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<73u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    (void)(ctx.gpr[25] + static_cast<std::uint32_t>(30821));
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 130u, 0x089DCC94u>(ctx, &aot_mem); return;
L_08B11C28:
    rt.unsupported(0x08B11C28u, 0x61206F44u, "vfpu0 not lowered yet"); return;
L_08B11C3C:
    if (ctx.gpr[26] == ctx.gpr[21]) {
    ctx.gpr[16] = (ctx.gpr[1] | 12337u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 444u, 0x08B24D94u>(ctx, &aot_mem); return;
    }
    goto L_08B11C44;
L_08B11C44:
    rt.unsupported(0x08B11C44u, 0x00000031u, "special? not lowered yet"); return;
L_08B11C48:
    ctx.lo = 0u;
    goto L_08B11C4C;
L_08B11C4C:
    rt.unsupported(0x08B11C4Cu, 0x6E756F46u, "vfpu3 not lowered yet"); return;
L_08B11C58:
    ctx.gpr[15] = (ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08B11C5Cu, 0x00000073u, "special? not lowered yet"); return;
L_08B11C60:
    rt.unsupported(0x08B11C60u, 0x69646F4Du, "unknown not lowered yet"); return;
L_08B11C88:
    ctx.execute_vfpu_vscl_ct<78u, 101u, 119u, 1u>();
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 155u, 0x0885D1CCu>(ctx, &aot_mem); return;
L_08B11C94:
    rt.unsupported(0x08B11C94u, 0x4267736Du, "unknown not lowered yet"); return;
L_08B11CC4:
    rt.unsupported(0x08B11CC4u, 0x6267736Du, "vfpu0 not lowered yet"); return;
L_08B11CCC:
    if (ctx.gpr[11] != ctx.gpr[5]) {
    rt.unsupported(0x08B11CD0u, 0x696C6974u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 176u, 0x08B2AA9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B11CD4;
L_08B11CD4:
    rt.unsupported(0x08B11CD4u, 0x734D7974u, "unknown not lowered yet"); return;
L_08B11CE8:
    rt.unsupported(0x08B11CE8u, 0x4F202928u, "unknown not lowered yet"); return;
L_08B11CF8:
    rt.unsupported(0x08B11CF8u, 0x69726353u, "unknown not lowered yet"); return;
L_08B11D0C:
    rt.unsupported(0x08B11D0Cu, 0x61726147u, "vfpu0 not lowered yet"); return;
L_08B11D18:
    rt.unsupported(0x08B11D18u, 0x6925203Du, "unknown not lowered yet"); return;
L_08B11D20:
    rt.unsupported(0x08B11D20u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B11D38:
    if (ctx.gpr[18] == ctx.gpr[25]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 476u, 0x08B24E7Cu>(ctx, &aot_mem); return;
    }
    goto L_08B11D40;
L_08B11D40:
    rt.unsupported(0x08B11D40u, 0x74617453u, "unknown not lowered yet"); return;
L_08B11D54:
    if (ctx.gpr[2] != ctx.gpr[1]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1068u, 0x08B26EA4u>(ctx, &aot_mem); return;
    }
    goto L_08B11D5C;
L_08B11D5C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 741u, 0x08B25684u>(ctx, &aot_mem); return;
    }
    goto L_08B11D64;
L_08B11D64:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 875u, 0x08B25A74u>(ctx, &aot_mem); return;
    }
    goto L_08B11D6C;
L_08B11D6C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[14]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1075u, 0x08B272BCu>(ctx, &aot_mem); return;
    }
    goto L_08B11D74;
L_08B11D74:
    rt.unsupported(0x08B11D74u, 0x44564153u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B11D78u, 0x0048535Fu, "special? not lowered yet"); return;
L_08B11D7C:
    rt.unsupported(0x08B11D7Cu, 0x44564153u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B11D80u, 0x0059445Fu, "special? not lowered yet"); return;
L_08B11D84:
    rt.unsupported(0x08B11D84u, 0x44564153u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B11D88u, 0x004F435Fu, "special? not lowered yet"); return;
L_08B11D8C:
    (void)(ctx.gpr[9] + static_cast<std::uint32_t>(29477));
    rt.unsupported(0x08B11D90u, 0x73250A73u, "unknown not lowered yet"); return;
L_08B11DA8:
    ctx.execute_vfpu_compare3(77u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B11DACu, 0x74537972u, "unknown not lowered yet"); return;
L_08B11DB8:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 29555 ? 1u : 0u);
    rt.unsupported(0x08B11DBCu, 0x696E4920u, "unknown not lowered yet"); return;
L_08B11DD0:
    ctx.execute_vfpu_compare3(77u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B11DD4u, 0x74537972u, "unknown not lowered yet"); return;
L_08B11DE0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 29555 ? 1u : 0u);
    rt.unsupported(0x08B11DE4u, 0x6E755220u, "vfpu3 not lowered yet"); return;
L_08B11DFC:
    ctx.execute_vfpu_compare3(77u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B11E00u, 0x74537972u, "unknown not lowered yet"); return;
L_08B11E0C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 29555 ? 1u : 0u);
    rt.unsupported(0x08B11E10u, 0x6E694620u, "vfpu3 not lowered yet"); return;
L_08B11E1C:
    rt.unsupported(0x08B11E1Cu, 0x20746F47u, "unknown not lowered yet"); return;
L_08B11E2C:
    ctx.execute_vfpu_compare3(77u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B11E30u, 0x74537972u, "unknown not lowered yet"); return;
L_08B11E3C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 29555 ? 1u : 0u);
    rt.unsupported(0x08B11E40u, 0x75685320u, "unknown not lowered yet"); return;
L_08B11E4C:
    ctx.execute_vfpu_compare3(77u, 101u, 109u, 1u, 6u);
    rt.unsupported(0x08B11E50u, 0x74537972u, "unknown not lowered yet"); return;
L_08B11E5C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 29555 ? 1u : 0u);
    rt.unsupported(0x08B11E60u, 0x73616820u, "unknown not lowered yet"); return;
L_08B11E70:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11E74u, 0x7661532Fu, "unknown not lowered yet"); return;
L_08B11E9C:
    ctx.lo = 0u;
    goto L_08B11EA0;
L_08B11EA0:
    rt.unsupported(0x08B11EA0u, 0x41544144u, "unknown not lowered yet"); return;
L_08B11EAC:
    ctx.gpr[1] = (ctx.gpr[18] ^ 21575u);
    rt.unsupported(0x08B11EB0u, 0x62694C20u, "vfpu0 not lowered yet"); return;
L_08B11EC8:
    rt.unsupported(0x08B11EC8u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B11EE8:
    rt.unsupported(0x08B11EE8u, 0x474E502Eu, "cop1? not lowered yet"); return;
L_08B11EF0:
    rt.unsupported(0x08B11EF0u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B11F04:
    rt.unsupported(0x08B11F04u, 0x6E65704Fu, "vfpu3 not lowered yet"); return;
L_08B11F20:
    rt.unsupported(0x08B11F20u, 0x00006272u, "special? not lowered yet"); return;
L_08B11F24:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.lo = ctx.gpr[2];
        (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 373u, 0x08B22474u>(ctx, &aot_mem); return;
    }
    goto L_08B11F2C;
L_08B11F2C:
    rt.unsupported(0x08B11F2Cu, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B11F4C:
    rt.unsupported(0x08B11F4Cu, 0x6E65704Fu, "vfpu3 not lowered yet"); return;
L_08B11F68:
    rt.unsupported(0x08B11F68u, 0x704F5252u, "unknown not lowered yet"); return;
L_08B11F80:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<76u, 1u>(vfpu_d); }
    rt.unsupported(0x08B11F84u, 0x4F206465u, "unknown not lowered yet"); return;
L_08B11F8C:
    rt.unsupported(0x08B11F8Cu, 0x464D502Eu, "cop1? not lowered yet"); return;
L_08B11F94:
    rt.unsupported(0x08B11F94u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B11FA8:
    rt.unsupported(0x08B11FA8u, 0x61657243u, "vfpu0 not lowered yet"); return;
L_08B11FC8:
    rt.unsupported(0x08B11FC8u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B11FE0:
    rt.unsupported(0x08B11FE0u, 0x6E65704Fu, "vfpu3 not lowered yet"); return;
L_08B11FF8:
    if (ctx.gpr[11] != ctx.gpr[5]) {
    rt.unsupported(0x08B11FFCu, 0x696C6974u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 240u, 0x08B2ADC8u>(ctx, &aot_mem); return;
    }
    goto L_08B12000;
L_08B12000:
    rt.unsupported(0x08B12000u, 0x61537974u, "vfpu0 not lowered yet"); return;
L_08B120A8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10762 ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<32u, 115u, 99u, 1u>();
    rt.unsupported(0x08B120B0u, 0x43736153u, "unknown not lowered yet"); return;
L_08B120CC:
    rt.unsupported(0x08B120CCu, 0x74696E49u, "unknown not lowered yet"); return;
L_08B120E8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2570 ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<10u, 115u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<87u, 97u, 118u, 1u>();
    rt.unsupported(0x08B120F4u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B1210C:
    rt.unsupported(0x08B1210Cu, 0x74746573u, "unknown not lowered yet"); return;
L_08B12128:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2570 ? 1u : 0u);
    ctx.execute_vfpu_vscl_ct<10u, 115u, 99u, 1u>();
    ctx.execute_vfpu_vscl_ct<87u, 97u, 118u, 1u>();
    rt.unsupported(0x08B12134u, 0x69647541u, "unknown not lowered yet"); return;
L_08B12150:
    rt.unsupported(0x08B12150u, 0x6E756F73u, "vfpu3 not lowered yet"); return;
L_08B12160:
    rt.unsupported(0x08B12160u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B12184:
    rt.unsupported(0x08B12184u, 0x4F525245u, "unknown not lowered yet"); return;
L_08B12198:
    ctx.execute_vfpu_vscl_ct<84u, 104u, 114u, 1u>();
    ctx.gpr[26] = (ctx.gpr[9] + static_cast<std::uint32_t>(25697));
    // nop
    ctx.pc = 0x0960E0C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B121A8:
    rt.unsupported(0x08B121A8u, 0x74696E49u, "unknown not lowered yet"); return;
L_08B121BC:
    // nop
    goto L_08B121C0;
L_08B121C0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2570 ? 1u : 0u);
    rt.unsupported(0x08B121C4u, 0x7361730Au, "unknown not lowered yet"); return;
L_08B121D8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B121DCu, 0x756F5320u, "unknown not lowered yet"); return;
L_08B121E8:
    rt.unsupported(0x08B121E8u, 0x63206563u, "vfpu0 not lowered yet"); return;
L_08B12228:
    ctx.gpr[14] = (0u | 0u);
    rt.unsupported(0x08B1222Cu, 0x726F6D65u, "unknown not lowered yet"); return;
L_08B12234:
    if (ctx.gpr[26] == ctx.gpr[20]) {
    rt.unsupported(0x08B12238u, 0x454E4543u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1084u, 0x08B27744u>(ctx, &aot_mem); return;
    }
    goto L_08B1223C;
L_08B1223C:
    rt.unsupported(0x08B12240u, 0x0A2E4646u, "control flow in delay slot"); return;
L_08B12244:
    // nop
    goto L_08B12248;
L_08B12248:
    rt.unsupported(0x08B12248u, 0x6E6F7257u, "vfpu3 not lowered yet"); return;
L_08B12264:
    rt.unsupported(0x08B12264u, 0x426F5478u, "unknown not lowered yet"); return;
L_08B122B4:
    rt.unsupported(0x08B122B4u, 0x696F7620u, "unknown not lowered yet"); return;
L_08B122C0:
    rt.unsupported(0x08B122C0u, 0x20746573u, "unknown not lowered yet"); return;
L_08B122F8:
    rt.unsupported(0x08B122F8u, 0x20746573u, "unknown not lowered yet"); return;
L_08B12314:
    rt.unsupported(0x08B12314u, 0x2064253Du, "unknown not lowered yet"); return;
L_08B12320:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<61u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<37u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<104u, 1u>(vfpu_d); }
    if (0u == 0u) (void)(0u);
    goto L_08B12328;
L_08B12328:
    rt.unsupported(0x08B12328u, 0x216B6565u, "unknown not lowered yet"); return;
L_08B12338:
    rt.unsupported(0x08B12338u, 0x20746573u, "unknown not lowered yet"); return;
L_08B12388:
    rt.unsupported(0x08B12388u, 0x75736572u, "unknown not lowered yet"); return;
L_08B123AC:
    rt.unsupported(0x08B123ACu, 0x2079656Bu, "unknown not lowered yet"); return;
L_08B123C8:
    rt.unsupported(0x08B123C8u, 0x61726850u, "vfpu0 not lowered yet"); return;
L_08B123E0:
    rt.unsupported(0x08B123E0u, 0x61726850u, "vfpu0 not lowered yet"); return;
L_08B125C8:
    rt.unsupported(0x08B125C8u, 0x74736F68u, "unknown not lowered yet"); return;
L_08B125D0:
    rt.unsupported(0x08B125D0u, 0x63736964u, "vfpu0 not lowered yet"); return;
L_08B125D8:
    rt.unsupported(0x08B125D8u, 0x61667270u, "vfpu0 not lowered yet"); return;
L_08B125E0:
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[1]) < static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[1] : ctx.gpr[16]);
    goto L_08B125E4;
L_08B125E4:
    rt.unsupported(0x08B125E4u, 0x61746166u, "vfpu0 not lowered yet"); return;
L_08B12608:
    rt.unsupported(0x08B12608u, 0x00726C70u, "special? not lowered yet"); return;
L_08B1260C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12610u, 0x00303030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 991u, 0x08B26744u>(ctx, &aot_mem); return;
    }
    goto L_08B12614;
L_08B12614:
    ctx.gpr[18] = (ctx.gpr[19] & 27760u);
    // nop
    goto L_08B1261C;
L_08B1261C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12620u, 0x00313030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 992u, 0x08B26754u>(ctx, &aot_mem); return;
    }
    goto L_08B12624;
L_08B12624:
    ctx.gpr[18] = (ctx.gpr[27] & 27760u);
    // nop
    goto L_08B1262C;
L_08B1262C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12630u, 0x00323030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 993u, 0x08B26764u>(ctx, &aot_mem); return;
    }
    goto L_08B12634;
L_08B12634:
    ctx.gpr[18] = (ctx.gpr[3] | 27760u);
    // nop
    goto L_08B1263C;
L_08B1263C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12640u, 0x00333030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 994u, 0x08B26774u>(ctx, &aot_mem); return;
    }
    goto L_08B12644;
L_08B12644:
    ctx.gpr[18] = (ctx.gpr[11] | 27760u);
    // nop
    goto L_08B1264C;
L_08B1264C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12650u, 0x00343030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 995u, 0x08B26784u>(ctx, &aot_mem); return;
    }
    goto L_08B12654;
L_08B12654:
    ctx.gpr[18] = (ctx.gpr[19] | 27760u);
    // nop
    goto L_08B1265C;
L_08B1265C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12660u, 0x00353030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 996u, 0x08B26794u>(ctx, &aot_mem); return;
    }
    goto L_08B12664;
L_08B12664:
    ctx.gpr[18] = (ctx.gpr[27] | 27760u);
    // nop
    goto L_08B1266C;
L_08B1266C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12670u, 0x00363030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 998u, 0x08B267A4u>(ctx, &aot_mem); return;
    }
    goto L_08B12674;
L_08B12674:
    ctx.gpr[18] = (ctx.gpr[3] ^ 27760u);
    // nop
    goto L_08B1267C;
L_08B1267C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12680u, 0x00373030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1000u, 0x08B267B4u>(ctx, &aot_mem); return;
    }
    goto L_08B12684;
L_08B12684:
    ctx.gpr[18] = (ctx.gpr[11] ^ 27760u);
    // nop
    goto L_08B1268C;
L_08B1268C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12690u, 0x00383030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1001u, 0x08B267C4u>(ctx, &aot_mem); return;
    }
    goto L_08B12694;
L_08B12694:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B12698u, 0x00000030u, "special? not lowered yet"); return;
L_08B1269C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B126A0u, 0x00393030u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1002u, 0x08B267D4u>(ctx, &aot_mem); return;
    }
    goto L_08B126A4;
L_08B126A4:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B126A8u, 0x00000031u, "special? not lowered yet"); return;
L_08B126AC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B126B0u, 0x00303130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1003u, 0x08B267E4u>(ctx, &aot_mem); return;
    }
    goto L_08B126B4;
L_08B126B4:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B126B8u, 0x00000032u, "special? not lowered yet"); return;
L_08B126BC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B126C0u, 0x00313130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1004u, 0x08B267F4u>(ctx, &aot_mem); return;
    }
    goto L_08B126C4;
L_08B126C4:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B126C8u, 0x00000033u, "special? not lowered yet"); return;
L_08B126CC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B126D0u, 0x00303630u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1005u, 0x08B26804u>(ctx, &aot_mem); return;
    }
    goto L_08B126D4;
L_08B126D4:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B126D8u, 0x00000034u, "special? not lowered yet"); return;
L_08B126DC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B126E0u, 0x00313630u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1006u, 0x08B26814u>(ctx, &aot_mem); return;
    }
    goto L_08B126E4;
L_08B126E4:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B126E8u, 0x00000035u, "special? not lowered yet"); return;
L_08B126EC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B126F0u, 0x00333630u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1007u, 0x08B26824u>(ctx, &aot_mem); return;
    }
    goto L_08B126F4;
L_08B126F4:
    ctx.gpr[18] = (ctx.gpr[11] & 27760u);
    rt.unsupported(0x08B126F8u, 0x00000036u, "special? not lowered yet"); return;
L_08B126FC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12700u, 0x00323630u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1008u, 0x08B26834u>(ctx, &aot_mem); return;
    }
    goto L_08B12704;
L_08B12704:
    ctx.execute_vfpu_vcmp_ct<111u, 111u, 1u, 4u>();
    rt.unsupported(0x08B12708u, 0x0031305Fu, "special? not lowered yet"); return;
L_08B1270C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12710u, 0x00323130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1009u, 0x08B26844u>(ctx, &aot_mem); return;
    }
    goto L_08B12714;
L_08B12714:
    rt.unsupported(0x08B12714u, 0x706D6967u, "unknown not lowered yet"); return;
L_08B1271C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12720u, 0x00333130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1010u, 0x08B26854u>(ctx, &aot_mem); return;
    }
    goto L_08B12724;
L_08B12724:
    rt.unsupported(0x08B12724u, 0x72657661u, "unknown not lowered yet"); return;
L_08B1272C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12730u, 0x00343130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1011u, 0x08B26864u>(ctx, &aot_mem); return;
    }
    goto L_08B12734;
L_08B12734:
    rt.unsupported(0x08B12734u, 0x79626162u, "unknown not lowered yet"); return;
L_08B1273C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12740u, 0x00353130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1012u, 0x08B26874u>(ctx, &aot_mem); return;
    }
    goto L_08B12744;
L_08B12744:
    rt.unsupported(0x08B12744u, 0x68676965u, "unknown not lowered yet"); return;
L_08B1274C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12750u, 0x00363130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1013u, 0x08B26884u>(ctx, &aot_mem); return;
    }
    goto L_08B12754;
L_08B12754:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B12758u, 0x00003130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 223u, 0x08B2AD0Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1275C;
L_08B1275C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12760u, 0x00373130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1014u, 0x08B26894u>(ctx, &aot_mem); return;
    }
    goto L_08B12764;
L_08B12764:
    rt.unsupported(0x08B12764u, 0x6B63696Du, "unknown not lowered yet"); return;
L_08B1276C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12770u, 0x00383130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1015u, 0x08B268A4u>(ctx, &aot_mem); return;
    }
    goto L_08B12774;
L_08B12774:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    rt.unsupported(0x08B12778u, 0x00003272u, "special? not lowered yet"); return;
L_08B1277C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12780u, 0x00393130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1016u, 0x08B268B4u>(ctx, &aot_mem); return;
    }
    goto L_08B12784;
L_08B12784:
    rt.unsupported(0x08B12784u, 0x67756874u, "vfpu1 not lowered yet"); return;
L_08B1278C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12790u, 0x00303230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1018u, 0x08B268C4u>(ctx, &aot_mem); return;
    }
    goto L_08B12794;
L_08B12794:
    ctx.execute_vfpu_vminmax(104u, 105u, 116u, 1u, false);
    ctx.gpr[13] = (0u + 0u);
    goto L_08B1279C;
L_08B1279C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B127A0u, 0x00313230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1019u, 0x08B268D4u>(ctx, &aot_mem); return;
    }
    goto L_08B127A4;
L_08B127A4:
    rt.unsupported(0x08B127A4u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B127AC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B127B0u, 0x00323230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1020u, 0x08B268E4u>(ctx, &aot_mem); return;
    }
    goto L_08B127B4;
L_08B127B4:
    rt.unsupported(0x08B127B4u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B127BC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B127C0u, 0x00333230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1021u, 0x08B268F4u>(ctx, &aot_mem); return;
    }
    goto L_08B127C4;
L_08B127C4:
    rt.unsupported(0x08B127C4u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B127CC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B127D0u, 0x00343230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1022u, 0x08B26904u>(ctx, &aot_mem); return;
    }
    goto L_08B127D4;
L_08B127D4:
    rt.unsupported(0x08B127D4u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B127DC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B127E0u, 0x00353230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1023u, 0x08B26914u>(ctx, &aot_mem); return;
    }
    goto L_08B127E4;
L_08B127E4:
    rt.unsupported(0x08B127E4u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B127EC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B127F0u, 0x00363230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1024u, 0x08B26924u>(ctx, &aot_mem); return;
    }
    goto L_08B127F4;
L_08B127F4:
    rt.unsupported(0x08B127F4u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B127FC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12800u, 0x00373230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1025u, 0x08B26934u>(ctx, &aot_mem); return;
    }
    goto L_08B12804;
L_08B12804:
    rt.unsupported(0x08B12804u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B1280C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12810u, 0x00383230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1026u, 0x08B26944u>(ctx, &aot_mem); return;
    }
    goto L_08B12814;
L_08B12814:
    rt.unsupported(0x08B12814u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B1281C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12820u, 0x00393230u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1027u, 0x08B26954u>(ctx, &aot_mem); return;
    }
    goto L_08B12824;
L_08B12824:
    rt.unsupported(0x08B12824u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B1282C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12830u, 0x00303330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1029u, 0x08B26964u>(ctx, &aot_mem); return;
    }
    goto L_08B12834;
L_08B12834:
    ctx.gpr[13] = (ctx.gpr[3] - ctx.gpr[16]);
    goto L_08B12838;
L_08B12838:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1283Cu, 0x00313330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1030u, 0x08B26970u>(ctx, &aot_mem); return;
    }
    goto L_08B12840;
L_08B12840:
    rt.unsupported(0x08B12840u, 0x74617773u, "unknown not lowered yet"); return;
L_08B12848:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1284Cu, 0x00323330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1031u, 0x08B26980u>(ctx, &aot_mem); return;
    }
    goto L_08B12850;
L_08B12850:
    ctx.gpr[12] = (ctx.gpr[3] ^ ctx.gpr[9]);
    goto L_08B12854;
L_08B12854:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12858u, 0x00333330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1032u, 0x08B2698Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1285C;
L_08B1285C:
    rt.unsupported(0x08B1285Cu, 0x796D7261u, "unknown not lowered yet"); return;
L_08B12864:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12868u, 0x00343330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1033u, 0x08B2699Cu>(ctx, &aot_mem); return;
    }
    goto L_08B1286C;
L_08B1286C:
    ctx.execute_vfpu_vscl_ct<102u, 105u, 114u, 1u>();
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[14]) ? ctx.gpr[3] : ctx.gpr[14]);
    goto L_08B12874;
L_08B12874:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12878u, 0x00353330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1034u, 0x08B269ACu>(ctx, &aot_mem); return;
    }
    goto L_08B1287C;
L_08B1287C:
    rt.unsupported(0x08B1287Cu, 0x706D6970u, "unknown not lowered yet"); return;
L_08B12884:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12888u, 0x00363330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1036u, 0x08B269BCu>(ctx, &aot_mem); return;
    }
    goto L_08B1288C;
L_08B1288C:
    rt.unsupported(0x08B1288Cu, 0x736F7270u, "unknown not lowered yet"); return;
L_08B12898:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B1289Cu, 0x00373330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1037u, 0x08B269D0u>(ctx, &aot_mem); return;
    }
    goto L_08B128A0;
L_08B128A0:
    rt.unsupported(0x08B128A0u, 0x736E6F63u, "unknown not lowered yet"); return;
L_08B128A8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B128ACu, 0x00383330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1038u, 0x08B269E0u>(ctx, &aot_mem); return;
    }
    goto L_08B128B0;
L_08B128B0:
    rt.unsupported(0x08B128B0u, 0x636E6976u, "vfpu0 not lowered yet"); return;
L_08B128B8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B128BCu, 0x00393330u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1040u, 0x08B269F0u>(ctx, &aot_mem); return;
    }
    goto L_08B128C0;
L_08B128C0:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B128C4u, 0x00003130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 249u, 0x08B2AE90u>(ctx, &aot_mem); return;
    }
    goto L_08B128C8;
L_08B128C8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B128CCu, 0x00303430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1041u, 0x08B26A00u>(ctx, &aot_mem); return;
    }
    goto L_08B128D0;
L_08B128D0:
    rt.unsupported(0x08B128D0u, 0x757A616Bu, "unknown not lowered yet"); return;
L_08B128D8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B128DCu, 0x00343630u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1042u, 0x08B26A10u>(ctx, &aot_mem); return;
    }
    goto L_08B128E0;
L_08B128E0:
    rt.unsupported(0x08B128E0u, 0x73616B77u, "unknown not lowered yet"); return;
L_08B128E8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B128ECu, 0x00313430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1043u, 0x08B26A20u>(ctx, &aot_mem); return;
    }
    goto L_08B128F0;
L_08B128F0:
    if (static_cast<std::int32_t>(ctx.gpr[27]) > 0) {
    rt.unsupported(0x08B128F4u, 0x00003130u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 250u, 0x08B2AEA0u>(ctx, &aot_mem); return;
    }
    goto L_08B128F8;
L_08B128F8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B128FCu, 0x00323430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1044u, 0x08B26A30u>(ctx, &aot_mem); return;
    }
    goto L_08B12900;
L_08B12900:
    ctx.execute_vfpu_vhdp(70u, 97u, 116u, 1u);
    ctx.execute_vfpu_vcmp_ct<109u, 97u, 1u, 5u>();
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[17]);
    goto L_08B1290C;
L_08B1290C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12910u, 0x00333430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1046u, 0x08B26A44u>(ctx, &aot_mem); return;
    }
    goto L_08B12914;
L_08B12914:
    ctx.execute_vfpu_vscl_ct<98u, 105u, 107u, 1u>();
    rt.unsupported(0x08B12918u, 0x00003172u, "special? not lowered yet"); return;
L_08B1291C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12920u, 0x00343430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1047u, 0x08B26A54u>(ctx, &aot_mem); return;
    }
    goto L_08B12924;
L_08B12924:
    rt.unsupported(0x08B12924u, 0x676E6167u, "vfpu1 not lowered yet"); return;
L_08B1292C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12930u, 0x00353430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1049u, 0x08B26A64u>(ctx, &aot_mem); return;
    }
    goto L_08B12934;
L_08B12934:
    rt.unsupported(0x08B12934u, 0x775F7463u, "unknown not lowered yet"); return;
L_08B1293C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12940u, 0x00363430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1051u, 0x08B26A74u>(ctx, &aot_mem); return;
    }
    goto L_08B12944;
L_08B12944:
    ctx.execute_vfpu_vminmax(99u, 116u, 95u, 1u, false);
    ctx.gpr[13] = (ctx.gpr[1] + ctx.gpr[18]);
    goto L_08B1294C;
L_08B1294C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12950u, 0x00373430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1052u, 0x08B26A84u>(ctx, &aot_mem); return;
    }
    goto L_08B12954;
L_08B12954:
    rt.unsupported(0x08B12954u, 0x6E796177u, "vfpu3 not lowered yet"); return;
L_08B1295C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12960u, 0x00383430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1053u, 0x08B26A94u>(ctx, &aot_mem); return;
    }
    goto L_08B12964;
L_08B12964:
    ctx.execute_vfpu_vcmp_ct<97u, 117u, 1u, 0u>();
    rt.unsupported(0x08B12968u, 0x00006569u, "special? not lowered yet"); return;
L_08B1296C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12970u, 0x00393430u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1054u, 0x08B26AA4u>(ctx, &aot_mem); return;
    }
    goto L_08B12974;
L_08B12974:
    rt.unsupported(0x08B12974u, 0x616D6566u, "vfpu0 not lowered yet"); return;
L_08B12980:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12984u, 0x00303530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1055u, 0x08B26AB8u>(ctx, &aot_mem); return;
    }
    goto L_08B12988;
L_08B12988:
    ctx.execute_vfpu_vscl_ct<109u, 97u, 108u, 1u>();
    rt.unsupported(0x08B1298Cu, 0x00003330u, "special? not lowered yet"); return;
L_08B12990:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12994u, 0x00313530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1056u, 0x08B26AC8u>(ctx, &aot_mem); return;
    }
    goto L_08B12998;
L_08B12998:
    ctx.execute_vfpu_vminmax(115u, 99u, 117u, 1u, false);
    rt.unsupported(0x08B1299Cu, 0x6E616D5Fu, "vfpu3 not lowered yet"); return;
L_08B129A4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B129A8u, 0x00323530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1057u, 0x08B26ADCu>(ctx, &aot_mem); return;
    }
    goto L_08B129AC;
L_08B129AC:
    rt.unsupported(0x08B129ACu, 0x69786174u, "unknown not lowered yet"); return;
L_08B129B4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B129B8u, 0x00333530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1058u, 0x08B26AECu>(ctx, &aot_mem); return;
    }
    goto L_08B129BC;
L_08B129BC:
    rt.unsupported(0x08B129BCu, 0x696C6564u, "unknown not lowered yet"); return;
L_08B129C4:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B129C8u, 0x00343530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1059u, 0x08B26AFCu>(ctx, &aot_mem); return;
    }
    goto L_08B129CC;
L_08B129CC:
    ctx.execute_vfpu_vminmax(99u, 114u, 105u, 1u, false);
    ctx.execute_vfpu_vcmp_ct<110u, 97u, 1u, 9u>();
    rt.unsupported(0x08B129D4u, 0x00003230u, "special? not lowered yet"); return;
L_08B129D8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B129DCu, 0x00353530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1060u, 0x08B26B10u>(ctx, &aot_mem); return;
    }
    goto L_08B129E0;
L_08B129E0:
    ctx.execute_vfpu_vscl_ct<109u, 97u, 108u, 1u>();
    rt.unsupported(0x08B129E4u, 0x00003130u, "special? not lowered yet"); return;
L_08B129E8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B129ECu, 0x00363530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1061u, 0x08B26B20u>(ctx, &aot_mem); return;
    }
    goto L_08B129F0;
L_08B129F0:
    ctx.execute_vfpu_compare3(112u, 95u, 119u, 1u, 6u);
    ctx.gpr[6] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B129F8;
L_08B129F8:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B129FCu, 0x00373530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1062u, 0x08B26B30u>(ctx, &aot_mem); return;
    }
    goto L_08B12A00;
L_08B12A00:
    ctx.execute_vfpu_compare3(66u, 95u, 119u, 1u, 6u);
    ctx.gpr[6] = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    goto L_08B12A08;
L_08B12A08:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12A0Cu, 0x00383530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1063u, 0x08B26B40u>(ctx, &aot_mem); return;
    }
    goto L_08B12A10;
L_08B12A10:
    rt.unsupported(0x08B12A10u, 0x736F7270u, "unknown not lowered yet"); return;
L_08B12A1C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12A20u, 0x00393530u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1064u, 0x08B26B54u>(ctx, &aot_mem); return;
    }
    goto L_08B12A24;
L_08B12A24:
    rt.unsupported(0x08B12A24u, 0x74726170u, "unknown not lowered yet"); return;
L_08B12A30:
    rt.unsupported(0x08B12A30u, 0x79616C70u, "unknown not lowered yet"); return;
L_08B12A44:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10794 ? 1u : 0u);
    rt.unsupported(0x08B12A48u, 0x6877202Au, "unknown not lowered yet"); return;
L_08B12A80:
    ctx.execute_vfpu_vminmax(67u, 84u, 105u, 1u, false);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<77u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<111u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<101u, 1u>(vfpu_d); }
    rt.unsupported(0x08B12A88u, 0x6E496C65u, "vfpu3 not lowered yet"); return;
L_08B12A90:
    rt.unsupported(0x08B12A90u, 0x43534944u, "unknown not lowered yet"); return;
L_08B12A9C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B12AA0u, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[10] = (0x08B12AACu);
    rt.unsupported(0x08B12AA8u, 0x0000005Cu, "special? not lowered yet"); return;
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B12AACu) goto L_08B12AAC;
    return;
L_08B12AA8:
    rt.unsupported(0x08B12AA8u, 0x0000005Cu, "special? not lowered yet"); return;
L_08B12AAC:
    rt.unsupported(0x08B12AACu, 0x00627273u, "special? not lowered yet"); return;
L_08B12AC0:
    rt.unsupported(0x08B12AC0u, 0x20746F6Eu, "unknown not lowered yet"); return;
L_08B12AD4:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B12AD8u, 0x6E692072u, "vfpu3 not lowered yet"); return;
L_08B12AEC:
    rt.unsupported(0x08B12AECu, 0x63617473u, "vfpu0 not lowered yet"); return;
L_08B12AFC:
    rt.unsupported(0x08B12AFCu, 0x0000006Eu, "special? not lowered yet"); return;
L_08B12B00:
    ctx.execute_vfpu_vcmp_ct<97u, 108u, 1u, 3u>();
    // nop
    goto L_08B12B08;
L_08B12B08:
    rt.unsupported(0x08B12B08u, 0x74732043u, "unknown not lowered yet"); return;
L_08B12B1C:
    rt.unsupported(0x08B12B1Cu, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B12B3C:
    rt.unsupported(0x08B12B3Cu, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B12B64:
    ctx.execute_vfpu_vscl_ct<97u, 116u, 116u, 1u>();
    rt.unsupported(0x08B12B68u, 0x2074706Du, "unknown not lowered yet"); return;
L_08B12B98:
    rt.unsupported(0x08B12B98u, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B12BB8:
    if (ctx.gpr[1] == ctx.gpr[10]) {
    ctx.execute_vfpu_compare3(114u, 101u, 108u, 1u, 6u);
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 396u, 0x08B1D464u>(ctx, &aot_mem); return;
    }
    goto L_08B12BC0;
L_08B12BC0:
    rt.unsupported(0x08B12BC0u, 0x75436461u, "unknown not lowered yet"); return;
L_08B12BD4:
    rt.unsupported(0x08B12BD8u, 0x5079616Cu, "control flow in delay slot"); return;
L_08B12BDC:
    ctx.execute_vfpu_compare3(114u, 101u, 108u, 1u, 6u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_d); }
    if (ctx.gpr[27] == ctx.gpr[20]) {
    ctx.execute_vfpu_vscl_ct<99u, 101u, 110u, 1u>();
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 9u, 0x08B300F4u>(ctx, &aot_mem); return;
    }
    goto L_08B12BEC;
L_08B12BEC:
    rt.unsupported(0x08B12BECu, 0x6973754Du, "unknown not lowered yet"); return;
L_08B12BF4:
    if (ctx.gpr[25] == ctx.gpr[10]) {
    rt.unsupported(0x08B12BF8u, 0x43706F74u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 400u, 0x08B1D4A0u>(ctx, &aot_mem); return;
    }
    goto L_08B12BFC;
L_08B12BFC:
    rt.unsupported(0x08B12BFCu, 0x63537475u, "vfpu0 not lowered yet"); return;
L_08B12C0C:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B12C10u, 0x6E692072u, "vfpu3 not lowered yet"); return;
L_08B12C24:
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(8260));
    (void)(static_cast<std::int32_t>(ctx.gpr[1]) < 10596 ? 1u : 0u);
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    ctx.execute_vfpu_compare3(114u, 32u, 99u, 1u, 6u);
    (void)(25956u << 16u);
    ctx.gpr[24] = (ctx.gpr[11] + static_cast<std::uint32_t>(12320));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B12C40;
L_08B12C40:
    rt.unsupported(0x08B12C40u, 0x72685467u, "unknown not lowered yet"); return;
L_08B12C64:
    rt.unsupported(0x08B12C64u, 0x74696E69u, "unknown not lowered yet"); return;
L_08B12C7C:
    rt.unsupported(0x08B12C7Cu, 0x6973756Du, "unknown not lowered yet"); return;
L_08B12C90:
    rt.unsupported(0x08B12C90u, 0x6E756F73u, "vfpu3 not lowered yet"); return;
L_08B12CA4:
    rt.unsupported(0x08B12CA4u, 0x41525441u, "unknown not lowered yet"); return;
L_08B12CB8:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B12CBCu, 0x6E692072u, "vfpu3 not lowered yet"); return;
L_08B12CEC:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B12CF0u, 0x6E692072u, "vfpu3 not lowered yet"); return;
L_08B12D08:
    ctx.gpr[4] = (0u & ctx.gpr[10]);
    goto L_08B12D0C;
L_08B12D0C:
    rt.unsupported(0x08B12D0Cu, 0x20776F68u, "unknown not lowered yet"); return;
L_08B12D38:
    rt.unsupported(0x08B12D38u, 0x706F7473u, "unknown not lowered yet"); return;
L_08B12D54:
    rt.unsupported(0x08B12D54u, 0x6973756Du, "unknown not lowered yet"); return;
L_08B12D7C:
    rt.unsupported(0x08B12D7Cu, 0x20212121u, "unknown not lowered yet"); return;
L_08B12D94:
    rt.unsupported(0x08B12D94u, 0x72617473u, "unknown not lowered yet"); return;
L_08B12DB4:
    rt.unsupported(0x08B12DB4u, 0x20564157u, "unknown not lowered yet"); return;
L_08B12DEC:
    rt.unsupported(0x08B12DECu, 0x20564157u, "unknown not lowered yet"); return;
L_08B12E24:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B12E2Cu, 0x74696177u, "unknown not lowered yet"); return;
L_08B12E48:
    ctx.gpr[29] = (15677u << 16u);
    ctx.gpr[29] = (15677u << 16u);
    rt.unsupported(0x08B12E50u, 0x7268743Du, "unknown not lowered yet"); return;
L_08B12E68:
    rt.unsupported(0x08B12E68u, 0x43534944u, "unknown not lowered yet"); return;
L_08B12E74:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    rt.unsupported(0x08B12E78u, 0x44525355u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B12E7Cu, 0x412F5249u, "unknown not lowered yet"); return;
L_08B12E94:
    rt.unsupported(0x08B12E94u, 0x20746F6Eu, "unknown not lowered yet"); return;
L_08B12EB0:
    rt.unsupported(0x08B12EB0u, 0x69646152u, "unknown not lowered yet"); return;
L_08B12EE8:
    rt.unsupported(0x08B12EE8u, 0x69646172u, "unknown not lowered yet"); return;
L_08B12EFC:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[16] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 132u, 0x08B24418u>(ctx, &aot_mem); return;
    }
    goto L_08B12F04;
L_08B12F04:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[17] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 133u, 0x08B24420u>(ctx, &aot_mem); return;
    }
    goto L_08B12F0C;
L_08B12F0C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[18] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 134u, 0x08B24428u>(ctx, &aot_mem); return;
    }
    goto L_08B12F14;
L_08B12F14:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[19] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 135u, 0x08B24430u>(ctx, &aot_mem); return;
    }
    goto L_08B12F1C;
L_08B12F1C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[20] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 136u, 0x08B24438u>(ctx, &aot_mem); return;
    }
    goto L_08B12F24;
L_08B12F24:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[21] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 137u, 0x08B24440u>(ctx, &aot_mem); return;
    }
    goto L_08B12F2C;
L_08B12F2C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[22] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 138u, 0x08B24448u>(ctx, &aot_mem); return;
    }
    goto L_08B12F34;
L_08B12F34:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[23] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 139u, 0x08B24450u>(ctx, &aot_mem); return;
    }
    goto L_08B12F3C;
L_08B12F3C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[24] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 140u, 0x08B24458u>(ctx, &aot_mem); return;
    }
    goto L_08B12F44;
L_08B12F44:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    ctx.gpr[9] = (ctx.gpr[25] >> (ctx.gpr[1] & 31u));
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 141u, 0x08B24460u>(ctx, &aot_mem); return;
    }
    goto L_08B12F4C;
L_08B12F4C:
    if (static_cast<std::int32_t>(ctx.gpr[26]) > 0) {
    rt.unsupported(0x08B12F50u, 0x004E4F4Eu, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 142u, 0x08B24468u>(ctx, &aot_mem); return;
    }
    goto L_08B12F54;
L_08B12F54:
    rt.unsupported(0x08B12F54u, 0x002E2E2Eu, "special? not lowered yet"); return;
L_08B12F58:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B12F5Cu, 0x49545241u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 150u, 0x08B244A4u>(ctx, &aot_mem); return;
    }
    goto L_08B12F60;
L_08B12F60:
    if (ctx.gpr[1] != 0u) {
    rt.unsupported(0x08B12F64u, 0x4B434152u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 412u, 0x08B24C9Cu>(ctx, &aot_mem); return;
    }
    goto L_08B12F68;
L_08B12F68:
    { const bool signed_ok = ctx.execute_signed_add(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B12F68u, 0x00000A20u); return; } }
    goto L_08B12F6C;
L_08B12F6C:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B12F70u, 0x49545241u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 153u, 0x08B244B8u>(ctx, &aot_mem); return;
    }
    goto L_08B12F74;
L_08B12F74:
    rt.unsupported(0x08B12F74u, 0x4320474Eu, "unknown not lowered yet"); return;
L_08B12F84:
    if (0u == 0u) (void)(0u);
    goto L_08B12F88;
L_08B12F88:
    if (ctx.gpr[3] == ctx.gpr[14]) {
    rt.unsupported(0x08B12F8Cu, 0x6979616Cu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 227u, 0x08B2AD40u>(ctx, &aot_mem); return;
    }
    goto L_08B12F90;
L_08B12F90:
    rt.unsupported(0x08B12F90u, 0x7254676Eu, "unknown not lowered yet"); return;
L_08B12FA4:
    rt.unsupported(0x08B12FA4u, 0x74657920u, "unknown not lowered yet"); return;
L_08B12FC8:
    rt.unsupported(0x08B12FC8u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B12FDC:
    ctx.execute_vfpu_compare3(101u, 114u, 114u, 1u, 6u);
    rt.unsupported(0x08B12FE0u, 0x706F2072u, "unknown not lowered yet"); return;
L_08B12FF4:
    rt.unsupported(0x08B12FF4u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B13000:
    rt.unsupported(0x08B13000u, 0x6E6E6163u, "vfpu3 not lowered yet"); return;
L_08B13028:
    rt.unsupported(0x08B13028u, 0x20746F67u, "unknown not lowered yet"); return;
L_08B1303C:
    rt.unsupported(0x08B1303Cu, 0x6279616Du, "vfpu0 not lowered yet"); return;
L_08B1306C:
    rt.unsupported(0x08B1306Cu, 0x44414552u, "unsupported CFC1 control register"); return;
    if (ctx.gpr[18] == ctx.gpr[8]) {
    rt.unsupported(0x08B13074u, 0x4F485345u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 2u, 0x08B280F4u>(ctx, &aot_mem); return;
    }
    goto L_08B13078;
L_08B13078:
    rt.unsupported(0x08B13078u, 0x203A444Cu, "unknown not lowered yet"); return;
L_08B13080:
    if (ctx.gpr[25] != 0u) {
    rt.unsupported(0x08B13084u, 0x49544941u, "cop2/vfpu not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 473u, 0x08B1D92Cu>(ctx, &aot_mem); return;
    }
    goto L_08B13088;
L_08B13088:
    rt.unsupported(0x08B13088u, 0x203A474Eu, "unknown not lowered yet"); return;
L_08B13094:
    rt.unsupported(0x08B13094u, 0x43202A2Au, "unknown not lowered yet"); return;
L_08B130AC:
    ctx.execute_vfpu_compare3(100u, 101u, 99u, 1u, 6u);
    ctx.execute_vfpu_vscl_ct<100u, 101u, 32u, 1u>();
    (void)(ctx.gpr[1] & 29298u);
    rt.unsupported(0x08B130B8u, 0x20782578u, "unknown not lowered yet"); return;
L_08B130C4:
    rt.unsupported(0x08B130C4u, 0x6973756Du, "unknown not lowered yet"); return;
L_08B1310C:
    rt.unsupported(0x08B1310Cu, 0x4953554Du, "cop2/vfpu not lowered yet"); return;
L_08B13120:
    rt.unsupported(0x08B13120u, 0x20692528u, "unknown not lowered yet"); return;
L_08B13134:
    rt.unsupported(0x08B13134u, 0x73706F6Fu, "unknown not lowered yet"); return;
L_08B13154:
    rt.unsupported(0x08B13154u, 0x6E797361u, "vfpu3 not lowered yet"); return;
L_08B13168:
    rt.unsupported(0x08B13168u, 0x6973756Du, "unknown not lowered yet"); return;
L_08B13174:
    rt.unsupported(0x08B13174u, 0x6973756Du, "unknown not lowered yet"); return;
L_08B1318C:
    rt.unsupported(0x08B13190u, 0x54204D4Fu, "control flow in delay slot"); return;
L_08B13194:
    rt.unsupported(0x08B13194u, 0x4B434152u, "cop2/vfpu not lowered yet"); return;
L_08B131A4:
    if (ctx.gpr[2] == ctx.gpr[15]) {
    rt.unsupported(0x08B131A8u, 0x20444550u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0201_entry, 201u, 6u, 0x08B282F4u>(ctx, &aot_mem); return;
    }
    goto L_08B131AC;
L_08B131AC:
    rt.unsupported(0x08B131B0u, 0x54204D4Fu, "control flow in delay slot"); return;
L_08B131B4:
    rt.unsupported(0x08B131B4u, 0x4B434152u, "cop2/vfpu not lowered yet"); return;
L_08B131C0:
    rt.unsupported(0x08B131C0u, 0x74617473u, "unknown not lowered yet"); return;
L_08B131EC:
    rt.unsupported(0x08B131ECu, 0x72617473u, "unknown not lowered yet"); return;
L_08B13210:
    rt.unsupported(0x08B13210u, 0x74617473u, "unknown not lowered yet"); return;
L_08B13244:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08B13248u, 0x72696620u, "unknown not lowered yet"); return;
L_08B13260:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<114u, 1u>(vfpu_d); }
    rt.unsupported(0x08B13264u, 0x63657320u, "vfpu0 not lowered yet"); return;
L_08B13274:
    rt.unsupported(0x08B13274u, 0x74617473u, "unknown not lowered yet"); return;
L_08B13298:
    rt.unsupported(0x08B13298u, 0x7469736Fu, "unknown not lowered yet"); return;
L_08B132A4:
    rt.unsupported(0x08B132A4u, 0x616C5067u, "vfpu0 not lowered yet"); return;
L_08B132BC:
    rt.unsupported(0x08B132BCu, 0x74617473u, "unknown not lowered yet"); return;
L_08B132E4:
    rt.unsupported(0x08B132E4u, 0x74617473u, "unknown not lowered yet"); return;
L_08B133C8:
    rt.unsupported(0x08B133CCu, 0x53492045u, "control flow in delay slot"); return;
L_08B133D0:
    rt.unsupported(0x08B133D0u, 0x204F4E20u, "unknown not lowered yet"); return;
L_08B133EC:
    if (ctx.gpr[18] == ctx.gpr[15]) {
    ctx.execute_vfpu_vhdp(83u, 58u, 37u, 1u);
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1072u, 0x08B270FCu>(ctx, &aot_mem); return;
    }
    goto L_08B133F4;
L_08B133F4:
    rt.unsupported(0x08B133F4u, 0x20662520u, "unknown not lowered yet"); return;
L_08B1340C:
    ctx.execute_vfpu_compare3(68u, 67u, 111u, 1u, 6u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 181u, 0x08A591C8u>(ctx, &aot_mem); return;
L_08B134A0:
    ctx.gpr[17] = (ctx.gpr[1] | 11813u);
    (void)(~(0u | 0u));
    goto L_08B134A8;
L_08B134A8:
    ctx.execute_vfpu_vscl_ct<105u, 110u, 100u, 1u>();
    rt.unsupported(0x08B134ACu, 0x00000078u, "special? not lowered yet"); return;
L_08B134B0:
    rt.unsupported(0x08B134B0u, 0x706F6F6Cu, "unknown not lowered yet"); return;
L_08B134C4:
    rt.unsupported(0x08B134C4u, 0x706F6F6Cu, "unknown not lowered yet"); return;
L_08B134D8:
    rt.unsupported(0x08B134D8u, 0x69727473u, "unknown not lowered yet"); return;
L_08B134F0:
    rt.unsupported(0x08B134F0u, 0x705F5F60u, "unknown not lowered yet"); return;
L_08B1351C:
    rt.unsupported(0x08B1351Cu, 0x726F6660u, "unknown not lowered yet"); return;
L_08B13544:
    rt.unsupported(0x08B13544u, 0x726F6660u, "unknown not lowered yet"); return;
L_08B13564:
    rt.unsupported(0x08B13564u, 0x726F6660u, "unknown not lowered yet"); return;
L_08B13580:
    rt.unsupported(0x08B13580u, 0x7478656Eu, "unknown not lowered yet"); return;
L_08B13638:
    rt.unsupported(0x08B13638u, 0x20756F79u, "unknown not lowered yet"); return;
L_08B13658:
    rt.unsupported(0x08B13658u, 0x69797254u, "unknown not lowered yet"); return;
L_08B13680:
    ctx.execute_vfpu_vcmp_ct<105u, 108u, 1u, 11u>();
    rt.unsupported(0x08B13684u, 0x62206465u, "vfpu0 not lowered yet"); return;
L_08B136A0:
    rt.unsupported(0x08B136A0u, 0x79616C50u, "unknown not lowered yet"); return;
L_08B13808:
    rt.unsupported(0x08B13808u, 0x41454C43u, "unknown not lowered yet"); return;
L_08B1381C:
    rt.unsupported(0x08B1381Cu, 0x445F4E4Fu, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B13820u, 0x47414D41u, "cop1? not lowered yet"); return;
L_08B13840:
    rt.unsupported(0x08B13840u, 0x41454C43u, "unknown not lowered yet"); return;
L_08B13854:
    rt.unsupported(0x08B13854u, 0x41445F4Eu, "unknown not lowered yet"); return;
L_08B13864:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<108u, 1u>(vfpu_d); }
    rt.unsupported(0x08B13868u, 0x6E73656Fu, "vfpu3 not lowered yet"); return;
L_08B13BE0:
    ctx.execute_vfpu_vscl_ct<67u, 97u, 109u, 1u>();
    rt.unsupported(0x08B13BE4u, 0x61466172u, "vfpu0 not lowered yet"); return;
L_08B13BF0:
    ctx.execute_vfpu_vscl_ct<67u, 97u, 109u, 1u>();
    rt.unsupported(0x08B13BF4u, 0x61466172u, "vfpu0 not lowered yet"); return;
L_08B13C00:
    rt.unsupported(0x08B13C00u, 0x61437349u, "vfpu0 not lowered yet"); return;
L_08B13C10:
    rt.unsupported(0x08B13C10u, 0x46746553u, "cop1? not lowered yet"); return;
L_08B13C20:
    rt.unsupported(0x08B13C20u, 0x74736552u, "unknown not lowered yet"); return;
L_08B13C30:
    rt.unsupported(0x08B13C30u, 0x46544553u, "cop1? not lowered yet"); return;
L_08B13C40:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    rt.unsupported(0x08B13C44u, 0x4345524Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 578u, 0x08B2518Cu>(ctx, &aot_mem); return;
    }
    goto L_08B13C48;
L_08B13C48:
    if (ctx.gpr[18] == ctx.gpr[5]) {
    rt.unsupported(0x08B13C4Cu, 0x00000041u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 1073u, 0x08B27150u>(ctx, &aot_mem); return;
    }
    goto L_08B13C50;
L_08B13C50:
    rt.unsupported(0x08B13C54u, 0x536D6165u, "control flow in delay slot"); return;
L_08B13C58:
    ctx.execute_vfpu_vscl_ct<99u, 111u, 114u, 1u>();
    // nop
    goto L_08B13C60;
L_08B13C60:
    rt.unsupported(0x08B13C64u, 0x536D6165u, "control flow in delay slot"); return;
L_08B13C68:
    ctx.execute_vfpu_vscl_ct<99u, 111u, 114u, 1u>();
    // nop
    goto L_08B13C70;
L_08B13C70:
    rt.unsupported(0x08B13C70u, 0x76457349u, "unknown not lowered yet"); return;
L_08B13C7C:
    rt.unsupported(0x08B13C7Cu, 0x74706D45u, "unknown not lowered yet"); return;
L_08B13C84:
    rt.unsupported(0x08B13C84u, 0x45746547u, "cop1? not lowered yet"); return;
L_08B13C90:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<101u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<110u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<83u, 1u>(vfpu_d); }
    rt.unsupported(0x08B13C94u, 0x6E657645u, "vfpu3 not lowered yet"); return;
L_08B13C9C:
    rt.unsupported(0x08B13C9Cu, 0x61656C43u, "vfpu0 not lowered yet"); return;
L_08B13CAC:
    rt.unsupported(0x08B13CACu, 0x6B73614Du, "unknown not lowered yet"); return;
L_08B13CBC:
    rt.unsupported(0x08B13CC0u, 0x546D6165u, "control flow in delay slot"); return;
L_08B13CC4:
    rt.unsupported(0x08B13CC4u, 0x72656D69u, "unknown not lowered yet"); return;
L_08B13CCC:
    rt.unsupported(0x08B13CD0u, 0x546D6165u, "control flow in delay slot"); return;
L_08B13CD4:
    rt.unsupported(0x08B13CD4u, 0x72656D69u, "unknown not lowered yet"); return;
L_08B13CDC:
    rt.unsupported(0x08B13CE0u, 0x546D6165u, "control flow in delay slot"); return;
L_08B13CE4:
    rt.unsupported(0x08B13CE4u, 0x72656D69u, "unknown not lowered yet"); return;
L_08B13CF4:
    rt.unsupported(0x08B13CF4u, 0x70537349u, "unknown not lowered yet"); return;
L_08B13D08:
    ctx.execute_vfpu_vscl_ct<68u, 111u, 77u, 1u>();
    rt.unsupported(0x08B13D0Cu, 0x79726F6Du, "unknown not lowered yet"); return;
L_08B13D18:
    rt.unsupported(0x08B13D18u, 0x706D7544u, "unknown not lowered yet"); return;
L_08B13D30:
    rt.unsupported(0x08B13D30u, 0x61656C63u, "vfpu0 not lowered yet"); return;
L_08B13DC0:
    ctx.execute_vfpu_vscl_ct<102u, 97u, 100u, 1u>();
    ctx.execute_vfpu_vcmp_ct<99u, 111u, 1u, 0u>();
    rt.unsupported(0x08B13DC8u, 0x2072756Fu, "unknown not lowered yet"); return;
L_08B13DE0:
    ctx.gpr[13] = (ctx.gpr[9] < static_cast<std::uint32_t>(11565) ? 1u : 0u);
    rt.unsupported(0x08B13DE4u, 0x616F4C20u, "vfpu0 not lowered yet"); return;
L_08B13E1C:
    rt.unsupported(0x08B13E1Cu, 0x61727241u, "vfpu0 not lowered yet"); return;
L_08B13E30:
    rt.unsupported(0x08B13E30u, 0x68746150u, "unknown not lowered yet"); return;
L_08B13E40:
    rt.unsupported(0x08B13E40u, 0x69617254u, "unknown not lowered yet"); return;
L_08B13E48:
    rt.unsupported(0x08B13E48u, 0x69617254u, "unknown not lowered yet"); return;
L_08B13E50:
    rt.unsupported(0x08B13E50u, 0x61746164u, "vfpu0 not lowered yet"); return;
L_08B13E58:
    rt.unsupported(0x08B13E58u, 0x00000072u, "special? not lowered yet"); return;
L_08B13E5C:
    // nop
    rt.unsupported(0x08B13E64u, 0x088F0160u, "control flow in delay slot"); return;
}

void recomp_unit_0195(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0195_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_195(Runtime &runtime) {
    runtime.register_generated_unit(195u, 0x08B10000u, 16384u, &recomp_unit_0195, &recomp_unit_0195_entry);
    runtime.register_function(0x08B10000u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10010u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1003Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1004Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10058u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10068u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1008Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B100B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B100C8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B100F8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10120u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10144u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1014Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10154u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1017Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10184u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1019Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101C8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B101E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10208u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10214u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10B68u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10CB8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B10FD8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1102Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1103Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11050u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11058u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11070u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1108Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11098u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B110B0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B110B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B110C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B110D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B110E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B110F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1111Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11124u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1113Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11154u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1118Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B111ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B111DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11200u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1120Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1122Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11248u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11254u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11290u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B112B0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B112D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B112D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B112F8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1131Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1133Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1136Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11380u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11388u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1139Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B113F8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1140Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1141Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11424u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11450u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11478u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B114A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B114B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B114E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B114ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11504u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11530u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11538u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11580u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115F8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B115FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11604u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1160Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1161Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11630u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11638u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11650u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11664u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11670u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11678u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11680u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11690u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1169Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B116ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11708u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11738u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11740u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11748u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11760u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11768u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11770u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11778u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11794u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B117C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B117F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11830u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11858u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11890u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B118F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11928u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11944u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11964u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11968u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11990u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B119C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B119E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A0Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A4Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11A78u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11AA0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11AC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11AE0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11AE4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B2Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B6Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11B78u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11BA0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11BC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11BE8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11BF0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C04u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C18u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C28u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C3Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C44u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C48u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C4Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C58u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C60u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C88u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11C94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CC4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CCCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CE8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11CF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D0Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D18u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D38u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D54u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D64u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D6Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D74u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D84u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11D8Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11DA8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11DB8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11DD0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11DE0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11DFCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E0Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E1Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E2Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E3Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E4Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E5Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11E9Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11EA0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11EACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11EC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11EE8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11EF0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F04u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F2Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F4Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F68u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F8Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11F94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11FA8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11FC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11FE0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B11FF8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12000u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B120A8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B120CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B120E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1210Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12128u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12150u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12160u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12184u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12198u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B121A8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B121BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B121C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B121D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B121E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12228u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12234u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1223Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12244u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12248u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12264u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B122B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B122C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B122F8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12314u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12320u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12328u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12338u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12388u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B123ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B123C8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B123E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125C8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B125E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12608u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1260Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12614u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1261Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12624u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1262Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12634u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1263Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12644u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1264Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12654u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1265Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12664u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1266Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12674u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1267Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12684u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1268Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12694u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1269Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B126FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12704u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1270Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12714u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1271Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12724u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1272Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12734u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1273Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12744u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1274Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12754u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1275Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12764u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1276Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12774u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1277Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12784u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1278Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12794u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1279Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127D4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127DCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B127FCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12804u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1280Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12814u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1281Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12824u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1282Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12834u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12838u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12840u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12848u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12850u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12854u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1285Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12864u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1286Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12874u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1287Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12884u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1288Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12898u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128A8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128B0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128B8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128C8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B128F8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12900u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1290Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12914u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1291Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12924u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1292Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12934u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1293Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12944u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1294Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12954u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1295Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12964u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1296Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12974u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12980u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12988u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12990u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12998u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129CCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129E0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129E8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B129F8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A10u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A1Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A44u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A80u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A90u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12A9Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12AA8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12AACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12AC0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12AD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12AECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12AFCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B1Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B3Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B64u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12B98u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BB8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BC0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BDCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BF4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12BFCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C0Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C64u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12C90u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12CA4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12CB8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12CECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D0Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D38u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D54u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12D94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12DB4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12DECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E48u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E68u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E74u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12E94u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12EB0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12EE8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12EFCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F04u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F0Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F14u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F1Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F24u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F2Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F34u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F3Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F44u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F4Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F54u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F58u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F60u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F68u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F6Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F74u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F84u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F88u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12F90u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12FA4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12FC8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12FDCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B12FF4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13000u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13028u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1303Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1306Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13078u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13080u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13088u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13094u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B130ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B130C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1310Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13120u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13134u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13154u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13168u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13174u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1318Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13194u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B131A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B131ACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B131B4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B131C0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B131ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13210u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13244u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13260u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13274u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13298u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B132A4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B132BCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B132E4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B133C8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B133D0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B133ECu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B133F4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1340Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B134A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B134A8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B134B0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B134C4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B134D8u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B134F0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1351Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13544u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13564u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13580u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13638u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13658u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13680u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B136A0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13808u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B1381Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13840u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13854u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13864u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BE0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13BF0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C00u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C10u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C20u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C48u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C50u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C58u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C60u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C68u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C70u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C7Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C84u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C90u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13C9Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CACu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CBCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CC4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CCCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CD4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CDCu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CE4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13CF4u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D08u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D18u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13D30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13DC0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13DE0u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E1Cu, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E30u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E40u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E48u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E50u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E58u, &recomp_unit_0195, "recomp_unit_0195");
    runtime.register_function(0x08B13E5Cu, &recomp_unit_0195, "recomp_unit_0195");
}
} // namespace psprecomp
