#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0044[4084] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 10, 11, 0, 12, 0, 0, 0, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 24, 0, 0, 25, 0,
    0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31,
    0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0,
    0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 58, 59, 0, 60, 0, 0, 0,
    0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 66, 0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 0, 72, 0, 73,
    0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0,
    84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0,
    0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 104,
    0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114,
    0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0,
    0, 0, 0, 138, 0, 139, 140, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 146, 0, 147, 148, 0, 149, 0, 150, 0, 0, 151, 0, 152, 153, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 159, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 175,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181,
    0, 182, 0, 183, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0,
    209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 214, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    218, 0, 219, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 228,
    0, 0, 229, 0, 230, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 234, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 245,
    0, 246, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 0,
    255, 0, 0, 256, 0, 257, 0, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265,
    0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 273, 0, 274, 0, 0, 275, 0, 276, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278,
    0, 279, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284, 285, 0, 286, 0, 0, 0, 287,
    0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0,
    0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 310, 0, 0, 0, 311, 0, 312, 0, 0, 313, 0, 314, 0, 315, 0, 316, 317, 0, 0,
    318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 323, 324, 0, 0, 325, 0, 0, 0, 0, 0, 326,
    0, 327, 0, 328, 329, 0, 0, 330, 0, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0,
    0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 341, 0, 0, 342, 343, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 346,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0,
    352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 359,
    0, 0, 0, 360, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 371, 0, 0, 372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0,
    380, 0, 0, 381, 0, 382, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0,
    0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0,
    0, 0, 0, 0, 397, 398, 0, 0, 0, 0, 399, 400, 0, 0, 401, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 406, 0, 0,
    0, 0, 407, 0, 0, 0, 408, 0, 409, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415,
    0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0,
    0, 428, 0, 0, 429, 0, 430, 0, 431, 0, 432, 0, 433, 0, 434, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0,
    438, 0, 0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0,
    458, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    469, 0, 0, 470, 0, 0, 0, 471, 0, 472, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0,
    0, 0, 477, 0, 478, 0, 479, 0, 0, 480, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 493, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 497, 498,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 505, 0, 0, 506, 0, 507, 0, 0, 508, 0, 509, 0, 510, 0, 511, 0,
    0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0,
    0, 0, 0, 519, 0, 520, 0, 521, 0, 0, 0, 522, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0,
    526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 529, 0, 530, 0, 531, 0, 532, 533, 0, 0, 0, 0, 0, 0, 0, 0,
    534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 0, 0, 539, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 545, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0,
    547, 0, 548, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 553, 0, 0, 0, 554, 0, 555, 0, 556,
    0, 0, 557, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 562, 0, 0, 0, 0, 0, 0, 563, 564, 0, 565, 0,
    0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 570, 0, 571, 0, 572, 0, 0, 573, 0, 0, 574, 0,
    575, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0, 582, 0, 0, 583,
    0, 584, 0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 588, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0,
    0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 596, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0,
    0, 0, 600, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 606, 0, 0, 607, 0, 608, 0, 0, 609, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0,
    0, 0, 613, 0, 614, 0, 0, 615, 616, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 620, 0, 621, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 624, 0, 0, 0, 0, 0, 625, 626, 0, 0, 0, 0, 0, 627, 628, 0, 0, 0, 0, 0, 629, 630, 0, 0, 0, 0, 0, 631, 632, 0,
    0, 0, 0, 0, 633, 634, 0, 0, 0, 0, 0, 635, 636, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647,
};
void recomp_unit_0044_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088B4000u;
        entry_id = (entry_delta < 16336u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0044[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B4000;
    case 2u: goto L_088B404C;
    case 3u: goto L_088B4060;
    case 4u: goto L_088B4080;
    case 5u: goto L_088B4098;
    case 6u: goto L_088B409C;
    case 7u: goto L_088B40BC;
    case 8u: goto L_088B40CC;
    case 9u: goto L_088B40D4;
    case 10u: goto L_088B40E0;
    case 11u: goto L_088B40E4;
    case 12u: goto L_088B40EC;
    case 13u: goto L_088B4108;
    case 14u: goto L_088B4124;
    case 15u: goto L_088B4138;
    case 16u: goto L_088B4164;
    case 17u: goto L_088B41B8;
    case 18u: goto L_088B41CC;
    case 19u: goto L_088B41E0;
    case 20u: goto L_088B4200;
    case 21u: goto L_088B421C;
    case 22u: goto L_088B4258;
    case 23u: goto L_088B4268;
    case 24u: goto L_088B426C;
    case 25u: goto L_088B4278;
    case 26u: goto L_088B4288;
    case 27u: goto L_088B42A4;
    case 28u: goto L_088B42C8;
    case 29u: goto L_088B42DC;
    case 30u: goto L_088B42E4;
    case 31u: goto L_088B42FC;
    case 32u: goto L_088B430C;
    case 33u: goto L_088B4324;
    case 34u: goto L_088B4354;
    case 35u: goto L_088B4364;
    case 36u: goto L_088B436C;
    case 37u: goto L_088B4378;
    case 38u: goto L_088B4394;
    case 39u: goto L_088B43A4;
    case 40u: goto L_088B43B8;
    case 41u: goto L_088B43C0;
    case 42u: goto L_088B43D4;
    case 43u: goto L_088B43EC;
    case 44u: goto L_088B4414;
    case 45u: goto L_088B4420;
    case 46u: goto L_088B4438;
    case 47u: goto L_088B4444;
    case 48u: goto L_088B445C;
    case 49u: goto L_088B4468;
    case 50u: goto L_088B447C;
    case 51u: goto L_088B4490;
    case 52u: goto L_088B44A0;
    case 53u: goto L_088B44B0;
    case 54u: goto L_088B44B8;
    case 55u: goto L_088B44C0;
    case 56u: goto L_088B44CC;
    case 57u: goto L_088B44DC;
    case 58u: goto L_088B44E4;
    case 59u: goto L_088B44E8;
    case 60u: goto L_088B44F0;
    case 61u: goto L_088B4504;
    case 62u: goto L_088B450C;
    case 63u: goto L_088B4520;
    case 64u: goto L_088B4528;
    case 65u: goto L_088B4530;
    case 66u: goto L_088B453C;
    case 67u: goto L_088B4548;
    case 68u: goto L_088B4550;
    case 69u: goto L_088B4558;
    case 70u: goto L_088B4560;
    case 71u: goto L_088B4568;
    case 72u: goto L_088B4574;
    case 73u: goto L_088B457C;
    case 74u: goto L_088B4588;
    case 75u: goto L_088B4594;
    case 76u: goto L_088B45AC;
    case 77u: goto L_088B45B4;
    case 78u: goto L_088B45C0;
    case 79u: goto L_088B45C8;
    case 80u: goto L_088B45D4;
    case 81u: goto L_088B45E0;
    case 82u: goto L_088B45E8;
    case 83u: goto L_088B45F4;
    case 84u: goto L_088B4600;
    case 85u: goto L_088B460C;
    case 86u: goto L_088B4618;
    case 87u: goto L_088B4624;
    case 88u: goto L_088B4630;
    case 89u: goto L_088B463C;
    case 90u: goto L_088B4648;
    case 91u: goto L_088B4654;
    case 92u: goto L_088B4660;
    case 93u: goto L_088B466C;
    case 94u: goto L_088B4678;
    case 95u: goto L_088B4684;
    case 96u: goto L_088B468C;
    case 97u: goto L_088B4694;
    case 98u: goto L_088B469C;
    case 99u: goto L_088B46B4;
    case 100u: goto L_088B46BC;
    case 101u: goto L_088B46C4;
    case 102u: goto L_088B46E0;
    case 103u: goto L_088B46E8;
    case 104u: goto L_088B46FC;
    case 105u: goto L_088B4708;
    case 106u: goto L_088B4710;
    case 107u: goto L_088B471C;
    case 108u: goto L_088B4730;
    case 109u: goto L_088B4738;
    case 110u: goto L_088B4740;
    case 111u: goto L_088B474C;
    case 112u: goto L_088B4754;
    case 113u: goto L_088B4760;
    case 114u: goto L_088B477C;
    case 115u: goto L_088B4784;
    case 116u: goto L_088B478C;
    case 117u: goto L_088B479C;
    case 118u: goto L_088B47B4;
    case 119u: goto L_088B47D8;
    case 120u: goto L_088B47E0;
    case 121u: goto L_088B4818;
    case 122u: goto L_088B4820;
    case 123u: goto L_088B482C;
    case 124u: goto L_088B4888;
    case 125u: goto L_088B489C;
    case 126u: goto L_088B48A4;
    case 127u: goto L_088B48B4;
    case 128u: goto L_088B48C0;
    case 129u: goto L_088B48C8;
    case 130u: goto L_088B48EC;
    case 131u: goto L_088B493C;
    case 132u: goto L_088B4944;
    case 133u: goto L_088B4948;
    case 134u: goto L_088B4950;
    case 135u: goto L_088B4958;
    case 136u: goto L_088B498C;
    case 137u: goto L_088B49F4;
    case 138u: goto L_088B4A0C;
    case 139u: goto L_088B4A14;
    case 140u: goto L_088B4A18;
    case 141u: goto L_088B4A20;
    case 142u: goto L_088B4A2C;
    case 143u: goto L_088B4A34;
    case 144u: goto L_088B4A48;
    case 145u: goto L_088B4A94;
    case 146u: goto L_088B4B10;
    case 147u: goto L_088B4B18;
    case 148u: goto L_088B4B1C;
    case 149u: goto L_088B4B24;
    case 150u: goto L_088B4B2C;
    case 151u: goto L_088B4B38;
    case 152u: goto L_088B4B40;
    case 153u: goto L_088B4B44;
    case 154u: goto L_088B4B4C;
    case 155u: goto L_088B4B54;
    case 156u: goto L_088B4B94;
    case 157u: goto L_088B4B9C;
    case 158u: goto L_088B4BA8;
    case 159u: goto L_088B4BB0;
    case 160u: goto L_088B4BB4;
    case 161u: goto L_088B4BBC;
    case 162u: goto L_088B4BC4;
    case 163u: goto L_088B4BCC;
    case 164u: goto L_088B4BD4;
    case 165u: goto L_088B4CC0;
    case 166u: goto L_088B4CF0;
    case 167u: goto L_088B53DC;
    case 168u: goto L_088B5408;
    case 169u: goto L_088B5418;
    case 170u: goto L_088B5424;
    case 171u: goto L_088B542C;
    case 172u: goto L_088B5458;
    case 173u: goto L_088B5468;
    case 174u: goto L_088B5474;
    case 175u: goto L_088B547C;
    case 176u: goto L_088B5494;
    case 177u: goto L_088B5528;
    case 178u: goto L_088B5554;
    case 179u: goto L_088B5560;
    case 180u: goto L_088B5568;
    case 181u: goto L_088B557C;
    case 182u: goto L_088B5584;
    case 183u: goto L_088B558C;
    case 184u: goto L_088B5590;
    case 185u: goto L_088B5598;
    case 186u: goto L_088B55E0;
    case 187u: goto L_088B55F0;
    case 188u: goto L_088B5604;
    case 189u: goto L_088B560C;
    case 190u: goto L_088B5614;
    case 191u: goto L_088B561C;
    case 192u: goto L_088B565C;
    case 193u: goto L_088B5664;
    case 194u: goto L_088B566C;
    case 195u: goto L_088B5674;
    case 196u: goto L_088B5694;
    case 197u: goto L_088B569C;
    case 198u: goto L_088B56A4;
    case 199u: goto L_088B56B4;
    case 200u: goto L_088B56C4;
    case 201u: goto L_088B56EC;
    case 202u: goto L_088B56F4;
    case 203u: goto L_088B56FC;
    case 204u: goto L_088B5710;
    case 205u: goto L_088B574C;
    case 206u: goto L_088B575C;
    case 207u: goto L_088B5768;
    case 208u: goto L_088B5778;
    case 209u: goto L_088B5780;
    case 210u: goto L_088B5788;
    case 211u: goto L_088B579C;
    case 212u: goto L_088B57D8;
    case 213u: goto L_088B57E0;
    case 214u: goto L_088B57E4;
    case 215u: goto L_088B5820;
    case 216u: goto L_088B5848;
    case 217u: goto L_088B5870;
    case 218u: goto L_088B5880;
    case 219u: goto L_088B5888;
    case 220u: goto L_088B5890;
    case 221u: goto L_088B589C;
    case 222u: goto L_088B58B0;
    case 223u: goto L_088B58B8;
    case 224u: goto L_088B58C8;
    case 225u: goto L_088B58DC;
    case 226u: goto L_088B58E4;
    case 227u: goto L_088B58F0;
    case 228u: goto L_088B58FC;
    case 229u: goto L_088B5908;
    case 230u: goto L_088B5910;
    case 231u: goto L_088B5918;
    case 232u: goto L_088B5928;
    case 233u: goto L_088B5930;
    case 234u: goto L_088B593C;
    case 235u: goto L_088B5940;
    case 236u: goto L_088B594C;
    case 237u: goto L_088B5964;
    case 238u: goto L_088B5998;
    case 239u: goto L_088B59A4;
    case 240u: goto L_088B59B0;
    case 241u: goto L_088B59BC;
    case 242u: goto L_088B59D4;
    case 243u: goto L_088B59DC;
    case 244u: goto L_088B59F4;
    case 245u: goto L_088B59FC;
    case 246u: goto L_088B5A04;
    case 247u: goto L_088B5A08;
    case 248u: goto L_088B5A14;
    case 249u: goto L_088B5A34;
    case 250u: goto L_088B5A4C;
    case 251u: goto L_088B5A5C;
    case 252u: goto L_088B5A64;
    case 253u: goto L_088B5A6C;
    case 254u: goto L_088B5A74;
    case 255u: goto L_088B5A80;
    case 256u: goto L_088B5A8C;
    case 257u: goto L_088B5A94;
    case 258u: goto L_088B5AA4;
    case 259u: goto L_088B5AAC;
    case 260u: goto L_088B5AB4;
    case 261u: goto L_088B5AC4;
    case 262u: goto L_088B5ACC;
    case 263u: goto L_088B5AD4;
    case 264u: goto L_088B5AE4;
    case 265u: goto L_088B5AFC;
    case 266u: goto L_088B5B04;
    case 267u: goto L_088B5B2C;
    case 268u: goto L_088B5B38;
    case 269u: goto L_088B5B4C;
    case 270u: goto L_088B5B54;
    case 271u: goto L_088B5B94;
    case 272u: goto L_088B5B9C;
    case 273u: goto L_088B5BA8;
    case 274u: goto L_088B5BB0;
    case 275u: goto L_088B5BBC;
    case 276u: goto L_088B5BC4;
    case 277u: goto L_088B5BC8;
    case 278u: goto L_088B5BFC;
    case 279u: goto L_088B5C04;
    case 280u: goto L_088B5C24;
    case 281u: goto L_088B5C44;
    case 282u: goto L_088B5C4C;
    case 283u: goto L_088B5C58;
    case 284u: goto L_088B5C60;
    case 285u: goto L_088B5C64;
    case 286u: goto L_088B5C6C;
    case 287u: goto L_088B5C7C;
    case 288u: goto L_088B5C98;
    case 289u: goto L_088B5CAC;
    case 290u: goto L_088B5CB4;
    case 291u: goto L_088B5CBC;
    case 292u: goto L_088B5CE0;
    case 293u: goto L_088B5CF0;
    case 294u: goto L_088B5D08;
    case 295u: goto L_088B5D10;
    case 296u: goto L_088B5D38;
    case 297u: goto L_088B5D5C;
    case 298u: goto L_088B5D8C;
    case 299u: goto L_088B5DA8;
    case 300u: goto L_088B5DB0;
    case 301u: goto L_088B5DB8;
    case 302u: goto L_088B5DC0;
    case 303u: goto L_088B5DCC;
    case 304u: goto L_088B5DD4;
    case 305u: goto L_088B5DE8;
    case 306u: goto L_088B5DF4;
    case 307u: goto L_088B5E0C;
    case 308u: goto L_088B5E1C;
    case 309u: goto L_088B5E2C;
    case 310u: goto L_088B5E34;
    case 311u: goto L_088B5E44;
    case 312u: goto L_088B5E4C;
    case 313u: goto L_088B5E58;
    case 314u: goto L_088B5E60;
    case 315u: goto L_088B5E68;
    case 316u: goto L_088B5E70;
    case 317u: goto L_088B5E74;
    case 318u: goto L_088B5E80;
    case 319u: goto L_088B5E94;
    case 320u: goto L_088B5EA0;
    case 321u: goto L_088B5EB8;
    case 322u: goto L_088B5EC8;
    case 323u: goto L_088B5ED4;
    case 324u: goto L_088B5ED8;
    case 325u: goto L_088B5EE4;
    case 326u: goto L_088B5EFC;
    case 327u: goto L_088B5F04;
    case 328u: goto L_088B5F0C;
    case 329u: goto L_088B5F10;
    case 330u: goto L_088B5F1C;
    case 331u: goto L_088B5F28;
    case 332u: goto L_088B5F30;
    case 333u: goto L_088B5F38;
    case 334u: goto L_088B5F40;
    case 335u: goto L_088B5F48;
    case 336u: goto L_088B5F4C;
    case 337u: goto L_088B5F54;
    case 338u: goto L_088B5F74;
    case 339u: goto L_088B5F94;
    case 340u: goto L_088B5FB0;
    case 341u: goto L_088B5FB4;
    case 342u: goto L_088B5FC0;
    case 343u: goto L_088B5FC4;
    case 344u: goto L_088B5FD8;
    case 345u: goto L_088B5FE0;
    case 346u: goto L_088B5FFC;
    case 347u: goto L_088B602C;
    case 348u: goto L_088B603C;
    case 349u: goto L_088B604C;
    case 350u: goto L_088B6060;
    case 351u: goto L_088B6074;
    case 352u: goto L_088B6080;
    case 353u: goto L_088B608C;
    case 354u: goto L_088B60B8;
    case 355u: goto L_088B60C4;
    case 356u: goto L_088B60CC;
    case 357u: goto L_088B60DC;
    case 358u: goto L_088B60F4;
    case 359u: goto L_088B60FC;
    case 360u: goto L_088B610C;
    case 361u: goto L_088B6110;
    case 362u: goto L_088B6128;
    case 363u: goto L_088B613C;
    case 364u: goto L_088B615C;
    case 365u: goto L_088B6178;
    case 366u: goto L_088B6180;
    case 367u: goto L_088B61AC;
    case 368u: goto L_088B61B8;
    case 369u: goto L_088B61D4;
    case 370u: goto L_088B61DC;
    case 371u: goto L_088B6208;
    case 372u: goto L_088B6214;
    case 373u: goto L_088B621C;
    case 374u: goto L_088B6224;
    case 375u: goto L_088B622C;
    case 376u: goto L_088B6234;
    case 377u: goto L_088B6250;
    case 378u: goto L_088B6260;
    case 379u: goto L_088B626C;
    case 380u: goto L_088B6280;
    case 381u: goto L_088B628C;
    case 382u: goto L_088B6294;
    case 383u: goto L_088B6298;
    case 384u: goto L_088B62AC;
    case 385u: goto L_088B62EC;
    case 386u: goto L_088B63C8;
    case 387u: goto L_088B63E0;
    case 388u: goto L_088B63E8;
    case 389u: goto L_088B640C;
    case 390u: goto L_088B6414;
    case 391u: goto L_088B6428;
    case 392u: goto L_088B6438;
    case 393u: goto L_088B6448;
    case 394u: goto L_088B6450;
    case 395u: goto L_088B6468;
    case 396u: goto L_088B6478;
    case 397u: goto L_088B6490;
    case 398u: goto L_088B6494;
    case 399u: goto L_088B64A8;
    case 400u: goto L_088B64AC;
    case 401u: goto L_088B64B8;
    case 402u: goto L_088B64C0;
    case 403u: goto L_088B64C8;
    case 404u: goto L_088B64E4;
    case 405u: goto L_088B64F0;
    case 406u: goto L_088B64F4;
    case 407u: goto L_088B6508;
    case 408u: goto L_088B6518;
    case 409u: goto L_088B6520;
    case 410u: goto L_088B6528;
    case 411u: goto L_088B6538;
    case 412u: goto L_088B6544;
    case 413u: goto L_088B654C;
    case 414u: goto L_088B6574;
    case 415u: goto L_088B657C;
    case 416u: goto L_088B6590;
    case 417u: goto L_088B6598;
    case 418u: goto L_088B65B4;
    case 419u: goto L_088B65BC;
    case 420u: goto L_088B65C4;
    case 421u: goto L_088B65E4;
    case 422u: goto L_088B65EC;
    case 423u: goto L_088B6614;
    case 424u: goto L_088B661C;
    case 425u: goto L_088B6628;
    case 426u: goto L_088B6654;
    case 427u: goto L_088B6674;
    case 428u: goto L_088B6684;
    case 429u: goto L_088B6690;
    case 430u: goto L_088B6698;
    case 431u: goto L_088B66A0;
    case 432u: goto L_088B66A8;
    case 433u: goto L_088B66B0;
    case 434u: goto L_088B66B8;
    case 435u: goto L_088B66BC;
    case 436u: goto L_088B66CC;
    case 437u: goto L_088B66DC;
    case 438u: goto L_088B6700;
    case 439u: goto L_088B670C;
    case 440u: goto L_088B6718;
    case 441u: goto L_088B6724;
    case 442u: goto L_088B6730;
    case 443u: goto L_088B673C;
    case 444u: goto L_088B67A0;
    case 445u: goto L_088B67BC;
    case 446u: goto L_088B67D0;
    case 447u: goto L_088B67FC;
    case 448u: goto L_088B6828;
    case 449u: goto L_088B6830;
    case 450u: goto L_088B6838;
    case 451u: goto L_088B6848;
    case 452u: goto L_088B6870;
    case 453u: goto L_088B6880;
    case 454u: goto L_088B6898;
    case 455u: goto L_088B68B4;
    case 456u: goto L_088B68B8;
    case 457u: goto L_088B68F4;
    case 458u: goto L_088B6900;
    case 459u: goto L_088B6908;
    case 460u: goto L_088B6924;
    case 461u: goto L_088B692C;
    case 462u: goto L_088B6960;
    case 463u: goto L_088B6A08;
    case 464u: goto L_088B6A14;
    case 465u: goto L_088B6AA8;
    case 466u: goto L_088B6AB0;
    case 467u: goto L_088B6ACC;
    case 468u: goto L_088B6AD4;
    case 469u: goto L_088B6B00;
    case 470u: goto L_088B6B0C;
    case 471u: goto L_088B6B1C;
    case 472u: goto L_088B6B24;
    case 473u: goto L_088B6B28;
    case 474u: goto L_088B6B30;
    case 475u: goto L_088B6B68;
    case 476u: goto L_088B6B78;
    case 477u: goto L_088B6B88;
    case 478u: goto L_088B6B90;
    case 479u: goto L_088B6B98;
    case 480u: goto L_088B6BA4;
    case 481u: goto L_088B6BAC;
    case 482u: goto L_088B6BBC;
    case 483u: goto L_088B6BCC;
    case 484u: goto L_088B6BD4;
    case 485u: goto L_088B6BE4;
    case 486u: goto L_088B6BF4;
    case 487u: goto L_088B6C20;
    case 488u: goto L_088B6C3C;
    case 489u: goto L_088B6C64;
    case 490u: goto L_088B6C78;
    case 491u: goto L_088B6CA4;
    case 492u: goto L_088B6CAC;
    case 493u: goto L_088B6CB4;
    case 494u: goto L_088B6CC0;
    case 495u: goto L_088B6CC8;
    case 496u: goto L_088B6CEC;
    case 497u: goto L_088B6CF8;
    case 498u: goto L_088B6CFC;
    case 499u: goto L_088B6D24;
    case 500u: goto L_088B6D54;
    case 501u: goto L_088B6D60;
    case 502u: goto L_088B6D90;
    case 503u: goto L_088B6DB0;
    case 504u: goto L_088B6DB8;
    case 505u: goto L_088B6DC0;
    case 506u: goto L_088B6DCC;
    case 507u: goto L_088B6DD4;
    case 508u: goto L_088B6DE0;
    case 509u: goto L_088B6DE8;
    case 510u: goto L_088B6DF0;
    case 511u: goto L_088B6DF8;
    case 512u: goto L_088B6E10;
    case 513u: goto L_088B6E20;
    case 514u: goto L_088B6E38;
    case 515u: goto L_088B6E40;
    case 516u: goto L_088B6E48;
    case 517u: goto L_088B6E64;
    case 518u: goto L_088B6E74;
    case 519u: goto L_088B6E8C;
    case 520u: goto L_088B6E94;
    case 521u: goto L_088B6E9C;
    case 522u: goto L_088B6EAC;
    case 523u: goto L_088B6EB8;
    case 524u: goto L_088B6EC4;
    case 525u: goto L_088B6EEC;
    case 526u: goto L_088B6F00;
    case 527u: goto L_088B6F2C;
    case 528u: goto L_088B6F34;
    case 529u: goto L_088B6F40;
    case 530u: goto L_088B6F48;
    case 531u: goto L_088B6F50;
    case 532u: goto L_088B6F58;
    case 533u: goto L_088B6F5C;
    case 534u: goto L_088B6F80;
    case 535u: goto L_088B7014;
    case 536u: goto L_088B7058;
    case 537u: goto L_088B7060;
    case 538u: goto L_088B7068;
    case 539u: goto L_088B7078;
    case 540u: goto L_088B70A4;
    case 541u: goto L_088B70BC;
    case 542u: goto L_088B70C4;
    case 543u: goto L_088B70DC;
    case 544u: goto L_088B70E4;
    case 545u: goto L_088B70F4;
    case 546u: goto L_088B77F8;
    case 547u: goto L_088B7800;
    case 548u: goto L_088B7808;
    case 549u: goto L_088B7814;
    case 550u: goto L_088B7820;
    case 551u: goto L_088B7848;
    case 552u: goto L_088B7850;
    case 553u: goto L_088B785C;
    case 554u: goto L_088B786C;
    case 555u: goto L_088B7874;
    case 556u: goto L_088B787C;
    case 557u: goto L_088B7888;
    case 558u: goto L_088B7890;
    case 559u: goto L_088B78A0;
    case 560u: goto L_088B78C0;
    case 561u: goto L_088B78C8;
    case 562u: goto L_088B78D0;
    case 563u: goto L_088B78EC;
    case 564u: goto L_088B78F0;
    case 565u: goto L_088B78F8;
    case 566u: goto L_088B7908;
    case 567u: goto L_088B7910;
    case 568u: goto L_088B7930;
    case 569u: goto L_088B7938;
    case 570u: goto L_088B7950;
    case 571u: goto L_088B7958;
    case 572u: goto L_088B7960;
    case 573u: goto L_088B796C;
    case 574u: goto L_088B7978;
    case 575u: goto L_088B7980;
    case 576u: goto L_088B7988;
    case 577u: goto L_088B7998;
    case 578u: goto L_088B79A8;
    case 579u: goto L_088B79C0;
    case 580u: goto L_088B79D0;
    case 581u: goto L_088B79E4;
    case 582u: goto L_088B79F0;
    case 583u: goto L_088B79FC;
    case 584u: goto L_088B7A04;
    case 585u: goto L_088B7A10;
    case 586u: goto L_088B7A1C;
    case 587u: goto L_088B7A28;
    case 588u: goto L_088B7A30;
    case 589u: goto L_088B7A3C;
    case 590u: goto L_088B7A44;
    case 591u: goto L_088B7A60;
    case 592u: goto L_088B7A74;
    case 593u: goto L_088B7AF8;
    case 594u: goto L_088B7B18;
    case 595u: goto L_088B7B30;
    case 596u: goto L_088B7B3C;
    case 597u: goto L_088B7B44;
    case 598u: goto L_088B7B58;
    case 599u: goto L_088B7B74;
    case 600u: goto L_088B7B88;
    case 601u: goto L_088B7B90;
    case 602u: goto L_088B7BA4;
    case 603u: goto L_088B7BBC;
    case 604u: goto L_088B7BD4;
    case 605u: goto L_088B7BDC;
    case 606u: goto L_088B7C10;
    case 607u: goto L_088B7C1C;
    case 608u: goto L_088B7C24;
    case 609u: goto L_088B7C30;
    case 610u: goto L_088B7C38;
    case 611u: goto L_088B7C4C;
    case 612u: goto L_088B7C70;
    case 613u: goto L_088B7C88;
    case 614u: goto L_088B7C90;
    case 615u: goto L_088B7C9C;
    case 616u: goto L_088B7CA0;
    case 617u: goto L_088B7CAC;
    case 618u: goto L_088B7CD8;
    case 619u: goto L_088B7CE0;
    case 620u: goto L_088B7CE8;
    case 621u: goto L_088B7CF0;
    case 622u: goto L_088B7D20;
    case 623u: goto L_088B7D28;
    case 624u: goto L_088B7D88;
    case 625u: goto L_088B7DA0;
    case 626u: goto L_088B7DA4;
    case 627u: goto L_088B7DBC;
    case 628u: goto L_088B7DC0;
    case 629u: goto L_088B7DD8;
    case 630u: goto L_088B7DDC;
    case 631u: goto L_088B7DF4;
    case 632u: goto L_088B7DF8;
    case 633u: goto L_088B7E10;
    case 634u: goto L_088B7E14;
    case 635u: goto L_088B7E2C;
    case 636u: goto L_088B7E30;
    case 637u: goto L_088B7E44;
    case 638u: goto L_088B7E4C;
    case 639u: goto L_088B7EA0;
    case 640u: goto L_088B7EBC;
    case 641u: goto L_088B7ED8;
    case 642u: goto L_088B7F58;
    case 643u: goto L_088B7F60;
    case 644u: goto L_088B7F98;
    case 645u: goto L_088B7FA4;
    case 646u: goto L_088B7FC0;
    case 647u: goto L_088B7FCC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B4000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27512)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088B404Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_088B421C;
L_088B404C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088B4080;
      }
      goto L_088B4060;
    }
L_088B4060:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088B4060;
      }
      goto L_088B4080;
    }
L_088B4080:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (0u | 24u);
      if (branch_taken) {
          goto L_088B4138;
      }
      goto L_088B4098;
    }
L_088B4098:
    ctx.gpr[21] = (0u | 0u);
    goto L_088B409C;
L_088B409C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B40D4;
      }
      goto L_088B40BC;
    }
L_088B40BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B40CCu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 264u, 0x0886523Cu>(ctx, &aot_mem) && ctx.pc == 0x088B40CCu) goto L_088B40CC;
    return;
L_088B40CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B40E4;
      }
      goto L_088B40D4;
    }
L_088B40D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088B40E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 254u, 0x08865198u>(ctx, &aot_mem) && ctx.pc == 0x088B40E0u) goto L_088B40E0;
    return;
L_088B40E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088B40E4;
L_088B40E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4124;
      }
      goto L_088B40EC;
    }
L_088B40EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B4124;
      }
      goto L_088B4108;
    }
L_088B4108:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088B4124u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 666u, 0x08A93028u>(ctx, &aot_mem) && ctx.pc == 0x088B4124u) goto L_088B4124;
    return;
L_088B4124:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088B409C;
      }
      goto L_088B4138;
    }
L_088B4138:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B41B8u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_088B421C;
L_088B41B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088B4200;
      }
      goto L_088B41CC;
    }
L_088B41CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088B41E0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 660u, 0x08A92F64u>(ctx, &aot_mem) && ctx.pc == 0x088B41E0u) goto L_088B41E0;
    return;
L_088B41E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088B41CC;
      }
      goto L_088B4200;
    }
L_088B4200:
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
L_088B421C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x088B4258u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 708u, 0x08AA34F8u>(ctx, &aot_mem) && ctx.pc == 0x088B4258u) goto L_088B4258;
    return;
L_088B4258:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088B4288;
      }
      goto L_088B4268;
    }
L_088B4268:
    ctx.gpr[18] = (0u | 0u);
    goto L_088B426C;
L_088B426C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x088B4278u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 662u, 0x08A92FC4u>(ctx, &aot_mem) && ctx.pc == 0x088B4278u) goto L_088B4278;
    return;
L_088B4278:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088B426C;
      }
      goto L_088B4288;
    }
L_088B4288:
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
L_088B42A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B430C;
      }
      goto L_088B42C8;
    }
L_088B42C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088B42FC;
      }
      goto L_088B42DC;
    }
L_088B42DC:
    ctx.gpr[31] = (0x088B42E4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 663u, 0x08A92FE4u>(ctx, &aot_mem) && ctx.pc == 0x088B42E4u) goto L_088B42E4;
    return;
L_088B42E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088B42DC;
      }
      goto L_088B42FC;
    }
L_088B42FC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x088B430Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088B430Cu) goto L_088B430C;
    return;
L_088B430C:
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
L_088B4324:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088B4394;
      }
      goto L_088B4354;
    }
L_088B4354:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 2u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_088B4364;
L_088B4364:
    if (ctx.gpr[6] != 0u) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
        goto L_088B4378;
    }
    goto L_088B436C;
L_088B436C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088B4394;
      }
      goto L_088B4378;
    }
L_088B4378:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B4364;
      }
      goto L_088B4394;
    }
L_088B4394:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088B43D4;
      }
      goto L_088B43A4;
    }
L_088B43A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B43C0;
      }
      goto L_088B43B8;
    }
L_088B43B8:
    ctx.gpr[31] = (0x088B43C0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 670u, 0x08A930A0u>(ctx, &aot_mem) && ctx.pc == 0x088B43C0u) goto L_088B43C0;
    return;
L_088B43C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088B43A4;
      }
      goto L_088B43D4;
    }
L_088B43D4:
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
L_088B43EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x088B4414u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_088B4324;
L_088B4414:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4420:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4438:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    ctx.gpr[31] = (0x088B445Cu);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088B4324;
L_088B445C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4468:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B447C:
    ctx.gpr[7] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4490:
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 192 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B44B8;
      }
      goto L_088B44A0;
    }
L_088B44A0:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B44DC;
      }
      goto L_088B44B0;
    }
L_088B44B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B44C0;
      }
      goto L_088B44B8;
    }
L_088B44B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B44E8;
      }
      goto L_088B44C0;
    }
L_088B44C0:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088B44E4;
      }
      goto L_088B44CC;
    }
L_088B44CC:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B44C0;
      }
      goto L_088B44DC;
    }
L_088B44DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B44E8;
      }
      goto L_088B44E4;
    }
L_088B44E4:
    ctx.gpr[2] = (ctx.gpr[7] & 65535u);
    goto L_088B44E8;
L_088B44E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B44F0:
    ctx.gpr[2] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4528;
      }
      goto L_088B4504;
    }
L_088B4504:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4530;
      }
      goto L_088B450C;
    }
L_088B450C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17000));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-256)));
    goto L_088B4520;
L_088B4520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B46BC;
      }
      goto L_088B4528;
    }
L_088B4528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B46BC;
      }
      goto L_088B4530;
    }
L_088B4530:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8216 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8251 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B4574;
      }
      goto L_088B453C;
    }
L_088B453C:
    ctx.gpr[4] = (0u | 732u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 710u);
      if (branch_taken) {
          goto L_088B4648;
      }
      goto L_088B4548;
    }
L_088B4548:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 376u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B4550;
    }
L_088B4550:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 339u);
      if (branch_taken) {
          goto L_088B466C;
      }
      goto L_088B4558;
    }
L_088B4558:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 338u);
      if (branch_taken) {
          goto L_088B4660;
      }
      goto L_088B4560;
    }
L_088B4560:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B4678;
      }
      goto L_088B4568;
    }
L_088B4568:
    ctx.gpr[2] = (0u | 140u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B4574;
    }
L_088B4574:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8365 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B45C0;
      }
      goto L_088B457C;
    }
L_088B457C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8249 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8250 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B45AC;
      }
      goto L_088B4588;
    }
L_088B4588:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8223 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-8216));
      if (branch_taken) {
          goto L_088B4678;
      }
      goto L_088B4594;
    }
L_088B4594:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(8320)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B45AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4654;
      }
      goto L_088B45B4;
    }
L_088B45B4:
    ctx.gpr[2] = (0u | 139u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B45C0;
    }
L_088B45C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 8482u);
      if (branch_taken) {
          goto L_088B45E0;
      }
      goto L_088B45C8;
    }
L_088B45C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8364 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4678;
      }
      goto L_088B45D4;
    }
L_088B45D4:
    ctx.gpr[2] = (0u | 128u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B45E0;
    }
L_088B45E0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B4678;
      }
      goto L_088B45E8;
    }
L_088B45E8:
    ctx.gpr[2] = (0u | 153u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B45F4;
    }
L_088B45F4:
    ctx.gpr[2] = (0u | 130u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B4600;
    }
L_088B4600:
    ctx.gpr[2] = (0u | 132u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B460C;
    }
L_088B460C:
    ctx.gpr[2] = (0u | 136u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B4618;
    }
L_088B4618:
    ctx.gpr[2] = (0u | 145u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B4624;
    }
L_088B4624:
    ctx.gpr[2] = (0u | 146u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B4630;
    }
L_088B4630:
    ctx.gpr[2] = (0u | 147u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B463C;
    }
L_088B463C:
    ctx.gpr[2] = (0u | 148u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B4648;
    }
L_088B4648:
    ctx.gpr[2] = (0u | 152u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B4654;
    }
L_088B4654:
    ctx.gpr[2] = (0u | 155u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B4660;
    }
L_088B4660:
    ctx.gpr[2] = (0u | 156u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B466C;
    }
L_088B466C:
    ctx.gpr[2] = (0u | 159u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B4678;
    }
L_088B4678:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B468C;
      }
      goto L_088B4684;
    }
L_088B4684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 192 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B4694;
      }
      goto L_088B468C;
    }
L_088B468C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B46BC;
      }
      goto L_088B4694;
    }
L_088B4694:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B46B4;
      }
      goto L_088B469C;
    }
L_088B469C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16872));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-256)));
      if (branch_taken) {
          goto L_088B4520;
      }
      goto L_088B46B4;
    }
L_088B46B4:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    goto L_088B46BC;
L_088B46BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B46C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < 128 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4708;
      }
      goto L_088B46E0;
    }
L_088B46E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4710;
      }
      goto L_088B46E8;
    }
L_088B46E8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x088B46FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17000));
    goto L_088B4490;
L_088B46FC:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
      if (branch_taken) {
          goto L_088B4754;
      }
      goto L_088B4708;
    }
L_088B4708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4754;
      }
      goto L_088B4710;
    }
L_088B4710:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 192 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4740;
      }
      goto L_088B471C;
    }
L_088B471C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x088B4730u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16872));
    goto L_088B4490;
L_088B4730:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B474C;
      }
      goto L_088B4738;
    }
L_088B4738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4754;
      }
      goto L_088B4740;
    }
L_088B4740:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
      if (branch_taken) {
          goto L_088B4754;
      }
      goto L_088B474C;
    }
L_088B474C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(128));
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    goto L_088B4754;
L_088B4754:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4760:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19824)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4784;
      }
      goto L_088B477C;
    }
L_088B477C:
    ctx.gpr[31] = (0x088B4784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 144u, 0x08B00A0Cu>(ctx, &aot_mem) && ctx.pc == 0x088B4784u) goto L_088B4784;
    return;
L_088B4784:
    ctx.gpr[31] = (0x088B478Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19824)));
    goto L_088B482C;
L_088B478C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B479C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x088B47B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 139u, 0x08B009ACu>(ctx, &aot_mem) && ctx.pc == 0x088B47B4u) goto L_088B47B4;
    return;
L_088B47B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088B4818;
      }
      goto L_088B47D8;
    }
L_088B47D8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_088B47E0;
L_088B47E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_088B47E0;
    }
    goto L_088B4818;
L_088B4818:
    ctx.gpr[31] = (0x088B4820u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 139u, 0x08B009ACu>(ctx, &aot_mem) && ctx.pc == 0x088B4820u) goto L_088B4820;
    return;
L_088B4820:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B482C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(20720)));
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[18] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B489C;
      }
      goto L_088B4888;
    }
L_088B4888:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B48B4;
      }
      goto L_088B489C;
    }
L_088B489C:
    ctx.gpr[31] = (0x088B48A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 166u, 0x088C4CA0u>(ctx, &aot_mem) && ctx.pc == 0x088B48A4u) goto L_088B48A4;
    return;
L_088B48A4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_088B48B4;
L_088B48B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[31] = (0x088B48C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B4CF0;
L_088B48C0:
    ctx.gpr[31] = (0x088B48C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 226u, 0x08AA9990u>(ctx, &aot_mem) && ctx.pc == 0x088B48C8u) goto L_088B48C8;
    return;
L_088B48C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (5888u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(20852), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088B48ECu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 393u, 0x0890EC0Cu>(ctx, &aot_mem) && ctx.pc == 0x088B48ECu) goto L_088B48EC;
    return;
L_088B48EC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (18944u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[6] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (19200u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B4948;
      }
      goto L_088B493C;
    }
L_088B493C:
    ctx.gpr[31] = (0x088B4944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x088B4944u) goto L_088B4944;
    return;
L_088B4944:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20436)));
    goto L_088B4948;
L_088B4948:
    ctx.gpr[31] = (0x088B4950u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 72u, 0x08950520u>(ctx, &aot_mem) && ctx.pc == 0x088B4950u) goto L_088B4950;
    return;
L_088B4950:
    ctx.gpr[31] = (0x088B4958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 79u, 0x0883C5B0u>(ctx, &aot_mem) && ctx.pc == 0x088B4958u) goto L_088B4958;
    return;
L_088B4958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (8960u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x088B498Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 414u, 0x08A7F3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B498Cu) goto L_088B498C;
    return;
L_088B498C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (9216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (56576u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (56578u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(514));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_088B4A48;
      }
      goto L_088B49F4;
    }
L_088B49F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_088B4A14;
    }
    goto L_088B4A0C;
L_088B4A0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B4A18;
      }
      goto L_088B4A14;
    }
L_088B4A14:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_088B4A18;
L_088B4A18:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4A34;
      }
      goto L_088B4A20;
    }
L_088B4A20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088B4A34;
      }
      goto L_088B4A2C;
    }
L_088B4A2C:
    ctx.gpr[31] = (0x088B4A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 614u, 0x08A52D98u>(ctx, &aot_mem) && ctx.pc == 0x088B4A34u) goto L_088B4A34;
    return;
L_088B4A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1760));
      if (branch_taken) {
          goto L_088B49F4;
      }
      goto L_088B4A48;
    }
L_088B4A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (8960u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (56576u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-253));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (56576u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088B4A94u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 14u, 0x089101B0u>(ctx, &aot_mem) && ctx.pc == 0x088B4A94u) goto L_088B4A94;
    return;
L_088B4A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (56576u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (56578u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(514));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (9216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-8044), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (5888u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(20852), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4B1C;
      }
      goto L_088B4B10;
    }
L_088B4B10:
    ctx.gpr[31] = (0x088B4B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x088B4B18u) goto L_088B4B18;
    return;
L_088B4B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20436)));
    goto L_088B4B1C;
L_088B4B1C:
    ctx.gpr[31] = (0x088B4B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 104u, 0x08950894u>(ctx, &aot_mem) && ctx.pc == 0x088B4B24u) goto L_088B4B24;
    return;
L_088B4B24:
    ctx.gpr[31] = (0x088B4B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 228u, 0x08AA99C8u>(ctx, &aot_mem) && ctx.pc == 0x088B4B2Cu) goto L_088B4B2C;
    return;
L_088B4B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4B44;
      }
      goto L_088B4B38;
    }
L_088B4B38:
    ctx.gpr[31] = (0x088B4B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x088B4B40u) goto L_088B4B40;
    return;
L_088B4B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20436)));
    goto L_088B4B44;
L_088B4B44:
    ctx.gpr[31] = (0x088B4B4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 62u, 0x089543D4u>(ctx, &aot_mem) && ctx.pc == 0x088B4B4Cu) goto L_088B4B4C;
    return;
L_088B4B4C:
    ctx.gpr[31] = (0x088B4B54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B4CF0;
L_088B4B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (51200u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (5888u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(20852), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088B4B94u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 231u, 0x08AA9A18u>(ctx, &aot_mem) && ctx.pc == 0x088B4B94u) goto L_088B4B94;
    return;
L_088B4B94:
    ctx.gpr[31] = (0x088B4B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 581u, 0x089FBC10u>(ctx, &aot_mem) && ctx.pc == 0x088B4B9Cu) goto L_088B4B9C;
    return;
L_088B4B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4BB4;
      }
      goto L_088B4BA8;
    }
L_088B4BA8:
    ctx.gpr[31] = (0x088B4BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x088B4BB0u) goto L_088B4BB0;
    return;
L_088B4BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20436)));
    goto L_088B4BB4;
L_088B4BB4:
    ctx.gpr[31] = (0x088B4BBCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 62u, 0x089543D4u>(ctx, &aot_mem) && ctx.pc == 0x088B4BBCu) goto L_088B4BBC;
    return;
L_088B4BBC:
    ctx.gpr[31] = (0x088B4BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 250u, 0x08AA9B98u>(ctx, &aot_mem) && ctx.pc == 0x088B4BC4u) goto L_088B4BC4;
    return;
L_088B4BC4:
    ctx.gpr[31] = (0x088B4BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 262u, 0x08AA9C84u>(ctx, &aot_mem) && ctx.pc == 0x088B4BCCu) goto L_088B4BCC;
    return;
L_088B4BCC:
    ctx.gpr[31] = (0x088B4BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 280u, 0x08AA9E28u>(ctx, &aot_mem) && ctx.pc == 0x088B4BD4u) goto L_088B4BD4;
    return;
L_088B4BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (51440u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (18432u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (18688u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (22016u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (22272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (23808u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (21504u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088B4CC0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    goto L_088B4CF0;
L_088B4CC0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4CF0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (7168u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (21248u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (21504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (22016u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (22528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (22528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (22272u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (57088u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (57600u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (8448u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (56319u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2054));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (8704u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (56832u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (8960u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (59136u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (9216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (39680u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (7424u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (20480u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (9472u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (23552u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (23808u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (23296u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (24320u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[6] = (25344u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[6] = (25600u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (25856u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (24576u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[6] = (26112u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[6] = (26368u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[6] = (26624u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (24832u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[6] = (26880u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[6] = (27136u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[6] = (27392u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (25088u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[6] = (27648u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[6] = (27904u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[6] = (28160u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (6144u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (6400u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (6656u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (6912u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (5888u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (24064u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (7680u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (51456u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (49408u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (50944u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (51440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (50688u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(263));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (8192u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[7]);
    ctx.gpr[7] = (18944u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[7]);
    ctx.gpr[7] = (19200u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[7]);
    ctx.gpr[7] = (18432u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[7]);
    ctx.gpr[7] = (18688u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (7936u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(18840), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B53DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9772));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B5408u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x088B5408u) goto L_088B5408;
    return;
L_088B5408:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088B542C;
      }
      goto L_088B5418;
    }
L_088B5418:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[31] = (0x088B5424u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x088B5424u) goto L_088B5424;
    return;
L_088B5424:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088B542C;
L_088B542C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[31] = (0x088B5458u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x088B5458u) goto L_088B5458;
    return;
L_088B5458:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088B547C;
      }
      goto L_088B5468;
    }
L_088B5468:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[31] = (0x088B5474u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x088B5474u) goto L_088B5474;
    return;
L_088B5474:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088B547C;
L_088B547C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5494:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17260)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17256)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17284)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(17264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(17272), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(17268), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(17276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(17280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(17288), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5528:
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
L_088B5554:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B558C;
      }
      goto L_088B5560;
    }
L_088B5560:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B557C;
      }
      goto L_088B5568;
    }
L_088B5568:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B5584;
      }
      goto L_088B557C;
    }
L_088B557C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    goto L_088B5584;
L_088B5584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B5590;
      }
      goto L_088B558C;
    }
L_088B558C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B5590;
L_088B5590:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5598:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17380)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5614;
      }
      goto L_088B55E0;
    }
L_088B55E0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B560C;
      }
      goto L_088B55F0;
    }
L_088B55F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(21696)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_088B561C;
      }
      goto L_088B5604;
    }
L_088B5604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B57D8;
      }
      goto L_088B560C;
    }
L_088B560C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B57E4;
      }
      goto L_088B5614;
    }
L_088B5614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B57E4;
      }
      goto L_088B561C;
    }
L_088B561C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[19] = (2225u << 16u);
    ctx.gpr[4] = (20224u << 16u);
    ctx.gpr[21] = (0u | 32768u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(15552));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8360));
    ctx.gpr[20] = (2230u << 16u);
    goto L_088B565C;
L_088B565C:
    ctx.gpr[31] = (0x088B5664u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_088B6234;
L_088B5664:
    ctx.gpr[31] = (0x088B566Cu);
    // nop
    goto L_088B62AC;
L_088B566C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_088B5674;
L_088B5674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 10u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088B5694u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 57u, 0x08AF85ECu>(ctx, &aot_mem) && ctx.pc == 0x088B5694u) goto L_088B5694;
    return;
L_088B5694:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B56A4;
      }
      goto L_088B569C;
    }
L_088B569C:
    ctx.gpr[31] = (0x088B56A4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x088B56A4u) goto L_088B56A4;
    return;
L_088B56A4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1024));
      if (branch_taken) {
          goto L_088B5674;
      }
      goto L_088B56B4;
    }
L_088B56B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17380)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B56F4;
      }
      goto L_088B56C4;
    }
L_088B56C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 10u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088B56ECu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 726u, 0x08AF74D0u>(ctx, &aot_mem) && ctx.pc == 0x088B56ECu) goto L_088B56EC;
    return;
L_088B56EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5780;
      }
      goto L_088B56F4;
    }
L_088B56F4:
    ctx.gpr[31] = (0x088B56FCu);
    // nop
    ctx.pc = 0x08B0BCBCu;
    return;
L_088B56FC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x088B5710u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BCACu;
    return;
L_088B5710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7164)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B5780;
      }
      goto L_088B574C;
    }
L_088B574C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_088B5768;
    }
    goto L_088B575C;
L_088B575C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088B5778;
      }
      goto L_088B5768;
    }
L_088B5768:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088B5778;
L_088B5778:
    ctx.gpr[31] = (0x088B5780u);
    // nop
    ctx.pc = 0x08B0BC14u;
    return;
L_088B5780:
    ctx.gpr[31] = (0x088B5788u);
    // nop
    ctx.pc = 0x08B0BCBCu;
    return;
L_088B5788:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088B579Cu);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08B0BCACu;
    return;
L_088B579C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(21696)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-7164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B565C;
      }
      goto L_088B57D8;
    }
L_088B57D8:
    ctx.gpr[31] = (0x088B57E0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BBBCu;
    return;
L_088B57E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B57E4;
L_088B57E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_088B5820:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5848:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (0u | 100u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5870:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_088B5890;
      }
      goto L_088B5880;
    }
L_088B5880:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5890;
      }
      goto L_088B5888;
    }
L_088B5888:
    ctx.gpr[31] = (0x088B5890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088B5890u) goto L_088B5890;
    return;
L_088B5890:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B589C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B58B0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_088B58C8;
L_088B58B0:
    ctx.gpr[31] = (0x088B58B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B594C;
L_088B58B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B58C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B58DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8396));
    goto L_088B5528;
L_088B58DC:
    ctx.gpr[31] = (0x088B58E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 697u, 0x08AF72F0u>(ctx, &aot_mem) && ctx.pc == 0x088B58E4u) goto L_088B58E4;
    return;
L_088B58E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5918;
      }
      goto L_088B58F0;
    }
L_088B58F0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B58FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8460));
    goto L_088B5528;
L_088B58FC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088B5908u);
    ctx.gpr[5] = (0u | 768u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 720u, 0x08AF7460u>(ctx, &aot_mem) && ctx.pc == 0x088B5908u) goto L_088B5908;
    return;
L_088B5908:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5930;
      }
      goto L_088B5910;
    }
L_088B5910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B593C;
      }
      goto L_088B5918;
    }
L_088B5918:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B5928u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8424));
    goto L_088B5528;
L_088B5928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5940;
      }
      goto L_088B5930;
    }
L_088B5930:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B593Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8488));
    goto L_088B5528;
L_088B593C:
    ctx.gpr[2] = (0u | 1u);
    goto L_088B5940;
L_088B5940:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B594C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B59FC;
      }
      goto L_088B5964;
    }
L_088B5964:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(21696), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16360)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8528));
    ctx.gpr[31] = (0x088B5998u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21912));
    ctx.pc = 0x08B0BBA4u;
    return;
L_088B5998:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B59DC;
      }
      goto L_088B59A4;
    }
L_088B59A4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B59B0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_088B59B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5A04;
      }
      goto L_088B59BC;
    }
L_088B59BC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7888));
    ctx.gpr[31] = (0x088B59D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8580));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x088B59D4u) goto L_088B59D4;
    return;
L_088B59D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5A08;
      }
      goto L_088B59DC;
    }
L_088B59DC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7888));
    ctx.gpr[31] = (0x088B59F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8544));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x088B59F4u) goto L_088B59F4;
    return;
L_088B59F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5A08;
      }
      goto L_088B59FC;
    }
L_088B59FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5A08;
      }
      goto L_088B5A04;
    }
L_088B5A04:
    ctx.gpr[2] = (0u | 1u);
    goto L_088B5A08;
L_088B5A08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5A14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(17332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B5ACC;
      }
      goto L_088B5A34;
    }
L_088B5A34:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7888));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B5A4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8396));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x088B5A4Cu) goto L_088B5A4C;
    return;
L_088B5A4C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B5A5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8616));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x088B5A5Cu) goto L_088B5A5C;
    return;
L_088B5A5C:
    ctx.gpr[31] = (0x088B5A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 62u, 0x08AF8644u>(ctx, &aot_mem) && ctx.pc == 0x088B5A64u) goto L_088B5A64;
    return;
L_088B5A64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5AB4;
      }
      goto L_088B5A6C;
    }
L_088B5A6C:
    ctx.gpr[31] = (0x088B5A74u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 112u, 0x08AF8A0Cu>(ctx, &aot_mem) && ctx.pc == 0x088B5A74u) goto L_088B5A74;
    return;
L_088B5A74:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088B5A80u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 104u, 0x08AF8974u>(ctx, &aot_mem) && ctx.pc == 0x088B5A80u) goto L_088B5A80;
    return;
L_088B5A80:
    ctx.gpr[4] = (0u | 4096u);
    ctx.gpr[31] = (0x088B5A8Cu);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 108u, 0x08AF89C0u>(ctx, &aot_mem) && ctx.pc == 0x088B5A8Cu) goto L_088B5A8C;
    return;
L_088B5A8C:
    ctx.gpr[31] = (0x088B5A94u);
    // nop
    ctx.pc = 0x08B0BB8Cu;
    return;
L_088B5A94:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088B5AA4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 473u, 0x088432ACu>(ctx, &aot_mem) && ctx.pc == 0x088B5AA4u) goto L_088B5AA4;
    return;
L_088B5AA4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5AD4;
      }
      goto L_088B5AAC;
    }
L_088B5AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5B38;
      }
      goto L_088B5AB4;
    }
L_088B5AB4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B5AC4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8640));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x088B5AC4u) goto L_088B5AC4;
    return;
L_088B5AC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5B38;
      }
      goto L_088B5ACC;
    }
L_088B5ACC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B5B38;
      }
      goto L_088B5AD4;
    }
L_088B5AD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14144));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_088B5AE4;
L_088B5AE4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B5AE4;
      }
      goto L_088B5AFC;
    }
L_088B5AFC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B5B04;
L_088B5B04:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(304), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(400), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(496), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(592), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B5B04;
      }
      goto L_088B5B2C;
    }
L_088B5B2C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17333), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (0u | 1u);
    goto L_088B5B38;
L_088B5B38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5B4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5B54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17336)));
    ctx.gpr[19] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10384));
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_088B5B9C;
      }
      goto L_088B5B94;
    }
L_088B5B94:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17336), ctx.gpr[5]);
    goto L_088B5B9C;
L_088B5B9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B5BA8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 284u, 0x08A6D404u>(ctx, &aot_mem) && ctx.pc == 0x088B5BA8u) goto L_088B5BA8;
    return;
L_088B5BA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B5BC8;
      }
      goto L_088B5BB0;
    }
L_088B5BB0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B5BBCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 284u, 0x08A6D404u>(ctx, &aot_mem) && ctx.pc == 0x088B5BBCu) goto L_088B5BBC;
    return;
L_088B5BBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5C04;
      }
      goto L_088B5BC4;
    }
L_088B5BC4:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088B5BC8;
L_088B5BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17376)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17368)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17364)));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17332)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088B5BFC;
    }
    goto L_088B5BFC;
L_088B5BFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088B5C64;
      }
      goto L_088B5C04;
    }
L_088B5C04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17376)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17372)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17388)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x088B5C24u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17384)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x088B5C24u) goto L_088B5C24;
    return;
L_088B5C24:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17332)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B5C44u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 524u, 0x08AF6874u>(ctx, &aot_mem) && ctx.pc == 0x088B5C44u) goto L_088B5C44;
    return;
L_088B5C44:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
        goto L_088B5C58;
    }
    goto L_088B5C4C;
L_088B5C4C:
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088B5C58;
L_088B5C58:
    ctx.gpr[31] = (0x088B5C60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x088B5C60u) goto L_088B5C60;
    return;
L_088B5C60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17376), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088B5C64;
L_088B5C64:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5CB4;
      }
      goto L_088B5C6C;
    }
L_088B5C6C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17333)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5C98;
      }
      goto L_088B5C7C;
    }
L_088B5C7C:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 86u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14144));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(14832));
      if (branch_taken) {
          goto L_088B5CBC;
      }
      goto L_088B5C98;
    }
L_088B5C98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7888));
    ctx.gpr[31] = (0x088B5CACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8664));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x088B5CACu) goto L_088B5CAC;
    return;
L_088B5CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5D38;
      }
      goto L_088B5CB4;
    }
L_088B5CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5D38;
      }
      goto L_088B5CBC;
    }
L_088B5CBC:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B5CBC;
      }
      goto L_088B5CE0;
    }
L_088B5CE0:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17333), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_088B5CF0;
L_088B5CF0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B5CF0;
      }
      goto L_088B5D08;
    }
L_088B5D08:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B5D10;
L_088B5D10:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(400), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(496), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(592), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B5D10;
      }
      goto L_088B5D38;
    }
L_088B5D38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5D5C:
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[9] & 255u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(14144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(208), ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(304), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5D8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5DB0;
      }
      goto L_088B5DA8;
    }
L_088B5DA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5DC0;
      }
      goto L_088B5DB0;
    }
L_088B5DB0:
    ctx.gpr[31] = (0x088B5DB8u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 502u, 0x08843444u>(ctx, &aot_mem) && ctx.pc == 0x088B5DB8u) goto L_088B5DB8;
    return;
L_088B5DB8:
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
    goto L_088B5DC0;
L_088B5DC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5DCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5DD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B5DE8u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 475u, 0x088432C8u>(ctx, &aot_mem) && ctx.pc == 0x088B5DE8u) goto L_088B5DE8;
    return;
L_088B5DE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5DF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B5E58;
      }
      goto L_088B5E0C;
    }
L_088B5E0C:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-3080)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5E44;
      }
      goto L_088B5E1C;
    }
L_088B5E1C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3080));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(848)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[6] = (0u | 2u);
        goto L_088B5E60;
    }
    goto L_088B5E2C;
L_088B5E2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B5E44;
      }
      goto L_088B5E34;
    }
L_088B5E34:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(846)));
    ctx.gpr[6] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088B5E70;
      }
      goto L_088B5E44;
    }
L_088B5E44:
    ctx.gpr[31] = (0x088B5E4Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 492u, 0x08843388u>(ctx, &aot_mem) && ctx.pc == 0x088B5E4Cu) goto L_088B5E4C;
    return;
L_088B5E4C:
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
      if (branch_taken) {
          goto L_088B5E74;
      }
      goto L_088B5E58;
    }
L_088B5E58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5E74;
      }
      goto L_088B5E60;
    }
L_088B5E60:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088B5E44;
      }
      goto L_088B5E68;
    }
L_088B5E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5E74;
      }
      goto L_088B5E70;
    }
L_088B5E70:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B5E74;
L_088B5E74:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5E80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B5E94u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 42u, 0x08844544u>(ctx, &aot_mem) && ctx.pc == 0x088B5E94u) goto L_088B5E94;
    return;
L_088B5E94:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5EA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B5ED4;
      }
      goto L_088B5EB8;
    }
L_088B5EB8:
    ctx.gpr[6] = (0u | 300u);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[31] = (0x088B5EC8u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(17336), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 492u, 0x08843388u>(ctx, &aot_mem) && ctx.pc == 0x088B5EC8u) goto L_088B5EC8;
    return;
L_088B5EC8:
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
      if (branch_taken) {
          goto L_088B5ED8;
      }
      goto L_088B5ED4;
    }
L_088B5ED4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B5ED8;
L_088B5ED8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5EE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B5F0C;
      }
      goto L_088B5EFC;
    }
L_088B5EFC:
    ctx.gpr[31] = (0x088B5F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 42u, 0x08844544u>(ctx, &aot_mem) && ctx.pc == 0x088B5F04u) goto L_088B5F04;
    return;
L_088B5F04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5F10;
      }
      goto L_088B5F0C;
    }
L_088B5F0C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B5F10;
L_088B5F10:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5F1C:
    ctx.gpr[4] = (0u | 254u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_088B5F40;
      }
      goto L_088B5F28;
    }
L_088B5F28:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 256u);
      if (branch_taken) {
          goto L_088B5F40;
      }
      goto L_088B5F30;
    }
L_088B5F30:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 257u);
      if (branch_taken) {
          goto L_088B5F40;
      }
      goto L_088B5F38;
    }
L_088B5F38:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B5F48;
      }
      goto L_088B5F40;
    }
L_088B5F40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B5F4C;
      }
      goto L_088B5F48;
    }
L_088B5F48:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B5F4C;
L_088B5F4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5F54:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5F74:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5F94:
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(14144));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_088B5FB4;
      }
      goto L_088B5FB0;
    }
L_088B5FB0:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    goto L_088B5FB4;
L_088B5FB4:
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5FC4;
      }
      goto L_088B5FC0;
    }
L_088B5FC0:
    ctx.gpr[6] = (0u | 127u);
    goto L_088B5FC4;
L_088B5FC4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (0u | 21u);
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.gpr[8] = (0u | 22u);
      if (branch_taken) {
          goto L_088B5FE0;
      }
      goto L_088B5FD8;
    }
L_088B5FD8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088B603C;
      }
      goto L_088B5FE0;
    }
L_088B5FE0:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6859)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 127u);
        goto L_088B602C;
    }
    goto L_088B5FFC;
L_088B5FFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (0u | 21336u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 64u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(496), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B60C4;
      }
      goto L_088B602C;
    }
L_088B602C:
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B60C4;
      }
      goto L_088B603C;
    }
L_088B603C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(112)));
    ctx.gpr[8] = (0u | 3u);
    if (ctx.gpr[5] != ctx.gpr[8]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
        goto L_088B6060;
    }
    goto L_088B604C;
L_088B604C:
    ctx.gpr[4] = (0u | 168u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B60C4;
      }
      goto L_088B6060;
    }
L_088B6060:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(208)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 21336u);
      if (branch_taken) {
          goto L_088B60B8;
      }
      goto L_088B6074;
    }
L_088B6074:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088B608C;
      }
      goto L_088B6080;
    }
L_088B6080:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088B608C;
L_088B608C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17376)));
    ctx.gpr[4] = (18086u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 45056u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B60C4;
      }
      goto L_088B60B8;
    }
L_088B60B8:
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
    goto L_088B60C4;
L_088B60C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B60CC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (0u | 127u);
        goto L_088B60DC;
    }
    goto L_088B60DC;
L_088B60DC:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(14144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(496), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B60F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B60FC:
    ctx.gpr[4] = (0u | 44000u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6110;
      }
      goto L_088B610C;
    }
L_088B610C:
    ctx.gpr[6] = (0u | 44000u);
    goto L_088B6110;
L_088B6110:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14144));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(400), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B613Cu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 99u, 0x08AF8938u>(ctx, &aot_mem) && ctx.pc == 0x088B613Cu) goto L_088B613C;
    return;
L_088B613C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] << (ctx.gpr[16] & 31u));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B615C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B6178u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_088B5554;
L_088B6178:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B61AC;
      }
      goto L_088B6180;
    }
L_088B6180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14144));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[7] << (ctx.gpr[6] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088B61AC;
L_088B61AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B61B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B61D4u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_088B5554;
L_088B61D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6208;
      }
      goto L_088B61DC;
    }
L_088B61DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14144));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[7] << (ctx.gpr[6] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_088B6208;
L_088B6208:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6214:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B621C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6224:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B622C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B6298;
      }
      goto L_088B6250;
    }
L_088B6250:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088B6260u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8744));
    goto L_088B5528;
L_088B6260:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6294;
      }
      goto L_088B626C;
    }
L_088B626C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B628C;
      }
      goto L_088B6280;
    }
L_088B6280:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x088B628Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x088B628Cu) goto L_088B628C;
    return;
L_088B628C:
    ctx.gpr[31] = (0x088B6294u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088B6294u) goto L_088B6294;
    return;
L_088B6294:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_088B6298;
L_088B6298:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B62AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17333)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B692C;
      }
      goto L_088B62EC;
    }
L_088B62EC:
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(14832));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21916));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6424));
    ctx.gpr[4] = (2241u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-384));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8756));
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1664));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7880));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8952));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[6] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9016));
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4832));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9096));
    ctx.gpr[7] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(592));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(9132));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[23] = (2269u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-6456));
    goto L_088B63C8;
L_088B63C8:
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 24 ? 1u : 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088B63E8;
      }
      goto L_088B63E0;
    }
L_088B63E0:
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(-24));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_088B63E8;
L_088B63E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[19] << (ctx.gpr[6] & 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6414;
      }
      goto L_088B640C;
    }
L_088B640C:
    ctx.gpr[31] = (0x088B6414u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 80u, 0x08AF8780u>(ctx, &aot_mem) && ctx.pc == 0x088B6414u) goto L_088B6414;
    return;
L_088B6414:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088B66CC;
      }
      goto L_088B6428;
    }
L_088B6428:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B66CC;
      }
      goto L_088B6438;
    }
L_088B6438:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[31] = (0x088B6448u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 501u, 0x08843428u>(ctx, &aot_mem) && ctx.pc == 0x088B6448u) goto L_088B6448;
    return;
L_088B6448:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088B6468;
      }
      goto L_088B6450;
    }
L_088B6450:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088B6908;
      }
      goto L_088B6468;
    }
L_088B6468:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B661C;
      }
      goto L_088B6478;
    }
L_088B6478:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088B6494;
      }
      goto L_088B6490;
    }
L_088B6490:
    ctx.gpr[16] = (0u | 0u);
    goto L_088B6494;
L_088B6494:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B64AC;
      }
      goto L_088B64A8;
    }
L_088B64A8:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_088B64AC;
L_088B64AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B64C8;
      }
      goto L_088B64B8;
    }
L_088B64B8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6574;
      }
      goto L_088B64C0;
    }
L_088B64C0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088B6574;
      }
      goto L_088B64C8;
    }
L_088B64C8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3572)));
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(3596)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_088B64E4;
L_088B64E4:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088B64F4;
      }
      goto L_088B64F0;
    }
L_088B64F0:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    goto L_088B64F4;
L_088B64F4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_088B6518;
      }
      goto L_088B6508;
    }
L_088B6508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088B6538;
      }
      goto L_088B6518;
    }
L_088B6518:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_088B6528;
      }
      goto L_088B6520;
    }
L_088B6520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_088B6538;
      }
      goto L_088B6528;
    }
L_088B6528:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088B64E4;
      }
      goto L_088B6538;
    }
L_088B6538:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B654C;
      }
      goto L_088B6544;
    }
L_088B6544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B6908;
      }
      goto L_088B654C;
    }
L_088B654C:
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-64));
      if (branch_taken) {
          goto L_088B6614;
      }
      goto L_088B6574;
    }
L_088B6574:
    ctx.gpr[31] = (0x088B657Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    goto L_088B5528;
L_088B657C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B6598;
      }
      goto L_088B6590;
    }
L_088B6590:
    ctx.gpr[7] = (0u | 47104u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    goto L_088B6598;
L_088B6598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[10]) < 5662 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B65C4;
      }
      goto L_088B65B4;
    }
L_088B65B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5661 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B65C4;
      }
      goto L_088B65BC;
    }
L_088B65BC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B65EC;
      }
      goto L_088B65C4;
    }
L_088B65C4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17333), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B65E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8776));
    goto L_088B5528;
L_088B65E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B692C;
      }
      goto L_088B65EC;
    }
L_088B65EC:
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-64));
    goto L_088B6614;
L_088B6614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B6654;
      }
      goto L_088B661C;
    }
L_088B661C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088B6628u);
    ctx.gpr[5] = (ctx.gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 533u, 0x088435A0u>(ctx, &aot_mem) && ctx.pc == 0x088B6628u) goto L_088B6628;
    return;
L_088B6628:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3568)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-64));
    goto L_088B6654;
L_088B6654:
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    ctx.gpr[7] = (ctx.gpr[11] | 0u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088B6674u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    goto L_088B5820;
L_088B6674:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088B66B8;
      }
      goto L_088B6684;
    }
L_088B6684:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 236u);
      if (branch_taken) {
          goto L_088B66B8;
      }
      goto L_088B6690;
    }
L_088B6690:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_088B66B8;
      }
      goto L_088B6698;
    }
L_088B6698:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 221u);
      if (branch_taken) {
          goto L_088B66B8;
      }
      goto L_088B66A0;
    }
L_088B66A0:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 222u);
      if (branch_taken) {
          goto L_088B66B8;
      }
      goto L_088B66A8;
    }
L_088B66A8:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 13u);
      if (branch_taken) {
          goto L_088B66B8;
      }
      goto L_088B66B0;
    }
L_088B66B0:
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B66BC;
      }
      goto L_088B66B8;
    }
L_088B66B8:
    ctx.gpr[7] = (0u | 0u);
    goto L_088B66BC;
L_088B66BC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088B66CCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 91u, 0x08AF8870u>(ctx, &aot_mem) && ctx.pc == 0x088B66CCu) goto L_088B66CC;
    return;
L_088B66CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(400)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B6724;
      }
      goto L_088B66DC;
    }
L_088B66DC:
    ctx.gpr[5] = (ctx.gpr[6] << 12u);
    ctx.gpr[4] = (0u | 44000u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[31] = (0x088B6700u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_088B5820;
L_088B6700:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B670Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 87u, 0x08AF8820u>(ctx, &aot_mem) && ctx.pc == 0x088B670Cu) goto L_088B670C;
    return;
L_088B670C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4097 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B6724;
      }
      goto L_088B6718;
    }
L_088B6718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x088B6724u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088B5820;
L_088B6724:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(592)));
    if (ctx.gpr[8] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_088B68B8;
    }
    goto L_088B6730;
L_088B6730:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(496)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    ctx.gpr[9] = (0u | 127u);
      if (branch_taken) {
          goto L_088B68B4;
      }
      goto L_088B673C;
    }
L_088B673C:
    ctx.gpr[4] = (ctx.gpr[9] - ctx.gpr[7]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3608)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[11] | 0u);
    ctx.gpr[18] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[31] = (0x088B67A0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    goto L_088B5820;
L_088B67A0:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[9] = (ctx.gpr[18] << 1u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3608)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
        goto L_088B67BC;
    }
    goto L_088B67BC;
L_088B67BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[16] << 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
        goto L_088B67D0;
    }
    goto L_088B67D0;
L_088B67D0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 4096u);
    ctx.gpr[19] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 4096u);
        goto L_088B67FC;
    }
    goto L_088B67FC;
L_088B67FC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 4096u);
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 4096u);
        goto L_088B6828;
    }
    goto L_088B6828;
L_088B6828:
    ctx.gpr[31] = (0x088B6830u);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 115u, 0x088BC64Cu>(ctx, &aot_mem) && ctx.pc == 0x088B6830u) goto L_088B6830;
    return;
L_088B6830:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6870;
      }
      goto L_088B6838;
    }
L_088B6838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B6870;
      }
      goto L_088B6848;
    }
L_088B6848:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088B6870;
L_088B6870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B6880u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_088B5820;
L_088B6880:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B6898u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 83u, 0x08AF87BCu>(ctx, &aot_mem) && ctx.pc == 0x088B6898u) goto L_088B6898;
    return;
L_088B6898:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[31] = (0x088B68B4u);
    ctx.gpr[9] = (4096u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 95u, 0x08AF88CCu>(ctx, &aot_mem) && ctx.pc == 0x088B68B4u) goto L_088B68B4;
    return;
L_088B68B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_088B68B8;
L_088B68B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6908;
      }
      goto L_088B68F4;
    }
L_088B68F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088B6900u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_088B5820;
L_088B6900:
    ctx.gpr[31] = (0x088B6908u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 77u, 0x08AF8744u>(ctx, &aot_mem) && ctx.pc == 0x088B6908u) goto L_088B6908;
    return;
L_088B6908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B63C8;
      }
      goto L_088B6924;
    }
L_088B6924:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17333), static_cast<std::uint8_t>(0u));
    goto L_088B692C;
L_088B692C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17300)));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[4] = (16014u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(17296)));
    ctx.gpr[5] = (ctx.gpr[4] | 14571u);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(17324)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[17] = ctx.fpr[20] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17304), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[16] / ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(17312), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(17308), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (15744u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(17316), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(17320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B6A08u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(17328), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_088B5848;
L_088B6A08:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088B6A14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17392));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x088B6A14u) goto L_088B6A14;
    return;
L_088B6A14:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17364)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17344)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(17340)));
    ctx.gpr[7] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(17348), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[5] = (16704u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(17356), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(17368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (16268u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(17352), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(17360), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(17372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6AA8:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088B6AB0;
L_088B6AB0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(144), 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 82 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(148));
      if (branch_taken) {
          goto L_088B6AB0;
      }
      goto L_088B6ACC;
    }
L_088B6ACC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6AD4:
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
L_088B6B00:
    ctx.gpr[5] = (0u | 209u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2002), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6B0C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2002)));
    ctx.gpr[5] = (0u | 103u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B6B24;
      }
      goto L_088B6B1C;
    }
L_088B6B1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B6B28;
      }
      goto L_088B6B24;
    }
L_088B6B24:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B6B28;
L_088B6B28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6B30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B6B78;
      }
      goto L_088B6B68;
    }
L_088B6B68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1826))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B6B90;
      }
      goto L_088B6B78;
    }
L_088B6B78:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29514)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6B98;
      }
      goto L_088B6B88;
    }
L_088B6B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6BAC;
      }
      goto L_088B6B90;
    }
L_088B6B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6CFC;
      }
      goto L_088B6B98;
    }
L_088B6B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6BAC;
      }
      goto L_088B6BA4;
    }
L_088B6BA4:
    ctx.gpr[4] = (0u | 108u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2002), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088B6BAC;
L_088B6BAC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2002)));
    ctx.gpr[5] = (0u | 209u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B6CFC;
      }
      goto L_088B6BBC;
    }
L_088B6BBC:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[5] = (0u | 103u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8148)));
      if (branch_taken) {
          goto L_088B6BD4;
      }
      goto L_088B6BCC;
    }
L_088B6BCC:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1996), ctx.gpr[5]);
    goto L_088B6BD4;
L_088B6BD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1996)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6CFC;
      }
      goto L_088B6BE4;
    }
L_088B6BE4:
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-103));
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (0u | 209u);
      if (branch_taken) {
          goto L_088B6CF8;
      }
      goto L_088B6BF4;
    }
L_088B6BF4:
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17452));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2452)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6CF8;
      }
      goto L_088B6C20;
    }
L_088B6C20:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x088B6C3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x088B6C3Cu) goto L_088B6C3C;
    return;
L_088B6C3C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2002)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1992), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2472)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2468)));
    ctx.gpr[31] = (0x088B6C64u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088B6C64u) goto L_088B6C64;
    return;
L_088B6C64:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B6C78u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088B6C78u) goto L_088B6C78;
    return;
L_088B6C78:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1996), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2002)));
    ctx.gpr[5] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B6CC0;
      }
      goto L_088B6CA4;
    }
L_088B6CA4:
    ctx.gpr[31] = (0x088B6CACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088B6CACu) goto L_088B6CAC;
    return;
L_088B6CAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2002)));
      if (branch_taken) {
          goto L_088B6CC0;
      }
      goto L_088B6CB4;
    }
L_088B6CB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1996)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1996), ctx.gpr[5]);
    goto L_088B6CC0;
L_088B6CC0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6CEC;
      }
      goto L_088B6CC8;
    }
L_088B6CC8:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2456)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2452), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2002)));
    goto L_088B6CEC;
L_088B6CEC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2000), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2002), static_cast<std::uint16_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088B6CFC;
      }
      goto L_088B6CF8;
    }
L_088B6CF8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2002), static_cast<std::uint16_t>(ctx.gpr[17]));
    goto L_088B6CFC;
L_088B6CFC:
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
L_088B6D24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (static_cast<std::int32_t>(ctx.gpr[19]) < 103 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B6DC0;
      }
      goto L_088B6D54;
    }
L_088B6D54:
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[19]) < 159 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088B6DC0;
      }
      goto L_088B6D60;
    }
L_088B6D60:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B6DB8;
      }
      goto L_088B6D90;
    }
L_088B6D90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (16339u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B6DD4;
      }
      goto L_088B6DB0;
    }
L_088B6DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6DF8;
      }
      goto L_088B6DB8;
    }
L_088B6DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6F5C;
      }
      goto L_088B6DC0;
    }
L_088B6DC0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B6DCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9160));
    goto L_088B6AD4;
L_088B6DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6F5C;
      }
      goto L_088B6DD4;
    }
L_088B6DD4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 104 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 107 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B6DF0;
      }
      goto L_088B6DE0;
    }
L_088B6DE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6DF0;
      }
      goto L_088B6DE8;
    }
L_088B6DE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6E9C;
      }
      goto L_088B6DF0;
    }
L_088B6DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6F5C;
      }
      goto L_088B6DF8;
    }
L_088B6DF8:
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B6E48;
      }
      goto L_088B6E10;
    }
L_088B6E10:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-103));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6E40;
      }
      goto L_088B6E20;
    }
L_088B6E20:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(9216)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6E38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6E9C;
      }
      goto L_088B6E40;
    }
L_088B6E40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6F5C;
      }
      goto L_088B6E48;
    }
L_088B6E48:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B6E9C;
      }
      goto L_088B6E64;
    }
L_088B6E64:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-103));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6E94;
      }
      goto L_088B6E74;
    }
L_088B6E74:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(9376)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6E9C;
      }
      goto L_088B6E94;
    }
L_088B6E94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6F5C;
      }
      goto L_088B6E9C;
    }
L_088B6E9C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2002)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6F5C;
      }
      goto L_088B6EAC;
    }
L_088B6EAC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2000)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B6F2C;
      }
      goto L_088B6EB8;
    }
L_088B6EB8:
    ctx.gpr[4] = (0u | 103u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
      if (branch_taken) {
          goto L_088B6F2C;
      }
      goto L_088B6EC4;
    }
L_088B6EC4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17452));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1992)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2464)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2460)));
    ctx.gpr[31] = (0x088B6EECu);
    ctx.gpr[21] = (ctx.gpr[6] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x088B6EECu) goto L_088B6EEC;
    return;
L_088B6EEC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B6F00u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x088B6F00u) goto L_088B6F00;
    return;
L_088B6F00:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B6F48;
      }
      goto L_088B6F2C;
    }
L_088B6F2C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6F50;
      }
      goto L_088B6F34;
    }
L_088B6F34:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B6F40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9184));
    goto L_088B6AD4;
L_088B6F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6F5C;
      }
      goto L_088B6F48;
    }
L_088B6F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6F5C;
      }
      goto L_088B6F50;
    }
L_088B6F50:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6F34;
      }
      goto L_088B6F58;
    }
L_088B6F58:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2002), static_cast<std::uint16_t>(ctx.gpr[19]));
    goto L_088B6F5C;
L_088B6F5C:
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
L_088B6F80:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17420)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17416)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17444)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(17424), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(17432), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(17428), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(17436), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(17440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(17448), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7014:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21760));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(18844), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B7058u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B9BCu;
    return;
L_088B7058:
    ctx.gpr[31] = (0x088B7060u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B9B4u;
    return;
L_088B7060:
    ctx.gpr[31] = (0x088B7068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 647u, 0x08867E10u>(ctx, &aot_mem) && ctx.pc == 0x088B7068u) goto L_088B7068;
    return;
L_088B7068:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-26464));
      if (branch_taken) {
          goto L_088B70C4;
      }
      goto L_088B70A4;
    }
L_088B70A4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 512u);
    ctx.gpr[7] = (0u | 320u);
    ctx.gpr[31] = (0x088B70BCu);
    ctx.gpr[8] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 2u, 0x08AB4014u>(ctx, &aot_mem) && ctx.pc == 0x088B70BCu) goto L_088B70BC;
    return;
L_088B70BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B70DC;
      }
      goto L_088B70C4;
    }
L_088B70C4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 480u);
    ctx.gpr[7] = (0u | 272u);
    ctx.gpr[31] = (0x088B70DCu);
    ctx.gpr[8] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 2u, 0x08AB4014u>(ctx, &aot_mem) && ctx.pc == 0x088B70DCu) goto L_088B70DC;
    return;
L_088B70DC:
    ctx.gpr[31] = (0x088B70E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 552u, 0x08AB3028u>(ctx, &aot_mem) && ctx.pc == 0x088B70E4u) goto L_088B70E4;
    return;
L_088B70E4:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[31] = (0x088B70F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 424u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x088B70F4u) goto L_088B70F4;
    return;
L_088B70F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (7168u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (21248u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (21504u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (22016u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (22272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (57088u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (57344u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (57600u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (8448u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (56319u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2054));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (8704u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (56832u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (8960u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (9216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (50943u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60160u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (18303u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 62720u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] >> 8u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (17408u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (18176u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (54784u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (55041u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (39680u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (20480u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (9472u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (7936u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18840), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (23552u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (23808u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (23296u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (24320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (25344u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (25600u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (25856u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (24576u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (26112u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (26368u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (26624u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (24832u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (26880u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (27136u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (27392u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (25088u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (27648u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (27904u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[5] = (28160u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (6144u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (6400u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (6656u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (6912u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (5888u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (24064u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (7680u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (51456u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (49408u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (50944u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (51440u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (50688u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(263));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[8] = (0u | 65280u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088B77F8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 414u, 0x08A7F3A8u>(ctx, &aot_mem) && ctx.pc == 0x088B77F8u) goto L_088B77F8;
    return;
L_088B77F8:
    ctx.gpr[31] = (0x088B7800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 571u, 0x08AB332Cu>(ctx, &aot_mem) && ctx.pc == 0x088B7800u) goto L_088B7800;
    return;
L_088B7800:
    ctx.gpr[31] = (0x088B7808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 638u, 0x08AB3900u>(ctx, &aot_mem) && ctx.pc == 0x088B7808u) goto L_088B7808;
    return;
L_088B7808:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x088B7814u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x088B7814u) goto L_088B7814;
    return;
L_088B7814:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B7848;
      }
      goto L_088B7820;
    }
L_088B7820:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9756));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9740));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2197u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7732));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088B7848;
L_088B7848:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088B785C;
      }
      goto L_088B7850;
    }
L_088B7850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088B785C;
L_088B785C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B78A0;
      }
      goto L_088B786C;
    }
L_088B786C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088B7890;
      }
      goto L_088B7874;
    }
L_088B7874:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088B7888;
      }
      goto L_088B787C;
    }
L_088B787C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088B7888;
L_088B7888:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    goto L_088B7890;
L_088B7890:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(297)));
      if (branch_taken) {
          goto L_088B78C8;
      }
      goto L_088B78A0;
    }
L_088B78A0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(300));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x088B78C0u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 151u, 0x08B00A6Cu>(ctx, &aot_mem) && ctx.pc == 0x088B78C0u) goto L_088B78C0;
    return;
L_088B78C0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(297)));
    goto L_088B78C8;
L_088B78C8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B78F0;
      }
      goto L_088B78D0;
    }
L_088B78D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088B78ECu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B78ECu) goto L_088B78EC;
    return;
L_088B78EC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088B78F0;
L_088B78F0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7910;
      }
      goto L_088B78F8;
    }
L_088B78F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7910;
      }
      goto L_088B7908;
    }
L_088B7908:
    ctx.gpr[31] = (0x088B7910u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x088B7910u) goto L_088B7910;
    return;
L_088B7910:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7930:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B7960;
      }
      goto L_088B7950;
    }
L_088B7950:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_088B7978;
      }
      goto L_088B7958;
    }
L_088B7958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B7988;
      }
      goto L_088B7960;
    }
L_088B7960:
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B7958;
      }
      goto L_088B796C;
    }
L_088B796C:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18840)));
      if (branch_taken) {
          goto L_088B7988;
      }
      goto L_088B7978;
    }
L_088B7978:
    ctx.gpr[31] = (0x088B7980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 395u, 0x0894E368u>(ctx, &aot_mem) && ctx.pc == 0x088B7980u) goto L_088B7980;
    return;
L_088B7980:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (0u | 1u);
    goto L_088B7988;
L_088B7988:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7998:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7A3C;
      }
      goto L_088B79A8;
    }
L_088B79A8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(9560)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B79C0:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088B7A3C;
      }
      goto L_088B79D0;
    }
L_088B79D0:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7A3C;
      }
      goto L_088B79E4;
    }
L_088B79E4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7A3C;
      }
      goto L_088B79F0;
    }
L_088B79F0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7A3C;
      }
      goto L_088B79FC;
    }
L_088B79FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088B7A3C;
      }
      goto L_088B7A04;
    }
L_088B7A04:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7A3C;
      }
      goto L_088B7A10;
    }
L_088B7A10:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7A3C;
      }
      goto L_088B7A1C;
    }
L_088B7A1C:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7A3C;
      }
      goto L_088B7A28;
    }
L_088B7A28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088B7A3C;
      }
      goto L_088B7A30;
    }
L_088B7A30:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7A3C;
      }
      goto L_088B7A3C;
    }
L_088B7A3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7A44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18848)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B7A60u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_088B7998;
L_088B7A60:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18852)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088B7A74u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_088B7998;
L_088B7A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (57088u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[9] = (256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    ctx.gpr[9] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7AF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7C9C;
      }
      goto L_088B7B18;
    }
L_088B7B18:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(9600)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7B30:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[31] = (0x088B7B3Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 427u, 0x0894E720u>(ctx, &aot_mem) && ctx.pc == 0x088B7B3Cu) goto L_088B7B3C;
    return;
L_088B7B3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B7CA0;
      }
      goto L_088B7B44;
    }
L_088B7B44:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
      if (branch_taken) {
          goto L_088B7B74;
      }
      goto L_088B7B58;
    }
L_088B7B58:
    ctx.gpr[6] = (8960u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7B88;
      }
      goto L_088B7B74;
    }
L_088B7B74:
    ctx.gpr[6] = (8960u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_088B7B88;
L_088B7B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7CA0;
      }
      goto L_088B7B90;
    }
L_088B7B90:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
      if (branch_taken) {
          goto L_088B7BBC;
      }
      goto L_088B7BA4;
    }
L_088B7BA4:
    ctx.gpr[6] = (20480u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7BD4;
      }
      goto L_088B7BBC;
    }
L_088B7BBC:
    ctx.gpr[6] = (20480u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_088B7BD4;
L_088B7BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7CA0;
      }
      goto L_088B7BDC;
    }
L_088B7BDC:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (59136u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7CA0;
      }
      goto L_088B7C10;
    }
L_088B7C10:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x088B7C1Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(18848), ctx.gpr[4]);
    goto L_088B7A44;
L_088B7C1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B7CA0;
      }
      goto L_088B7C24;
    }
L_088B7C24:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x088B7C30u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(18852), ctx.gpr[4]);
    goto L_088B7A44;
L_088B7C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7C1C;
      }
      goto L_088B7C38;
    }
L_088B7C38:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_088B7C70;
      }
      goto L_088B7C4C;
    }
L_088B7C4C:
    ctx.gpr[7] = (7936u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(18840), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_088B7C88;
      }
      goto L_088B7C70;
    }
L_088B7C70:
    ctx.gpr[7] = (7936u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(18840), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_088B7C88;
L_088B7C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7C1C;
      }
      goto L_088B7C90;
    }
L_088B7C90:
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7320), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7C1C;
      }
      goto L_088B7C9C;
    }
L_088B7C9C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B7CA0;
L_088B7CA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7CAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7CD8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7CE0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7CE8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7CF0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[6] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7D20:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7D28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088B7E44;
      }
      goto L_088B7D88;
    }
L_088B7D88:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B7DA4;
      }
      goto L_088B7DA0;
    }
L_088B7DA0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B7DA4;
L_088B7DA4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B7DC0;
      }
      goto L_088B7DBC;
    }
L_088B7DBC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B7DC0;
L_088B7DC0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B7DDC;
      }
      goto L_088B7DD8;
    }
L_088B7DD8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B7DDC;
L_088B7DDC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B7DF8;
      }
      goto L_088B7DF4;
    }
L_088B7DF4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B7DF8;
L_088B7DF8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B7E14;
      }
      goto L_088B7E10;
    }
L_088B7E10:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B7E14;
L_088B7E14:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B7E30;
      }
      goto L_088B7E2C;
    }
L_088B7E2C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B7E30;
L_088B7E30:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088B7D88;
      }
      goto L_088B7E44;
    }
L_088B7E44:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7E4C:
    ctx.gpr[8] = (54272u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] | ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[5] << 10u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.gpr[9] = (2233u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (54528u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7EA0:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    ctx.gpr[9] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[9]);
      if (branch_taken) {
          goto L_088B7F60;
      }
      goto L_088B7EBC;
    }
L_088B7EBC:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<4u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<68u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_088B7ED8;
L_088B7ED8:
    ctx.set_vfpu_scalar_bits_ct<5u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_vfpu_scalar_bits_ct<37u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_vfpu_scalar_bits_ct<69u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 2u>(vfpu_value); }
    ctx.set_vfpu_scalar_bits_ct<6u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_vfpu_scalar_bits_ct<38u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_vfpu_scalar_bits_ct<70u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_vfpu_scalar_bits_ct<7u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_vfpu_scalar_bits_ct<39u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_vfpu_scalar_bits_ct<71u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 2u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<104u, 32u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<9u, 33u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<41u, 34u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<73u, 32u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<105u, 33u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<10u, 34u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<42u, 32u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<74u, 33u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<106u, 34u, 7u, 4u>();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.set_vfpu_scalar_bits_ct<4u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<68u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          goto L_088B7ED8;
      }
      goto L_088B7F58;
    }
L_088B7F58:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7F98;
      }
      goto L_088B7F60;
    }
L_088B7F60:
    ctx.set_vfpu_scalar_bits_ct<4u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<68u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-12), ctx.vfpu_scalar_bits_ct<8u>());
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8), ctx.vfpu_scalar_bits_ct<40u>());
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.vfpu_scalar_bits_ct<72u>());
      if (branch_taken) {
          goto L_088B7F60;
      }
      goto L_088B7F98;
    }
L_088B7F98:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7FA4:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    ctx.gpr[9] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[9]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 3u, 0x088B8034u>(ctx, &aot_mem); return;
      }
      goto L_088B7FC0;
    }
L_088B7FC0:
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    goto L_088B7FCC;
L_088B7FCC:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 2u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 2u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<9u, 32u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<41u, 33u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<73u, 34u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<10u, 32u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<42u, 33u, 6u, 4u>();
    ctx.pc = 0x088B8000u; return;
}

void recomp_unit_0044(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0044_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_44(Runtime &runtime) {
    runtime.register_generated_unit(44u, 0x088B4000u, 16384u, &recomp_unit_0044, &recomp_unit_0044_entry);
    runtime.register_function(0x088B4000u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B404Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4060u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4080u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4098u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B409Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B40BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B40CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B40D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B40E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B40E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B40ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4108u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4124u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4138u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4164u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B41B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B41CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B41E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4200u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B421Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4258u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4268u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B426Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4278u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4288u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B430Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4324u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4354u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4364u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B436Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4378u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4394u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B43A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B43B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B43C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B43D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B43ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4414u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4420u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4438u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4444u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B445Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4468u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B447Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4490u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44E8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4504u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B450Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4520u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4528u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4530u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B453Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4548u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4550u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4558u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4560u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4568u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4574u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B457Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4588u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4594u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45ACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45E8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4600u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B460Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4618u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4624u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4630u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B463Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4648u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4654u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4660u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B466Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4678u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4684u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B468Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4694u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B469Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46E8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4708u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4710u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B471Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4730u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4738u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4740u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B474Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4754u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4760u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B477Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4784u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B478Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B479Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B47B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B47D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B47E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4818u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4820u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B482Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4888u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B489Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B493Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4944u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4948u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4950u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4958u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B498Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B49F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4A0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4A14u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4A18u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4A20u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4A2Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4A34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4A48u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4A94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B18u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B24u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B2Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B40u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B9Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4BA8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4BB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4BB4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4BBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4BC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4BCCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4BD4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4CC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4CF0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B53DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5408u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5418u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5424u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B542Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5458u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5468u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5474u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B547Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5494u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5528u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5554u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5560u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5568u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B557Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5584u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B558Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5590u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5598u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B55E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B55F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5604u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B560Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5614u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B561Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B565Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5664u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B566Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5674u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5694u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B569Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B56A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B56B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B56C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B56ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B56F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B56FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5710u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B574Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B575Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5768u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5778u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5780u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5788u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B579Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B57D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B57E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B57E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5820u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5848u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5870u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5880u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5888u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5890u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B589Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5908u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5910u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5918u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5928u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5930u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B593Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5940u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B594Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5964u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5998u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A04u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A08u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A14u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A5Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A64u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A6Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A80u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A8Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AB4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5ACCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AD4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AE4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AFCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B04u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B2Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B9Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BA8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BC8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BFCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C04u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C24u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C58u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C60u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C64u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C6Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C7Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C98u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5CACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5CB4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5CBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5CE0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5CF0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D08u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D5Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D8Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DA8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DB8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DCCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DD4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DE8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DF4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E2Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E58u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E60u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E68u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E70u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E80u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EA0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EB8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EC8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5ED4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5ED8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EE4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EFCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F04u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F40u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F48u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FB4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FD8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FE0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FFCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B602Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B603Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B604Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6060u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6074u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6080u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B608Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B610Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6110u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6128u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B613Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B615Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6178u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6180u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61ACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6208u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6214u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B621Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6224u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B622Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6234u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6250u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6260u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B626Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6280u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B628Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6294u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6298u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B62ACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B62ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B63C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B63E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B63E8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B640Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6414u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6428u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6438u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6448u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6450u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6468u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6478u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6490u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6494u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64ACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6508u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6518u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6520u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6528u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6538u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6544u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B654Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6574u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B657Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6590u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6598u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6614u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B661Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6628u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6654u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6674u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6684u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6690u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6698u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6700u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B670Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6718u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6724u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6730u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B673Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67D0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6828u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6830u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6838u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6848u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6870u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6880u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6898u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B68B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B68B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B68F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6900u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6908u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6924u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B692Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6960u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A08u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A14u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6AA8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6AB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6ACCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6AD4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B00u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B24u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B68u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B78u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B90u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B98u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6BA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6BACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6BBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6BCCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6BD4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6BE4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6BF4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C20u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C3Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C64u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C78u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6CA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6CACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6CB4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6CC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6CC8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6CECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6CF8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6CFCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D24u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D60u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D90u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DB8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DCCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DD4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DE0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DE8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DF0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DF8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E20u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E40u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E48u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E64u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E8Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E9Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6EACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6EB8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6EC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6EECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F00u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F2Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F40u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F48u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F50u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F58u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F5Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F80u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7014u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7058u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7060u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7068u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7078u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B70A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B70BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B70C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B70DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B70E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B70F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B77F8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7800u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7808u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7814u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7820u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7848u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7850u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B785Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B786Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7874u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B787Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7888u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7890u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78D0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78F8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7908u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7910u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7930u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7938u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7950u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7958u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7960u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B796Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7978u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7980u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7988u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7998u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B79A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B79C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B79D0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B79E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B79F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B79FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7A04u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7A10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7A1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7A28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7A30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7A3Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7A44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7A60u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7A74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7AF8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B18u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B3Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B58u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B90u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7BA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7BBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7BD4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7BDCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C24u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C70u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C90u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C9Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7CA0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7CACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7CD8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7CE0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7CE8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7CF0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D20u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DA0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DD8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DDCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DF4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DF8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E14u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E2Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7EA0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7EBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7ED8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7F58u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7F60u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7F98u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FCCu, &recomp_unit_0044, "recomp_unit_0044");
}
} // namespace psprecomp
