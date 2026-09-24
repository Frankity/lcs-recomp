#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0172[4095] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 14, 0, 15, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 23, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 39, 0, 40, 0, 0, 41, 0,
    42, 0, 0, 43, 0, 0, 44, 0, 0, 45, 46, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56,
    0, 0, 57, 0, 0, 58, 0, 0, 59, 60, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 74, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121,
    0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0,
    0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0,
    148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156,
    0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 176, 0, 177, 0, 0, 0, 0, 178, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196,
    0, 197, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 205, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0,
    0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 226,
    0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 231,
    0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 245,
    0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0,
    0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0,
    0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0,
    268, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 281,
    0, 282, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 288, 289, 0, 0, 290, 0,
    0, 0, 291, 0, 0, 0, 292, 293, 0, 0, 0, 294, 295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0,
    0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0,
    0, 324, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0,
    0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0,
    335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346,
    0, 0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 354,
    355, 0, 0, 356, 0, 357, 0, 358, 0, 359, 360, 0, 361, 0, 362, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0,
    0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0,
    0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0,
    0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380,
    0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 388, 389, 0, 0, 0, 0,
    390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0,
    394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0,
    0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 414, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0,
    0, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 426, 0, 0, 427, 0, 428, 0, 0,
    0, 0, 429, 0, 0, 0, 430, 0, 431, 432, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 0, 0, 0,
    0, 438, 0, 0, 439, 0, 440, 0, 0, 0, 441, 0, 442, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0,
    448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0,
    456, 0, 0, 457, 0, 0, 458, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 462, 463, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0,
    0, 466, 0, 0, 467, 0, 468, 0, 469, 0, 0, 470, 0, 471, 0, 0, 0, 472, 0, 473, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0,
    0, 0, 477, 0, 0, 478, 0, 479, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 490, 0, 491,
    0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0,
    502, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0,
    511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0,
    0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 530, 0, 0,
    0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 535, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0,
    0, 538, 0, 0, 539, 0, 540, 0, 0, 541, 0, 542, 0, 543, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0,
    549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 553, 0, 0,
    0, 554, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 558, 559, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 562, 0, 0, 563, 0, 0,
    564, 0, 0, 565, 566, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 570, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573,
    0, 0, 574, 575, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 580, 0, 581, 0, 582, 0,
    0, 583, 0, 0, 584, 0, 585, 586, 0, 587, 0, 0, 588, 0, 0, 589, 0, 590, 591, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 598, 0,
    0, 599, 0, 600, 601, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0,
    0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 621, 622, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 624,
    0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0,
    0, 0, 630, 0, 0, 0, 631, 0, 0, 632, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 640, 0, 0, 641, 0, 642, 0, 0, 643, 0, 644, 0, 0, 645, 0,
    646, 0, 647, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0, 651, 652, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0,
    0, 0, 0, 0, 654, 0, 0, 655, 0, 656, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 661, 0, 0, 0, 0,
    662, 0, 663, 0, 664, 0, 0, 665, 0, 666, 0, 667, 0, 0, 668, 669, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0,
    0, 672, 0, 673, 0, 0, 674, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 678, 0, 679, 0, 0, 680, 0, 681, 0, 0, 682,
    0, 683, 0, 684, 0, 0, 0, 685, 0, 0, 686, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 690,
};
void recomp_unit_0172_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AB4004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0172[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AB4004;
    case 2u: goto L_08AB4014;
    case 3u: goto L_08AB4094;
    case 4u: goto L_08AB40A0;
    case 5u: goto L_08AB40A8;
    case 6u: goto L_08AB40B4;
    case 7u: goto L_08AB40C0;
    case 8u: goto L_08AB40D8;
    case 9u: goto L_08AB4118;
    case 10u: goto L_08AB4124;
    case 11u: goto L_08AB4154;
    case 12u: goto L_08AB4160;
    case 13u: goto L_08AB418C;
    case 14u: goto L_08AB41A0;
    case 15u: goto L_08AB41A8;
    case 16u: goto L_08AB41AC;
    case 17u: goto L_08AB41D8;
    case 18u: goto L_08AB41E4;
    case 19u: goto L_08AB41FC;
    case 20u: goto L_08AB4220;
    case 21u: goto L_08AB4228;
    case 22u: goto L_08AB4238;
    case 23u: goto L_08AB4240;
    case 24u: goto L_08AB4244;
    case 25u: goto L_08AB4288;
    case 26u: goto L_08AB429C;
    case 27u: goto L_08AB42BC;
    case 28u: goto L_08AB4308;
    case 29u: goto L_08AB4334;
    case 30u: goto L_08AB4378;
    case 31u: goto L_08AB43A8;
    case 32u: goto L_08AB43E8;
    case 33u: goto L_08AB4448;
    case 34u: goto L_08AB4458;
    case 35u: goto L_08AB4464;
    case 36u: goto L_08AB45D0;
    case 37u: goto L_08AB4740;
    case 38u: goto L_08AB4764;
    case 39u: goto L_08AB4768;
    case 40u: goto L_08AB4770;
    case 41u: goto L_08AB477C;
    case 42u: goto L_08AB4784;
    case 43u: goto L_08AB4790;
    case 44u: goto L_08AB479C;
    case 45u: goto L_08AB47A8;
    case 46u: goto L_08AB47AC;
    case 47u: goto L_08AB47B0;
    case 48u: goto L_08AB47B8;
    case 49u: goto L_08AB47DC;
    case 50u: goto L_08AB4808;
    case 51u: goto L_08AB4810;
    case 52u: goto L_08AB4818;
    case 53u: goto L_08AB4870;
    case 54u: goto L_08AB4884;
    case 55u: goto L_08AB48F0;
    case 56u: goto L_08AB4900;
    case 57u: goto L_08AB490C;
    case 58u: goto L_08AB4918;
    case 59u: goto L_08AB4924;
    case 60u: goto L_08AB4928;
    case 61u: goto L_08AB492C;
    case 62u: goto L_08AB4934;
    case 63u: goto L_08AB4968;
    case 64u: goto L_08AB49D4;
    case 65u: goto L_08AB49DC;
    case 66u: goto L_08AB49F4;
    case 67u: goto L_08AB4A04;
    case 68u: goto L_08AB4A44;
    case 69u: goto L_08AB4A70;
    case 70u: goto L_08AB4B18;
    case 71u: goto L_08AB4B20;
    case 72u: goto L_08AB4B2C;
    case 73u: goto L_08AB4B84;
    case 74u: goto L_08AB4B98;
    case 75u: goto L_08AB4B9C;
    case 76u: goto L_08AB4E44;
    case 77u: goto L_08AB4E60;
    case 78u: goto L_08AB4E88;
    case 79u: goto L_08AB4EBC;
    case 80u: goto L_08AB4F60;
    case 81u: goto L_08AB4F78;
    case 82u: goto L_08AB4F90;
    case 83u: goto L_08AB4F9C;
    case 84u: goto L_08AB4FC4;
    case 85u: goto L_08AB4FD0;
    case 86u: goto L_08AB4FEC;
    case 87u: goto L_08AB4FF8;
    case 88u: goto L_08AB5014;
    case 89u: goto L_08AB5020;
    case 90u: goto L_08AB503C;
    case 91u: goto L_08AB5048;
    case 92u: goto L_08AB5064;
    case 93u: goto L_08AB5070;
    case 94u: goto L_08AB508C;
    case 95u: goto L_08AB5098;
    case 96u: goto L_08AB50A4;
    case 97u: goto L_08AB50AC;
    case 98u: goto L_08AB50C0;
    case 99u: goto L_08AB50D0;
    case 100u: goto L_08AB50E8;
    case 101u: goto L_08AB5108;
    case 102u: goto L_08AB511C;
    case 103u: goto L_08AB5130;
    case 104u: goto L_08AB5160;
    case 105u: goto L_08AB5170;
    case 106u: goto L_08AB5184;
    case 107u: goto L_08AB5198;
    case 108u: goto L_08AB51AC;
    case 109u: goto L_08AB51BC;
    case 110u: goto L_08AB51DC;
    case 111u: goto L_08AB51FC;
    case 112u: goto L_08AB5210;
    case 113u: goto L_08AB5224;
    case 114u: goto L_08AB5254;
    case 115u: goto L_08AB5264;
    case 116u: goto L_08AB5278;
    case 117u: goto L_08AB5288;
    case 118u: goto L_08AB52A8;
    case 119u: goto L_08AB52DC;
    case 120u: goto L_08AB52EC;
    case 121u: goto L_08AB5300;
    case 122u: goto L_08AB5310;
    case 123u: goto L_08AB5318;
    case 124u: goto L_08AB5320;
    case 125u: goto L_08AB5328;
    case 126u: goto L_08AB5330;
    case 127u: goto L_08AB533C;
    case 128u: goto L_08AB5344;
    case 129u: goto L_08AB5350;
    case 130u: goto L_08AB5358;
    case 131u: goto L_08AB5368;
    case 132u: goto L_08AB5378;
    case 133u: goto L_08AB5388;
    case 134u: goto L_08AB53A0;
    case 135u: goto L_08AB53B0;
    case 136u: goto L_08AB53D4;
    case 137u: goto L_08AB5400;
    case 138u: goto L_08AB540C;
    case 139u: goto L_08AB5418;
    case 140u: goto L_08AB5424;
    case 141u: goto L_08AB5430;
    case 142u: goto L_08AB543C;
    case 143u: goto L_08AB5448;
    case 144u: goto L_08AB5454;
    case 145u: goto L_08AB5460;
    case 146u: goto L_08AB546C;
    case 147u: goto L_08AB5478;
    case 148u: goto L_08AB5484;
    case 149u: goto L_08AB5498;
    case 150u: goto L_08AB54BC;
    case 151u: goto L_08AB54C8;
    case 152u: goto L_08AB54D0;
    case 153u: goto L_08AB54DC;
    case 154u: goto L_08AB54E8;
    case 155u: goto L_08AB54F4;
    case 156u: goto L_08AB5500;
    case 157u: goto L_08AB550C;
    case 158u: goto L_08AB5518;
    case 159u: goto L_08AB5524;
    case 160u: goto L_08AB5530;
    case 161u: goto L_08AB553C;
    case 162u: goto L_08AB5550;
    case 163u: goto L_08AB5560;
    case 164u: goto L_08AB558C;
    case 165u: goto L_08AB559C;
    case 166u: goto L_08AB55B0;
    case 167u: goto L_08AB55DC;
    case 168u: goto L_08AB55F4;
    case 169u: goto L_08AB5618;
    case 170u: goto L_08AB5628;
    case 171u: goto L_08AB5638;
    case 172u: goto L_08AB5640;
    case 173u: goto L_08AB5648;
    case 174u: goto L_08AB5650;
    case 175u: goto L_08AB5670;
    case 176u: goto L_08AB5688;
    case 177u: goto L_08AB5690;
    case 178u: goto L_08AB56A4;
    case 179u: goto L_08AB56A8;
    case 180u: goto L_08AB56C4;
    case 181u: goto L_08AB56D8;
    case 182u: goto L_08AB56F8;
    case 183u: goto L_08AB572C;
    case 184u: goto L_08AB5734;
    case 185u: goto L_08AB5744;
    case 186u: goto L_08AB574C;
    case 187u: goto L_08AB5788;
    case 188u: goto L_08AB5794;
    case 189u: goto L_08AB57A0;
    case 190u: goto L_08AB57C4;
    case 191u: goto L_08AB57D4;
    case 192u: goto L_08AB5828;
    case 193u: goto L_08AB5844;
    case 194u: goto L_08AB586C;
    case 195u: goto L_08AB5878;
    case 196u: goto L_08AB5880;
    case 197u: goto L_08AB5888;
    case 198u: goto L_08AB588C;
    case 199u: goto L_08AB58B8;
    case 200u: goto L_08AB58FC;
    case 201u: goto L_08AB590C;
    case 202u: goto L_08AB5924;
    case 203u: goto L_08AB5938;
    case 204u: goto L_08AB5944;
    case 205u: goto L_08AB594C;
    case 206u: goto L_08AB5950;
    case 207u: goto L_08AB597C;
    case 208u: goto L_08AB59B0;
    case 209u: goto L_08AB59C0;
    case 210u: goto L_08AB59D4;
    case 211u: goto L_08AB59FC;
    case 212u: goto L_08AB5A08;
    case 213u: goto L_08AB5A10;
    case 214u: goto L_08AB5A18;
    case 215u: goto L_08AB5A20;
    case 216u: goto L_08AB5A28;
    case 217u: goto L_08AB5A30;
    case 218u: goto L_08AB5A38;
    case 219u: goto L_08AB5A40;
    case 220u: goto L_08AB5A44;
    case 221u: goto L_08AB5A70;
    case 222u: goto L_08AB5AB4;
    case 223u: goto L_08AB5AC4;
    case 224u: goto L_08AB5ADC;
    case 225u: goto L_08AB5AF0;
    case 226u: goto L_08AB5B00;
    case 227u: goto L_08AB5B08;
    case 228u: goto L_08AB5B34;
    case 229u: goto L_08AB5B68;
    case 230u: goto L_08AB5B78;
    case 231u: goto L_08AB5B80;
    case 232u: goto L_08AB5B94;
    case 233u: goto L_08AB5BB8;
    case 234u: goto L_08AB5BC0;
    case 235u: goto L_08AB5BD0;
    case 236u: goto L_08AB5BE4;
    case 237u: goto L_08AB5BF8;
    case 238u: goto L_08AB5C10;
    case 239u: goto L_08AB5C2C;
    case 240u: goto L_08AB5C34;
    case 241u: goto L_08AB5C48;
    case 242u: goto L_08AB5C50;
    case 243u: goto L_08AB5C64;
    case 244u: goto L_08AB5C6C;
    case 245u: goto L_08AB5C80;
    case 246u: goto L_08AB5C88;
    case 247u: goto L_08AB5C9C;
    case 248u: goto L_08AB5CA4;
    case 249u: goto L_08AB5CC8;
    case 250u: goto L_08AB5CD0;
    case 251u: goto L_08AB5CEC;
    case 252u: goto L_08AB5CF4;
    case 253u: goto L_08AB5D08;
    case 254u: goto L_08AB5D10;
    case 255u: goto L_08AB5D2C;
    case 256u: goto L_08AB5D34;
    case 257u: goto L_08AB5D50;
    case 258u: goto L_08AB5D58;
    case 259u: goto L_08AB5D74;
    case 260u: goto L_08AB5D7C;
    case 261u: goto L_08AB5D98;
    case 262u: goto L_08AB5DA0;
    case 263u: goto L_08AB5DC4;
    case 264u: goto L_08AB5DCC;
    case 265u: goto L_08AB5DE0;
    case 266u: goto L_08AB5DE8;
    case 267u: goto L_08AB5DFC;
    case 268u: goto L_08AB5E04;
    case 269u: goto L_08AB5E18;
    case 270u: goto L_08AB5E20;
    case 271u: goto L_08AB5E3C;
    case 272u: goto L_08AB5E44;
    case 273u: goto L_08AB5E68;
    case 274u: goto L_08AB5E70;
    case 275u: goto L_08AB5E94;
    case 276u: goto L_08AB5E9C;
    case 277u: goto L_08AB5EC0;
    case 278u: goto L_08AB5EC8;
    case 279u: goto L_08AB5EDC;
    case 280u: goto L_08AB5EE4;
    case 281u: goto L_08AB5F00;
    case 282u: goto L_08AB5F08;
    case 283u: goto L_08AB5F1C;
    case 284u: goto L_08AB5F24;
    case 285u: goto L_08AB5F40;
    case 286u: goto L_08AB5F48;
    case 287u: goto L_08AB5F64;
    case 288u: goto L_08AB5F6C;
    case 289u: goto L_08AB5F70;
    case 290u: goto L_08AB5F7C;
    case 291u: goto L_08AB5F8C;
    case 292u: goto L_08AB5F9C;
    case 293u: goto L_08AB5FA0;
    case 294u: goto L_08AB5FB0;
    case 295u: goto L_08AB5FB4;
    case 296u: goto L_08AB5FBC;
    case 297u: goto L_08AB6014;
    case 298u: goto L_08AB6020;
    case 299u: goto L_08AB602C;
    case 300u: goto L_08AB6048;
    case 301u: goto L_08AB6060;
    case 302u: goto L_08AB6088;
    case 303u: goto L_08AB60A4;
    case 304u: goto L_08AB60AC;
    case 305u: goto L_08AB60C8;
    case 306u: goto L_08AB60E0;
    case 307u: goto L_08AB60F4;
    case 308u: goto L_08AB614C;
    case 309u: goto L_08AB6168;
    case 310u: goto L_08AB6178;
    case 311u: goto L_08AB6198;
    case 312u: goto L_08AB61C8;
    case 313u: goto L_08AB6200;
    case 314u: goto L_08AB622C;
    case 315u: goto L_08AB624C;
    case 316u: goto L_08AB6260;
    case 317u: goto L_08AB6278;
    case 318u: goto L_08AB628C;
    case 319u: goto L_08AB629C;
    case 320u: goto L_08AB62AC;
    case 321u: goto L_08AB62BC;
    case 322u: goto L_08AB62EC;
    case 323u: goto L_08AB62F4;
    case 324u: goto L_08AB6308;
    case 325u: goto L_08AB6320;
    case 326u: goto L_08AB6328;
    case 327u: goto L_08AB6338;
    case 328u: goto L_08AB6368;
    case 329u: goto L_08AB637C;
    case 330u: goto L_08AB6390;
    case 331u: goto L_08AB63A8;
    case 332u: goto L_08AB63B4;
    case 333u: goto L_08AB63C4;
    case 334u: goto L_08AB63F0;
    case 335u: goto L_08AB6404;
    case 336u: goto L_08AB6414;
    case 337u: goto L_08AB6424;
    case 338u: goto L_08AB643C;
    case 339u: goto L_08AB6448;
    case 340u: goto L_08AB6460;
    case 341u: goto L_08AB6484;
    case 342u: goto L_08AB6544;
    case 343u: goto L_08AB654C;
    case 344u: goto L_08AB6560;
    case 345u: goto L_08AB6570;
    case 346u: goto L_08AB6580;
    case 347u: goto L_08AB658C;
    case 348u: goto L_08AB6594;
    case 349u: goto L_08AB65A0;
    case 350u: goto L_08AB65A8;
    case 351u: goto L_08AB65C4;
    case 352u: goto L_08AB65E4;
    case 353u: goto L_08AB65F0;
    case 354u: goto L_08AB6600;
    case 355u: goto L_08AB6604;
    case 356u: goto L_08AB6610;
    case 357u: goto L_08AB6618;
    case 358u: goto L_08AB6620;
    case 359u: goto L_08AB6628;
    case 360u: goto L_08AB662C;
    case 361u: goto L_08AB6634;
    case 362u: goto L_08AB663C;
    case 363u: goto L_08AB6648;
    case 364u: goto L_08AB6650;
    case 365u: goto L_08AB666C;
    case 366u: goto L_08AB667C;
    case 367u: goto L_08AB66A0;
    case 368u: goto L_08AB66B8;
    case 369u: goto L_08AB66DC;
    case 370u: goto L_08AB66FC;
    case 371u: goto L_08AB6720;
    case 372u: goto L_08AB6740;
    case 373u: goto L_08AB675C;
    case 374u: goto L_08AB6778;
    case 375u: goto L_08AB6798;
    case 376u: goto L_08AB67B4;
    case 377u: goto L_08AB67BC;
    case 378u: goto L_08AB67D8;
    case 379u: goto L_08AB67F0;
    case 380u: goto L_08AB6800;
    case 381u: goto L_08AB6818;
    case 382u: goto L_08AB6824;
    case 383u: goto L_08AB6830;
    case 384u: goto L_08AB683C;
    case 385u: goto L_08AB6848;
    case 386u: goto L_08AB6854;
    case 387u: goto L_08AB6860;
    case 388u: goto L_08AB686C;
    case 389u: goto L_08AB6870;
    case 390u: goto L_08AB6884;
    case 391u: goto L_08AB68AC;
    case 392u: goto L_08AB68B4;
    case 393u: goto L_08AB68F8;
    case 394u: goto L_08AB6904;
    case 395u: goto L_08AB6914;
    case 396u: goto L_08AB6920;
    case 397u: goto L_08AB692C;
    case 398u: goto L_08AB6934;
    case 399u: goto L_08AB693C;
    case 400u: goto L_08AB6944;
    case 401u: goto L_08AB6950;
    case 402u: goto L_08AB6964;
    case 403u: goto L_08AB69AC;
    case 404u: goto L_08AB6B60;
    case 405u: goto L_08AB6B74;
    case 406u: goto L_08AB6BEC;
    case 407u: goto L_08AB6C08;
    case 408u: goto L_08AB6C20;
    case 409u: goto L_08AB6C2C;
    case 410u: goto L_08AB6C34;
    case 411u: goto L_08AB6C48;
    case 412u: goto L_08AB6C5C;
    case 413u: goto L_08AB6C70;
    case 414u: goto L_08AB6C78;
    case 415u: goto L_08AB6CB4;
    case 416u: goto L_08AB6CC4;
    case 417u: goto L_08AB6CCC;
    case 418u: goto L_08AB6CEC;
    case 419u: goto L_08AB6CF8;
    case 420u: goto L_08AB6D14;
    case 421u: goto L_08AB6D1C;
    case 422u: goto L_08AB6D28;
    case 423u: goto L_08AB6D30;
    case 424u: goto L_08AB6D50;
    case 425u: goto L_08AB6D5C;
    case 426u: goto L_08AB6D64;
    case 427u: goto L_08AB6D70;
    case 428u: goto L_08AB6D78;
    case 429u: goto L_08AB6D8C;
    case 430u: goto L_08AB6D9C;
    case 431u: goto L_08AB6DA4;
    case 432u: goto L_08AB6DA8;
    case 433u: goto L_08AB6DC0;
    case 434u: goto L_08AB6DCC;
    case 435u: goto L_08AB6DDC;
    case 436u: goto L_08AB6DE8;
    case 437u: goto L_08AB6DF0;
    case 438u: goto L_08AB6E08;
    case 439u: goto L_08AB6E14;
    case 440u: goto L_08AB6E1C;
    case 441u: goto L_08AB6E2C;
    case 442u: goto L_08AB6E34;
    case 443u: goto L_08AB6E38;
    case 444u: goto L_08AB6E54;
    case 445u: goto L_08AB6E60;
    case 446u: goto L_08AB6E70;
    case 447u: goto L_08AB6E7C;
    case 448u: goto L_08AB6E84;
    case 449u: goto L_08AB6E8C;
    case 450u: goto L_08AB6EAC;
    case 451u: goto L_08AB6ECC;
    case 452u: goto L_08AB6EE8;
    case 453u: goto L_08AB6F14;
    case 454u: goto L_08AB6F4C;
    case 455u: goto L_08AB6F64;
    case 456u: goto L_08AB6F84;
    case 457u: goto L_08AB6F90;
    case 458u: goto L_08AB6F9C;
    case 459u: goto L_08AB6FA4;
    case 460u: goto L_08AB6FB8;
    case 461u: goto L_08AB6FC8;
    case 462u: goto L_08AB6FD0;
    case 463u: goto L_08AB6FD4;
    case 464u: goto L_08AB6FEC;
    case 465u: goto L_08AB6FF8;
    case 466u: goto L_08AB7008;
    case 467u: goto L_08AB7014;
    case 468u: goto L_08AB701C;
    case 469u: goto L_08AB7024;
    case 470u: goto L_08AB7030;
    case 471u: goto L_08AB7038;
    case 472u: goto L_08AB7048;
    case 473u: goto L_08AB7050;
    case 474u: goto L_08AB7054;
    case 475u: goto L_08AB7070;
    case 476u: goto L_08AB707C;
    case 477u: goto L_08AB708C;
    case 478u: goto L_08AB7098;
    case 479u: goto L_08AB70A0;
    case 480u: goto L_08AB70B4;
    case 481u: goto L_08AB70BC;
    case 482u: goto L_08AB7118;
    case 483u: goto L_08AB7130;
    case 484u: goto L_08AB71F8;
    case 485u: goto L_08AB7224;
    case 486u: goto L_08AB7238;
    case 487u: goto L_08AB7244;
    case 488u: goto L_08AB7258;
    case 489u: goto L_08AB7264;
    case 490u: goto L_08AB7278;
    case 491u: goto L_08AB7280;
    case 492u: goto L_08AB728C;
    case 493u: goto L_08AB7298;
    case 494u: goto L_08AB72A4;
    case 495u: goto L_08AB72B0;
    case 496u: goto L_08AB72BC;
    case 497u: goto L_08AB72C8;
    case 498u: goto L_08AB72D4;
    case 499u: goto L_08AB72E0;
    case 500u: goto L_08AB72EC;
    case 501u: goto L_08AB72F8;
    case 502u: goto L_08AB7304;
    case 503u: goto L_08AB7310;
    case 504u: goto L_08AB731C;
    case 505u: goto L_08AB7328;
    case 506u: goto L_08AB7334;
    case 507u: goto L_08AB7340;
    case 508u: goto L_08AB7354;
    case 509u: goto L_08AB7364;
    case 510u: goto L_08AB7374;
    case 511u: goto L_08AB7384;
    case 512u: goto L_08AB7394;
    case 513u: goto L_08AB73A4;
    case 514u: goto L_08AB73B4;
    case 515u: goto L_08AB73C4;
    case 516u: goto L_08AB73CC;
    case 517u: goto L_08AB73DC;
    case 518u: goto L_08AB740C;
    case 519u: goto L_08AB7414;
    case 520u: goto L_08AB7430;
    case 521u: goto L_08AB7438;
    case 522u: goto L_08AB7458;
    case 523u: goto L_08AB7468;
    case 524u: goto L_08AB7474;
    case 525u: goto L_08AB7488;
    case 526u: goto L_08AB74B0;
    case 527u: goto L_08AB74B8;
    case 528u: goto L_08AB74EC;
    case 529u: goto L_08AB74F4;
    case 530u: goto L_08AB74F8;
    case 531u: goto L_08AB7510;
    case 532u: goto L_08AB7534;
    case 533u: goto L_08AB7544;
    case 534u: goto L_08AB7550;
    case 535u: goto L_08AB7558;
    case 536u: goto L_08AB755C;
    case 537u: goto L_08AB7574;
    case 538u: goto L_08AB7588;
    case 539u: goto L_08AB7594;
    case 540u: goto L_08AB759C;
    case 541u: goto L_08AB75A8;
    case 542u: goto L_08AB75B0;
    case 543u: goto L_08AB75B8;
    case 544u: goto L_08AB75CC;
    case 545u: goto L_08AB75D4;
    case 546u: goto L_08AB75E8;
    case 547u: goto L_08AB75F0;
    case 548u: goto L_08AB75FC;
    case 549u: goto L_08AB7604;
    case 550u: goto L_08AB7624;
    case 551u: goto L_08AB7664;
    case 552u: goto L_08AB7670;
    case 553u: goto L_08AB7678;
    case 554u: goto L_08AB7688;
    case 555u: goto L_08AB7690;
    case 556u: goto L_08AB769C;
    case 557u: goto L_08AB76A8;
    case 558u: goto L_08AB76B4;
    case 559u: goto L_08AB76B8;
    case 560u: goto L_08AB76DC;
    case 561u: goto L_08AB76E4;
    case 562u: goto L_08AB76EC;
    case 563u: goto L_08AB76F8;
    case 564u: goto L_08AB7704;
    case 565u: goto L_08AB7710;
    case 566u: goto L_08AB7714;
    case 567u: goto L_08AB772C;
    case 568u: goto L_08AB7738;
    case 569u: goto L_08AB7744;
    case 570u: goto L_08AB7750;
    case 571u: goto L_08AB7754;
    case 572u: goto L_08AB7768;
    case 573u: goto L_08AB7780;
    case 574u: goto L_08AB778C;
    case 575u: goto L_08AB7790;
    case 576u: goto L_08AB7798;
    case 577u: goto L_08AB77D8;
    case 578u: goto L_08AB7800;
    case 579u: goto L_08AB784C;
    case 580u: goto L_08AB786C;
    case 581u: goto L_08AB7874;
    case 582u: goto L_08AB787C;
    case 583u: goto L_08AB7888;
    case 584u: goto L_08AB7894;
    case 585u: goto L_08AB789C;
    case 586u: goto L_08AB78A0;
    case 587u: goto L_08AB78A8;
    case 588u: goto L_08AB78B4;
    case 589u: goto L_08AB78C0;
    case 590u: goto L_08AB78C8;
    case 591u: goto L_08AB78CC;
    case 592u: goto L_08AB78D0;
    case 593u: goto L_08AB7904;
    case 594u: goto L_08AB79A8;
    case 595u: goto L_08AB79B4;
    case 596u: goto L_08AB79C0;
    case 597u: goto L_08AB79F0;
    case 598u: goto L_08AB79FC;
    case 599u: goto L_08AB7A08;
    case 600u: goto L_08AB7A10;
    case 601u: goto L_08AB7A14;
    case 602u: goto L_08AB7A1C;
    case 603u: goto L_08AB7A24;
    case 604u: goto L_08AB7A48;
    case 605u: goto L_08AB7A64;
    case 606u: goto L_08AB7A94;
    case 607u: goto L_08AB7AA8;
    case 608u: goto L_08AB7AB8;
    case 609u: goto L_08AB7ACC;
    case 610u: goto L_08AB7ADC;
    case 611u: goto L_08AB7B14;
    case 612u: goto L_08AB7B28;
    case 613u: goto L_08AB7B30;
    case 614u: goto L_08AB7B48;
    case 615u: goto L_08AB7B58;
    case 616u: goto L_08AB7B7C;
    case 617u: goto L_08AB7B94;
    case 618u: goto L_08AB7BA0;
    case 619u: goto L_08AB7BB0;
    case 620u: goto L_08AB7BC8;
    case 621u: goto L_08AB7BD0;
    case 622u: goto L_08AB7BD4;
    case 623u: goto L_08AB7BE0;
    case 624u: goto L_08AB7C00;
    case 625u: goto L_08AB7C14;
    case 626u: goto L_08AB7C20;
    case 627u: goto L_08AB7C34;
    case 628u: goto L_08AB7C6C;
    case 629u: goto L_08AB7C7C;
    case 630u: goto L_08AB7C8C;
    case 631u: goto L_08AB7C9C;
    case 632u: goto L_08AB7CA8;
    case 633u: goto L_08AB7CB4;
    case 634u: goto L_08AB7CD0;
    case 635u: goto L_08AB7CD8;
    case 636u: goto L_08AB7CE0;
    case 637u: goto L_08AB7D0C;
    case 638u: goto L_08AB7D34;
    case 639u: goto L_08AB7D40;
    case 640u: goto L_08AB7D48;
    case 641u: goto L_08AB7D54;
    case 642u: goto L_08AB7D5C;
    case 643u: goto L_08AB7D68;
    case 644u: goto L_08AB7D70;
    case 645u: goto L_08AB7D7C;
    case 646u: goto L_08AB7D84;
    case 647u: goto L_08AB7D8C;
    case 648u: goto L_08AB7D98;
    case 649u: goto L_08AB7DA8;
    case 650u: goto L_08AB7DB8;
    case 651u: goto L_08AB7DCC;
    case 652u: goto L_08AB7DD0;
    case 653u: goto L_08AB7DF0;
    case 654u: goto L_08AB7E14;
    case 655u: goto L_08AB7E20;
    case 656u: goto L_08AB7E28;
    case 657u: goto L_08AB7E34;
    case 658u: goto L_08AB7E44;
    case 659u: goto L_08AB7E54;
    case 660u: goto L_08AB7E64;
    case 661u: goto L_08AB7E70;
    case 662u: goto L_08AB7E84;
    case 663u: goto L_08AB7E8C;
    case 664u: goto L_08AB7E94;
    case 665u: goto L_08AB7EA0;
    case 666u: goto L_08AB7EA8;
    case 667u: goto L_08AB7EB0;
    case 668u: goto L_08AB7EBC;
    case 669u: goto L_08AB7EC0;
    case 670u: goto L_08AB7ED8;
    case 671u: goto L_08AB7EFC;
    case 672u: goto L_08AB7F08;
    case 673u: goto L_08AB7F10;
    case 674u: goto L_08AB7F1C;
    case 675u: goto L_08AB7F28;
    case 676u: goto L_08AB7F38;
    case 677u: goto L_08AB7F50;
    case 678u: goto L_08AB7F58;
    case 679u: goto L_08AB7F60;
    case 680u: goto L_08AB7F6C;
    case 681u: goto L_08AB7F74;
    case 682u: goto L_08AB7F80;
    case 683u: goto L_08AB7F88;
    case 684u: goto L_08AB7F90;
    case 685u: goto L_08AB7FA0;
    case 686u: goto L_08AB7FAC;
    case 687u: goto L_08AB7FB0;
    case 688u: goto L_08AB7FCC;
    case 689u: goto L_08AB7FF0;
    case 690u: goto L_08AB7FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AB4004:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4014:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-17820));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[22] = (9u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    ctx.gpr[23] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-5144));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-32768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AB40A8;
      }
      goto L_08AB4094;
    }
L_08AB4094:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(297)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB40A8;
      }
      goto L_08AB40A0;
    }
L_08AB40A0:
    ctx.gpr[31] = (0x08AB40A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 131u, 0x089D5468u>(ctx, &aot_mem) && ctx.pc == 0x08AB40A8u) goto L_08AB40A8;
    return;
L_08AB40A8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AB40B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17832));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB40B4u) goto L_08AB40B4;
    return;
L_08AB40B4:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27048), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AB40C0;
L_08AB40C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AB40C0;
      }
      goto L_08AB40D8;
    }
L_08AB40D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(27016), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27020), ctx.gpr[30]);
    ctx.gpr[16] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(27024), ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[30] ^ 480u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(27028), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[23] ^ 272u);
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[31] = (0x08AB4118u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(27044), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.pc = 0x08B0B9D4u;
    return;
L_08AB4118:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AB4124u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27004), ctx.gpr[2]);
    ctx.pc = 0x08B0B9CCu;
    return;
L_08AB4124:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27008), ctx.gpr[2]);
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16220));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16300));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[31] = (0x08AB4154u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08B0B9ECu;
    return;
L_08AB4154:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AB4160u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26996), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 538u, 0x08AB2F70u>(ctx, &aot_mem) && ctx.pc == 0x08AB4160u) goto L_08AB4160;
    return;
L_08AB4160:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26984), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(27044)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27016)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[9] = (9u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[6] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[8] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AB4228;
      }
      goto L_08AB418C;
    }
L_08AB418C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27028)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AB41A8;
      }
      goto L_08AB41A0;
    }
L_08AB41A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08AB41AC;
      }
      goto L_08AB41A8;
    }
L_08AB41A8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08AB41AC;
L_08AB41AC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(26976), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(26992), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(26988), ctx.gpr[4]);
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB41D8u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 528u, 0x08AB2EB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB41D8u) goto L_08AB41D8;
    return;
L_08AB41D8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AB41E4u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(26920), ctx.gpr[4]);
    goto L_08AB43A8;
L_08AB41E4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(26920), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 480u);
    ctx.gpr[31] = (0x08AB41FCu);
    ctx.gpr[6] = (0u | 272u);
    ctx.pc = 0x08B0B984u;
    return;
L_08AB41FC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27004)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(26920), ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(26988)));
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08AB4220u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = 0x08B0B98Cu;
    return;
L_08AB4220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB42BC;
      }
      goto L_08AB4228;
    }
L_08AB4228:
    ctx.gpr[5] = (0u | 512u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(27028), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
      if (branch_taken) {
          goto L_08AB4240;
      }
      goto L_08AB4238;
    }
L_08AB4238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_08AB4244;
      }
      goto L_08AB4240;
    }
L_08AB4240:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    goto L_08AB4244;
L_08AB4244:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(26976));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-3));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(26976), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[22]);
    ctx.gpr[5] = (24u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(26992), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[6] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(26988), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AB4288u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 528u, 0x08AB2EB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4288u) goto L_08AB4288;
    return;
L_08AB4288:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[31] = (0x08AB429Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08B0B984u;
    return;
L_08AB429C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27004)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(26988)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27028)));
    ctx.gpr[31] = (0x08AB42BCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27016)));
    ctx.pc = 0x08B0B98Cu;
    return;
L_08AB42BC:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26952), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27040), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26909), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26909));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26908), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26912), ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26916), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(26920), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB4308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 593u, 0x08AB35A0u>(ctx, &aot_mem) && ctx.pc == 0x08AB4308u) goto L_08AB4308;
    return;
L_08AB4308:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26956), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26960), 0u);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(26920), ctx.gpr[4]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15716));
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[31] = (0x08AB4334u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 297u, 0x08AF9590u>(ctx, &aot_mem) && ctx.pc == 0x08AB4334u) goto L_08AB4334;
    return;
L_08AB4334:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26964), 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17392u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (17288u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[31] = (0x08AB4378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 880u, 0x08AD388Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB4378u) goto L_08AB4378;
    return;
L_08AB4378:
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
L_08AB43A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27048)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB4E88;
      }
      goto L_08AB43E8;
    }
L_08AB43E8:
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(27048), ctx.gpr[4]);
    ctx.gpr[5] = (17664u << 16u);
    ctx.gpr[21] = (256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12960));
    ctx.gpr[2] = (16896u << 16u);
    ctx.gpr[11] = (17152u << 16u);
    ctx.gpr[8] = (17664u << 16u);
    ctx.gpr[6] = (17920u << 16u);
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[10] = (51968u << 16u);
    ctx.gpr[30] = (2229u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[24] = (40960u << 16u);
    ctx.gpr[15] = (43008u << 16u);
    ctx.gpr[9] = (255u << 16u);
    ctx.gpr[20] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AB4458;
      }
      goto L_08AB4448;
    }
L_08AB4448:
    ctx.gpr[18] = (2278u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-13824));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AB4464;
      }
      goto L_08AB4458;
    }
L_08AB4458:
    ctx.gpr[18] = (2278u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11712));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08AB4464;
L_08AB4464:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (52224u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (49928u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (19456u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28928));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (19712u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30592));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (54272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (54532u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16864));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (5376u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (5636u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15839));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (7168u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (7680u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27016)));
    if (ctx.gpr[4] == ctx.gpr[23]) {
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
        goto L_08AB45D0;
    }
    goto L_08AB45D0;
L_08AB45D0:
    ctx.gpr[4] = (49664u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (49920u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(27004)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(26976)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(27028)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] | ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (47104u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2313));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (53760u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26988)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[7] = (39936u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (40192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(512));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (59136u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8704u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8960u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (50688u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(263));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB4740u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 137u, 0x088ED164u>(ctx, &aot_mem) && ctx.pc == 0x08AB4740u) goto L_08AB4740;
    return;
L_08AB4740:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7172)));
    ctx.gpr[11] = (22272u << 16u);
    ctx.gpr[2] = (22016u << 16u);
    ctx.gpr[3] = (22528u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[12] = (21760u << 16u);
      if (branch_taken) {
          goto L_08AB4768;
      }
      goto L_08AB4764;
    }
L_08AB4764:
    ctx.gpr[16] = (0u | 1u);
    goto L_08AB4768;
L_08AB4768:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AB48F0;
      }
      goto L_08AB4770;
    }
L_08AB4770:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21984)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB48F0;
      }
      goto L_08AB477C;
    }
L_08AB477C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB47A8;
      }
      goto L_08AB4784;
    }
L_08AB4784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7156)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08AB47AC;
    }
    goto L_08AB4790;
L_08AB4790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7128)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08AB47AC;
    }
    goto L_08AB479C;
L_08AB479C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7168)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08AB47B0;
      }
      goto L_08AB47A8;
    }
L_08AB47A8:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AB47AC;
L_08AB47AC:
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08AB47B0;
L_08AB47B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB48F0;
      }
      goto L_08AB47B8;
    }
L_08AB47B8:
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(27052));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[10]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(27052)));
    ctx.gpr[9] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    ctx.gpr[9] = (0u + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08AB4808;
      }
      goto L_08AB47DC;
    }
L_08AB47DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] & ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] >> 24u);
      if (branch_taken) {
          goto L_08AB4810;
      }
      goto L_08AB4808;
    }
L_08AB4808:
    ctx.gpr[8] = (ctx.gpr[9] & ctx.gpr[21]);
    ctx.gpr[9] = (ctx.gpr[9] >> 24u);
    goto L_08AB4810;
L_08AB4810:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) <= 0;
    ctx.gpr[4] = (8448u << 16u);
      if (branch_taken) {
          goto L_08AB4870;
      }
      goto L_08AB4818;
    }
L_08AB4818:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (57088u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (57600u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AB4884;
      }
      goto L_08AB4870;
    }
L_08AB4870:
    ctx.gpr[4] = (8448u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_08AB4884;
L_08AB4884:
    ctx.gpr[4] = (51456u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[8] | ctx.gpr[12]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[9] | ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[8] | ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[8] | ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27016)));
      if (branch_taken) {
          goto L_08AB49D4;
      }
      goto L_08AB48F0;
    }
L_08AB48F0:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB4924;
      }
      goto L_08AB4900;
    }
L_08AB4900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7156)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08AB4928;
    }
    goto L_08AB490C;
L_08AB490C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7128)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08AB4928;
    }
    goto L_08AB4918;
L_08AB4918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(7168)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08AB492C;
      }
      goto L_08AB4924;
    }
L_08AB4924:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AB4928;
L_08AB4928:
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08AB492C;
L_08AB492C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (8448u << 16u);
      if (branch_taken) {
          goto L_08AB4968;
      }
      goto L_08AB4934;
    }
L_08AB4934:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(27052));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (0u + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27052)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (256u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[4]);
    ctx.gpr[4] = (8448u << 16u);
    goto L_08AB4968;
L_08AB4968:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] | ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] >> 24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] | ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27016)));
    goto L_08AB49D4;
L_08AB49D4:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08AB49F4;
      }
      goto L_08AB49DC;
    }
L_08AB49DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8192u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AB49F4;
L_08AB49F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(27028)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 513 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB4B20;
      }
      goto L_08AB4A04;
    }
L_08AB4A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[16] = (4u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16384));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 272u);
    ctx.gpr[11] = (0u | 512u);
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[31] = (0x08AB4A44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 388u, 0x08A7EF30u>(ctx, &aot_mem) && ctx.pc == 0x08AB4A44u) goto L_08AB4A44;
    return;
L_08AB4A44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(27028)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27004)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26976)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27016)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 1024u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] == ctx.gpr[23]) {
    ctx.gpr[6] = (0u | 2048u);
        goto L_08AB4A70;
    }
    goto L_08AB4A70;
L_08AB4A70:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[21]);
    ctx.gpr[7] = (40960u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (43008u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[7] = (255u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (47104u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2313));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (51968u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27020)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 512u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 480u);
    ctx.gpr[10] = (0u | 272u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08AB4B18u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 388u, 0x08A7EF30u>(ctx, &aot_mem) && ctx.pc == 0x08AB4B18u) goto L_08AB4B18;
    return;
L_08AB4B18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB4B9C;
      }
      goto L_08AB4B20;
    }
L_08AB4B20:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 68u);
    goto L_08AB4B2C;
L_08AB4B2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27020)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 480u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[31] = (0x08AB4B84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 388u, 0x08A7EF30u>(ctx, &aot_mem) && ctx.pc == 0x08AB4B84u) goto L_08AB4B84;
    return;
L_08AB4B84:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AB4B2C;
      }
      goto L_08AB4B98;
    }
L_08AB4B98:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AB4B9C;
L_08AB4B9C:
    ctx.gpr[4] = (59136u << 16u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8704u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8960u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (8448u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (50688u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(263));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (16896u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (17152u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (17664u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (17920u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4096u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4096));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (19456u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4096));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (19712u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (54272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27024)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (54528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 10u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (5376u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27024)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 10u);
    ctx.gpr[7] = (5632u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (22016u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (22272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (51456u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27016)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    ctx.gpr[4] = (3840u << 16u);
      if (branch_taken) {
          goto L_08AB4E60;
      }
      goto L_08AB4E44;
    }
L_08AB4E44:
    ctx.gpr[4] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (3840u << 16u);
    goto L_08AB4E60;
L_08AB4E60:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (3072u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AB4E88;
L_08AB4E88:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26852)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 14571u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26848)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(26876)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(26856), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(26864), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(26860), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (15744u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(26868), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5168));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26872), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB4F60u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(26880), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 386u, 0x08A7EED8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4F60u) goto L_08AB4F60;
    return;
L_08AB4F60:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[6] = (0u | 2048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13824));
    ctx.gpr[31] = (0x08AB4F78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15872));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 387u, 0x08A7EEF8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4F78u) goto L_08AB4F78;
    return;
L_08AB4F78:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[6] = (0u | 2048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11712));
    ctx.gpr[31] = (0x08AB4F90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13760));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 387u, 0x08A7EEF8u>(ctx, &aot_mem) && ctx.pc == 0x08AB4F90u) goto L_08AB4F90;
    return;
L_08AB4F90:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4F9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08AB4FC4u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB4FC4u) goto L_08AB4FC4;
    return;
L_08AB4FC4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4FD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB4FECu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB4F9C;
L_08AB4FEC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB4FF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB5014u);
    ctx.gpr[5] = (0u | 4u);
    goto L_08AB4F9C;
L_08AB5014:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB503Cu);
    ctx.gpr[5] = (0u | 4u);
    goto L_08AB4F9C;
L_08AB503C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5048:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB5064u);
    ctx.gpr[5] = (0u | 4u);
    goto L_08AB4F9C;
L_08AB5064:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5070:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB5098;
      }
      goto L_08AB508C;
    }
L_08AB508C:
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB50AC;
      }
      goto L_08AB5098;
    }
L_08AB5098:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AB50A4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB5020;
L_08AB50A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB50D0;
      }
      goto L_08AB50AC;
    }
L_08AB50AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08AB50C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AB5020;
L_08AB50C0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB50D0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AB4F9C;
L_08AB50D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB50E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB5108u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08AB4FF8;
L_08AB5108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB511Cu);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08AB4F9C;
L_08AB511C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB5160u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08AB4FF8;
L_08AB5160:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB51BC;
      }
      goto L_08AB5170;
    }
L_08AB5170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08AB5184u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AB5070;
L_08AB5184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08AB5198u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AB4FF8;
L_08AB5198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08AB51ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08AB4FF8;
L_08AB51AC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AB5170;
      }
      goto L_08AB51BC;
    }
L_08AB51BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB51DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB51FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_08AB4FF8;
L_08AB51FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5210u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08AB4F9C;
L_08AB5210:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5224:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB5254u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08AB4FF8;
L_08AB5254:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB5288;
      }
      goto L_08AB5264;
    }
L_08AB5264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08AB5278u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AB5070;
L_08AB5278:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB5264;
      }
      goto L_08AB5288;
    }
L_08AB5288:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB52A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB52DCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AB4FF8;
L_08AB52DC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB5368;
      }
      goto L_08AB52EC;
    }
L_08AB52EC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[31] = (0x08AB5300u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08AB4FD0;
L_08AB5300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB5320;
      }
      goto L_08AB5310;
    }
L_08AB5310:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5358;
      }
      goto L_08AB5318;
    }
L_08AB5318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5358;
      }
      goto L_08AB5320;
    }
L_08AB5320:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB5344;
      }
      goto L_08AB5328;
    }
L_08AB5328:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5358;
      }
      goto L_08AB5330;
    }
L_08AB5330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AB533Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB5070;
L_08AB533C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5358;
      }
      goto L_08AB5344;
    }
L_08AB5344:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AB5350u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB5048;
L_08AB5350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5358;
      }
      goto L_08AB5358;
    }
L_08AB5358:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AB52EC;
      }
      goto L_08AB5368;
    }
L_08AB5368:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB5378u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AB4FF8;
L_08AB5378:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB53B0;
      }
      goto L_08AB5388;
    }
L_08AB5388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB53A0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AB53D4;
L_08AB53A0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB5388;
      }
      goto L_08AB53B0;
    }
L_08AB53B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB53D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    if (ctx.gpr[4] != ctx.gpr[7]) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08AB5400;
    }
    goto L_08AB5400;
L_08AB5400:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AB540Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB5070;
L_08AB540C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08AB5418u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FF8;
L_08AB5418:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08AB5424u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FD0;
L_08AB5424:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69)));
    ctx.gpr[31] = (0x08AB5430u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FD0;
L_08AB5430:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(70)));
    ctx.gpr[31] = (0x08AB543Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FD0;
L_08AB543C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    ctx.gpr[31] = (0x08AB5448u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FD0;
L_08AB5448:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5454u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB51DC;
L_08AB5454:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5460u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB5130;
L_08AB5460:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB546Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB5224;
L_08AB546C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5478u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB52A8;
L_08AB5478:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5484u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB50E8;
L_08AB5484:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5498:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB54BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17792));
    goto L_08AB4F9C;
L_08AB54BC:
    ctx.gpr[4] = (0u | 80u);
    ctx.gpr[31] = (0x08AB54C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FD0;
L_08AB54C8:
    ctx.gpr[31] = (0x08AB54D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 138u, 0x08A009C4u>(ctx, &aot_mem) && ctx.pc == 0x08AB54D0u) goto L_08AB54D0;
    return;
L_08AB54D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB54DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FD0;
L_08AB54DC:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08AB54E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FD0;
L_08AB54E8:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08AB54F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FD0;
L_08AB54F4:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08AB5500u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FD0;
L_08AB5500:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AB550Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FD0;
L_08AB550C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AB5518u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FD0;
L_08AB5518:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08AB5524u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FD0;
L_08AB5524:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08AB5530u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FD0;
L_08AB5530:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08AB553Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB4FD0;
L_08AB553C:
    ctx.gpr[5] = (19439u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 44859u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB5550u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5048;
L_08AB5550:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5560:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB558Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AB5498;
L_08AB558C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB559Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08AB53D4;
L_08AB559C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB55B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1806)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 14 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB55F4;
      }
      goto L_08AB55DC;
    }
L_08AB55DC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1806));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] << 6u);
      if (branch_taken) {
          goto L_08AB5618;
      }
      goto L_08AB55F4;
    }
L_08AB55F4:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1805)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1856)));
    ctx.gpr[18] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB5640;
      }
      goto L_08AB5618;
    }
L_08AB5618:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1808));
    ctx.gpr[31] = (0x08AB5628u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AB5628u) goto L_08AB5628;
    return;
L_08AB5628:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AB5648;
      }
      goto L_08AB5638;
    }
L_08AB5638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB56A4;
      }
      goto L_08AB5640;
    }
L_08AB5640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB56A8;
      }
      goto L_08AB5648;
    }
L_08AB5648:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    goto L_08AB5650;
L_08AB5650:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1792)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB5690;
      }
      goto L_08AB5670;
    }
L_08AB5670:
    ctx.gpr[6] = (0u | 13u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1793));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1792));
    ctx.gpr[31] = (0x08AB5688u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08AB5688u) goto L_08AB5688;
    return;
L_08AB5688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB56A4;
      }
      goto L_08AB5690;
    }
L_08AB5690:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB5650;
      }
      goto L_08AB56A4;
    }
L_08AB56A4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1792), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_08AB56A8;
L_08AB56A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB56C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AB5744;
      }
      goto L_08AB56D8;
    }
L_08AB56D8:
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(27264));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (16768u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08AB56F8;
L_08AB56F8:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB5734;
      }
      goto L_08AB572C;
    }
L_08AB572C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 22u);
      if (branch_taken) {
          goto L_08AB5744;
      }
      goto L_08AB5734;
    }
L_08AB5734:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AB56F8;
      }
      goto L_08AB5744;
    }
L_08AB5744:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB574C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (15057u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB5828;
      }
      goto L_08AB5788;
    }
L_08AB5788:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5794u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB5844;
L_08AB5794:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB5828;
      }
      goto L_08AB57A0;
    }
L_08AB57A0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB57C4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB57C4u) goto L_08AB57C4;
    return;
L_08AB57C4:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB5828;
      }
      goto L_08AB57D4;
    }
L_08AB57D4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB5828u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08AB5828u) goto L_08AB5828;
    return;
L_08AB5828:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5844:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB5888;
      }
      goto L_08AB586C;
    }
L_08AB586C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08AB5888;
      }
      goto L_08AB5878;
    }
L_08AB5878:
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[5] = (14545u << 16u);
        goto L_08AB588C;
    }
    goto L_08AB5880;
L_08AB5880:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB5938;
      }
      goto L_08AB5888;
    }
L_08AB5888:
    ctx.gpr[5] = (14545u << 16u);
    goto L_08AB588C;
L_08AB588C:
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7550u);
    ctx.gpr[31] = (0x08AB58B8u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB58B8:
    ctx.gpr[5] = (16988u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (17995u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (0u | 35000u);
    ctx.gpr[4] = (0u | 258u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AB590C;
      }
      goto L_08AB58FC;
    }
L_08AB58FC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB5924;
      }
      goto L_08AB590C;
    }
L_08AB590C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
    goto L_08AB5924;
L_08AB5924:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB5BB8;
      }
      goto L_08AB5938;
    }
L_08AB5938:
    ctx.gpr[6] = (0u | 19u);
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[5] = (14545u << 16u);
        goto L_08AB5950;
    }
    goto L_08AB5944;
L_08AB5944:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB59FC;
      }
      goto L_08AB594C;
    }
L_08AB594C:
    ctx.gpr[5] = (14545u << 16u);
    goto L_08AB5950;
L_08AB5950:
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7550u);
    ctx.gpr[31] = (0x08AB597Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB597C:
    ctx.gpr[4] = (17853u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
        goto L_08AB59C0;
    }
    goto L_08AB59B0;
L_08AB59B0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_08AB59D4;
      }
      goto L_08AB59C0;
    }
L_08AB59C0:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16000));
    goto L_08AB59D4;
L_08AB59D4:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AB5BB8;
      }
      goto L_08AB59FC;
    }
L_08AB59FC:
    ctx.gpr[6] = (0u | 3u);
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[5] = (14545u << 16u);
        goto L_08AB5A44;
    }
    goto L_08AB5A08;
L_08AB5A08:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_08AB5A40;
      }
      goto L_08AB5A10;
    }
L_08AB5A10:
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[5] = (14545u << 16u);
        goto L_08AB5A44;
    }
    goto L_08AB5A18;
L_08AB5A18:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 18u);
      if (branch_taken) {
          goto L_08AB5A40;
      }
      goto L_08AB5A20;
    }
L_08AB5A20:
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[5] = (14545u << 16u);
        goto L_08AB5A44;
    }
    goto L_08AB5A28;
L_08AB5A28:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 33u);
      if (branch_taken) {
          goto L_08AB5A40;
      }
      goto L_08AB5A30;
    }
L_08AB5A30:
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[5] = (14545u << 16u);
        goto L_08AB5A44;
    }
    goto L_08AB5A38;
L_08AB5A38:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB5AF0;
      }
      goto L_08AB5A40;
    }
L_08AB5A40:
    ctx.gpr[5] = (14545u << 16u);
    goto L_08AB5A44;
L_08AB5A44:
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7550u);
    ctx.gpr[31] = (0x08AB5A70u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5A70:
    ctx.gpr[4] = (16988u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 196u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AB5AC4;
      }
      goto L_08AB5AB4;
    }
L_08AB5AB4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(5000));
      if (branch_taken) {
          goto L_08AB5ADC;
      }
      goto L_08AB5AC4;
    }
L_08AB5AC4:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(5000));
    goto L_08AB5ADC;
L_08AB5ADC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(2) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AB5BB8;
      }
      goto L_08AB5AF0;
    }
L_08AB5AF0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB5B78;
      }
      goto L_08AB5B00;
    }
L_08AB5B00:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (14545u << 16u);
      if (branch_taken) {
          goto L_08AB5B78;
      }
      goto L_08AB5B08;
    }
L_08AB5B08:
    ctx.gpr[5] = (ctx.gpr[5] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (15800u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7550u);
    ctx.gpr[31] = (0x08AB5B34u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5B34:
    ctx.gpr[4] = (17948u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 273u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
        goto L_08AB5B80;
    }
    goto L_08AB5B68;
L_08AB5B68:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(10000));
      if (branch_taken) {
          goto L_08AB5B94;
      }
      goto L_08AB5B78;
    }
L_08AB5B78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB5BD0;
      }
      goto L_08AB5B80;
    }
L_08AB5B80:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(10000));
    goto L_08AB5B94;
L_08AB5B94:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    goto L_08AB5BB8;
L_08AB5BB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5BD0;
      }
      goto L_08AB5BC0;
    }
L_08AB5BC0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[4] >> 1u);
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    goto L_08AB5BD0;
L_08AB5BD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5BE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F6C;
      }
      goto L_08AB5BF8;
    }
L_08AB5BF8:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17504)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5C10:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[31] = (0x08AB5C2Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5C34;
    }
L_08AB5C34:
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5C48u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5F7C;
L_08AB5C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5C50;
    }
L_08AB5C50:
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5C64u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5F7C;
L_08AB5C64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5C6C;
    }
L_08AB5C6C:
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5C80u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5F7C;
L_08AB5C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5C88;
    }
L_08AB5C88:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5C9Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5F7C;
L_08AB5C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5CA4;
    }
L_08AB5CA4:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16670u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16672u << 16u);
    ctx.gpr[31] = (0x08AB5CC8u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5CC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5CD0;
    }
L_08AB5CD0:
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17056u << 16u);
    ctx.gpr[31] = (0x08AB5CECu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5CEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5CF4;
    }
L_08AB5CF4:
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5D08u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5F7C;
L_08AB5D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5D10;
    }
L_08AB5D10:
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17154u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.gpr[31] = (0x08AB5D2Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5D34;
    }
L_08AB5D34:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16656u << 16u);
    ctx.gpr[31] = (0x08AB5D50u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5D50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5D58;
    }
L_08AB5D58:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16656u << 16u);
    ctx.gpr[31] = (0x08AB5D74u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5D7C;
    }
L_08AB5D7C:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16752u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16736u << 16u);
    ctx.gpr[31] = (0x08AB5D98u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5DA0;
    }
L_08AB5DA0:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16670u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16672u << 16u);
    ctx.gpr[31] = (0x08AB5DC4u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5DC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5DCC;
    }
L_08AB5DCC:
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5DE0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5F7C;
L_08AB5DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5DE8;
    }
L_08AB5DE8:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5DFCu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5F7C;
L_08AB5DFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5E04;
    }
L_08AB5E04:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5E18u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5F7C;
L_08AB5E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5E20;
    }
L_08AB5E20:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[31] = (0x08AB5E3Cu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5E3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5E44;
    }
L_08AB5E44:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16540u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16544u << 16u);
    ctx.gpr[31] = (0x08AB5E68u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5E68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5E70;
    }
L_08AB5E70:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16927u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.gpr[31] = (0x08AB5E94u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5E94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5E9C;
    }
L_08AB5E9C:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16505u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[31] = (0x08AB5EC0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5EC8;
    }
L_08AB5EC8:
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5EDCu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5F7C;
L_08AB5EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5EE4;
    }
L_08AB5EE4:
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16912u << 16u);
    ctx.gpr[31] = (0x08AB5F00u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5F08;
    }
L_08AB5F08:
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB5F1Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5F7C;
L_08AB5F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5F24;
    }
L_08AB5F24:
    ctx.gpr[5] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16944u << 16u);
    ctx.gpr[31] = (0x08AB5F40u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5F48;
    }
L_08AB5F48:
    ctx.gpr[5] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16936u << 16u);
    ctx.gpr[31] = (0x08AB5F64u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AB5F7C;
L_08AB5F64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5F70;
      }
      goto L_08AB5F6C;
    }
L_08AB5F6C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08AB5F70;
L_08AB5F70:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5F7C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB5FB0;
      }
      goto L_08AB5F8C;
    }
L_08AB5F8C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB5FA0;
      }
      goto L_08AB5F9C;
    }
L_08AB5F9C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AB5FA0;
L_08AB5FA0:
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB5FB4;
      }
      goto L_08AB5FB0;
    }
L_08AB5FB0:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08AB5FB4;
L_08AB5FB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB5FBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AB61C8;
      }
      goto L_08AB6014;
    }
L_08AB6014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19956)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB61C8;
      }
      goto L_08AB6020;
    }
L_08AB6020:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21945)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB61C8;
      }
      goto L_08AB602C;
    }
L_08AB602C:
    ctx.gpr[4] = (15057u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15395u << 16u);
      if (branch_taken) {
          goto L_08AB6060;
      }
      goto L_08AB6048;
    }
L_08AB6048:
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB60A4;
      }
      goto L_08AB6060;
    }
L_08AB6060:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(19968));
      if (branch_taken) {
          goto L_08AB60AC;
      }
      goto L_08AB6088;
    }
L_08AB6088:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB60F4;
      }
      goto L_08AB60A4;
    }
L_08AB60A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB61C8;
      }
      goto L_08AB60AC;
    }
L_08AB60AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 2u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AB60E0;
      }
      goto L_08AB60C8;
    }
L_08AB60C8:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB60F4;
      }
      goto L_08AB60E0;
    }
L_08AB60E0:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08AB60F4;
L_08AB60F4:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB614Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08AB56C4;
L_08AB614C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AB6168u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08AB56C4;
L_08AB6168:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6178u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 321u, 0x08A6D618u>(ctx, &aot_mem) && ctx.pc == 0x08AB6178u) goto L_08AB6178;
    return;
L_08AB6178:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB61C8;
      }
      goto L_08AB6198;
    }
L_08AB6198:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21776), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21780), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21784), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21785), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21788), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21792), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(21808));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AB61C8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08AB55B0;
L_08AB61C8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6200:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19956)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    goto L_08AB622C;
L_08AB622C:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB622C;
      }
      goto L_08AB624C;
    }
L_08AB624C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21774)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB6320;
      }
      goto L_08AB6260;
    }
L_08AB6260:
    ctx.gpr[8] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(21760)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[8] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19968)));
    goto L_08AB6278;
L_08AB6278:
    ctx.gpr[5] = (ctx.gpr[7] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20864)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AB62F4;
      }
      goto L_08AB628C;
    }
L_08AB628C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19972)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20868)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08AB62F4;
      }
      goto L_08AB629C;
    }
L_08AB629C:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(19976)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(20872)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08AB62F4;
      }
      goto L_08AB62AC;
    }
L_08AB62AC:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(19977)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(20873)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08AB62F4;
      }
      goto L_08AB62BC;
    }
L_08AB62BC:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20916)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20916), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20020), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(19968));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB62ECu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AB574C;
L_08AB62EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6308;
      }
      goto L_08AB62F4;
    }
L_08AB62F4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6278;
      }
      goto L_08AB6308;
    }
L_08AB6308:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21774)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6260;
      }
      goto L_08AB6320;
    }
L_08AB6320:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08AB6328;
L_08AB6328:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
      if (branch_taken) {
          goto L_08AB6368;
      }
      goto L_08AB6338;
    }
L_08AB6338:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20864));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AB6368;
L_08AB6368:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6328;
      }
      goto L_08AB637C;
    }
L_08AB637C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21774)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08AB643C;
      }
      goto L_08AB6390;
    }
L_08AB6390:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21760)));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6424;
      }
      goto L_08AB63A8;
    }
L_08AB63A8:
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08AB63B4;
L_08AB63B4:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] << 6u);
      if (branch_taken) {
          goto L_08AB63F0;
      }
      goto L_08AB63C4;
    }
L_08AB63C4:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19968)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20916), ctx.gpr[19]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19972)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20864), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19976)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20868), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19977)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20872), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20873), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08AB6404;
      }
      goto L_08AB63F0;
    }
L_08AB63F0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB63B4;
      }
      goto L_08AB6404;
    }
L_08AB6404:
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(19968));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6414u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AB6484;
L_08AB6414:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AB6424u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AB574C;
L_08AB6424:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21774)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6390;
      }
      goto L_08AB643C;
    }
L_08AB643C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08AB6448;
L_08AB6448:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(21760), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6448;
      }
      goto L_08AB6460;
    }
L_08AB6460:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21774), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6484:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(27116));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[4] = (16928u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[6] = (2233u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[4] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[4] = (16512u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (0u | 17u);
    ctx.gpr[23] = (0u | 5u);
    ctx.gpr[30] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    goto L_08AB6544;
L_08AB6544:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6560;
      }
      goto L_08AB654C;
    }
L_08AB654C:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_08AB6570;
      }
      goto L_08AB6560;
    }
L_08AB6560:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(9)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    goto L_08AB6570;
L_08AB6570:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6580u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AB5BE4;
L_08AB6580:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AB65A0;
      }
      goto L_08AB658C;
    }
L_08AB658C:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AB65A0;
      }
      goto L_08AB6594;
    }
L_08AB6594:
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08AB65A0;
L_08AB65A0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB65E4;
      }
      goto L_08AB65A8;
    }
L_08AB65A8:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB65E4;
      }
      goto L_08AB65C4;
    }
L_08AB65C4:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 10u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08AB65E4;
    }
    goto L_08AB65E4;
L_08AB65E4:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB6604;
      }
      goto L_08AB65F0;
    }
L_08AB65F0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB6604;
      }
      goto L_08AB6600;
    }
L_08AB6600:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08AB6604;
L_08AB6604:
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_08AB6620;
      }
      goto L_08AB6610;
    }
L_08AB6610:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB6620;
      }
      goto L_08AB6618;
    }
L_08AB6618:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB662C;
      }
      goto L_08AB6620;
    }
L_08AB6620:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AB662C;
      }
      goto L_08AB6628;
    }
L_08AB6628:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08AB662C;
L_08AB662C:
    if (ctx.gpr[17] != ctx.gpr[21]) {
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_08AB663C;
    }
    goto L_08AB6634;
L_08AB6634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 127u);
      if (branch_taken) {
          goto L_08AB6648;
      }
      goto L_08AB663C;
    }
L_08AB663C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AB6648;
L_08AB6648:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB6950;
      }
      goto L_08AB6650;
    }
L_08AB6650:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AB666Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB666Cu) goto L_08AB666C;
    return;
L_08AB666C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB6950;
      }
      goto L_08AB667C;
    }
L_08AB667C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-101));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(48) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB67F0;
      }
      goto L_08AB66A0;
    }
L_08AB66A0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17360)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB66B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB67F0;
      }
      goto L_08AB66DC;
    }
L_08AB66DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[23]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB67F0;
      }
      goto L_08AB66FC;
    }
L_08AB66FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB67F0;
      }
      goto L_08AB6720;
    }
L_08AB6720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[23]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB67F0;
      }
      goto L_08AB6740;
    }
L_08AB6740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB67F0;
      }
      goto L_08AB675C;
    }
L_08AB675C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB67F0;
      }
      goto L_08AB6778;
    }
L_08AB6778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[23]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB67F0;
      }
      goto L_08AB6798;
    }
L_08AB6798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB67F0;
      }
      goto L_08AB67B4;
    }
L_08AB67B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB67F0;
      }
      goto L_08AB67BC;
    }
L_08AB67BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB67F0;
      }
      goto L_08AB67D8;
    }
L_08AB67D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08AB67F0;
L_08AB67F0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6860;
      }
      goto L_08AB6800;
    }
L_08AB6800:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17168)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AB6824u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08AB6824u) goto L_08AB6824;
    return;
L_08AB6824:
    ctx.gpr[4] = (ctx.gpr[2] << 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6870;
      }
      goto L_08AB6830;
    }
L_08AB6830:
    ctx.gpr[4] = (0u | 8819u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6870;
      }
      goto L_08AB683C;
    }
L_08AB683C:
    ctx.gpr[4] = (0u | 13500u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6870;
      }
      goto L_08AB6848;
    }
L_08AB6848:
    ctx.gpr[4] = (0u | 8000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6870;
      }
      goto L_08AB6854;
    }
L_08AB6854:
    ctx.gpr[4] = (0u | 6000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6870;
      }
      goto L_08AB6860;
    }
L_08AB6860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AB686Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08AB686Cu) goto L_08AB686C;
    return;
L_08AB686C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08AB6870;
L_08AB6870:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6884u);
    ctx.gpr[5] = (ctx.gpr[30] >> 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08AB6884u) goto L_08AB6884;
    return;
L_08AB6884:
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(27344), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 255 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08AB68B4;
      }
      goto L_08AB68AC;
    }
L_08AB68AC:
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(27344), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AB68B4;
L_08AB68B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB68F8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB68F8u) goto L_08AB68F8;
    return;
L_08AB68F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08AB6920;
      }
      goto L_08AB6904;
    }
L_08AB6904:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AB6914u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6914u) goto L_08AB6914;
    return;
L_08AB6914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08AB6934;
      }
      goto L_08AB6920;
    }
L_08AB6920:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB692Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08AB692Cu) goto L_08AB692C;
    return;
L_08AB692C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6950;
      }
      goto L_08AB6934;
    }
L_08AB6934:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AB6950;
      }
      goto L_08AB693C;
    }
L_08AB693C:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AB6950;
      }
      goto L_08AB6944;
    }
L_08AB6944:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6950u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6950u) goto L_08AB6950;
    return;
L_08AB6950:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6544;
      }
      goto L_08AB6964;
    }
L_08AB6964:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB69AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27092)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27088)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(27096), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[5] = (16014u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[13] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(27104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(27100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (17571u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[8] | 57344u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[9] = (50257u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27264), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[10] = (16755u << 16u);
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 49152u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27108), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[2] = (17520u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 13107u);
    ctx.gpr[22] = (ctx.gpr[11] + static_cast<std::uint32_t>(27264));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(27112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[3] = (50052u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 16384u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[12] = (16853u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 32768u);
    ctx.gpr[14] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[24] = (17511u << 16u);
    ctx.gpr[12] = (ctx.gpr[12] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[12]);
    ctx.gpr[24] = (ctx.gpr[24] | 49152u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[24]);
    ctx.gpr[25] = (16547u << 16u);
    ctx.gpr[16] = (50053u << 16u);
    ctx.gpr[13] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[7] = (17538u << 16u);
    ctx.gpr[17] = (16665u << 16u);
    ctx.gpr[5] = (ctx.gpr[25] | 13107u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] | 8192u);
    ctx.gpr[25] = (ctx.gpr[17] | 39322u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[18] = (17172u << 16u);
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[19] = (17567u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[25]);
    ctx.gpr[19] = (ctx.gpr[19] | 57344u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[20] = (16753u << 16u);
    ctx.gpr[21] = (50250u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(64));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[20] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6B60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB6B74u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 192u, 0x0883CF88u>(ctx, &aot_mem) && ctx.pc == 0x08AB6B74u) goto L_08AB6B74;
    return;
L_08AB6B74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12828));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(496), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6BEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB6C34;
      }
      goto L_08AB6C08;
    }
L_08AB6C08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12828));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB6C20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 211u, 0x0883D22Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6C20u) goto L_08AB6C20;
    return;
L_08AB6C20:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6C34;
      }
      goto L_08AB6C2C;
    }
L_08AB6C2C:
    ctx.gpr[31] = (0x08AB6C34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 242u, 0x0883D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08AB6C34u) goto L_08AB6C34;
    return;
L_08AB6C34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6C48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB6C5Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 598u, 0x08A2EC58u>(ctx, &aot_mem) && ctx.pc == 0x08AB6C5Cu) goto L_08AB6C5C;
    return;
L_08AB6C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB6CB4;
      }
      goto L_08AB6C70;
    }
L_08AB6C70:
    ctx.gpr[31] = (0x08AB6C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 305u, 0x088656B0u>(ctx, &aot_mem) && ctx.pc == 0x08AB6C78u) goto L_08AB6C78;
    return;
L_08AB6C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27512)));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27512)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AB6CB4;
L_08AB6CB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6CC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6CCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB6D14;
      }
      goto L_08AB6CEC;
    }
L_08AB6CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6D14;
      }
      goto L_08AB6CF8;
    }
L_08AB6CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6D30;
      }
      goto L_08AB6D14;
    }
L_08AB6D14:
    ctx.gpr[31] = (0x08AB6D1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 230u, 0x08A0DCCCu>(ctx, &aot_mem) && ctx.pc == 0x08AB6D1Cu) goto L_08AB6D1C;
    return;
L_08AB6D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6D50;
      }
      goto L_08AB6D28;
    }
L_08AB6D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6E8C;
      }
      goto L_08AB6D30;
    }
L_08AB6D30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6F4C;
      }
      goto L_08AB6D50;
    }
L_08AB6D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB6E08;
      }
      goto L_08AB6D5C;
    }
L_08AB6D5C:
    ctx.gpr[31] = (0x08AB6D64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 762u, 0x08A2F8E8u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D64u) goto L_08AB6D64;
    return;
L_08AB6D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    ctx.gpr[31] = (0x08AB6D70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 267u, 0x08A4D208u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D70u) goto L_08AB6D70;
    return;
L_08AB6D70:
    ctx.gpr[31] = (0x08AB6D78u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x08AB6D78u) goto L_08AB6D78;
    return;
L_08AB6D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[18] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB6DA4;
      }
      goto L_08AB6D8C;
    }
L_08AB6D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08AB6DA8;
    }
    goto L_08AB6D9C;
L_08AB6D9C:
    ctx.gpr[31] = (0x08AB6DA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AB6DA4u) goto L_08AB6DA4;
    return;
L_08AB6DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08AB6DA8;
L_08AB6DA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AB6DC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08AB6DC0u) goto L_08AB6DC0;
    return;
L_08AB6DC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6DCCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6DCCu) goto L_08AB6DCC;
    return;
L_08AB6DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6DF0;
      }
      goto L_08AB6DDC;
    }
L_08AB6DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6DF0;
      }
      goto L_08AB6DE8;
    }
L_08AB6DE8:
    ctx.gpr[31] = (0x08AB6DF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AB6DF0u) goto L_08AB6DF0;
    return;
L_08AB6DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB6F4C;
      }
      goto L_08AB6E08;
    }
L_08AB6E08:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    ctx.gpr[31] = (0x08AB6E14u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08AB6E14u) goto L_08AB6E14;
    return;
L_08AB6E14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
      if (branch_taken) {
          goto L_08AB6E34;
      }
      goto L_08AB6E1C;
    }
L_08AB6E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
        goto L_08AB6E38;
    }
    goto L_08AB6E2C;
L_08AB6E2C:
    ctx.gpr[31] = (0x08AB6E34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AB6E34u) goto L_08AB6E34;
    return;
L_08AB6E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_08AB6E38;
L_08AB6E38:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08AB6E54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08AB6E54u) goto L_08AB6E54;
    return;
L_08AB6E54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6E60u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6E60u) goto L_08AB6E60;
    return;
L_08AB6E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6E84;
      }
      goto L_08AB6E70;
    }
L_08AB6E70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6E84;
      }
      goto L_08AB6E7C;
    }
L_08AB6E7C:
    ctx.gpr[31] = (0x08AB6E84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AB6E84u) goto L_08AB6E84;
    return;
L_08AB6E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6F4C;
      }
      goto L_08AB6E8C;
    }
L_08AB6E8C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08AB6ECC;
      }
      goto L_08AB6EAC;
    }
L_08AB6EAC:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB6EE8;
      }
      goto L_08AB6ECC;
    }
L_08AB6ECC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08AB6EE8;
L_08AB6EE8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(528));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB6F14u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB6F14u) goto L_08AB6F14;
    return;
L_08AB6F14:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AB6F4C;
L_08AB6F4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB6F64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB70A0;
      }
      goto L_08AB6F84;
    }
L_08AB6F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08AB7024;
      }
      goto L_08AB6F90;
    }
L_08AB6F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(500)));
    ctx.gpr[31] = (0x08AB6F9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 267u, 0x08A4D208u>(ctx, &aot_mem) && ctx.pc == 0x08AB6F9Cu) goto L_08AB6F9C;
    return;
L_08AB6F9C:
    ctx.gpr[31] = (0x08AB6FA4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x08AB6FA4u) goto L_08AB6FA4;
    return;
L_08AB6FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[18] = (ctx.gpr[4] << 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB6FD0;
      }
      goto L_08AB6FB8;
    }
L_08AB6FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
        goto L_08AB6FD4;
    }
    goto L_08AB6FC8;
L_08AB6FC8:
    ctx.gpr[31] = (0x08AB6FD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AB6FD0u) goto L_08AB6FD0;
    return;
L_08AB6FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    goto L_08AB6FD4;
L_08AB6FD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08AB6FECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08AB6FECu) goto L_08AB6FEC;
    return;
L_08AB6FEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB6FF8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08AB6FF8u) goto L_08AB6FF8;
    return;
L_08AB6FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB701C;
      }
      goto L_08AB7008;
    }
L_08AB7008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB701C;
      }
      goto L_08AB7014;
    }
L_08AB7014:
    ctx.gpr[31] = (0x08AB701Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AB701Cu) goto L_08AB701C;
    return;
L_08AB701C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB70A0;
      }
      goto L_08AB7024;
    }
L_08AB7024:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(496)));
    ctx.gpr[31] = (0x08AB7030u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08AB7030u) goto L_08AB7030;
    return;
L_08AB7030:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), 0u);
      if (branch_taken) {
          goto L_08AB7050;
      }
      goto L_08AB7038;
    }
L_08AB7038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AB7054;
    }
    goto L_08AB7048;
L_08AB7048:
    ctx.gpr[31] = (0x08AB7050u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AB7050u) goto L_08AB7050;
    return;
L_08AB7050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AB7054;
L_08AB7054:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x08AB7070u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08AB7070u) goto L_08AB7070;
    return;
L_08AB7070:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB707Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08AB707Cu) goto L_08AB707C;
    return;
L_08AB707C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB70A0;
      }
      goto L_08AB708C;
    }
L_08AB708C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB70A0;
      }
      goto L_08AB7098;
    }
L_08AB7098:
    ctx.gpr[31] = (0x08AB70A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AB70A0u) goto L_08AB70A0;
    return;
L_08AB70A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB70BC;
      }
      goto L_08AB70B4;
    }
L_08AB70B4:
    ctx.gpr[31] = (0x08AB70BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 762u, 0x08A2F8E8u>(ctx, &aot_mem) && ctx.pc == 0x08AB70BCu) goto L_08AB70BC;
    return;
L_08AB70BC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08AB7118u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7118u) goto L_08AB7118;
    return;
L_08AB7118:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7130:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27364)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27360)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27392)));
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[9] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27368), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(27388)));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(27396), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(27404), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[13] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[24] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27376), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(27372), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(27380), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(27384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(27400), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(27408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB71F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    ctx.gpr[2] = (0u | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7224:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7238u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 534u, 0x088A7624u>(ctx, &aot_mem) && ctx.pc == 0x08AB7238u) goto L_08AB7238;
    return;
L_08AB7238:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7258u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 475u, 0x088ADE68u>(ctx, &aot_mem) && ctx.pc == 0x08AB7258u) goto L_08AB7258;
    return;
L_08AB7258:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7264:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7278u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AB7278u) goto L_08AB7278;
    return;
L_08AB7278:
    ctx.gpr[31] = (0x08AB7280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 568u, 0x089C66D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7280u) goto L_08AB7280;
    return;
L_08AB7280:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AB728Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17088));
    goto L_08AB71F8;
L_08AB728C:
    ctx.gpr[4] = (0u | 258u);
    ctx.gpr[31] = (0x08AB7298u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7298u) goto L_08AB7298;
    return;
L_08AB7298:
    ctx.gpr[4] = (0u | 264u);
    ctx.gpr[31] = (0x08AB72A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB72A4u) goto L_08AB72A4;
    return;
L_08AB72A4:
    ctx.gpr[4] = (0u | 269u);
    ctx.gpr[31] = (0x08AB72B0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB72B0u) goto L_08AB72B0;
    return;
L_08AB72B0:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[31] = (0x08AB72BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB72BCu) goto L_08AB72BC;
    return;
L_08AB72BC:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[31] = (0x08AB72C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB72C8u) goto L_08AB72C8;
    return;
L_08AB72C8:
    ctx.gpr[4] = (0u | 272u);
    ctx.gpr[31] = (0x08AB72D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB72D4u) goto L_08AB72D4;
    return;
L_08AB72D4:
    ctx.gpr[4] = (0u | 273u);
    ctx.gpr[31] = (0x08AB72E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB72E0u) goto L_08AB72E0;
    return;
L_08AB72E0:
    ctx.gpr[4] = (0u | 274u);
    ctx.gpr[31] = (0x08AB72ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB72ECu) goto L_08AB72EC;
    return;
L_08AB72EC:
    ctx.gpr[4] = (0u | 277u);
    ctx.gpr[31] = (0x08AB72F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB72F8u) goto L_08AB72F8;
    return;
L_08AB72F8:
    ctx.gpr[4] = (0u | 281u);
    ctx.gpr[31] = (0x08AB7304u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7304u) goto L_08AB7304;
    return;
L_08AB7304:
    ctx.gpr[4] = (0u | 276u);
    ctx.gpr[31] = (0x08AB7310u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7310u) goto L_08AB7310;
    return;
L_08AB7310:
    ctx.gpr[4] = (0u | 287u);
    ctx.gpr[31] = (0x08AB731Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB731Cu) goto L_08AB731C;
    return;
L_08AB731C:
    ctx.gpr[4] = (0u | 290u);
    ctx.gpr[31] = (0x08AB7328u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7328u) goto L_08AB7328;
    return;
L_08AB7328:
    ctx.gpr[4] = (0u | 285u);
    ctx.gpr[31] = (0x08AB7334u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7334u) goto L_08AB7334;
    return;
L_08AB7334:
    ctx.gpr[4] = (0u | 291u);
    ctx.gpr[31] = (0x08AB7340u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7340u) goto L_08AB7340;
    return;
L_08AB7340:
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB7354u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7354u) goto L_08AB7354;
    return;
L_08AB7354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB7364u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7364u) goto L_08AB7364;
    return;
L_08AB7364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB7374u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(294)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7374u) goto L_08AB7374;
    return;
L_08AB7374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB7384u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7384u) goto L_08AB7384;
    return;
L_08AB7384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB7394u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(274)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7394u) goto L_08AB7394;
    return;
L_08AB7394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB73A4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(276)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB73A4u) goto L_08AB73A4;
    return;
L_08AB73A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB73B4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(278)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB73B4u) goto L_08AB73B4;
    return;
L_08AB73B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB73C4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB73C4u) goto L_08AB73C4;
    return;
L_08AB73C4:
    ctx.gpr[31] = (0x08AB73CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AB73CCu) goto L_08AB73CC;
    return;
L_08AB73CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB73DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB740Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17056));
    goto L_08AB71F8;
L_08AB740C:
    ctx.gpr[31] = (0x08AB7414u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 638u, 0x08942E88u>(ctx, &aot_mem) && ctx.pc == 0x08AB7414u) goto L_08AB7414;
    return;
L_08AB7414:
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB7430u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 647u, 0x08942F70u>(ctx, &aot_mem) && ctx.pc == 0x08AB7430u) goto L_08AB7430;
    return;
L_08AB7430:
    ctx.gpr[31] = (0x08AB7438u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 611u, 0x089C6978u>(ctx, &aot_mem) && ctx.pc == 0x08AB7438u) goto L_08AB7438;
    return;
L_08AB7438:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AB7488;
      }
      goto L_08AB7458;
    }
L_08AB7458:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08AB7468u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08AB7468u) goto L_08AB7468;
    return;
L_08AB7468:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08AB7474u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x08AB7474u) goto L_08AB7474;
    return;
L_08AB7474:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08AB7488;
L_08AB7488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27460)));
    ctx.gpr[31] = (0x08AB74B0u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 271u, 0x089A5330u>(ctx, &aot_mem) && ctx.pc == 0x08AB74B0u) goto L_08AB74B0;
    return;
L_08AB74B0:
    ctx.gpr[31] = (0x08AB74B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 649u, 0x08942FACu>(ctx, &aot_mem) && ctx.pc == 0x08AB74B8u) goto L_08AB74B8;
    return;
L_08AB74B8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27456)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(744)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18892));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB74ECu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AB74ECu) goto L_08AB74EC;
    return;
L_08AB74EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB74F8;
      }
      goto L_08AB74F4;
    }
L_08AB74F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    goto L_08AB74F8;
L_08AB74F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AB7510u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB7510u) goto L_08AB7510;
    return;
L_08AB7510:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AB7534u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB7534u) goto L_08AB7534;
    return;
L_08AB7534:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(744), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7544u);
    ctx.gpr[4] = (0u | 224u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AB7544u) goto L_08AB7544;
    return;
L_08AB7544:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB755C;
      }
      goto L_08AB7550;
    }
L_08AB7550:
    ctx.gpr[31] = (0x08AB7558u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 45u, 0x08A3444Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7558u) goto L_08AB7558;
    return;
L_08AB7558:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08AB755C;
L_08AB755C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AB7574u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB7574u) goto L_08AB7574;
    return;
L_08AB7574:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08AB7588u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 75u, 0x089C052Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7588u) goto L_08AB7588;
    return;
L_08AB7588:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB7594u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 429u, 0x08A5A3FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7594u) goto L_08AB7594;
    return;
L_08AB7594:
    ctx.gpr[31] = (0x08AB759Cu);
    ctx.gpr[4] = (0u | 224u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AB759Cu) goto L_08AB759C;
    return;
L_08AB759C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB75B0;
      }
      goto L_08AB75A8;
    }
L_08AB75A8:
    ctx.gpr[31] = (0x08AB75B0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 8u, 0x0898006Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB75B0u) goto L_08AB75B0;
    return;
L_08AB75B0:
    ctx.gpr[31] = (0x08AB75B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB75B8u) goto L_08AB75B8;
    return;
L_08AB75B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AB75CCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08AB75CCu) goto L_08AB75CC;
    return;
L_08AB75CC:
    ctx.gpr[31] = (0x08AB75D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB75D4u) goto L_08AB75D4;
    return;
L_08AB75D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (0u | 999u);
    ctx.gpr[31] = (0x08AB75E8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08AB75E8u) goto L_08AB75E8;
    return;
L_08AB75E8:
    ctx.gpr[31] = (0x08AB75F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB75F0u) goto L_08AB75F0;
    return;
L_08AB75F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AB75FCu);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08AB75FCu) goto L_08AB75FC;
    return;
L_08AB75FC:
    ctx.gpr[31] = (0x08AB7604u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 647u, 0x08942F70u>(ctx, &aot_mem) && ctx.pc == 0x08AB7604u) goto L_08AB7604;
    return;
L_08AB7604:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7664u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 568u, 0x089C66D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7664u) goto L_08AB7664;
    return;
L_08AB7664:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7670u);
    ctx.gpr[5] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7670u) goto L_08AB7670;
    return;
L_08AB7670:
    ctx.gpr[31] = (0x08AB7678u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AB7678u) goto L_08AB7678;
    return;
L_08AB7678:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7688u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28F64u>(ctx, &aot_mem) && ctx.pc == 0x08AB7688u) goto L_08AB7688;
    return;
L_08AB7688:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB76DC;
      }
      goto L_08AB7690;
    }
L_08AB7690:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AB769Cu);
    ctx.gpr[4] = (0u | 1472u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB769Cu) goto L_08AB769C;
    return;
L_08AB769C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AB76B8;
      }
      goto L_08AB76A8;
    }
L_08AB76A8:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB76B4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 577u, 0x08A379F0u>(ctx, &aot_mem) && ctx.pc == 0x08AB76B4u) goto L_08AB76B4;
    return;
L_08AB76B4:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    goto L_08AB76B8;
L_08AB76B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AB7768;
      }
      goto L_08AB76DC;
    }
L_08AB76DC:
    ctx.gpr[31] = (0x08AB76E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 136u, 0x08A28ED0u>(ctx, &aot_mem) && ctx.pc == 0x08AB76E4u) goto L_08AB76E4;
    return;
L_08AB76E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB772C;
      }
      goto L_08AB76EC;
    }
L_08AB76EC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08AB76F8u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB76F8u) goto L_08AB76F8;
    return;
L_08AB76F8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AB7714;
      }
      goto L_08AB7704;
    }
L_08AB7704:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7710u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08AB7710u) goto L_08AB7710;
    return;
L_08AB7710:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08AB7714;
L_08AB7714:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AB7768;
      }
      goto L_08AB772C;
    }
L_08AB772C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7738u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7738u) goto L_08AB7738;
    return;
L_08AB7738:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AB7754;
      }
      goto L_08AB7744;
    }
L_08AB7744:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7750u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08AB7750u) goto L_08AB7750;
    return;
L_08AB7750:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08AB7754;
L_08AB7754:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08AB7768;
L_08AB7768:
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB7790;
      }
      goto L_08AB7780;
    }
L_08AB7780:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AB778Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08AB778Cu) goto L_08AB778C;
    return;
L_08AB778C:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AB7790;
L_08AB7790:
    ctx.gpr[31] = (0x08AB7798u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x08AB7798u) goto L_08AB7798;
    return;
L_08AB7798:
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x08AB77D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x08AB77D8u) goto L_08AB77D8;
    return;
L_08AB77D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08AB7800u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7800u) goto L_08AB7800;
    return;
L_08AB7800:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16656u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x08AB784Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 282u, 0x08871B18u>(ctx, &aot_mem) && ctx.pc == 0x08AB784Cu) goto L_08AB784C;
    return;
L_08AB784C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(599))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB786Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB786Cu) goto L_08AB786C;
    return;
L_08AB786C:
    ctx.gpr[31] = (0x08AB7874u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28F64u>(ctx, &aot_mem) && ctx.pc == 0x08AB7874u) goto L_08AB7874;
    return;
L_08AB7874:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB78A8;
      }
      goto L_08AB787C;
    }
L_08AB787C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7888u);
    ctx.gpr[4] = (0u | 240u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AB7888u) goto L_08AB7888;
    return;
L_08AB7888:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB78A0;
      }
      goto L_08AB7894;
    }
L_08AB7894:
    ctx.gpr[31] = (0x08AB789Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 396u, 0x089DA078u>(ctx, &aot_mem) && ctx.pc == 0x08AB789Cu) goto L_08AB789C;
    return;
L_08AB789C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AB78A0;
L_08AB78A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AB78D0;
      }
      goto L_08AB78A8;
    }
L_08AB78A8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AB78B4u);
    ctx.gpr[4] = (0u | 364u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AB78B4u) goto L_08AB78B4;
    return;
L_08AB78B4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB78CC;
      }
      goto L_08AB78C0;
    }
L_08AB78C0:
    ctx.gpr[31] = (0x08AB78C8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 260u, 0x08ABD8B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB78C8u) goto L_08AB78C8;
    return;
L_08AB78C8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AB78CC;
L_08AB78CC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08AB78D0;
L_08AB78D0:
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
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27420)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27416)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27444)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27424), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27432), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27428), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[13] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(27436), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[12] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[13] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB79A8u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(27448), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 446u, 0x088A7018u>(ctx, &aot_mem) && ctx.pc == 0x08AB79A8u) goto L_08AB79A8;
    return;
L_08AB79A8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AB79B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27464));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08AB79B4u) goto L_08AB79B4;
    return;
L_08AB79B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB79C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
        goto L_08AB7A1C;
    }
    goto L_08AB79F0;
L_08AB79F0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AB79FCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AB79FCu) goto L_08AB79FC;
    return;
L_08AB79FC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7A14;
      }
      goto L_08AB7A08;
    }
L_08AB7A08:
    ctx.gpr[31] = (0x08AB7A10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7A10u) goto L_08AB7A10;
    return;
L_08AB7A10:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AB7A14;
L_08AB7A14:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    goto L_08AB7A1C;
L_08AB7A1C:
    ctx.gpr[31] = (0x08AB7A24u);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AB7A24u) goto L_08AB7A24;
    return;
L_08AB7A24:
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(6), ctx.gpr[5]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[19] + static_cast<std::uint32_t>(7), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[19] + static_cast<std::uint32_t>(10), ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7A48u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 256u, 0x0887966Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7A48u) goto L_08AB7A48;
    return;
L_08AB7A48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7A64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[16]);
    ctx.gpr[6] = (11u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7A94u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(181));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 575u, 0x08ACE8B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7A94u) goto L_08AB7A94;
    return;
L_08AB7A94:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AB7AA8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08AB7AA8u) goto L_08AB7AA8;
    return;
L_08AB7AA8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7AB8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08AB7AB8u) goto L_08AB7AB8;
    return;
L_08AB7AB8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08AB7ACCu);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08AB7ACCu) goto L_08AB7ACC;
    return;
L_08AB7ACC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB7ADCu);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7ADCu) goto L_08AB7ADC;
    return;
L_08AB7ADC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-5972)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[16]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[16]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(43));
    ctx.gpr[31] = (0x08AB7B14u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7B14u) goto L_08AB7B14;
    return;
L_08AB7B14:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7B28u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 644u, 0x088A7DA8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7B28u) goto L_08AB7B28;
    return;
L_08AB7B28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7B48;
      }
      goto L_08AB7B30;
    }
L_08AB7B30:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(300), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(300))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7B48u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AB79C0;
L_08AB7B48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB7B58u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A878Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7B58u) goto L_08AB7B58;
    return;
L_08AB7B58:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7B7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7B94u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16892));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 412u, 0x08A4B4E8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7B94u) goto L_08AB7B94;
    return;
L_08AB7B94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7BD0;
      }
      goto L_08AB7BA0;
    }
L_08AB7BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB7BD0;
      }
      goto L_08AB7BB0;
    }
L_08AB7BB0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08AB7BC8u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7BC8u) goto L_08AB7BC8;
    return;
L_08AB7BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7BD4;
      }
      goto L_08AB7BD0;
    }
L_08AB7BD0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB7BD4;
L_08AB7BD4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7BE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7C00u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 97u, 0x0890C828u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C00u) goto L_08AB7C00;
    return;
L_08AB7C00:
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7C14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16892));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 409u, 0x08A4B4B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C14u) goto L_08AB7C14;
    return;
L_08AB7C14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7C20u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 34u, 0x0890C354u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C20u) goto L_08AB7C20;
    return;
L_08AB7C20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7C34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7C6Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 575u, 0x08ACE8B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C6Cu) goto L_08AB7C6C;
    return;
L_08AB7C6C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7C7Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C7Cu) goto L_08AB7C7C;
    return;
L_08AB7C7C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7C8Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C8Cu) goto L_08AB7C8C;
    return;
L_08AB7C8C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AB7C9Cu);
    ctx.gpr[4] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AB7C9Cu) goto L_08AB7C9C;
    return;
L_08AB7C9C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AB7CD8;
      }
      goto L_08AB7CA8;
    }
L_08AB7CA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7CB4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7CB4u) goto L_08AB7CB4;
    return;
L_08AB7CB4:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AB7CD0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 621u, 0x08936B70u>(ctx, &aot_mem) && ctx.pc == 0x08AB7CD0u) goto L_08AB7CD0;
    return;
L_08AB7CD0:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB7CD8;
L_08AB7CD8:
    ctx.gpr[31] = (0x08AB7CE0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AB7BE0;
L_08AB7CE0:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7D0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7D34u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB7B7C;
L_08AB7D34:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7D84;
      }
      goto L_08AB7D40;
    }
L_08AB7D40:
    ctx.gpr[31] = (0x08AB7D48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08AB7D48u) goto L_08AB7D48;
    return;
L_08AB7D48:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_08AB7D8C;
      }
      goto L_08AB7D54;
    }
L_08AB7D54:
    ctx.gpr[31] = (0x08AB7D5Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 688u, 0x0893711Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7D5Cu) goto L_08AB7D5C;
    return;
L_08AB7D5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB7D68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08AB7D68u) goto L_08AB7D68;
    return;
L_08AB7D68:
    ctx.gpr[31] = (0x08AB7D70u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 688u, 0x0893711Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7D70u) goto L_08AB7D70;
    return;
L_08AB7D70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AB7D7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08AB7D7Cu) goto L_08AB7D7C;
    return;
L_08AB7D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB7DD0;
      }
      goto L_08AB7D84;
    }
L_08AB7D84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB7DD0;
      }
      goto L_08AB7D8C;
    }
L_08AB7D8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7D98u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08AB7D98u) goto L_08AB7D98;
    return;
L_08AB7D98:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7DA8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08AB7DA8u) goto L_08AB7DA8;
    return;
L_08AB7DA8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7DB8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7DB8u) goto L_08AB7DB8;
    return;
L_08AB7DB8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AB7DCCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 681u, 0x08936F94u>(ctx, &aot_mem) && ctx.pc == 0x08AB7DCCu) goto L_08AB7DCC;
    return;
L_08AB7DCC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB7DD0;
L_08AB7DD0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7DF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7E14u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB7B7C;
L_08AB7E14:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7EA8;
      }
      goto L_08AB7E20;
    }
L_08AB7E20:
    ctx.gpr[31] = (0x08AB7E28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08AB7E28u) goto L_08AB7E28;
    return;
L_08AB7E28:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7E8C;
      }
      goto L_08AB7E34;
    }
L_08AB7E34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AB7E44u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08AB7E44u) goto L_08AB7E44;
    return;
L_08AB7E44:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AB7E54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08AB7E54u) goto L_08AB7E54;
    return;
L_08AB7E54:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7E64u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08AB7E64u) goto L_08AB7E64;
    return;
L_08AB7E64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB7E70u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 672u, 0x08936EE4u>(ctx, &aot_mem) && ctx.pc == 0x08AB7E70u) goto L_08AB7E70;
    return;
L_08AB7E70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AB7EB0;
      }
      goto L_08AB7E84;
    }
L_08AB7E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7EBC;
      }
      goto L_08AB7E8C;
    }
L_08AB7E8C:
    ctx.gpr[31] = (0x08AB7E94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 677u, 0x08936F48u>(ctx, &aot_mem) && ctx.pc == 0x08AB7E94u) goto L_08AB7E94;
    return;
L_08AB7E94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AB7EA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7EA0u) goto L_08AB7EA0;
    return;
L_08AB7EA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AB7EC0;
      }
      goto L_08AB7EA8;
    }
L_08AB7EA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB7EC0;
      }
      goto L_08AB7EB0;
    }
L_08AB7EB0:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7EBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB7EBCu) goto L_08AB7EBC;
    return;
L_08AB7EBC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB7EC0;
L_08AB7EC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7ED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7EFCu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB7B7C;
L_08AB7EFC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB7F88;
      }
      goto L_08AB7F08;
    }
L_08AB7F08:
    ctx.gpr[31] = (0x08AB7F10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08AB7F10u) goto L_08AB7F10;
    return;
L_08AB7F10:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_08AB7F58;
      }
      goto L_08AB7F1C;
    }
L_08AB7F1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7F28u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7F28u) goto L_08AB7F28;
    return;
L_08AB7F28:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB7F38u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08AB7F38u) goto L_08AB7F38;
    return;
L_08AB7F38:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16395u << 16u);
      if (branch_taken) {
          goto L_08AB7F90;
      }
      goto L_08AB7F50;
    }
L_08AB7F50:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AB7FA0;
      }
      goto L_08AB7F58;
    }
L_08AB7F58:
    ctx.gpr[31] = (0x08AB7F60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 696u, 0x089371DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7F60u) goto L_08AB7F60;
    return;
L_08AB7F60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AB7F6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08AB7F6Cu) goto L_08AB7F6C;
    return;
L_08AB7F6C:
    ctx.gpr[31] = (0x08AB7F74u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 696u, 0x089371DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB7F74u) goto L_08AB7F74;
    return;
L_08AB7F74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AB7F80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08AB7F80u) goto L_08AB7F80;
    return;
L_08AB7F80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AB7FB0;
      }
      goto L_08AB7F88;
    }
L_08AB7F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB7FB0;
      }
      goto L_08AB7F90;
    }
L_08AB7F90:
    ctx.gpr[4] = (ctx.gpr[4] | 8548u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AB7FA0;
L_08AB7FA0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB7FACu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 692u, 0x08937168u>(ctx, &aot_mem) && ctx.pc == 0x08AB7FACu) goto L_08AB7FAC;
    return;
L_08AB7FAC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB7FB0;
L_08AB7FB0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB7FCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB7FF0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB7B7C;
L_08AB7FF0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 3u, 0x08AB8018u>(ctx, &aot_mem); return;
      }
      goto L_08AB7FFC;
    }
L_08AB7FFC:
    ctx.gpr[31] = (0x08AB8004u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0172(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0172_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_172(Runtime &runtime) {
    runtime.register_generated_unit(172u, 0x08AB4000u, 16384u, &recomp_unit_0172, &recomp_unit_0172_entry);
    runtime.register_function(0x08AB4004u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4014u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4094u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB40D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4118u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4124u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4154u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4160u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB418Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB41FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4220u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4228u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4238u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4240u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4244u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4288u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB429Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB42BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4308u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4334u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4378u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB43E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4448u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4458u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4464u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB45D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4740u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4764u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4768u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4770u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB477Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4784u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4790u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB479Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB47DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4808u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4810u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4818u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4870u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4884u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB48F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4900u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB490Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4918u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4924u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4928u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB492Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4934u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4968u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB49D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB49DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB49F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4A70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4B9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4E88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4EBCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4F9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB4FF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5014u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5020u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB503Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5048u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5064u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5070u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB508Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5098u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB50E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5108u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB511Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5130u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5160u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5170u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5184u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5198u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB51FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5210u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5224u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5254u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5264u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5278u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5288u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB52ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5300u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5310u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5318u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5320u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5328u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5330u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB533Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5344u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5350u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5358u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5368u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5378u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5388u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB53D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5400u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB540Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5418u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5424u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5430u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB543Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5448u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5454u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5460u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB546Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5478u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5484u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5498u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB54F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5500u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB550Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5518u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5524u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5530u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB553Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5550u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5560u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB558Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB559Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB55F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5618u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5628u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5638u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5640u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5648u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5650u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5670u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5688u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5690u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB56F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB572Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5734u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5744u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB574Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5788u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5794u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB57D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5828u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5844u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB586Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5878u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5880u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5888u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB588Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB58FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB590Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5924u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5938u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5944u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB594Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5950u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB597Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB59FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A40u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5A70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5ADCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5AF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5B94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5BF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5C9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5CF4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5D98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5DFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E04u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E18u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E3Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5E9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5EE4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F40u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5F9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB5FBCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6014u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6020u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB602Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6048u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6060u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6088u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB60F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB614Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6168u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6178u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6198u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB61C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6200u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB622Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB624Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6260u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6278u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB628Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB629Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB62F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6308u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6320u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6328u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6338u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6368u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB637Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6390u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB63F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6404u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6414u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6424u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB643Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6448u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6460u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6484u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6544u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB654Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6560u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6570u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6580u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB658Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6594u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB65F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6600u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6604u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6610u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6618u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6620u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6628u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB662Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6634u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB663Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6648u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6650u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB666Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB667Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB66A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB66B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB66DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB66FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6720u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6740u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB675Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6778u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6798u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB67F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6800u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6818u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6824u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6830u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB683Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6848u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6854u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6860u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB686Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6870u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6884u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB68F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6904u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6914u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6920u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB692Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6934u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB693Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6944u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6950u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6964u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB69ACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6B74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6BECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6C78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CC4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6CF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D78u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6D9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DDCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6DF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E2Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E54u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6E8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6EACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6ECCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6EE8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F4Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6F9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FA4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB6FF8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7008u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7014u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB701Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7024u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7030u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7038u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7048u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7050u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7054u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7070u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB707Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB708Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7098u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB70BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7118u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7130u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB71F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7224u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7238u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7244u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7258u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7264u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7278u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7280u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB728Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7298u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72BCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72E0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB72F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7304u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7310u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB731Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7328u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7334u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7340u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7354u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7364u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7374u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7384u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7394u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73A4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73C4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB73DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB740Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7414u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7430u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7438u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7458u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7468u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7474u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7488u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74F4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB74F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7510u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7534u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7544u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7550u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7558u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB755Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7574u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7588u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7594u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB759Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75B0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75D4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75E8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB75FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7604u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7624u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7664u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7670u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7678u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7688u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7690u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB769Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76B8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76DCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76E4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76ECu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB76F8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7704u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7710u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7714u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB772Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7738u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7744u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7750u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7754u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7768u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7780u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB778Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7790u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7798u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB77D8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7800u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB784Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB786Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7874u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB787Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7888u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7894u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB789Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78A0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78C8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78CCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB78D0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7904u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79A8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79B4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79C0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79F0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB79FCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A24u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7A94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7AB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7ACCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7ADCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B30u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7B94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BC8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BD4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7BE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C00u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7C9Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CB4u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CD8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7CE0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D0Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D40u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D48u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D54u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D5Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D68u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D7Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7D98u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DB8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DD0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7DF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E14u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E20u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E34u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E44u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E54u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E64u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E70u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E84u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E8Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7E94u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EA8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EBCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EC0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7ED8u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7EFCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F08u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F10u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F1Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F28u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F38u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F50u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F58u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F60u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F6Cu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F74u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F80u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F88u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7F90u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FA0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FACu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FB0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FCCu, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FF0u, &recomp_unit_0172, "recomp_unit_0172");
    runtime.register_function(0x08AB7FFCu, &recomp_unit_0172, "recomp_unit_0172");
}
} // namespace psprecomp
