#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0096[4091] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 5, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 10, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0,
    31, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39,
    0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0,
    47, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0,
    54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59,
    0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0,
    0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 0, 73,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0,
    0, 77, 0, 78, 0, 79, 0, 80, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94,
    0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123,
    0, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0,
    0, 0, 145, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 149, 0, 0, 0, 150, 151, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0,
    0, 161, 0, 0, 162, 163, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0,
    0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 177, 0, 0, 0, 178, 0, 0,
    0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0,
    0, 0, 186, 0, 187, 0, 188, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 192, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 0, 196,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0,
    0, 223, 224, 0, 225, 0, 0, 0, 226, 0, 0, 227, 228, 229, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 240, 0,
    0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248,
    0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253,
    0, 0, 0, 0, 254, 0, 0, 255, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 269, 0, 270, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0,
    0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 279, 0, 280, 0, 0, 281, 0, 0,
    0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0,
    0, 289, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 300, 0,
    0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306,
    0, 307, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 0, 328, 0, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 342, 0, 343, 0, 344, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 352, 0, 353, 0, 354, 0, 355,
    0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362,
    0, 363, 0, 364, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0,
    370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0,
    373, 0, 374, 0, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 393,
    0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0,
    0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0,
    0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0,
    0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423,
    0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442,
    0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 448, 0, 0,
    449, 0, 0, 450, 0, 451, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0,
    0, 0, 459, 0, 460, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 478, 0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0,
    0, 486, 0, 487, 0, 488, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0,
    0, 503, 0, 0, 504, 0, 505, 0, 0, 0, 0, 506, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0,
    0, 0, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 522, 0, 0, 523, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    524, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 527, 528, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 531,
    532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 535, 0, 0, 536, 537, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 549, 0, 0, 0, 0, 0,
    0, 550, 0, 551, 0, 0, 0, 0, 0, 552, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 558,
    0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 568, 569, 0, 0,
    0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 572, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0,
    576, 0, 0, 577, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0,
    0, 588, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 596,
    0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 599, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0,
    0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 608, 0,
    609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 618, 0, 619, 0, 620, 0, 621, 0,
    0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 630, 0, 0, 0,
    0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 643, 644, 0, 0, 0, 645, 0, 0, 646, 0, 0,
    647, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0,
    654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0,
    0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 670,
};
void recomp_unit_0096_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08984000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0096[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08984000;
    case 2u: goto L_089840C0;
    case 3u: goto L_089840CC;
    case 4u: goto L_08984114;
    case 5u: goto L_0898411C;
    case 6u: goto L_08984120;
    case 7u: goto L_08984138;
    case 8u: goto L_08984158;
    case 9u: goto L_0898416C;
    case 10u: goto L_08984178;
    case 11u: goto L_089841A4;
    case 12u: goto L_089841B0;
    case 13u: goto L_089841C4;
    case 14u: goto L_089841D4;
    case 15u: goto L_089841E8;
    case 16u: goto L_089841F0;
    case 17u: goto L_0898421C;
    case 18u: goto L_08984228;
    case 19u: goto L_08984300;
    case 20u: goto L_0898430C;
    case 21u: goto L_08984384;
    case 22u: goto L_08984390;
    case 23u: goto L_0898441C;
    case 24u: goto L_08984430;
    case 25u: goto L_0898443C;
    case 26u: goto L_089844A4;
    case 27u: goto L_089844B4;
    case 28u: goto L_089844C8;
    case 29u: goto L_089844DC;
    case 30u: goto L_089844EC;
    case 31u: goto L_08984500;
    case 32u: goto L_08984508;
    case 33u: goto L_0898451C;
    case 34u: goto L_08984524;
    case 35u: goto L_0898452C;
    case 36u: goto L_0898453C;
    case 37u: goto L_08984550;
    case 38u: goto L_0898455C;
    case 39u: goto L_0898457C;
    case 40u: goto L_0898458C;
    case 41u: goto L_0898459C;
    case 42u: goto L_089845AC;
    case 43u: goto L_089845BC;
    case 44u: goto L_089845D0;
    case 45u: goto L_089845E4;
    case 46u: goto L_089845F0;
    case 47u: goto L_08984600;
    case 48u: goto L_08984614;
    case 49u: goto L_08984624;
    case 50u: goto L_08984638;
    case 51u: goto L_08984648;
    case 52u: goto L_0898465C;
    case 53u: goto L_0898466C;
    case 54u: goto L_08984680;
    case 55u: goto L_08984690;
    case 56u: goto L_089846C8;
    case 57u: goto L_089846D8;
    case 58u: goto L_089846EC;
    case 59u: goto L_089846FC;
    case 60u: goto L_08984708;
    case 61u: goto L_08984718;
    case 62u: goto L_0898472C;
    case 63u: goto L_0898473C;
    case 64u: goto L_08984768;
    case 65u: goto L_08984778;
    case 66u: goto L_0898478C;
    case 67u: goto L_0898479C;
    case 68u: goto L_089847B0;
    case 69u: goto L_089847BC;
    case 70u: goto L_089847D4;
    case 71u: goto L_089847E0;
    case 72u: goto L_089847EC;
    case 73u: goto L_089847FC;
    case 74u: goto L_08984808;
    case 75u: goto L_0898482C;
    case 76u: goto L_08984868;
    case 77u: goto L_08984884;
    case 78u: goto L_0898488C;
    case 79u: goto L_08984894;
    case 80u: goto L_0898489C;
    case 81u: goto L_089848A0;
    case 82u: goto L_089848AC;
    case 83u: goto L_089848BC;
    case 84u: goto L_089848CC;
    case 85u: goto L_089848F0;
    case 86u: goto L_08984904;
    case 87u: goto L_0898490C;
    case 88u: goto L_08984914;
    case 89u: goto L_0898492C;
    case 90u: goto L_08984938;
    case 91u: goto L_08984944;
    case 92u: goto L_0898494C;
    case 93u: goto L_0898496C;
    case 94u: goto L_0898497C;
    case 95u: goto L_08984988;
    case 96u: goto L_08984990;
    case 97u: goto L_089849B4;
    case 98u: goto L_089849C8;
    case 99u: goto L_089849D0;
    case 100u: goto L_089849DC;
    case 101u: goto L_08984A00;
    case 102u: goto L_08984A14;
    case 103u: goto L_08984A24;
    case 104u: goto L_08984A34;
    case 105u: goto L_08984A44;
    case 106u: goto L_08984A60;
    case 107u: goto L_08984A78;
    case 108u: goto L_08984A90;
    case 109u: goto L_08984AAC;
    case 110u: goto L_08984ABC;
    case 111u: goto L_08984B28;
    case 112u: goto L_08984B3C;
    case 113u: goto L_08984B44;
    case 114u: goto L_08984B4C;
    case 115u: goto L_08984B5C;
    case 116u: goto L_08984B74;
    case 117u: goto L_08984B84;
    case 118u: goto L_08984BC8;
    case 119u: goto L_08984BDC;
    case 120u: goto L_08984C14;
    case 121u: goto L_08984C60;
    case 122u: goto L_08984C6C;
    case 123u: goto L_08984C7C;
    case 124u: goto L_08984C88;
    case 125u: goto L_08984C9C;
    case 126u: goto L_08984CA4;
    case 127u: goto L_08984CAC;
    case 128u: goto L_08984CC4;
    case 129u: goto L_08984CDC;
    case 130u: goto L_08984CEC;
    case 131u: goto L_08984DD4;
    case 132u: goto L_08984E2C;
    case 133u: goto L_08984E40;
    case 134u: goto L_08984E50;
    case 135u: goto L_08984E6C;
    case 136u: goto L_08984E84;
    case 137u: goto L_08984E90;
    case 138u: goto L_08984EA8;
    case 139u: goto L_08984EF0;
    case 140u: goto L_08984EFC;
    case 141u: goto L_08984F20;
    case 142u: goto L_08984F38;
    case 143u: goto L_08984F48;
    case 144u: goto L_08984F74;
    case 145u: goto L_08984F88;
    case 146u: goto L_08984F8C;
    case 147u: goto L_08984FAC;
    case 148u: goto L_08984FB8;
    case 149u: goto L_08984FC0;
    case 150u: goto L_08984FD0;
    case 151u: goto L_08984FD4;
    case 152u: goto L_08984FE0;
    case 153u: goto L_08984FF0;
    case 154u: goto L_08984FF8;
    case 155u: goto L_08985010;
    case 156u: goto L_08985028;
    case 157u: goto L_08985030;
    case 158u: goto L_08985054;
    case 159u: goto L_08985068;
    case 160u: goto L_08985078;
    case 161u: goto L_08985084;
    case 162u: goto L_08985090;
    case 163u: goto L_08985094;
    case 164u: goto L_089850A4;
    case 165u: goto L_089850AC;
    case 166u: goto L_089850B4;
    case 167u: goto L_089850C8;
    case 168u: goto L_089850F4;
    case 169u: goto L_08985158;
    case 170u: goto L_08985174;
    case 171u: goto L_08985188;
    case 172u: goto L_089851AC;
    case 173u: goto L_089851B4;
    case 174u: goto L_089851BC;
    case 175u: goto L_089851CC;
    case 176u: goto L_089851E0;
    case 177u: goto L_089851E4;
    case 178u: goto L_089851F4;
    case 179u: goto L_08985204;
    case 180u: goto L_08985214;
    case 181u: goto L_0898521C;
    case 182u: goto L_0898522C;
    case 183u: goto L_08985234;
    case 184u: goto L_0898525C;
    case 185u: goto L_08985274;
    case 186u: goto L_08985288;
    case 187u: goto L_08985290;
    case 188u: goto L_08985298;
    case 189u: goto L_0898529C;
    case 190u: goto L_089852BC;
    case 191u: goto L_089852C8;
    case 192u: goto L_089852CC;
    case 193u: goto L_089852D4;
    case 194u: goto L_089852E4;
    case 195u: goto L_089852EC;
    case 196u: goto L_089852FC;
    case 197u: goto L_0898530C;
    case 198u: goto L_0898532C;
    case 199u: goto L_08985334;
    case 200u: goto L_08985344;
    case 201u: goto L_08985358;
    case 202u: goto L_08985364;
    case 203u: goto L_08985380;
    case 204u: goto L_08985394;
    case 205u: goto L_089853A0;
    case 206u: goto L_089853AC;
    case 207u: goto L_089853E4;
    case 208u: goto L_08985734;
    case 209u: goto L_08985764;
    case 210u: goto L_08985790;
    case 211u: goto L_089857A4;
    case 212u: goto L_08985828;
    case 213u: goto L_08985834;
    case 214u: goto L_08985854;
    case 215u: goto L_0898587C;
    case 216u: goto L_0898588C;
    case 217u: goto L_08985894;
    case 218u: goto L_089858B0;
    case 219u: goto L_089858C0;
    case 220u: goto L_089858C8;
    case 221u: goto L_089858E4;
    case 222u: goto L_089858F4;
    case 223u: goto L_08985904;
    case 224u: goto L_08985908;
    case 225u: goto L_08985910;
    case 226u: goto L_08985920;
    case 227u: goto L_0898592C;
    case 228u: goto L_08985930;
    case 229u: goto L_08985934;
    case 230u: goto L_0898594C;
    case 231u: goto L_08985958;
    case 232u: goto L_08985988;
    case 233u: goto L_08985990;
    case 234u: goto L_089859A4;
    case 235u: goto L_089859AC;
    case 236u: goto L_089859C0;
    case 237u: goto L_089859C8;
    case 238u: goto L_089859D8;
    case 239u: goto L_089859F0;
    case 240u: goto L_089859F8;
    case 241u: goto L_08985A08;
    case 242u: goto L_08985A10;
    case 243u: goto L_08985A20;
    case 244u: goto L_08985A38;
    case 245u: goto L_08985A3C;
    case 246u: goto L_08985A54;
    case 247u: goto L_08985A74;
    case 248u: goto L_08985A7C;
    case 249u: goto L_08985A90;
    case 250u: goto L_08985A98;
    case 251u: goto L_08985ADC;
    case 252u: goto L_08985AE4;
    case 253u: goto L_08985AFC;
    case 254u: goto L_08985B10;
    case 255u: goto L_08985B1C;
    case 256u: goto L_08985B20;
    case 257u: goto L_08985B30;
    case 258u: goto L_08985B40;
    case 259u: goto L_08985B60;
    case 260u: goto L_08985B70;
    case 261u: goto L_08985B98;
    case 262u: goto L_08985BE4;
    case 263u: goto L_08985BEC;
    case 264u: goto L_08985C04;
    case 265u: goto L_08985C18;
    case 266u: goto L_08985C24;
    case 267u: goto L_08985C34;
    case 268u: goto L_08985C44;
    case 269u: goto L_08985C4C;
    case 270u: goto L_08985C54;
    case 271u: goto L_08985C60;
    case 272u: goto L_08985C74;
    case 273u: goto L_08985C90;
    case 274u: goto L_08985C98;
    case 275u: goto L_08985CA8;
    case 276u: goto L_08985CB8;
    case 277u: goto L_08985CC8;
    case 278u: goto L_08985CD8;
    case 279u: goto L_08985CE0;
    case 280u: goto L_08985CE8;
    case 281u: goto L_08985CF4;
    case 282u: goto L_08985D08;
    case 283u: goto L_08985D24;
    case 284u: goto L_08985D34;
    case 285u: goto L_08985D4C;
    case 286u: goto L_08985D5C;
    case 287u: goto L_08985D68;
    case 288u: goto L_08985D74;
    case 289u: goto L_08985D84;
    case 290u: goto L_08985D88;
    case 291u: goto L_08985DB0;
    case 292u: goto L_08985DD0;
    case 293u: goto L_08985DD8;
    case 294u: goto L_08985DEC;
    case 295u: goto L_08985DF4;
    case 296u: goto L_08985E48;
    case 297u: goto L_08985E50;
    case 298u: goto L_08985E58;
    case 299u: goto L_08985E70;
    case 300u: goto L_08985E78;
    case 301u: goto L_08985E8C;
    case 302u: goto L_08985E94;
    case 303u: goto L_08985EA8;
    case 304u: goto L_08985EB4;
    case 305u: goto L_08985EDC;
    case 306u: goto L_08985EFC;
    case 307u: goto L_08985F04;
    case 308u: goto L_08985F10;
    case 309u: goto L_08985F18;
    case 310u: goto L_08985F20;
    case 311u: goto L_08985F28;
    case 312u: goto L_08985F30;
    case 313u: goto L_08985F3C;
    case 314u: goto L_08985F48;
    case 315u: goto L_08985F50;
    case 316u: goto L_08985F58;
    case 317u: goto L_08985F64;
    case 318u: goto L_08985F7C;
    case 319u: goto L_08985F90;
    case 320u: goto L_08985FA4;
    case 321u: goto L_08985FB8;
    case 322u: goto L_08985FC0;
    case 323u: goto L_08985FC8;
    case 324u: goto L_08985FD0;
    case 325u: goto L_08985FD8;
    case 326u: goto L_08985FE0;
    case 327u: goto L_08985FE8;
    case 328u: goto L_08985FF4;
    case 329u: goto L_0898600C;
    case 330u: goto L_08986020;
    case 331u: goto L_08986034;
    case 332u: goto L_08986048;
    case 333u: goto L_08986050;
    case 334u: goto L_08986058;
    case 335u: goto L_08986080;
    case 336u: goto L_0898608C;
    case 337u: goto L_08986098;
    case 338u: goto L_089860A0;
    case 339u: goto L_089860B0;
    case 340u: goto L_089860D4;
    case 341u: goto L_089860E0;
    case 342u: goto L_089860E8;
    case 343u: goto L_089860F0;
    case 344u: goto L_089860F8;
    case 345u: goto L_08986100;
    case 346u: goto L_08986140;
    case 347u: goto L_08986148;
    case 348u: goto L_0898616C;
    case 349u: goto L_089861B4;
    case 350u: goto L_089861D0;
    case 351u: goto L_089861D8;
    case 352u: goto L_089861E4;
    case 353u: goto L_089861EC;
    case 354u: goto L_089861F4;
    case 355u: goto L_089861FC;
    case 356u: goto L_08986204;
    case 357u: goto L_08986210;
    case 358u: goto L_08986218;
    case 359u: goto L_08986234;
    case 360u: goto L_0898624C;
    case 361u: goto L_08986264;
    case 362u: goto L_0898627C;
    case 363u: goto L_08986284;
    case 364u: goto L_0898628C;
    case 365u: goto L_08986298;
    case 366u: goto L_089862A8;
    case 367u: goto L_089862DC;
    case 368u: goto L_089862EC;
    case 369u: goto L_089862F4;
    case 370u: goto L_08986300;
    case 371u: goto L_08986334;
    case 372u: goto L_08986364;
    case 373u: goto L_08986380;
    case 374u: goto L_08986388;
    case 375u: goto L_08986398;
    case 376u: goto L_089863A0;
    case 377u: goto L_089863A8;
    case 378u: goto L_089863B0;
    case 379u: goto L_089863B8;
    case 380u: goto L_089863C4;
    case 381u: goto L_089863CC;
    case 382u: goto L_089863D4;
    case 383u: goto L_089863DC;
    case 384u: goto L_089863F8;
    case 385u: goto L_0898640C;
    case 386u: goto L_08986420;
    case 387u: goto L_08986434;
    case 388u: goto L_0898643C;
    case 389u: goto L_08986444;
    case 390u: goto L_08986460;
    case 391u: goto L_08986468;
    case 392u: goto L_08986470;
    case 393u: goto L_0898647C;
    case 394u: goto L_0898648C;
    case 395u: goto L_0898649C;
    case 396u: goto L_089864A8;
    case 397u: goto L_089864D0;
    case 398u: goto L_089864F8;
    case 399u: goto L_08986514;
    case 400u: goto L_0898651C;
    case 401u: goto L_08986528;
    case 402u: goto L_08986530;
    case 403u: goto L_08986554;
    case 404u: goto L_0898655C;
    case 405u: goto L_0898656C;
    case 406u: goto L_08986588;
    case 407u: goto L_0898659C;
    case 408u: goto L_08986698;
    case 409u: goto L_089866A4;
    case 410u: goto L_089866B8;
    case 411u: goto L_089866C4;
    case 412u: goto L_089866D8;
    case 413u: goto L_089866EC;
    case 414u: goto L_0898670C;
    case 415u: goto L_08986724;
    case 416u: goto L_08986734;
    case 417u: goto L_0898673C;
    case 418u: goto L_089867B0;
    case 419u: goto L_089867D4;
    case 420u: goto L_08986840;
    case 421u: goto L_08986854;
    case 422u: goto L_08986870;
    case 423u: goto L_0898687C;
    case 424u: goto L_08986890;
    case 425u: goto L_089868A4;
    case 426u: goto L_089868B0;
    case 427u: goto L_089868CC;
    case 428u: goto L_08986A0C;
    case 429u: goto L_08986A58;
    case 430u: goto L_08986A7C;
    case 431u: goto L_08986AE8;
    case 432u: goto L_08986AFC;
    case 433u: goto L_08986B14;
    case 434u: goto L_08986B28;
    case 435u: goto L_08986B30;
    case 436u: goto L_08986B44;
    case 437u: goto L_08986B58;
    case 438u: goto L_08986B60;
    case 439u: goto L_08986B88;
    case 440u: goto L_08986B94;
    case 441u: goto L_08986BF0;
    case 442u: goto L_08986BFC;
    case 443u: goto L_08986C04;
    case 444u: goto L_08986C28;
    case 445u: goto L_08986C2C;
    case 446u: goto L_08986C5C;
    case 447u: goto L_08986C6C;
    case 448u: goto L_08986C74;
    case 449u: goto L_08986C80;
    case 450u: goto L_08986C8C;
    case 451u: goto L_08986C94;
    case 452u: goto L_08986C9C;
    case 453u: goto L_08986CA4;
    case 454u: goto L_08986CC4;
    case 455u: goto L_08986CCC;
    case 456u: goto L_08986CD8;
    case 457u: goto L_08986CE0;
    case 458u: goto L_08986CF8;
    case 459u: goto L_08986D08;
    case 460u: goto L_08986D10;
    case 461u: goto L_08986D14;
    case 462u: goto L_08986D24;
    case 463u: goto L_08986D54;
    case 464u: goto L_08986D64;
    case 465u: goto L_08986D70;
    case 466u: goto L_08986D8C;
    case 467u: goto L_08986D94;
    case 468u: goto L_08986DA0;
    case 469u: goto L_08986DBC;
    case 470u: goto L_08986DCC;
    case 471u: goto L_08986DF8;
    case 472u: goto L_08986E2C;
    case 473u: goto L_08986E38;
    case 474u: goto L_08986E40;
    case 475u: goto L_08986E4C;
    case 476u: goto L_08986E58;
    case 477u: goto L_08986E64;
    case 478u: goto L_08986E90;
    case 479u: goto L_08986E98;
    case 480u: goto L_08986EA4;
    case 481u: goto L_08986EC4;
    case 482u: goto L_08986ECC;
    case 483u: goto L_08986ED4;
    case 484u: goto L_08986EDC;
    case 485u: goto L_08986EE4;
    case 486u: goto L_08986F04;
    case 487u: goto L_08986F0C;
    case 488u: goto L_08986F14;
    case 489u: goto L_08986F1C;
    case 490u: goto L_08986F30;
    case 491u: goto L_08986F40;
    case 492u: goto L_08986F48;
    case 493u: goto L_08986F8C;
    case 494u: goto L_08986FB0;
    case 495u: goto L_0898701C;
    case 496u: goto L_08987030;
    case 497u: goto L_08987038;
    case 498u: goto L_08987048;
    case 499u: goto L_08987054;
    case 500u: goto L_08987060;
    case 501u: goto L_08987068;
    case 502u: goto L_08987078;
    case 503u: goto L_08987084;
    case 504u: goto L_08987090;
    case 505u: goto L_08987098;
    case 506u: goto L_089870AC;
    case 507u: goto L_089870B4;
    case 508u: goto L_089870BC;
    case 509u: goto L_089870CC;
    case 510u: goto L_089870D8;
    case 511u: goto L_089870E0;
    case 512u: goto L_089870E8;
    case 513u: goto L_0898710C;
    case 514u: goto L_08987114;
    case 515u: goto L_0898711C;
    case 516u: goto L_08987124;
    case 517u: goto L_0898712C;
    case 518u: goto L_08987134;
    case 519u: goto L_0898714C;
    case 520u: goto L_08987154;
    case 521u: goto L_0898715C;
    case 522u: goto L_08987164;
    case 523u: goto L_08987170;
    case 524u: goto L_08987200;
    case 525u: goto L_08987220;
    case 526u: goto L_08987234;
    case 527u: goto L_08987244;
    case 528u: goto L_08987248;
    case 529u: goto L_08987264;
    case 530u: goto L_0898726C;
    case 531u: goto L_0898727C;
    case 532u: goto L_08987280;
    case 533u: goto L_089872B8;
    case 534u: goto L_089872C4;
    case 535u: goto L_089872D4;
    case 536u: goto L_089872E0;
    case 537u: goto L_089872E4;
    case 538u: goto L_0898732C;
    case 539u: goto L_08987354;
    case 540u: goto L_08987384;
    case 541u: goto L_089873AC;
    case 542u: goto L_089873F8;
    case 543u: goto L_08987428;
    case 544u: goto L_08987440;
    case 545u: goto L_0898748C;
    case 546u: goto L_089874BC;
    case 547u: goto L_089874D8;
    case 548u: goto L_089874E0;
    case 549u: goto L_089874E8;
    case 550u: goto L_08987504;
    case 551u: goto L_0898750C;
    case 552u: goto L_08987524;
    case 553u: goto L_0898752C;
    case 554u: goto L_08987534;
    case 555u: goto L_08987550;
    case 556u: goto L_0898755C;
    case 557u: goto L_08987570;
    case 558u: goto L_0898757C;
    case 559u: goto L_08987584;
    case 560u: goto L_08987598;
    case 561u: goto L_089875B0;
    case 562u: goto L_089875BC;
    case 563u: goto L_089875E0;
    case 564u: goto L_0898761C;
    case 565u: goto L_089876AC;
    case 566u: goto L_089876CC;
    case 567u: goto L_089876E0;
    case 568u: goto L_089876F0;
    case 569u: goto L_089876F4;
    case 570u: goto L_08987710;
    case 571u: goto L_08987718;
    case 572u: goto L_08987728;
    case 573u: goto L_0898772C;
    case 574u: goto L_08987764;
    case 575u: goto L_08987770;
    case 576u: goto L_08987780;
    case 577u: goto L_0898778C;
    case 578u: goto L_08987790;
    case 579u: goto L_089877D8;
    case 580u: goto L_08987800;
    case 581u: goto L_08987830;
    case 582u: goto L_08987858;
    case 583u: goto L_089878A4;
    case 584u: goto L_089878D4;
    case 585u: goto L_089878EC;
    case 586u: goto L_08987938;
    case 587u: goto L_08987968;
    case 588u: goto L_08987984;
    case 589u: goto L_0898798C;
    case 590u: goto L_08987994;
    case 591u: goto L_089879B0;
    case 592u: goto L_089879B8;
    case 593u: goto L_089879D0;
    case 594u: goto L_089879D8;
    case 595u: goto L_089879E0;
    case 596u: goto L_089879FC;
    case 597u: goto L_08987A08;
    case 598u: goto L_08987A1C;
    case 599u: goto L_08987A28;
    case 600u: goto L_08987A30;
    case 601u: goto L_08987A44;
    case 602u: goto L_08987A5C;
    case 603u: goto L_08987A68;
    case 604u: goto L_08987A8C;
    case 605u: goto L_08987AC8;
    case 606u: goto L_08987AE4;
    case 607u: goto L_08987AEC;
    case 608u: goto L_08987AF8;
    case 609u: goto L_08987B00;
    case 610u: goto L_08987B08;
    case 611u: goto L_08987B10;
    case 612u: goto L_08987B18;
    case 613u: goto L_08987B20;
    case 614u: goto L_08987B28;
    case 615u: goto L_08987B30;
    case 616u: goto L_08987B4C;
    case 617u: goto L_08987B58;
    case 618u: goto L_08987B60;
    case 619u: goto L_08987B68;
    case 620u: goto L_08987B70;
    case 621u: goto L_08987B78;
    case 622u: goto L_08987B94;
    case 623u: goto L_08987BA0;
    case 624u: goto L_08987BA8;
    case 625u: goto L_08987BB0;
    case 626u: goto L_08987BB8;
    case 627u: goto L_08987BC0;
    case 628u: goto L_08987BDC;
    case 629u: goto L_08987BE8;
    case 630u: goto L_08987BF0;
    case 631u: goto L_08987C08;
    case 632u: goto L_08987C10;
    case 633u: goto L_08987C2C;
    case 634u: goto L_08987C38;
    case 635u: goto L_08987C48;
    case 636u: goto L_08987C94;
    case 637u: goto L_08987CB4;
    case 638u: goto L_08987CC4;
    case 639u: goto L_08987CE4;
    case 640u: goto L_08987CF0;
    case 641u: goto L_08987D38;
    case 642u: goto L_08987D40;
    case 643u: goto L_08987D54;
    case 644u: goto L_08987D58;
    case 645u: goto L_08987D68;
    case 646u: goto L_08987D74;
    case 647u: goto L_08987D80;
    case 648u: goto L_08987D88;
    case 649u: goto L_08987DA0;
    case 650u: goto L_08987DBC;
    case 651u: goto L_08987DD4;
    case 652u: goto L_08987DE8;
    case 653u: goto L_08987DF0;
    case 654u: goto L_08987E00;
    case 655u: goto L_08987E08;
    case 656u: goto L_08987E2C;
    case 657u: goto L_08987E4C;
    case 658u: goto L_08987E60;
    case 659u: goto L_08987EDC;
    case 660u: goto L_08987EEC;
    case 661u: goto L_08987F34;
    case 662u: goto L_08987F44;
    case 663u: goto L_08987F4C;
    case 664u: goto L_08987F54;
    case 665u: goto L_08987F70;
    case 666u: goto L_08987F8C;
    case 667u: goto L_08987F94;
    case 668u: goto L_08987FAC;
    case 669u: goto L_08987FC4;
    case 670u: goto L_08987FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08984000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[23] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[17] = (ctx.gpr[17] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[17] & 1u);
    ctx.gpr[18] = (ctx.gpr[17] & 2u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0898416C;
      }
      goto L_089840C0;
    }
L_089840C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_08984120;
    }
    goto L_089840CC;
L_089840CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08984114u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08984114u) goto L_08984114;
    return;
L_08984114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08984138;
      }
      goto L_0898411C;
    }
L_0898411C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_08984120;
L_08984120:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_08984138;
L_08984138:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(182), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(182)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898416C;
      }
      goto L_08984158;
    }
L_08984158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0898416C;
L_0898416C:
    ctx.gpr[4] = (ctx.gpr[17] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089841A4;
      }
      goto L_08984178;
    }
L_08984178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089841A4;
L_089841A4:
    ctx.gpr[4] = (ctx.gpr[17] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089841C4;
      }
      goto L_089841B0;
    }
L_089841B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089841C4;
L_089841C4:
    ctx.gpr[4] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089841E8;
      }
      goto L_089841D4;
    }
L_089841D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089841E8;
L_089841E8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0898421C;
      }
      goto L_089841F0;
    }
L_089841F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0898421C;
L_0898421C:
    ctx.gpr[4] = (ctx.gpr[17] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984300;
      }
      goto L_08984228;
    }
L_08984228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] << 8u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] << 8u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08984300;
L_08984300:
    ctx.gpr[4] = (ctx.gpr[17] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984384;
      }
      goto L_0898430C;
    }
L_0898430C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08984384;
L_08984384:
    ctx.gpr[4] = (ctx.gpr[17] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08984430;
      }
      goto L_08984390;
    }
L_08984390:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898441Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x0898441Cu) goto L_0898441C;
    return;
L_0898441C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x08984430u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08984430u) goto L_08984430;
    return;
L_08984430:
    ctx.gpr[4] = (ctx.gpr[17] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089844A4;
      }
      goto L_0898443C;
    }
L_0898443C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089844A4;
L_089844A4:
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(214)));
    ctx.gpr[4] = (ctx.gpr[17] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[17]);
      if (branch_taken) {
          goto L_089844C8;
      }
      goto L_089844B4;
    }
L_089844B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089844C8;
L_089844C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(214)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2226u << 16u);
      if (branch_taken) {
          goto L_08984550;
      }
      goto L_089844DC;
    }
L_089844DC:
    ctx.gpr[21] = (0u | 128u);
    ctx.gpr[20] = (0u | 255u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(216));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-23564));
    goto L_089844EC;
L_089844EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[21] << (ctx.gpr[17] & 31u));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[4]);
      if (branch_taken) {
          goto L_08984524;
      }
      goto L_08984500;
    }
L_08984500:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898451C;
      }
      goto L_08984508;
    }
L_08984508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08984524;
      }
      goto L_0898451C;
    }
L_0898451C:
    ctx.gpr[31] = (0x08984524u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 678u, 0x0897F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08984524u) goto L_08984524;
    return;
L_08984524:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898453C;
      }
      goto L_0898452C;
    }
L_0898452C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x0898453Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 215u, 0x08981308u>(ctx, &aot_mem) && ctx.pc == 0x0898453Cu) goto L_0898453C;
    return;
L_0898453C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(214)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089844EC;
      }
      goto L_08984550;
    }
L_08984550:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
      if (branch_taken) {
          goto L_089845AC;
      }
      goto L_0898455C;
    }
L_0898455C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[16] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (0u | 128u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(216));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    goto L_0898457C;
L_0898457C:
    ctx.gpr[4] = (ctx.gpr[18] << (ctx.gpr[17] & 31u));
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898459C;
      }
      goto L_0898458C;
    }
L_0898458C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0898459Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 215u, 0x08981308u>(ctx, &aot_mem) && ctx.pc == 0x0898459Cu) goto L_0898459C;
    return;
L_0898459C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0898457C;
      }
      goto L_089845AC;
    }
L_089845AC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[19] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089845D0;
      }
      goto L_089845BC;
    }
L_089845BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089845D0;
L_089845D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (ctx.gpr[19] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_089845F0;
      }
      goto L_089845E4;
    }
L_089845E4:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x089845F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 500u, 0x0892F228u>(ctx, &aot_mem) && ctx.pc == 0x089845F0u) goto L_089845F0;
    return;
L_089845F0:
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984614;
      }
      goto L_08984600;
    }
L_08984600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08984614;
L_08984614:
    ctx.gpr[4] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984638;
      }
      goto L_08984624;
    }
L_08984624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(345), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08984638;
L_08984638:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898465C;
      }
      goto L_08984648;
    }
L_08984648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0898465C;
L_0898465C:
    ctx.gpr[4] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984680;
      }
      goto L_0898466C;
    }
L_0898466C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08984680;
L_08984680:
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089846C8;
      }
      goto L_08984690;
    }
L_08984690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(338)));
    ctx.gpr[31] = (0x089846C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 151u, 0x08980B24u>(ctx, &aot_mem) && ctx.pc == 0x089846C8u) goto L_089846C8;
    return;
L_089846C8:
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089846EC;
      }
      goto L_089846D8;
    }
L_089846D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089846EC;
L_089846EC:
    ctx.gpr[4] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984708;
      }
      goto L_089846FC;
    }
L_089846FC:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08984708u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 113u, 0x08A5CD94u>(ctx, &aot_mem) && ctx.pc == 0x08984708u) goto L_08984708;
    return;
L_08984708:
    ctx.gpr[4] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898472C;
      }
      goto L_08984718;
    }
L_08984718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0898472C;
L_0898472C:
    ctx.gpr[4] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984768;
      }
      goto L_0898473C;
    }
L_0898473C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08984768;
L_08984768:
    ctx.gpr[4] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898478C;
      }
      goto L_08984778;
    }
L_08984778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(344), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0898478C;
L_0898478C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089849D0;
      }
      goto L_0898479C;
    }
L_0898479C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (0x089847B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x089847B0u) goto L_089847B0;
    return;
L_089847B0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898490C;
      }
      goto L_089847BC;
    }
L_089847BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089847D4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089847D4u) goto L_089847D4;
    return;
L_089847D4:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898490C;
      }
      goto L_089847E0;
    }
L_089847E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08984808;
      }
      goto L_089847EC;
    }
L_089847EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x089847FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089847FCu) goto L_089847FC;
    return;
L_089847FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08984808;
L_08984808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089848A0;
      }
      goto L_0898482C;
    }
L_0898482C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08984868;
    }
    goto L_08984868;
L_08984868:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08984894;
      }
      goto L_08984884;
    }
L_08984884:
    ctx.gpr[31] = (0x0898488Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 229u, 0x08AF51C0u>(ctx, &aot_mem) && ctx.pc == 0x0898488Cu) goto L_0898488C;
    return;
L_0898488C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[0];
      if (branch_taken) {
          goto L_089848A0;
      }
      goto L_08984894;
    }
L_08984894:
    ctx.gpr[31] = (0x0898489Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 286u, 0x089D96A0u>(ctx, &aot_mem) && ctx.pc == 0x0898489Cu) goto L_0898489C;
    return;
L_0898489C:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[0];
    goto L_089848A0;
L_089848A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_089848CC;
    }
    goto L_089848AC;
L_089848AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(129));
    ctx.gpr[31] = (0x089848BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089848BCu) goto L_089848BC;
    return;
L_089848BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(129)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_089848CC;
L_089848CC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(184)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089848F0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x089848F0u) goto L_089848F0;
    return;
L_089848F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08984904u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08984904u) goto L_08984904;
    return;
L_08984904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089849C8;
      }
      goto L_0898490C;
    }
L_0898490C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089849C8;
      }
      goto L_08984914;
    }
L_08984914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0898492Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898492Cu) goto L_0898492C;
    return;
L_0898492C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089849C8;
      }
      goto L_08984938;
    }
L_08984938:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089849C8;
      }
      goto L_08984944;
    }
L_08984944:
    ctx.gpr[31] = (0x0898494Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 831u, 0x08AFB990u>(ctx, &aot_mem) && ctx.pc == 0x0898494Cu) goto L_0898494C;
    return;
L_0898494C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0898497C;
      }
      goto L_0898496C;
    }
L_0898496C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08984990;
      }
      goto L_0898497C;
    }
L_0898497C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08984988u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08984988u) goto L_08984988;
    return;
L_08984988:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08984990;
      }
      goto L_08984990;
    }
L_08984990:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(184)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089849B4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x089849B4u) goto L_089849B4;
    return;
L_089849B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (0x089849C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x089849C8u) goto L_089849C8;
    return;
L_089849C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08984A14;
      }
      goto L_089849D0;
    }
L_089849D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984A14;
      }
      goto L_089849DC;
    }
L_089849DC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(184)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08984A00u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08984A00u) goto L_08984A00;
    return;
L_08984A00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x08984A14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08984A14u) goto L_08984A14;
    return;
L_08984A14:
    ctx.gpr[4] = (2226u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08984A24u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23484));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984A24u) goto L_08984A24;
    return;
L_08984A24:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08984A34u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984A34u) goto L_08984A34;
    return;
L_08984A34:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08984A44u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984A44u) goto L_08984A44;
    return;
L_08984A44:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    ctx.gpr[31] = (0x08984A60u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984A60u) goto L_08984A60;
    return;
L_08984A60:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    ctx.gpr[31] = (0x08984A78u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984A78u) goto L_08984A78;
    return;
L_08984A78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[19]);
    ctx.gpr[31] = (0x08984A90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984A90u) goto L_08984A90;
    return;
L_08984A90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[18]);
    ctx.gpr[31] = (0x08984AACu);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984AACu) goto L_08984AAC;
    return;
L_08984AAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08984ABCu);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984ABCu) goto L_08984ABC;
    return;
L_08984ABC:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(214)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08984B28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 439u, 0x08982588u>(ctx, &aot_mem) && ctx.pc == 0x08984B28u) goto L_08984B28;
    return;
L_08984B28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(214)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2226u << 16u);
      if (branch_taken) {
          goto L_08984BDC;
      }
      goto L_08984B3C;
    }
L_08984B3C:
    ctx.gpr[18] = (ctx.gpr[30] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-23420));
    goto L_08984B44;
L_08984B44:
    ctx.gpr[31] = (0x08984B4Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984B4Cu) goto L_08984B4C;
    return;
L_08984B4C:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08984B5Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984B5Cu) goto L_08984B5C;
    return;
L_08984B5C:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    ctx.gpr[31] = (0x08984B74u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984B74u) goto L_08984B74;
    return;
L_08984B74:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08984B84u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(228)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984B84u) goto L_08984B84;
    return;
L_08984B84:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(232))))));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(234))))));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08984BC8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 439u, 0x08982588u>(ctx, &aot_mem) && ctx.pc == 0x08984BC8u) goto L_08984BC8;
    return;
L_08984BC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(214)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08984B44;
      }
      goto L_08984BDC;
    }
L_08984BDC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08984C14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[7]);
    ctx.gpr[7] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(5736));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089850B4;
      }
      goto L_08984C60;
    }
L_08984C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08984C88;
      }
      goto L_08984C6C;
    }
L_08984C6C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08984C7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08984C7Cu) goto L_08984C7C;
    return;
L_08984C7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08984C88;
L_08984C88:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(182)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08984CA4;
      }
      goto L_08984C9C;
    }
L_08984C9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(210)));
      if (branch_taken) {
          goto L_08984CAC;
      }
      goto L_08984CA4;
    }
L_08984CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    goto L_08984CAC;
L_08984CAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(182)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08984CC4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 129u, 0x08AA0804u>(ctx, &aot_mem) && ctx.pc == 0x08984CC4u) goto L_08984CC4;
    return;
L_08984CC4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08984CDCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 429u, 0x088A9DFCu>(ctx, &aot_mem) && ctx.pc == 0x08984CDCu) goto L_08984CDC;
    return;
L_08984CDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08984CECu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08984CECu) goto L_08984CEC;
    return;
L_08984CEC:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(178)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(183)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(182)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1376), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(181)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 21u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(337)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 28u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(338)));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(1914), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_08984E40;
      }
      goto L_08984DD4;
    }
L_08984DD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16290u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 63875u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[5] = (0u | 5u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 8u);
        goto L_08984E2C;
    }
    goto L_08984E2C;
L_08984E2C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08984E40u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08984E40u) goto L_08984E40;
    return;
L_08984E40:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08984F8C;
      }
      goto L_08984E50;
    }
L_08984E50:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08984E6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23360));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 678u, 0x0897F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08984E6Cu) goto L_08984E6C;
    return;
L_08984E6C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08984E84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 157u, 0x088A88F4u>(ctx, &aot_mem) && ctx.pc == 0x08984E84u) goto L_08984E84;
    return;
L_08984E84:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08984EFC;
      }
      goto L_08984E90;
    }
L_08984E90:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08984EA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23292));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 678u, 0x0897F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08984EA8u) goto L_08984EA8;
    return;
L_08984EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1332), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1412), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08984EF0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 728u, 0x08887A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08984EF0u) goto L_08984EF0;
    return;
L_08984EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(504), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08984F8C;
      }
      goto L_08984EFC;
    }
L_08984EFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[31] = (0x08984F20u);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23236));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984F20u) goto L_08984F20;
    return;
L_08984F20:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[31] = (0x08984F38u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984F38u) goto L_08984F38;
    return;
L_08984F38:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08984F48u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08984F48u) goto L_08984F48;
    return;
L_08984F48:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08984F74u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 678u, 0x0897F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08984F74u) goto L_08984F74;
    return;
L_08984F74:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08984F88u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 231u, 0x088A8FCCu>(ctx, &aot_mem) && ctx.pc == 0x08984F88u) goto L_08984F88;
    return;
L_08984F88:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08984F8C;
L_08984F8C:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28216)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08984FACu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 706u, 0x08B033E8u>(ctx, &aot_mem) && ctx.pc == 0x08984FACu) goto L_08984FAC;
    return;
L_08984FAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08984FC0;
      }
      goto L_08984FB8;
    }
L_08984FB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08984FF8;
      }
      goto L_08984FC0;
    }
L_08984FC0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08984FF8;
      }
      goto L_08984FD0;
    }
L_08984FD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08984FD4;
L_08984FD4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08984FF0;
    }
    goto L_08984FE0;
L_08984FE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08984FF0;
L_08984FF0:
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08984FD4;
    }
    goto L_08984FF8;
L_08984FF8:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08985030;
      }
      goto L_08985010;
    }
L_08985010:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08985028u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08985028u) goto L_08985028;
    return;
L_08985028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08985030;
      }
      goto L_08985030;
    }
L_08985030:
    ctx.gpr[4] = (2276u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28216));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08985054u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 243u, 0x08A49F74u>(ctx, &aot_mem) && ctx.pc == 0x08985054u) goto L_08985054;
    return;
L_08985054:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[31] = (0x08985068u);
    ctx.gpr[4] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x08985068u) goto L_08985068;
    return;
L_08985068:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 352u);
    ctx.gpr[31] = (0x08985078u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08985078u) goto L_08985078;
    return;
L_08985078:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08985094;
      }
      goto L_08985084;
    }
L_08985084:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08985090u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 695u, 0x0897F918u>(ctx, &aot_mem) && ctx.pc == 0x08985090u) goto L_08985090;
    return;
L_08985090:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08985094;
L_08985094:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089850A4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 147u, 0x08AC5138u>(ctx, &aot_mem) && ctx.pc == 0x089850A4u) goto L_089850A4;
    return;
L_089850A4:
    ctx.gpr[31] = (0x089850ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 153u, 0x08A0D424u>(ctx, &aot_mem) && ctx.pc == 0x089850ACu) goto L_089850AC;
    return;
L_089850AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089850C8;
      }
      goto L_089850B4;
    }
L_089850B4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089850C8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 243u, 0x08A49F74u>(ctx, &aot_mem) && ctx.pc == 0x089850C8u) goto L_089850C8;
    return;
L_089850C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089850F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(120));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089851B4;
      }
      goto L_08985158;
    }
L_08985158:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[31] = (0x08985174u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08985174u) goto L_08985174;
    return;
L_08985174:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08985188u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08985188u) goto L_08985188;
    return;
L_08985188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27512)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
      if (branch_taken) {
          goto L_089851BC;
      }
      goto L_089851AC;
    }
L_089851AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089852D4;
      }
      goto L_089851B4;
    }
L_089851B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089853AC;
      }
      goto L_089851BC;
    }
L_089851BC:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(216));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (0u | 1u);
    goto L_089851CC;
L_089851CC:
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[23] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0898522C;
      }
      goto L_089851E0;
    }
L_089851E0:
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_089851E4;
L_089851E4:
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[23]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898521C;
      }
      goto L_089851F4;
    }
L_089851F4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0898521C;
      }
      goto L_08985204;
    }
L_08985204:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0898521C;
      }
      goto L_08985214;
    }
L_08985214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898522C;
      }
      goto L_0898521C;
    }
L_0898521C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[23] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089851E4;
      }
      goto L_0898522C;
    }
L_0898522C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089852BC;
      }
      goto L_08985234;
    }
L_08985234:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[23] << 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[22] + ctx.gpr[23]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0898525Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 46u, 0x088B4438u>(ctx, &aot_mem) && ctx.pc == 0x0898525Cu) goto L_0898525C;
    return;
L_0898525C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08985290;
      }
      goto L_08985274;
    }
L_08985274:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08985288u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 367u, 0x089724A8u>(ctx, &aot_mem) && ctx.pc == 0x08985288u) goto L_08985288;
    return;
L_08985288:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0898529C;
      }
      goto L_08985290;
    }
L_08985290:
    ctx.gpr[31] = (0x08985298u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x08985298u) goto L_08985298;
    return;
L_08985298:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    goto L_0898529C;
L_0898529C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
      if (branch_taken) {
          goto L_089852CC;
      }
      goto L_089852BC;
    }
L_089852BC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089852C8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 870u, 0x088B3F48u>(ctx, &aot_mem) && ctx.pc == 0x089852C8u) goto L_089852C8;
    return;
L_089852C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
    goto L_089852CC;
L_089852CC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089851CC;
      }
      goto L_089852D4;
    }
L_089852D4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2232u << 16u);
      if (branch_taken) {
          goto L_08985394;
      }
      goto L_089852E4;
    }
L_089852E4:
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(216));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5736));
    goto L_089852EC;
L_089852EC:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985380;
      }
      goto L_089852FC;
    }
L_089852FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 229 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_08985334;
      }
      goto L_0898530C;
    }
L_0898530C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[7] ^ ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985334;
      }
      goto L_0898532C;
    }
L_0898532C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08985380;
      }
      goto L_08985334;
    }
L_08985334:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08985344u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 491u, 0x08A8AF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08985344u) goto L_08985344;
    return;
L_08985344:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08985358u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 46u, 0x088B4438u>(ctx, &aot_mem) && ctx.pc == 0x08985358u) goto L_08985358;
    return;
L_08985358:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08985364u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x08985364u) goto L_08985364;
    return;
L_08985364:
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08985380;
L_08985380:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089852EC;
      }
      goto L_08985394;
    }
L_08985394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089853AC;
      }
      goto L_089853A0;
    }
L_089853A0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089853ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23132));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 678u, 0x0897F7C8u>(ctx, &aot_mem) && ctx.pc == 0x089853ACu) goto L_089853AC;
    return;
L_089853AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089853E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26716)));
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-26720)));
    ctx.gpr[3] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.gpr[23] = (2228u << 16u);
    ctx.gpr[8] = (17096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.gpr[9] = (16014u << 16u);
    ctx.gpr[22] = (2228u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 14571u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-26692)));
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-26712), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-7216), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7216)));
    ctx.gpr[10] = (2232u << 16u);
    ctx.gpr[2] = (2226u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(6008));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-23088));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[9] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-26708), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[22] = (16672u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-26704), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[22]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-7393), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[22] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-26700), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[20] = (15744u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[20]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[20] = (2228u << 16u);
    ctx.gpr[23] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-26696), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-26688), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-7396), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7396)));
    ctx.gpr[13] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-23076));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[24] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[13] = (ctx.gpr[24] + static_cast<std::uint32_t>(-23052));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(-7393)));
    ctx.gpr[24] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(-7397), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(-7397)));
    ctx.gpr[3] = (2226u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[2] = (ctx.gpr[3] + static_cast<std::uint32_t>(-23068));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    aot_mem.aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(-7394), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(-7394)));
    ctx.gpr[14] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2226u << 16u);
    aot_mem.aot_store8(ctx.gpr[14] + static_cast<std::uint32_t>(-8007), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[11] = (ctx.gpr[16] + static_cast<std::uint32_t>(-23040));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(-8007)));
    ctx.gpr[15] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2226u << 16u);
    aot_mem.aot_store8(ctx.gpr[15] + static_cast<std::uint32_t>(-7215), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[11] = (ctx.gpr[17] + static_cast<std::uint32_t>(-23028));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(-7215)));
    ctx.gpr[25] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2226u << 16u);
    aot_mem.aot_store8(ctx.gpr[25] + static_cast<std::uint32_t>(-7406), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[11] = (ctx.gpr[19] + static_cast<std::uint32_t>(-23012));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(-7406)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[21] = (2226u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[7] = (ctx.gpr[21] + static_cast<std::uint32_t>(-22996));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-7391), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-7391)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[11] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[30] = (2226u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[9] = (ctx.gpr[30] + static_cast<std::uint32_t>(-22980));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-7390), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-7390)));
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-22964));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-7204), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(-7204)));
    ctx.gpr[7] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-22944));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-7395), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-7395)));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (2226u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-22928));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-7400), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-7400)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22916));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-7206), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-7206)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[3] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[3] + static_cast<std::uint32_t>(-22908));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[6] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28216));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28216), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985734u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26680));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08985734u) goto L_08985734;
    return;
L_08985734:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985764:
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
L_08985790:
    ctx.gpr[7] = (2231u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(31792)));
    ctx.gpr[6] = (2231u << 16u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(31808));
      if (branch_taken) {
          goto L_08985828;
      }
      goto L_089857A4;
    }
L_089857A4:
    ctx.gpr[8] = (17540u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (ctx.gpr[8] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(31808), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(31792), ctx.gpr[8]);
    ctx.gpr[6] = (50248u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (17327u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (50204u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (50215u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[7] | 32768u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (50175u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 32768u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08985828;
L_08985828:
    ctx.gpr[2] = (ctx.gpr[4] << 4u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985834:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[31] = (0x08985854u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08985854u) goto L_08985854;
    return;
L_08985854:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0898587C;
    }
    goto L_0898587C;
L_0898587C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08985910;
      }
      goto L_0898588C;
    }
L_0898588C:
    ctx.gpr[31] = (0x08985894u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08985894u) goto L_08985894;
    return;
L_08985894:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089858B0;
    }
    goto L_089858B0;
L_089858B0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08985910;
      }
      goto L_089858C0;
    }
L_089858C0:
    ctx.gpr[31] = (0x089858C8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x089858C8u) goto L_089858C8;
    return;
L_089858C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089858E4;
    }
    goto L_089858E4;
L_089858E4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08985910;
      }
      goto L_089858F4;
    }
L_089858F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7340)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_08985908;
      }
      goto L_08985904;
    }
L_08985904:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26604), ctx.gpr[16]);
    goto L_08985908;
L_08985908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26604)));
      if (branch_taken) {
          goto L_08985934;
      }
      goto L_08985910;
    }
L_08985910:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x08985920u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 282u, 0x08871B18u>(ctx, &aot_mem) && ctx.pc == 0x08985920u) goto L_08985920;
    return;
L_08985920:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_08985930;
      }
      goto L_0898592C;
    }
L_0898592C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26600), ctx.gpr[16]);
    goto L_08985930;
L_08985930:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26600)));
    goto L_08985934;
L_08985934:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898594C:
    ctx.gpr[4] = (2231u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(31760), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985958:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26596)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08985990;
      }
      goto L_08985988;
    }
L_08985988:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089859A4;
      }
      goto L_08985990;
    }
L_08985990:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_089859A4;
L_089859A4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985A3C;
      }
      goto L_089859AC;
    }
L_089859AC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089859C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22888));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 418u, 0x08AED750u>(ctx, &aot_mem) && ctx.pc == 0x089859C0u) goto L_089859C0;
    return;
L_089859C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089859F8;
      }
      goto L_089859C8;
    }
L_089859C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6828)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_08985A3C;
      }
      goto L_089859D8;
    }
L_089859D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08985A3C;
      }
      goto L_089859F0;
    }
L_089859F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08985A3C;
      }
      goto L_089859F8;
    }
L_089859F8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08985A08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22872));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 418u, 0x08AED750u>(ctx, &aot_mem) && ctx.pc == 0x08985A08u) goto L_08985A08;
    return;
L_08985A08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08985A3C;
      }
      goto L_08985A10;
    }
L_08985A10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6828)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_08985A3C;
      }
      goto L_08985A20;
    }
L_08985A20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08985A3C;
      }
      goto L_08985A38;
    }
L_08985A38:
    ctx.gpr[16] = (0u | 0u);
    goto L_08985A3C;
L_08985A3C:
    ctx.gpr[2] = (0u < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985A54:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08985A7C;
      }
      goto L_08985A74;
    }
L_08985A74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08985A90;
      }
      goto L_08985A7C;
    }
L_08985A7C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08985A90;
L_08985A90:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985A98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26596)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08985AE4;
      }
      goto L_08985ADC;
    }
L_08985ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08985AFC;
      }
      goto L_08985AE4;
    }
L_08985AE4:
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08985AFC;
L_08985AFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08985B10u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AE0u>(ctx, &aot_mem) && ctx.pc == 0x08985B10u) goto L_08985B10;
    return;
L_08985B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_08985B70;
      }
      goto L_08985B1C;
    }
L_08985B1C:
    ctx.gpr[20] = (2229u << 16u);
    goto L_08985B20;
L_08985B20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08985B40;
      }
      goto L_08985B30;
    }
L_08985B30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08985B40;
L_08985B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08985B60u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AE0u>(ctx, &aot_mem) && ctx.pc == 0x08985B60u) goto L_08985B60;
    return;
L_08985B60:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08985B20;
      }
      goto L_08985B70;
    }
L_08985B70:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
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
L_08985B98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_08985BEC;
      }
      goto L_08985BE4;
    }
L_08985BE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08985C04;
      }
      goto L_08985BEC;
    }
L_08985BEC:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_08985C04;
L_08985C04:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08985C18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22856));
    goto L_08985764;
L_08985C18:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    goto L_08985C24;
L_08985C24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08985C44;
      }
      goto L_08985C34;
    }
L_08985C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_08985C44;
L_08985C44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985C98;
      }
      goto L_08985C4C;
    }
L_08985C4C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08985C60;
      }
      goto L_08985C54;
    }
L_08985C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08985C60;
L_08985C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985C98;
      }
      goto L_08985C74;
    }
L_08985C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08985C98;
      }
      goto L_08985C90;
    }
L_08985C90:
    ctx.gpr[31] = (0x08985C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 590u, 0x088064E4u>(ctx, &aot_mem) && ctx.pc == 0x08985C98u) goto L_08985C98;
    return;
L_08985C98:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08985C24;
      }
      goto L_08985CA8;
    }
L_08985CA8:
    ctx.gpr[22] = (2277u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-13792));
    goto L_08985CB8;
L_08985CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08985CD8;
      }
      goto L_08985CC8;
    }
L_08985CC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    goto L_08985CD8;
L_08985CD8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985D4C;
      }
      goto L_08985CE0;
    }
L_08985CE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08985CF4;
      }
      goto L_08985CE8;
    }
L_08985CE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08985CF4;
L_08985CF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985D4C;
      }
      goto L_08985D08;
    }
L_08985D08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08985D4C;
      }
      goto L_08985D24;
    }
L_08985D24:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08985D34;
    }
    goto L_08985D34;
L_08985D34:
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08985D4Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8BB0u>(ctx, &aot_mem) && ctx.pc == 0x08985D4Cu) goto L_08985D4C;
    return;
L_08985D4C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08985CB8;
      }
      goto L_08985D5C;
    }
L_08985D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985D88;
      }
      goto L_08985D68;
    }
L_08985D68:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08985D74u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 139u, 0x089C8BB0u>(ctx, &aot_mem) && ctx.pc == 0x08985D74u) goto L_08985D74;
    return;
L_08985D74:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08985D84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08985D84u) goto L_08985D84;
    return;
L_08985D84:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    goto L_08985D88;
L_08985D88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985DB0:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26596)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08985DD8;
      }
      goto L_08985DD0;
    }
L_08985DD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08985DEC;
      }
      goto L_08985DD8;
    }
L_08985DD8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08985DEC;
L_08985DEC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08985DF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-8068)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08985E70;
      }
      goto L_08985E48;
    }
L_08985E48:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08985E78;
      }
      goto L_08985E50;
    }
L_08985E50:
    ctx.gpr[31] = (0x08985E58u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08985834;
L_08985E58:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] ^ 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7384)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08985E8C;
      }
      goto L_08985E70;
    }
L_08985E70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986100;
      }
      goto L_08985E78;
    }
L_08985E78:
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] ^ 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7384)));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08985E8C;
L_08985E8C:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08985EA8;
      }
      goto L_08985E94;
    }
L_08985E94:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-7384));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[23] = (ctx.gpr[21] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[23] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08985EB4;
      }
      goto L_08985EA8;
    }
L_08985EA8:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[21] ^ 1u);
    ctx.gpr[23] = (ctx.gpr[23] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08985EB4;
L_08985EB4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22836));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (0u | 52u);
    ctx.gpr[30] = (2229u << 16u);
    goto L_08985EDC;
L_08985EDC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26596)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08985F04;
    }
    goto L_08985EFC;
L_08985EFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08985F10;
      }
      goto L_08985F04;
    }
L_08985F04:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08985F10;
L_08985F10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089860A0;
      }
      goto L_08985F18;
    }
L_08985F18:
    ctx.gpr[31] = (0x08985F20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08985958;
L_08985F20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089860A0;
      }
      goto L_08985F28;
    }
L_08985F28:
    ctx.gpr[31] = (0x08985F30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08985A54;
L_08985F30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08985F3Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED604u>(ctx, &aot_mem) && ctx.pc == 0x08985F3Cu) goto L_08985F3C;
    return;
L_08985F3C:
    ctx.gpr[18] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(6100));
      if (branch_taken) {
          goto L_08985F50;
      }
      goto L_08985F48;
    }
L_08985F48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08985FC0;
      }
      goto L_08985F50;
    }
L_08985F50:
    ctx.gpr[31] = (0x08985F58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08985DB0;
L_08985F58:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08985F64u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08985790;
L_08985F64:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08985FB8;
      }
      goto L_08985F7C;
    }
L_08985F7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08985FB8;
      }
      goto L_08985F90;
    }
L_08985F90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08985FB8;
      }
      goto L_08985FA4;
    }
L_08985FA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08985FC0;
      }
      goto L_08985FB8;
    }
L_08985FB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08985FC0;
      }
      goto L_08985FC0;
    }
L_08985FC0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986050;
      }
      goto L_08985FC8;
    }
L_08985FC8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986050;
      }
      goto L_08985FD0;
    }
L_08985FD0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08985FE0;
      }
      goto L_08985FD8;
    }
L_08985FD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08986050;
      }
      goto L_08985FE0;
    }
L_08985FE0:
    ctx.gpr[31] = (0x08985FE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08985DB0;
L_08985FE8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08985FF4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08985790;
L_08985FF4:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_0898600C;
    }
L_0898600C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_08986020;
    }
L_08986020:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08986048;
      }
      goto L_08986034;
    }
L_08986034:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08986050;
      }
      goto L_08986048;
    }
L_08986048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08986050;
      }
      goto L_08986050;
    }
L_08986050:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
      if (branch_taken) {
          goto L_08986098;
      }
      goto L_08986058;
    }
L_08986058:
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089860A0;
      }
      goto L_08986080;
    }
L_08986080:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898608Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x0898608Cu) goto L_0898608C;
    return;
L_0898608C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089860A0;
      }
      goto L_08986098;
    }
L_08986098:
    ctx.gpr[31] = (0x089860A0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x089860A0u) goto L_089860A0;
    return;
L_089860A0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08985EDC;
      }
      goto L_089860B0;
    }
L_089860B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(31760), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986100;
      }
      goto L_089860D4;
    }
L_089860D4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089860E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22828));
    goto L_08985764;
L_089860E0:
    ctx.gpr[31] = (0x089860E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 754u, 0x0891B6F8u>(ctx, &aot_mem) && ctx.pc == 0x089860E8u) goto L_089860E8;
    return;
L_089860E8:
    ctx.gpr[31] = (0x089860F0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x089860F0u) goto L_089860F0;
    return;
L_089860F0:
    ctx.gpr[31] = (0x089860F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 687u, 0x0893B810u>(ctx, &aot_mem) && ctx.pc == 0x089860F8u) goto L_089860F8;
    return;
L_089860F8:
    ctx.gpr[31] = (0x08986100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 756u, 0x0891B71Cu>(ctx, &aot_mem) && ctx.pc == 0x08986100u) goto L_08986100;
    return;
L_08986100:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986140:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986148:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (2231u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(31760), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31776));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898616C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (49894u << 16u);
    ctx.gpr[19] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (0u | 52u);
    goto L_089861B4;
L_089861B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26596)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_089861D8;
    }
    goto L_089861D0;
L_089861D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089861E4;
      }
      goto L_089861D8;
    }
L_089861D8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089861E4;
L_089861E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986298;
      }
      goto L_089861EC;
    }
L_089861EC:
    ctx.gpr[31] = (0x089861F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08985958;
L_089861F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986298;
      }
      goto L_089861FC;
    }
L_089861FC:
    ctx.gpr[31] = (0x08986204u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08985DB0;
L_08986204:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08986210u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08985834;
L_08986210:
    ctx.gpr[31] = (0x08986218u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08985790;
L_08986218:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0898627C;
      }
      goto L_08986234;
    }
L_08986234:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898627C;
      }
      goto L_0898624C;
    }
L_0898624C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898627C;
      }
      goto L_08986264;
    }
L_08986264:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08986284;
      }
      goto L_0898627C;
    }
L_0898627C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08986284;
      }
      goto L_08986284;
    }
L_08986284:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986298;
      }
      goto L_0898628C;
    }
L_0898628C:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(6100));
    ctx.gpr[31] = (0x08986298u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08986298u) goto L_08986298;
    return;
L_08986298:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_089861B4;
      }
      goto L_089862A8;
    }
L_089862A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089862DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089862ECu);
    // nop
    goto L_08985834;
L_089862EC:
    ctx.gpr[31] = (0x089862F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08986300;
L_089862F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986300:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08986334u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08985790;
L_08986334:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[19] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-22836));
    ctx.gpr[20] = (ctx.gpr[18] ^ 1u);
    ctx.gpr[20] = (ctx.gpr[20] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (0u | 52u);
    goto L_08986364;
L_08986364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26596)));
        goto L_08986388;
    }
    goto L_08986380;
L_08986380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08986398;
      }
      goto L_08986388;
    }
L_08986388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08986398;
L_08986398:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898648C;
      }
      goto L_089863A0;
    }
L_089863A0:
    ctx.gpr[31] = (0x089863A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08985958;
L_089863A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898648C;
      }
      goto L_089863B0;
    }
L_089863B0:
    ctx.gpr[31] = (0x089863B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08985A54;
L_089863B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089863C4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED604u>(ctx, &aot_mem) && ctx.pc == 0x089863C4u) goto L_089863C4;
    return;
L_089863C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089863D4;
      }
      goto L_089863CC;
    }
L_089863CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0898643C;
      }
      goto L_089863D4;
    }
L_089863D4:
    ctx.gpr[31] = (0x089863DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08985DB0;
L_089863DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08986434;
      }
      goto L_089863F8;
    }
L_089863F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08986434;
      }
      goto L_0898640C;
    }
L_0898640C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08986434;
      }
      goto L_08986420;
    }
L_08986420:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0898643C;
      }
      goto L_08986434;
    }
L_08986434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0898643C;
      }
      goto L_0898643C;
    }
L_0898643C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898648C;
      }
      goto L_08986444;
    }
L_08986444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26596)));
        goto L_08986468;
    }
    goto L_08986460;
L_08986460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08986470;
      }
      goto L_08986468;
    }
L_08986468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_08986470;
L_08986470:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898648C;
      }
      goto L_0898647C;
    }
L_0898647C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089864A8;
      }
      goto L_0898648C;
    }
L_0898648C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08986364;
      }
      goto L_0898649C;
    }
L_0898649C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (0u | 1u);
    goto L_089864A8;
L_089864A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
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
L_089864D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (0u | 52u);
    ctx.gpr[16] = (2229u << 16u);
    goto L_089864F8;
L_089864F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26596)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0898651C;
    }
    goto L_08986514;
L_08986514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08986528;
      }
      goto L_0898651C;
    }
L_0898651C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08986528;
L_08986528:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(6100));
      if (branch_taken) {
          goto L_0898655C;
      }
      goto L_08986530;
    }
L_08986530:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] & 131u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898655C;
      }
      goto L_08986554;
    }
L_08986554:
    ctx.gpr[31] = (0x0898655Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 476u, 0x089C6124u>(ctx, &aot_mem) && ctx.pc == 0x0898655Cu) goto L_0898655C;
    return;
L_0898655C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_089864F8;
      }
      goto L_0898656C;
    }
L_0898656C:
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
L_08986588:
    ctx.gpr[6] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-26596), ctx.gpr[5]);
    ctx.gpr[5] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-26592), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898659C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26660)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26664)));
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[6] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26656), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[3] = (2228u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26632)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26636)));
    ctx.gpr[9] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26628), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[25] = (2228u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-26620), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    ctx.gpr[13] = (2228u << 16u);
    ctx.gpr[12] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-26648), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-26652), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.gpr[14] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[8] = (16268u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[15] = (2228u << 16u);
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-26644), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-26640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[24] = (2228u << 16u);
    ctx.gpr[11] = (15744u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-26624), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[17] = (2277u << 16u);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-13792));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08986698u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26608), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 582u, 0x088063D8u>(ctx, &aot_mem) && ctx.pc == 0x08986698u) goto L_08986698;
    return;
L_08986698:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x089866A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26588));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x089866A4u) goto L_089866A4;
    return;
L_089866A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089866B8:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08986734;
      }
      goto L_089866C4;
    }
L_089866C4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26576));
    goto L_089866D8;
L_089866D8:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[9] & 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] >> 8u);
      if (branch_taken) {
          goto L_0898670C;
      }
      goto L_089866EC;
    }
L_089866EC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[8]);
      if (branch_taken) {
          goto L_08986724;
      }
      goto L_0898670C;
    }
L_0898670C:
    ctx.gpr[8] = (ctx.gpr[8] ^ ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[8]);
    goto L_08986724;
L_08986724:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089866D8;
      }
      goto L_08986734;
    }
L_08986734:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898673C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7940), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7376), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6428), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7088), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7908), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912), 0u);
    ctx.gpr[10] = (2277u << 16u);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-9024));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-8512));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-8000));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9536));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6448));
    goto L_089867B0;
L_089867B0:
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089867B0;
      }
      goto L_089867D4;
    }
L_089867D4:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6416), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6412), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6408), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6404), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6403), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6396), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6392), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6380), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6388), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6384), 0u);
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7116), 0u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-6400), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08986840;
L_08986840:
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08986840;
      }
      goto L_08986854;
    }
L_08986854:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6432), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4368));
    goto L_08986870;
L_08986870:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_0898687C;
L_0898687C:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898687C;
      }
      goto L_08986890;
    }
L_08986890:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_08986870;
      }
      goto L_089868A4;
    }
L_089868A4:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6452));
    goto L_089868B0;
L_089868B0:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089868B0;
      }
      goto L_089868CC;
    }
L_089868CC:
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-6442), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6440), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6320), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-7083), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-7084), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(-6800), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6472), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6464), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-25490), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6462), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6376), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6372), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6368), 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6364), ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6360), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6356), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6352), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6788), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6348), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6344), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6340), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6792), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6336), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6332), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6328), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6324), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6796), ctx.gpr[4]);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986A0C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6428), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7088), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7908), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912), 0u);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-9024));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-8512));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8000));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9536));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4624));
    goto L_08986A58;
L_08986A58:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08986A58;
      }
      goto L_08986A7C;
    }
L_08986A7C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6416), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6412), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6408), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6404), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6403), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6396), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6392), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6380), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6388), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6384), 0u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7116), 0u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-6400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08986AE8;
L_08986AE8:
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08986AE8;
      }
      goto L_08986AFC;
    }
L_08986AFC:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4368));
    goto L_08986B14;
L_08986B14:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08986B44;
      }
      goto L_08986B28;
    }
L_08986B28:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08986B30;
L_08986B30:
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08986B30;
      }
      goto L_08986B44;
    }
L_08986B44:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_08986B14;
      }
      goto L_08986B58;
    }
L_08986B58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B60:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4368));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(1024), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4368), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B88:
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7088), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986B94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2277u << 16u);
    ctx.gpr[21] = (2277u << 16u);
    ctx.gpr[22] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-9024));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8512));
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(-8000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[30] = (2230u << 16u);
      if (branch_taken) {
          goto L_08986BFC;
      }
      goto L_08986BF0;
    }
L_08986BF0:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7376), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08986C28;
      }
      goto L_08986BFC;
    }
L_08986BFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986C28;
      }
      goto L_08986C04;
    }
L_08986C04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08986C28u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 495u, 0x0887B020u>(ctx, &aot_mem) && ctx.pc == 0x08986C28u) goto L_08986C28;
    return;
L_08986C28:
    ctx.gpr[4] = (0u | 0u);
    goto L_08986C2C;
L_08986C2C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[21]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986C2C;
      }
      goto L_08986C5C;
    }
L_08986C5C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08986C6Cu);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 187u, 0x08878FB0u>(ctx, &aot_mem) && ctx.pc == 0x08986C6Cu) goto L_08986C6C;
    return;
L_08986C6C:
    ctx.gpr[31] = (0x08986C74u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 348u, 0x08879F84u>(ctx, &aot_mem) && ctx.pc == 0x08986C74u) goto L_08986C74;
    return;
L_08986C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-6408)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08986C94;
      }
      goto L_08986C80;
    }
L_08986C80:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08986C8Cu);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 195u, 0x08879030u>(ctx, &aot_mem) && ctx.pc == 0x08986C8Cu) goto L_08986C8C;
    return;
L_08986C8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986C9C;
      }
      goto L_08986C94;
    }
L_08986C94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08986CA4;
      }
      goto L_08986C9C;
    }
L_08986C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986D24;
      }
      goto L_08986CA4;
    }
L_08986CA4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986CA4;
      }
      goto L_08986CC4;
    }
L_08986CC4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08986CD8;
      }
      goto L_08986CCC;
    }
L_08986CCC:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(-9024), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(-8000), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-6408), 0u);
    goto L_08986CD8;
L_08986CD8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986D10;
      }
      goto L_08986CE0;
    }
L_08986CE0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-6408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08986CF8u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 187u, 0x08878FB0u>(ctx, &aot_mem) && ctx.pc == 0x08986CF8u) goto L_08986CF8;
    return;
L_08986CF8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08986D08u);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 187u, 0x08878FB0u>(ctx, &aot_mem) && ctx.pc == 0x08986D08u) goto L_08986D08;
    return;
L_08986D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08986D14;
      }
      goto L_08986D10;
    }
L_08986D10:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-6408), 0u);
    goto L_08986D14;
L_08986D14:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6404), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6403), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08986D24;
L_08986D24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986D54:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6408)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986D64:
    ctx.gpr[5] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6396), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986D70:
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[10] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9536));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08986D8C;
L_08986D8C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08986DBC;
      }
      goto L_08986D94;
    }
L_08986D94:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986DBC;
      }
      goto L_08986DA0;
    }
L_08986DA0:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 256 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08986D8C;
      }
      goto L_08986DBC;
    }
L_08986DBC:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6432), static_cast<std::uint8_t>(ctx.gpr[10]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986DCC:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4624));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08986ED4;
      }
      goto L_08986DF8;
    }
L_08986DF8:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[2] << 9u);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[12] = (ctx.gpr[8] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4368));
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[3] = (0u | 5u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-13696));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    ctx.gpr[5] = (ctx.gpr[12] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08986E90;
      }
      goto L_08986E2C;
    }
L_08986E2C:
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[7]);
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[2] = (2228u << 16u);
    goto L_08986E38;
L_08986E38:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08986ECC;
      }
      goto L_08986E40;
    }
L_08986E40:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986ECC;
      }
      goto L_08986E4C;
    }
L_08986E4C:
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_08986E64;
      }
      goto L_08986E58;
    }
L_08986E58:
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-6456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-25490), static_cast<std::uint16_t>(0u));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_08986E64;
L_08986E64:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] & 65535u);
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[12] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[11]) < 256 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08986E38;
      }
      goto L_08986E90;
    }
L_08986E90:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08986EC4;
      }
      goto L_08986E98;
    }
L_08986E98:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08986EC4;
      }
      goto L_08986EA4;
    }
L_08986EA4:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[11] = (ctx.gpr[11] & 65535u);
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[12] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[11]) < 256 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[12] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08986E90;
      }
      goto L_08986EC4;
    }
L_08986EC4:
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08986ECC;
L_08986ECC:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08986ED4;
L_08986ED4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986EDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986EE4:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4368));
    goto L_08986F04;
L_08986F04:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08986F30;
      }
      goto L_08986F0C;
    }
L_08986F0C:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08986F30;
      }
      goto L_08986F14;
    }
L_08986F14:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[7]);
    goto L_08986F1C;
L_08986F1C:
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08986F1C;
      }
      goto L_08986F30;
    }
L_08986F30:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[10]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(512));
      if (branch_taken) {
          goto L_08986F04;
      }
      goto L_08986F40;
    }
L_08986F40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08986F48:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6428), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7088), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7908), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912), 0u);
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-9024));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-8512));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8000));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9536));
    goto L_08986F8C;
L_08986F8C:
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08986F8C;
      }
      goto L_08986FB0;
    }
L_08986FB0:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6416), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6412), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6408), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6404), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6403), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6396), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6392), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6380), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6388), 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6384), 0u);
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7116), 0u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898701C;
L_0898701C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898701C;
      }
      goto L_08987030;
    }
L_08987030:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987038:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987054;
      }
      goto L_08987048;
    }
L_08987048:
    ctx.gpr[4] = (17080u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08987060;
      }
      goto L_08987054;
    }
L_08987054:
    ctx.gpr[4] = (17027u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08987060;
L_08987060:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987068:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987084;
      }
      goto L_08987078;
    }
L_08987078:
    ctx.gpr[4] = (17080u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08987090;
      }
      goto L_08987084;
    }
L_08987084:
    ctx.gpr[4] = (17027u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08987090;
L_08987090:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987098:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    ctx.gpr[5] = (16704u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089870B4;
      }
      goto L_089870AC;
    }
L_089870AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089870B4;
      }
      goto L_089870B4;
    }
L_089870B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089870BC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089870D8;
      }
      goto L_089870CC;
    }
L_089870CC:
    ctx.gpr[4] = (17194u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089870E0;
      }
      goto L_089870D8;
    }
L_089870D8:
    ctx.gpr[4] = (17220u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089870E0;
L_089870E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089870E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898710Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898710Cu) goto L_0898710C;
    return;
L_0898710C:
    ctx.gpr[31] = (0x08987114u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08987114u) goto L_08987114;
    return;
L_08987114:
    ctx.gpr[31] = (0x0898711Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x0898711Cu) goto L_0898711C;
    return;
L_0898711C:
    ctx.gpr[31] = (0x08987124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x08987124u) goto L_08987124;
    return;
L_08987124:
    ctx.gpr[31] = (0x0898712Cu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x0898712Cu) goto L_0898712C;
    return;
L_0898712C:
    ctx.gpr[31] = (0x08987134u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08987134u) goto L_08987134;
    return;
L_08987134:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898714Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898714Cu) goto L_0898714C;
    return;
L_0898714C:
    ctx.gpr[31] = (0x08987154u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08987154u) goto L_08987154;
    return;
L_08987154:
    ctx.gpr[31] = (0x0898715Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898715Cu) goto L_0898715C;
    return;
L_0898715C:
    ctx.gpr[31] = (0x08987164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x08987164u) goto L_08987164;
    return;
L_08987164:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6800))))));
    ctx.gpr[9] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[7] = (0u | 4u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.gpr[16] = (2228u << 16u);
      if (branch_taken) {
          goto L_08987244;
      }
      goto L_08987200;
    }
L_08987200:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(359)));
        goto L_08987248;
    }
    goto L_08987220;
L_08987220:
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24892)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-24892), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08987244;
      }
      goto L_08987234;
    }
L_08987234:
    ctx.gpr[8] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-24892), ctx.gpr[8]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6800), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08987244;
L_08987244:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(359)));
    goto L_08987248;
L_08987248:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898726C;
      }
      goto L_08987264;
    }
L_08987264:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08987280;
      }
      goto L_0898726C;
    }
L_0898726C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08987280;
      }
      goto L_0898727C;
    }
L_0898727C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08987280;
L_08987280:
    ctx.fpr[13] = ctx.fpr[24] / ctx.fpr[20];
    ctx.gpr[5] = (16928u << 16u);
    ctx.gpr[6] = (16768u << 16u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[8] = (15488u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_089872C4;
      }
      goto L_089872B8;
    }
L_089872B8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089872E0;
      }
      goto L_089872C4;
    }
L_089872C4:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16267u << 16u);
      if (branch_taken) {
          goto L_089872E4;
      }
      goto L_089872D4;
    }
L_089872D4:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089872E0;
L_089872E0:
    ctx.gpr[4] = (16267u << 16u);
    goto L_089872E4;
L_089872E4:
    ctx.gpr[4] = (ctx.gpr[4] | 34079u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17328u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (16936u << 16u);
    ctx.gpr[6] = (17000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.fpr[30] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0898732Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x0898732Cu) goto L_0898732C;
    return;
L_0898732C:
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[7] + static_cast<std::uint32_t>(-7488));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(244));
    ctx.gpr[31] = (0x08987354u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08987354u) goto L_08987354;
    return;
L_08987354:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08987384u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x08987384u) goto L_08987384;
    return;
L_08987384:
    ctx.gpr[5] = (17362u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] | 57672u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089873ACu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089873ACu) goto L_089873AC;
    return;
L_089873AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(232));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x089873F8u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089873F8u) goto L_089873F8;
    return;
L_089873F8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08987428u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x08987428u) goto L_08987428;
    return;
L_08987428:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08987440u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08987440u) goto L_08987440;
    return;
L_08987440:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(248));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x0898748Cu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898748Cu) goto L_0898748C;
    return;
L_0898748C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x089874BCu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x089874BCu) goto L_089874BC;
    return;
L_089874BC:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089875E0;
      }
      goto L_089874D8;
    }
L_089874D8:
    ctx.gpr[31] = (0x089874E0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x089874E0u) goto L_089874E0;
    return;
L_089874E0:
    ctx.gpr[31] = (0x089874E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x089874E8u) goto L_089874E8;
    return;
L_089874E8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08987504u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08987504u) goto L_08987504;
    return;
L_08987504:
    ctx.gpr[31] = (0x0898750Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898750Cu) goto L_0898750C;
    return;
L_0898750C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08987524u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08987524u) goto L_08987524;
    return;
L_08987524:
    ctx.gpr[31] = (0x0898752Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898752Cu) goto L_0898752C;
    return;
L_0898752C:
    ctx.gpr[31] = (0x08987534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08987534u) goto L_08987534;
    return;
L_08987534:
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4832));
      if (branch_taken) {
          goto L_08987584;
      }
      goto L_08987550;
    }
L_08987550:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898755Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 427u, 0x08AD9C74u>(ctx, &aot_mem) && ctx.pc == 0x0898755Cu) goto L_0898755C;
    return;
L_0898755C:
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987570u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 431u, 0x08AD9CB8u>(ctx, &aot_mem) && ctx.pc == 0x08987570u) goto L_08987570;
    return;
L_08987570:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0898757Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898757Cu) goto L_0898757C;
    return;
L_0898757C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089875BC;
      }
      goto L_08987584;
    }
L_08987584:
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987598u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 427u, 0x08AD9C74u>(ctx, &aot_mem) && ctx.pc == 0x08987598u) goto L_08987598;
    return;
L_08987598:
    ctx.gpr[4] = (16307u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089875B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 431u, 0x08AD9CB8u>(ctx, &aot_mem) && ctx.pc == 0x089875B0u) goto L_089875B0;
    return;
L_089875B0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089875BCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x089875BCu) goto L_089875BC;
    return;
L_089875BC:
    ctx.gpr[4] = (17337u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (16920u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089875E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21880));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x089875E0u) goto L_089875E0;
    return;
L_089875E0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898761C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6800))))));
    ctx.gpr[9] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[7] = (0u | 3u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    ctx.gpr[16] = (2228u << 16u);
      if (branch_taken) {
          goto L_089876F0;
      }
      goto L_089876AC;
    }
L_089876AC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(360)));
        goto L_089876F4;
    }
    goto L_089876CC;
L_089876CC:
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24888)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-24888), ctx.gpr[9]);
      if (branch_taken) {
          goto L_089876F0;
      }
      goto L_089876E0;
    }
L_089876E0:
    ctx.gpr[8] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-24888), ctx.gpr[8]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6800), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_089876F0;
L_089876F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(360)));
    goto L_089876F4;
L_089876F4:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08987718;
      }
      goto L_08987710;
    }
L_08987710:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0898772C;
      }
      goto L_08987718;
    }
L_08987718:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898772C;
      }
      goto L_08987728;
    }
L_08987728:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0898772C;
L_0898772C:
    ctx.fpr[13] = ctx.fpr[24] / ctx.fpr[20];
    ctx.gpr[5] = (16928u << 16u);
    ctx.gpr[6] = (16768u << 16u);
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[8] = (15488u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08987770;
      }
      goto L_08987764;
    }
L_08987764:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0898778C;
      }
      goto L_08987770;
    }
L_08987770:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16267u << 16u);
      if (branch_taken) {
          goto L_08987790;
      }
      goto L_08987780;
    }
L_08987780:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0898778C;
L_0898778C:
    ctx.gpr[4] = (16267u << 16u);
    goto L_08987790;
L_08987790:
    ctx.gpr[4] = (ctx.gpr[4] | 34079u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17328u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (16840u << 16u);
    ctx.gpr[6] = (16932u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.fpr[30] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089877D8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089877D8u) goto L_089877D8;
    return;
L_089877D8:
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[7] + static_cast<std::uint32_t>(-7488));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(240));
    ctx.gpr[31] = (0x08987800u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08987800u) goto L_08987800;
    return;
L_08987800:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08987830u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x08987830u) goto L_08987830;
    return;
L_08987830:
    ctx.gpr[5] = (17362u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] | 57672u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08987858u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08987858u) goto L_08987858;
    return;
L_08987858:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(228));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x089878A4u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089878A4u) goto L_089878A4;
    return;
L_089878A4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x089878D4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x089878D4u) goto L_089878D4;
    return;
L_089878D4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x089878ECu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089878ECu) goto L_089878EC;
    return;
L_089878EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(248));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08987938u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08987938u) goto L_08987938;
    return;
L_08987938:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08987968u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 932u, 0x08AD3CFCu>(ctx, &aot_mem) && ctx.pc == 0x08987968u) goto L_08987968;
    return;
L_08987968:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08987A8C;
      }
      goto L_08987984;
    }
L_08987984:
    ctx.gpr[31] = (0x0898798Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898798Cu) goto L_0898798C;
    return;
L_0898798C:
    ctx.gpr[31] = (0x08987994u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08987994u) goto L_08987994;
    return;
L_08987994:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089879B0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089879B0u) goto L_089879B0;
    return;
L_089879B0:
    ctx.gpr[31] = (0x089879B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x089879B8u) goto L_089879B8;
    return;
L_089879B8:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x089879D0u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089879D0u) goto L_089879D0;
    return;
L_089879D0:
    ctx.gpr[31] = (0x089879D8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x089879D8u) goto L_089879D8;
    return;
L_089879D8:
    ctx.gpr[31] = (0x089879E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x089879E0u) goto L_089879E0;
    return;
L_089879E0:
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4832));
      if (branch_taken) {
          goto L_08987A30;
      }
      goto L_089879FC;
    }
L_089879FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987A08u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 427u, 0x08AD9C74u>(ctx, &aot_mem) && ctx.pc == 0x08987A08u) goto L_08987A08;
    return;
L_08987A08:
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987A1Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 431u, 0x08AD9CB8u>(ctx, &aot_mem) && ctx.pc == 0x08987A1Cu) goto L_08987A1C;
    return;
L_08987A1C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08987A28u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08987A28u) goto L_08987A28;
    return;
L_08987A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987A68;
      }
      goto L_08987A30;
    }
L_08987A30:
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987A44u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 427u, 0x08AD9C74u>(ctx, &aot_mem) && ctx.pc == 0x08987A44u) goto L_08987A44;
    return;
L_08987A44:
    ctx.gpr[4] = (16307u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08987A5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 431u, 0x08AD9CB8u>(ctx, &aot_mem) && ctx.pc == 0x08987A5Cu) goto L_08987A5C;
    return;
L_08987A5C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08987A68u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08987A68u) goto L_08987A68;
    return;
L_08987A68:
    ctx.gpr[4] = (17337u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (16808u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08987A8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21880));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08987A8Cu) goto L_08987A8C;
    return;
L_08987A8C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987AC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B20;
      }
      goto L_08987AE4;
    }
L_08987AE4:
    ctx.gpr[31] = (0x08987AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08987AECu) goto L_08987AEC;
    return;
L_08987AEC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08987AF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 319u, 0x08945584u>(ctx, &aot_mem) && ctx.pc == 0x08987AF8u) goto L_08987AF8;
    return;
L_08987AF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B18;
      }
      goto L_08987B00;
    }
L_08987B00:
    ctx.gpr[31] = (0x08987B08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 331u, 0x08945604u>(ctx, &aot_mem) && ctx.pc == 0x08987B08u) goto L_08987B08;
    return;
L_08987B08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987B28;
      }
      goto L_08987B10;
    }
L_08987B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987B60;
      }
      goto L_08987B18;
    }
L_08987B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987C38;
      }
      goto L_08987B20;
    }
L_08987B20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987C38;
      }
      goto L_08987B28;
    }
L_08987B28:
    ctx.gpr[31] = (0x08987B30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 359u, 0x08945820u>(ctx, &aot_mem) && ctx.pc == 0x08987B30u) goto L_08987B30;
    return;
L_08987B30:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[7] = (0u | 230u);
    ctx.gpr[31] = (0x08987B4Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08987B4Cu) goto L_08987B4C;
    return;
L_08987B4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987B58u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 679u, 0x08917904u>(ctx, &aot_mem) && ctx.pc == 0x08987B58u) goto L_08987B58;
    return;
L_08987B58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987C38;
      }
      goto L_08987B60;
    }
L_08987B60:
    ctx.gpr[31] = (0x08987B68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 333u, 0x08945620u>(ctx, &aot_mem) && ctx.pc == 0x08987B68u) goto L_08987B68;
    return;
L_08987B68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987BA8;
      }
      goto L_08987B70;
    }
L_08987B70:
    ctx.gpr[31] = (0x08987B78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 359u, 0x08945820u>(ctx, &aot_mem) && ctx.pc == 0x08987B78u) goto L_08987B78;
    return;
L_08987B78:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 235u);
    ctx.gpr[6] = (0u | 45u);
    ctx.gpr[7] = (0u | 45u);
    ctx.gpr[31] = (0x08987B94u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08987B94u) goto L_08987B94;
    return;
L_08987B94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987BA0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 679u, 0x08917904u>(ctx, &aot_mem) && ctx.pc == 0x08987BA0u) goto L_08987BA0;
    return;
L_08987BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987C38;
      }
      goto L_08987BA8;
    }
L_08987BA8:
    ctx.gpr[31] = (0x08987BB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 332u, 0x08945610u>(ctx, &aot_mem) && ctx.pc == 0x08987BB0u) goto L_08987BB0;
    return;
L_08987BB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987BF0;
      }
      goto L_08987BB8;
    }
L_08987BB8:
    ctx.gpr[31] = (0x08987BC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 359u, 0x08945820u>(ctx, &aot_mem) && ctx.pc == 0x08987BC0u) goto L_08987BC0;
    return;
L_08987BC0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 235u);
    ctx.gpr[6] = (0u | 220u);
    ctx.gpr[7] = (0u | 220u);
    ctx.gpr[31] = (0x08987BDCu);
    ctx.gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08987BDCu) goto L_08987BDC;
    return;
L_08987BDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987BE8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 679u, 0x08917904u>(ctx, &aot_mem) && ctx.pc == 0x08987BE8u) goto L_08987BE8;
    return;
L_08987BE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08987C38;
      }
      goto L_08987BF0;
    }
L_08987BF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987C38;
      }
      goto L_08987C08;
    }
L_08987C08:
    ctx.gpr[31] = (0x08987C10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 359u, 0x08945820u>(ctx, &aot_mem) && ctx.pc == 0x08987C10u) goto L_08987C10;
    return;
L_08987C10:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (0u | 235u);
    ctx.gpr[6] = (0u | 220u);
    ctx.gpr[7] = (0u | 220u);
    ctx.gpr[31] = (0x08987C2Cu);
    ctx.gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08987C2Cu) goto L_08987C2C;
    return;
L_08987C2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987C38u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 679u, 0x08917904u>(ctx, &aot_mem) && ctx.pc == 0x08987C38u) goto L_08987C38;
    return;
L_08987C38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987C48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[31]);
    ctx.gpr[31] = (0x08987C94u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21876));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08987C94u) goto L_08987C94;
    return;
L_08987C94:
    ctx.gpr[6] = (17336u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (17008u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08987CB4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_08987E60;
L_08987CB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987CC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(-24904)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2228u << 16u);
      if (branch_taken) {
          goto L_08987DF0;
      }
      goto L_08987CE4;
    }
L_08987CE4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24902)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 60u);
      if (branch_taken) {
          goto L_08987D80;
      }
      goto L_08987CF0;
    }
L_08987CF0:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-24906)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08987D40;
      }
      goto L_08987D38;
    }
L_08987D38:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    goto L_08987D40;
L_08987D40:
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-24907)));
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08987D58;
      }
      goto L_08987D54;
    }
L_08987D54:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    goto L_08987D58;
L_08987D58:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-8048)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08987D80;
      }
      goto L_08987D68;
    }
L_08987D68:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8047)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08987D80;
      }
      goto L_08987D74;
    }
L_08987D74:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-24902), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24902)));
    goto L_08987D80;
L_08987D80:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987DF0;
      }
      goto L_08987D88;
    }
L_08987D88:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-24902), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24902)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987DBC;
      }
      goto L_08987DA0;
    }
L_08987DA0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-24902), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 167u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08987DBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08987DBCu) goto L_08987DBC;
    return;
L_08987DBC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-24907)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08987DF0;
      }
      goto L_08987DD4;
    }
L_08987DD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8047)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-24906)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08987DF0;
      }
      goto L_08987DE8;
    }
L_08987DE8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-24902), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(-24904), static_cast<std::uint16_t>(0u));
    goto L_08987DF0;
L_08987DF0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-24902)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987E08;
      }
      goto L_08987E00;
    }
L_08987E00:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987E4C;
      }
      goto L_08987E08;
    }
L_08987E08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8048)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8047)));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08987E2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21868));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08987E2Cu) goto L_08987E2C;
    return;
L_08987E2C:
    ctx.gpr[6] = (17336u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (16640u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08987E4Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    goto L_08987E60;
L_08987E4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08987E60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[31] = (0x08987EDCu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08987EDCu) goto L_08987EDC;
    return;
L_08987EDC:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (16720u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 14u, 0x0898812Cu>(ctx, &aot_mem); return;
      }
      goto L_08987EEC;
    }
L_08987EEC:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7488));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(236));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 22u);
    ctx.gpr[4] = (15872u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16008u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17392u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08987F34;
L_08987F34:
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 58 ? 1u : 0u);
      if (branch_taken) {
          goto L_08987F8C;
      }
      goto L_08987F44;
    }
L_08987F44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08987F8C;
      }
      goto L_08987F4C;
    }
L_08987F4C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08987F70;
      }
      goto L_08987F54;
    }
L_08987F54:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[4] >> 29u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 5u, 0x08988040u>(ctx, &aot_mem); return;
      }
      goto L_08987F70;
    }
L_08987F70:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-37));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[4] >> 29u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 5u, 0x08988040u>(ctx, &aot_mem); return;
      }
      goto L_08987F8C;
    }
L_08987F8C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 2u, 0x08988024u>(ctx, &aot_mem); return;
      }
      goto L_08987F94;
    }
L_08987F94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[4] >> 29u);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-24908)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
      if (branch_taken) {
          goto L_08987FE8;
      }
      goto L_08987FAC;
    }
L_08987FAC:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (0u | 241u);
    ctx.gpr[6] = (0u | 170u);
    ctx.gpr[31] = (0x08987FC4u);
    ctx.gpr[7] = (0u | 57u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08987FC4u) goto L_08987FC4;
    return;
L_08987FC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 5u, 0x08988040u>(ctx, &aot_mem); return;
      }
      goto L_08987FE8;
    }
L_08987FE8:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (0u | 62u);
    ctx.gpr[6] = (0u | 141u);
    ctx.gpr[31] = (0x08988000u);
    ctx.gpr[7] = (0u | 188u);
    (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0096(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0096_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_96(Runtime &runtime) {
    runtime.register_generated_unit(96u, 0x08984000u, 16384u, &recomp_unit_0096, &recomp_unit_0096_entry);
    runtime.register_function(0x08984000u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089840CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984114u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898411Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984120u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984138u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984158u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898416Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984178u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089841F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898421Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984228u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984300u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898430Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984384u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984390u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898441Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984430u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898443Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089844ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984500u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984508u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898451Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984524u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898452Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898453Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984550u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898455Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898457Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898458Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898459Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089845F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984600u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984614u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984624u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984638u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984648u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898465Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898466Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984680u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984690u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089846FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984708u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984718u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898472Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898473Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984768u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984778u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898478Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898479Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089847FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984808u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898482Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984868u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984884u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898488Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984894u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898489Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089848F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984904u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898490Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984914u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898492Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984938u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984944u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898494Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898496Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898497Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984988u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984990u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089849DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A14u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984A90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984AACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984ABCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984B84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984BDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C14u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984C9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984CECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984DD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984E90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984EFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984F8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08984FF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985010u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985028u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985030u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985054u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985068u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985078u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985084u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985090u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985094u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089850F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985158u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985174u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985188u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089851F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985204u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985214u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898521Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898522Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985234u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898525Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985274u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985288u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985290u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985298u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898529Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089852FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898530Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898532Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985334u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985344u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985358u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985364u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985380u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985394u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089853E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985734u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985764u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985790u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089857A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985828u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985834u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985854u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898587Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898588Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985894u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089858F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985904u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985908u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985910u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985920u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898592Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985930u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985934u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898594Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985958u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985988u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985990u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859C0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859C8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089859F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985A98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985ADCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985AFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985B98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985BECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985C98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985CF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D84u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985D88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985DF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985E94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EB4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985EFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F3Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F50u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985F90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FD0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08985FF4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898600Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986020u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986034u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986048u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986050u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986058u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986080u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898608Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986098u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089860F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986100u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986140u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986148u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898616Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089861FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986204u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986210u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986218u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986234u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898624Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986264u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898627Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986284u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898628Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986298u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089862F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986300u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986334u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986364u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986380u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986388u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986398u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863A0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863DCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089863F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898640Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986420u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986434u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898643Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986444u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986460u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986468u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986470u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898647Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898648Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898649Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864A8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089864F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986514u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898651Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986528u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986530u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986554u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898655Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898656Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986588u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898659Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986698u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089866A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089866B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089866C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089866D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089866ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898670Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986724u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986734u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898673Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089867D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986840u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986854u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986870u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898687Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986890u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089868A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089868B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089868CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A0Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986A7Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986AE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986AFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B14u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986B94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986BFCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C6Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986C9Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CD8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CE0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986CF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D14u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D24u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986D94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DBCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DCCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986DF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E64u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E90u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986E98u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986EA4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986EC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986ECCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986ED4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986EDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986EE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F04u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F0Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F14u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986F8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08986FB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898701Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987030u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987038u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987048u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987054u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987060u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987068u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987078u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987084u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987090u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987098u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870B4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089870E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898710Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987114u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898711Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987124u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898712Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987134u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898714Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987154u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898715Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987164u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987170u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987200u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987220u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987234u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987244u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987248u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987264u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898726Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898727Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987280u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872C4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089872E4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898732Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987354u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987384u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089873F8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987428u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987440u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898748Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089874E8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987504u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898750Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987524u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898752Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987534u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987550u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898755Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987570u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898757Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987584u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987598u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089875B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089875BCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089875E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898761Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876ACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876CCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876F0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089876F4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987710u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987718u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987728u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898772Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987764u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987770u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987780u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898778Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987790u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089877D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987800u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987830u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987858u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878A4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878D4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089878ECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987938u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987968u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987984u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x0898798Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987994u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879B0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879B8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879D0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879D8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879E0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x089879FCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A1Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A5Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987A8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AC8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987AF8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B18u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B20u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B28u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B30u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B78u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987B94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BA8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BB0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BB8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BC0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987BF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C10u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C48u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987C94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CB4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CE4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987CF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D38u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D40u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D58u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D68u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D74u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D80u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987D88u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987DA0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987DBCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987DD4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987DE8u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987DF0u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E00u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E08u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E2Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987E60u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EDCu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987EECu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F34u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F44u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F4Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F54u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F70u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F8Cu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987F94u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FACu, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FC4u, &recomp_unit_0096, "recomp_unit_0096");
    runtime.register_function(0x08987FE8u, &recomp_unit_0096, "recomp_unit_0096");
}
} // namespace psprecomp
