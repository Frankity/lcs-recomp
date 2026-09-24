#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0137[4019] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 12, 0,
    0, 0, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0,
    0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 56,
    0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0,
    0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0,
    0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0,
    88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0,
    0, 95, 0, 96, 97, 0, 98, 0, 0, 0, 99, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 103, 0, 0, 104, 0, 0, 105, 0, 106, 107,
    0, 108, 0, 0, 0, 109, 110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0,
    118, 0, 119, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 123, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0,
    128, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0,
    139, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 146, 147, 0, 148, 0, 0, 0, 0, 149, 0,
    0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 158, 159, 0, 160, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0,
    0, 171, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 178, 0, 179, 0, 180, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0,
    189, 0, 190, 0, 0, 0, 0, 191, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0,
    197, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 201, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 209,
    0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 219, 0, 220, 0, 221,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0,
    0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236,
    0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 247, 0, 0,
    248, 0, 249, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 254, 0,
    0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0,
    0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0,
    269, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273,
    0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0,
    0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0,
    296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 305, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308,
    0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 320, 0, 321, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0,
    325, 0, 0, 326, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336,
    0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 344, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 351, 352, 0, 0, 353, 0,
    354, 0, 0, 0, 355, 356, 0, 0, 357, 0, 0, 0, 358, 359, 0, 360, 0, 0, 361, 0, 0, 0, 362, 0, 363, 0, 0, 364, 0, 365, 0, 0,
    0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0,
    0, 0, 371, 0, 372, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 385, 0, 0, 386, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 391, 392, 0, 0, 393, 0, 394, 0, 0, 0, 0,
    395, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0,
    405, 0, 0, 0, 0, 406, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413,
    0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 418, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 422, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 428, 0, 429, 430, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 438, 439, 0,
    440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451,
    0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 457,
    0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0,
    468, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 473, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 479, 480, 0,
    481, 0, 482, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 487, 0, 0, 0,
    488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 0, 499, 0, 500, 0,
    0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 507, 0, 508, 509, 0, 0, 0, 0,
    0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 513, 0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0,
    518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523, 0, 524, 0, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 0, 529, 0, 530, 0,
    0, 0, 531, 0, 532, 0, 0, 0, 533, 0, 534, 0, 0, 0, 535, 0, 536, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0,
    539, 0, 0, 0, 0, 540, 0, 0, 541, 0, 542, 0, 0, 0, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551,
    0, 552, 0, 0, 0, 553, 0, 554, 0, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 0, 559, 0, 560, 0, 0, 0, 561, 0, 562,
    0, 0, 0, 563, 0, 564, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 569, 0, 570,
    0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579, 0, 580, 0, 0, 0, 581, 0, 582, 0, 0, 0,
    583, 0, 584, 0, 0, 0, 585, 0, 586, 0, 0, 0, 587, 0, 588, 0, 0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 592, 593, 0, 0, 0, 0,
    0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 0, 599, 0, 600, 0, 601, 0, 602,
    0, 603, 0, 604, 0, 605, 0, 606, 0, 607, 0, 608, 0, 0, 0, 609, 0, 610, 0, 0, 0, 611, 0, 612, 0, 0, 0, 613, 0, 614, 0, 0,
    0, 615, 0, 616, 0, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 620, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 623,
    0, 0, 0, 0, 624, 0, 0, 625, 0, 626, 0, 0, 0, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 635, 0,
    636, 0, 0, 0, 637, 0, 638, 0, 0, 0, 639, 0, 640, 0, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 644, 0, 0, 0, 645, 0, 646, 0,
    0, 0, 647, 0, 648, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 653, 0, 654, 0, 655, 0, 656, 0,
    657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 0, 0, 662, 0, 663, 0, 0, 0, 664, 0, 665, 0, 0, 0, 666, 0, 667, 0, 0, 0, 668, 0,
    669, 0, 0, 0, 670, 0, 671, 0, 0, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 684,
    0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689,
    0, 690, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0,
    697, 0, 698, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701,
    702, 0, 0, 0, 703, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 710,
    0, 0, 711, 0, 0, 712, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 717, 718, 0, 0, 0, 0, 0, 0, 0, 719,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 721, 0, 0, 0, 722, 0, 723, 0, 724, 0, 725, 0, 726, 0, 0, 0, 727, 728, 0, 729, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 732, 0, 733, 0, 734, 735, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0,
    737, 0, 0, 0, 738, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 741, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0, 744, 745, 0, 0, 0, 0,
    746, 0, 0, 0, 747, 748, 0, 749, 0, 750, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 753, 754, 0, 0, 0, 755, 0, 756, 757,
    0, 758, 759, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 763, 0, 0, 0, 764, 0,
    0, 765, 0, 0, 0, 766, 0, 0, 767, 0, 0, 0, 768, 0, 0, 769, 0, 0, 0, 770, 0, 0, 771, 0, 772, 0, 773, 0, 774, 0, 775, 0,
    776, 0, 777, 0, 778, 0, 779, 780, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 783, 0, 784, 0, 0, 0, 785,
    786, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 789, 0, 0, 0, 0, 790, 0, 791, 0, 0,
    0, 792, 0, 793, 794, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 798,
    0, 799, 800, 0, 0, 801, 0, 802, 0, 0, 0, 803, 0, 804, 0, 0, 805, 0, 806, 0, 807, 0, 808, 0, 809, 0, 0, 0, 810, 0, 0, 811,
    0, 0, 812, 0, 0, 813, 0, 814, 0, 0, 0, 815, 816, 0, 0, 817, 0, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 820, 821, 0, 0, 0,
    0, 822, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 825, 0, 826, 827, 0, 0, 828, 0, 829, 0, 0, 0, 830, 0,
    831, 0, 832, 0, 0, 833, 834, 0, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 838, 0, 839, 840,
    0, 0, 841, 0, 842, 0, 0, 0, 843, 0, 844, 0, 0, 0, 0, 0, 0, 845, 0, 846, 0, 847, 0, 848, 0, 849, 0, 0, 0, 850, 0, 0,
    851, 0, 0, 852, 0, 0, 853, 0, 854, 0, 0, 0, 855, 856, 0, 0, 857, 0, 0, 858, 0, 859, 0, 0, 0, 0, 0, 0, 860, 861, 0, 0,
    0, 0, 862, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865, 0, 866, 0, 0, 867, 0, 868, 0, 0, 0, 869, 0,
    870, 0, 871, 0, 0, 0, 0, 0, 0, 872, 0, 0, 873, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 876, 0, 877,
    0, 0, 878, 0, 879, 0, 0, 0, 880, 0, 881, 0, 882, 0, 0, 883, 0, 0, 884,
};
void recomp_unit_0137_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A28000u;
        entry_id = (entry_delta < 16076u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0137[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A28000;
    case 2u: goto L_08A2815C;
    case 3u: goto L_08A28170;
    case 4u: goto L_08A28184;
    case 5u: goto L_08A28198;
    case 6u: goto L_08A281AC;
    case 7u: goto L_08A281B4;
    case 8u: goto L_08A281BC;
    case 9u: goto L_08A281CC;
    case 10u: goto L_08A281E0;
    case 11u: goto L_08A281F4;
    case 12u: goto L_08A281F8;
    case 13u: goto L_08A28214;
    case 14u: goto L_08A2821C;
    case 15u: goto L_08A28224;
    case 16u: goto L_08A28234;
    case 17u: goto L_08A28248;
    case 18u: goto L_08A2825C;
    case 19u: goto L_08A28260;
    case 20u: goto L_08A28280;
    case 21u: goto L_08A28288;
    case 22u: goto L_08A28290;
    case 23u: goto L_08A282A0;
    case 24u: goto L_08A282B4;
    case 25u: goto L_08A282C8;
    case 26u: goto L_08A282D0;
    case 27u: goto L_08A2836C;
    case 28u: goto L_08A283CC;
    case 29u: goto L_08A283E0;
    case 30u: goto L_08A2840C;
    case 31u: goto L_08A2841C;
    case 32u: goto L_08A284A8;
    case 33u: goto L_08A284B8;
    case 34u: goto L_08A28544;
    case 35u: goto L_08A28554;
    case 36u: goto L_08A285DC;
    case 37u: goto L_08A285EC;
    case 38u: goto L_08A2877C;
    case 39u: goto L_08A28784;
    case 40u: goto L_08A287CC;
    case 41u: goto L_08A28860;
    case 42u: goto L_08A28894;
    case 43u: goto L_08A288A8;
    case 44u: goto L_08A288D0;
    case 45u: goto L_08A288E4;
    case 46u: goto L_08A288F4;
    case 47u: goto L_08A28904;
    case 48u: goto L_08A28910;
    case 49u: goto L_08A28920;
    case 50u: goto L_08A2892C;
    case 51u: goto L_08A2893C;
    case 52u: goto L_08A2894C;
    case 53u: goto L_08A28960;
    case 54u: goto L_08A28970;
    case 55u: goto L_08A28978;
    case 56u: goto L_08A2897C;
    case 57u: goto L_08A28984;
    case 58u: goto L_08A28994;
    case 59u: goto L_08A289A0;
    case 60u: goto L_08A289B0;
    case 61u: goto L_08A289BC;
    case 62u: goto L_08A289CC;
    case 63u: goto L_08A289D8;
    case 64u: goto L_08A289E8;
    case 65u: goto L_08A289F8;
    case 66u: goto L_08A28A0C;
    case 67u: goto L_08A28A1C;
    case 68u: goto L_08A28A30;
    case 69u: goto L_08A28A40;
    case 70u: goto L_08A28A48;
    case 71u: goto L_08A28A4C;
    case 72u: goto L_08A28A54;
    case 73u: goto L_08A28A60;
    case 74u: goto L_08A28A68;
    case 75u: goto L_08A28A84;
    case 76u: goto L_08A28A8C;
    case 77u: goto L_08A28AE4;
    case 78u: goto L_08A28B0C;
    case 79u: goto L_08A28B34;
    case 80u: goto L_08A28B5C;
    case 81u: goto L_08A28BF0;
    case 82u: goto L_08A28C28;
    case 83u: goto L_08A28C30;
    case 84u: goto L_08A28C44;
    case 85u: goto L_08A28C50;
    case 86u: goto L_08A28C68;
    case 87u: goto L_08A28C70;
    case 88u: goto L_08A28C80;
    case 89u: goto L_08A28C94;
    case 90u: goto L_08A28CB4;
    case 91u: goto L_08A28CCC;
    case 92u: goto L_08A28CE4;
    case 93u: goto L_08A28CEC;
    case 94u: goto L_08A28CF8;
    case 95u: goto L_08A28D04;
    case 96u: goto L_08A28D0C;
    case 97u: goto L_08A28D10;
    case 98u: goto L_08A28D18;
    case 99u: goto L_08A28D28;
    case 100u: goto L_08A28D2C;
    case 101u: goto L_08A28D3C;
    case 102u: goto L_08A28D54;
    case 103u: goto L_08A28D58;
    case 104u: goto L_08A28D64;
    case 105u: goto L_08A28D70;
    case 106u: goto L_08A28D78;
    case 107u: goto L_08A28D7C;
    case 108u: goto L_08A28D84;
    case 109u: goto L_08A28D94;
    case 110u: goto L_08A28D98;
    case 111u: goto L_08A28DA0;
    case 112u: goto L_08A28DAC;
    case 113u: goto L_08A28DC0;
    case 114u: goto L_08A28DD4;
    case 115u: goto L_08A28DDC;
    case 116u: goto L_08A28DEC;
    case 117u: goto L_08A28DF8;
    case 118u: goto L_08A28E00;
    case 119u: goto L_08A28E08;
    case 120u: goto L_08A28E10;
    case 121u: goto L_08A28E24;
    case 122u: goto L_08A28E34;
    case 123u: goto L_08A28E38;
    case 124u: goto L_08A28E40;
    case 125u: goto L_08A28E54;
    case 126u: goto L_08A28E68;
    case 127u: goto L_08A28E70;
    case 128u: goto L_08A28E80;
    case 129u: goto L_08A28E8C;
    case 130u: goto L_08A28E94;
    case 131u: goto L_08A28E9C;
    case 132u: goto L_08A28EA4;
    case 133u: goto L_08A28EB8;
    case 134u: goto L_08A28EC4;
    case 135u: goto L_08A28EC8;
    case 136u: goto L_08A28ED0;
    case 137u: goto L_08A28EE4;
    case 138u: goto L_08A28EF8;
    case 139u: goto L_08A28F00;
    case 140u: goto L_08A28F10;
    case 141u: goto L_08A28F1C;
    case 142u: goto L_08A28F24;
    case 143u: goto L_08A28F2C;
    case 144u: goto L_08A28F34;
    case 145u: goto L_08A28F48;
    case 146u: goto L_08A28F58;
    case 147u: goto L_08A28F5C;
    case 148u: goto L_08A28F64;
    case 149u: goto L_08A28F78;
    case 150u: goto L_08A28F8C;
    case 151u: goto L_08A28F94;
    case 152u: goto L_08A28FA4;
    case 153u: goto L_08A28FB0;
    case 154u: goto L_08A28FB8;
    case 155u: goto L_08A28FC0;
    case 156u: goto L_08A28FC8;
    case 157u: goto L_08A28FDC;
    case 158u: goto L_08A28FEC;
    case 159u: goto L_08A28FF0;
    case 160u: goto L_08A28FF8;
    case 161u: goto L_08A2908C;
    case 162u: goto L_08A290A0;
    case 163u: goto L_08A290AC;
    case 164u: goto L_08A290B4;
    case 165u: goto L_08A290BC;
    case 166u: goto L_08A290C8;
    case 167u: goto L_08A290D4;
    case 168u: goto L_08A290E0;
    case 169u: goto L_08A290EC;
    case 170u: goto L_08A290F8;
    case 171u: goto L_08A29104;
    case 172u: goto L_08A2910C;
    case 173u: goto L_08A29118;
    case 174u: goto L_08A29120;
    case 175u: goto L_08A29128;
    case 176u: goto L_08A2913C;
    case 177u: goto L_08A29154;
    case 178u: goto L_08A29158;
    case 179u: goto L_08A29160;
    case 180u: goto L_08A29168;
    case 181u: goto L_08A29170;
    case 182u: goto L_08A29190;
    case 183u: goto L_08A291A0;
    case 184u: goto L_08A291A8;
    case 185u: goto L_08A291B8;
    case 186u: goto L_08A291BC;
    case 187u: goto L_08A291D0;
    case 188u: goto L_08A291F0;
    case 189u: goto L_08A29200;
    case 190u: goto L_08A29208;
    case 191u: goto L_08A2921C;
    case 192u: goto L_08A29220;
    case 193u: goto L_08A29234;
    case 194u: goto L_08A29254;
    case 195u: goto L_08A29264;
    case 196u: goto L_08A2926C;
    case 197u: goto L_08A29280;
    case 198u: goto L_08A29284;
    case 199u: goto L_08A29298;
    case 200u: goto L_08A292A0;
    case 201u: goto L_08A292B8;
    case 202u: goto L_08A292BC;
    case 203u: goto L_08A292D4;
    case 204u: goto L_08A292E0;
    case 205u: goto L_08A29310;
    case 206u: goto L_08A29328;
    case 207u: goto L_08A29358;
    case 208u: goto L_08A29370;
    case 209u: goto L_08A2937C;
    case 210u: goto L_08A29388;
    case 211u: goto L_08A293A0;
    case 212u: goto L_08A293A8;
    case 213u: goto L_08A293B0;
    case 214u: goto L_08A293BC;
    case 215u: goto L_08A293C4;
    case 216u: goto L_08A293D0;
    case 217u: goto L_08A293DC;
    case 218u: goto L_08A293E8;
    case 219u: goto L_08A293EC;
    case 220u: goto L_08A293F4;
    case 221u: goto L_08A293FC;
    case 222u: goto L_08A29438;
    case 223u: goto L_08A2945C;
    case 224u: goto L_08A2946C;
    case 225u: goto L_08A29484;
    case 226u: goto L_08A29490;
    case 227u: goto L_08A29498;
    case 228u: goto L_08A294A0;
    case 229u: goto L_08A294A8;
    case 230u: goto L_08A294B0;
    case 231u: goto L_08A294B8;
    case 232u: goto L_08A294C4;
    case 233u: goto L_08A294CC;
    case 234u: goto L_08A294E4;
    case 235u: goto L_08A294F0;
    case 236u: goto L_08A294FC;
    case 237u: goto L_08A29504;
    case 238u: goto L_08A29510;
    case 239u: goto L_08A29518;
    case 240u: goto L_08A29528;
    case 241u: goto L_08A29534;
    case 242u: goto L_08A2953C;
    case 243u: goto L_08A2954C;
    case 244u: goto L_08A29558;
    case 245u: goto L_08A29560;
    case 246u: goto L_08A29568;
    case 247u: goto L_08A29574;
    case 248u: goto L_08A29580;
    case 249u: goto L_08A29588;
    case 250u: goto L_08A2958C;
    case 251u: goto L_08A295B0;
    case 252u: goto L_08A295D4;
    case 253u: goto L_08A295F4;
    case 254u: goto L_08A295F8;
    case 255u: goto L_08A29604;
    case 256u: goto L_08A29610;
    case 257u: goto L_08A29628;
    case 258u: goto L_08A2963C;
    case 259u: goto L_08A29650;
    case 260u: goto L_08A29660;
    case 261u: goto L_08A29668;
    case 262u: goto L_08A29688;
    case 263u: goto L_08A29694;
    case 264u: goto L_08A296A0;
    case 265u: goto L_08A296AC;
    case 266u: goto L_08A296B0;
    case 267u: goto L_08A296C8;
    case 268u: goto L_08A296EC;
    case 269u: goto L_08A29700;
    case 270u: goto L_08A2970C;
    case 271u: goto L_08A29718;
    case 272u: goto L_08A29770;
    case 273u: goto L_08A2977C;
    case 274u: goto L_08A29798;
    case 275u: goto L_08A297AC;
    case 276u: goto L_08A297C0;
    case 277u: goto L_08A297D0;
    case 278u: goto L_08A297DC;
    case 279u: goto L_08A297E4;
    case 280u: goto L_08A297F0;
    case 281u: goto L_08A29804;
    case 282u: goto L_08A29818;
    case 283u: goto L_08A29830;
    case 284u: goto L_08A298D4;
    case 285u: goto L_08A298DC;
    case 286u: goto L_08A298EC;
    case 287u: goto L_08A29930;
    case 288u: goto L_08A29938;
    case 289u: goto L_08A29940;
    case 290u: goto L_08A2998C;
    case 291u: goto L_08A29994;
    case 292u: goto L_08A2999C;
    case 293u: goto L_08A299E8;
    case 294u: goto L_08A299F0;
    case 295u: goto L_08A299F8;
    case 296u: goto L_08A29A00;
    case 297u: goto L_08A29A88;
    case 298u: goto L_08A29A98;
    case 299u: goto L_08A29AA8;
    case 300u: goto L_08A29ACC;
    case 301u: goto L_08A29AE0;
    case 302u: goto L_08A29B0C;
    case 303u: goto L_08A29B18;
    case 304u: goto L_08A29B20;
    case 305u: goto L_08A29B30;
    case 306u: goto L_08A29B34;
    case 307u: goto L_08A29B3C;
    case 308u: goto L_08A29B7C;
    case 309u: goto L_08A29B9C;
    case 310u: goto L_08A29BBC;
    case 311u: goto L_08A29C24;
    case 312u: goto L_08A29C2C;
    case 313u: goto L_08A29C40;
    case 314u: goto L_08A29C4C;
    case 315u: goto L_08A29C60;
    case 316u: goto L_08A29C88;
    case 317u: goto L_08A29C90;
    case 318u: goto L_08A29CA4;
    case 319u: goto L_08A29CB0;
    case 320u: goto L_08A29CC0;
    case 321u: goto L_08A29CC8;
    case 322u: goto L_08A29CD0;
    case 323u: goto L_08A29CDC;
    case 324u: goto L_08A29CF4;
    case 325u: goto L_08A29D00;
    case 326u: goto L_08A29D0C;
    case 327u: goto L_08A29D14;
    case 328u: goto L_08A29D1C;
    case 329u: goto L_08A29D38;
    case 330u: goto L_08A29D58;
    case 331u: goto L_08A29D74;
    case 332u: goto L_08A29D94;
    case 333u: goto L_08A29DD0;
    case 334u: goto L_08A29DDC;
    case 335u: goto L_08A29DEC;
    case 336u: goto L_08A29DFC;
    case 337u: goto L_08A29E0C;
    case 338u: goto L_08A29E20;
    case 339u: goto L_08A29E30;
    case 340u: goto L_08A29E38;
    case 341u: goto L_08A29E48;
    case 342u: goto L_08A29E58;
    case 343u: goto L_08A29E64;
    case 344u: goto L_08A29E74;
    case 345u: goto L_08A29EA8;
    case 346u: goto L_08A29EB0;
    case 347u: goto L_08A29EB4;
    case 348u: goto L_08A29EC8;
    case 349u: goto L_08A29ED4;
    case 350u: goto L_08A29EE0;
    case 351u: goto L_08A29EE8;
    case 352u: goto L_08A29EEC;
    case 353u: goto L_08A29EF8;
    case 354u: goto L_08A29F00;
    case 355u: goto L_08A29F10;
    case 356u: goto L_08A29F14;
    case 357u: goto L_08A29F20;
    case 358u: goto L_08A29F30;
    case 359u: goto L_08A29F34;
    case 360u: goto L_08A29F3C;
    case 361u: goto L_08A29F48;
    case 362u: goto L_08A29F58;
    case 363u: goto L_08A29F60;
    case 364u: goto L_08A29F6C;
    case 365u: goto L_08A29F74;
    case 366u: goto L_08A29F88;
    case 367u: goto L_08A29F90;
    case 368u: goto L_08A29FB8;
    case 369u: goto L_08A29FD8;
    case 370u: goto L_08A29FEC;
    case 371u: goto L_08A2A008;
    case 372u: goto L_08A2A010;
    case 373u: goto L_08A2A014;
    case 374u: goto L_08A2A03C;
    case 375u: goto L_08A2A080;
    case 376u: goto L_08A2A08C;
    case 377u: goto L_08A2A094;
    case 378u: goto L_08A2A09C;
    case 379u: goto L_08A2A0A4;
    case 380u: goto L_08A2A0B0;
    case 381u: goto L_08A2A0BC;
    case 382u: goto L_08A2A0C8;
    case 383u: goto L_08A2A0D8;
    case 384u: goto L_08A2A100;
    case 385u: goto L_08A2A110;
    case 386u: goto L_08A2A11C;
    case 387u: goto L_08A2A124;
    case 388u: goto L_08A2A134;
    case 389u: goto L_08A2A144;
    case 390u: goto L_08A2A14C;
    case 391u: goto L_08A2A154;
    case 392u: goto L_08A2A158;
    case 393u: goto L_08A2A164;
    case 394u: goto L_08A2A16C;
    case 395u: goto L_08A2A180;
    case 396u: goto L_08A2A188;
    case 397u: goto L_08A2A190;
    case 398u: goto L_08A2A1A0;
    case 399u: goto L_08A2A1AC;
    case 400u: goto L_08A2A1B4;
    case 401u: goto L_08A2A1D0;
    case 402u: goto L_08A2A1DC;
    case 403u: goto L_08A2A1E8;
    case 404u: goto L_08A2A1F4;
    case 405u: goto L_08A2A200;
    case 406u: goto L_08A2A214;
    case 407u: goto L_08A2A21C;
    case 408u: goto L_08A2A228;
    case 409u: goto L_08A2A234;
    case 410u: goto L_08A2A240;
    case 411u: goto L_08A2A248;
    case 412u: goto L_08A2A258;
    case 413u: goto L_08A2A27C;
    case 414u: goto L_08A2A29C;
    case 415u: goto L_08A2A2B0;
    case 416u: goto L_08A2A2CC;
    case 417u: goto L_08A2A2D8;
    case 418u: goto L_08A2A2DC;
    case 419u: goto L_08A2A308;
    case 420u: goto L_08A2A334;
    case 421u: goto L_08A2A340;
    case 422u: goto L_08A2A350;
    case 423u: goto L_08A2A358;
    case 424u: goto L_08A2A360;
    case 425u: goto L_08A2A388;
    case 426u: goto L_08A2A394;
    case 427u: goto L_08A2A3A4;
    case 428u: goto L_08A2A3AC;
    case 429u: goto L_08A2A3B4;
    case 430u: goto L_08A2A3B8;
    case 431u: goto L_08A2A3C0;
    case 432u: goto L_08A2A3D4;
    case 433u: goto L_08A2A3EC;
    case 434u: goto L_08A2A448;
    case 435u: goto L_08A2A450;
    case 436u: goto L_08A2A458;
    case 437u: goto L_08A2A468;
    case 438u: goto L_08A2A474;
    case 439u: goto L_08A2A478;
    case 440u: goto L_08A2A480;
    case 441u: goto L_08A2A4A8;
    case 442u: goto L_08A2A4B4;
    case 443u: goto L_08A2A4D0;
    case 444u: goto L_08A2A4E4;
    case 445u: goto L_08A2A510;
    case 446u: goto L_08A2A538;
    case 447u: goto L_08A2A540;
    case 448u: goto L_08A2A548;
    case 449u: goto L_08A2A5B8;
    case 450u: goto L_08A2A5D0;
    case 451u: goto L_08A2A5FC;
    case 452u: goto L_08A2A608;
    case 453u: goto L_08A2A654;
    case 454u: goto L_08A2A6A8;
    case 455u: goto L_08A2A6E4;
    case 456u: goto L_08A2A6EC;
    case 457u: goto L_08A2A6FC;
    case 458u: goto L_08A2A704;
    case 459u: goto L_08A2A714;
    case 460u: goto L_08A2A720;
    case 461u: goto L_08A2A72C;
    case 462u: goto L_08A2A738;
    case 463u: goto L_08A2A758;
    case 464u: goto L_08A2A76C;
    case 465u: goto L_08A2A7C4;
    case 466u: goto L_08A2A7E4;
    case 467u: goto L_08A2A7F4;
    case 468u: goto L_08A2A800;
    case 469u: goto L_08A2A808;
    case 470u: goto L_08A2A820;
    case 471u: goto L_08A2A830;
    case 472u: goto L_08A2A838;
    case 473u: goto L_08A2A840;
    case 474u: goto L_08A2A848;
    case 475u: goto L_08A2A850;
    case 476u: goto L_08A2A85C;
    case 477u: goto L_08A2A864;
    case 478u: goto L_08A2A86C;
    case 479u: goto L_08A2A874;
    case 480u: goto L_08A2A878;
    case 481u: goto L_08A2A880;
    case 482u: goto L_08A2A888;
    case 483u: goto L_08A2A8A0;
    case 484u: goto L_08A2A8A8;
    case 485u: goto L_08A2A8DC;
    case 486u: goto L_08A2A8E8;
    case 487u: goto L_08A2A8F0;
    case 488u: goto L_08A2A900;
    case 489u: goto L_08A2A908;
    case 490u: goto L_08A2A910;
    case 491u: goto L_08A2A918;
    case 492u: goto L_08A2A920;
    case 493u: goto L_08A2A928;
    case 494u: goto L_08A2A930;
    case 495u: goto L_08A2A938;
    case 496u: goto L_08A2A940;
    case 497u: goto L_08A2A954;
    case 498u: goto L_08A2A95C;
    case 499u: goto L_08A2A970;
    case 500u: goto L_08A2A978;
    case 501u: goto L_08A2A98C;
    case 502u: goto L_08A2A994;
    case 503u: goto L_08A2A9A8;
    case 504u: goto L_08A2A9B0;
    case 505u: goto L_08A2A9C4;
    case 506u: goto L_08A2A9CC;
    case 507u: goto L_08A2A9E0;
    case 508u: goto L_08A2A9E8;
    case 509u: goto L_08A2A9EC;
    case 510u: goto L_08A2AA08;
    case 511u: goto L_08A2AA2C;
    case 512u: goto L_08A2AA40;
    case 513u: goto L_08A2AA4C;
    case 514u: goto L_08A2AA54;
    case 515u: goto L_08A2AA68;
    case 516u: goto L_08A2AA70;
    case 517u: goto L_08A2AA78;
    case 518u: goto L_08A2AA80;
    case 519u: goto L_08A2AA88;
    case 520u: goto L_08A2AA90;
    case 521u: goto L_08A2AA98;
    case 522u: goto L_08A2AAA0;
    case 523u: goto L_08A2AAA8;
    case 524u: goto L_08A2AAB0;
    case 525u: goto L_08A2AAC0;
    case 526u: goto L_08A2AAC8;
    case 527u: goto L_08A2AAD8;
    case 528u: goto L_08A2AAE0;
    case 529u: goto L_08A2AAF0;
    case 530u: goto L_08A2AAF8;
    case 531u: goto L_08A2AB08;
    case 532u: goto L_08A2AB10;
    case 533u: goto L_08A2AB20;
    case 534u: goto L_08A2AB28;
    case 535u: goto L_08A2AB38;
    case 536u: goto L_08A2AB40;
    case 537u: goto L_08A2AB44;
    case 538u: goto L_08A2AB5C;
    case 539u: goto L_08A2AB80;
    case 540u: goto L_08A2AB94;
    case 541u: goto L_08A2ABA0;
    case 542u: goto L_08A2ABA8;
    case 543u: goto L_08A2ABBC;
    case 544u: goto L_08A2ABC4;
    case 545u: goto L_08A2ABCC;
    case 546u: goto L_08A2ABD4;
    case 547u: goto L_08A2ABDC;
    case 548u: goto L_08A2ABE4;
    case 549u: goto L_08A2ABEC;
    case 550u: goto L_08A2ABF4;
    case 551u: goto L_08A2ABFC;
    case 552u: goto L_08A2AC04;
    case 553u: goto L_08A2AC14;
    case 554u: goto L_08A2AC1C;
    case 555u: goto L_08A2AC2C;
    case 556u: goto L_08A2AC34;
    case 557u: goto L_08A2AC44;
    case 558u: goto L_08A2AC4C;
    case 559u: goto L_08A2AC5C;
    case 560u: goto L_08A2AC64;
    case 561u: goto L_08A2AC74;
    case 562u: goto L_08A2AC7C;
    case 563u: goto L_08A2AC8C;
    case 564u: goto L_08A2AC94;
    case 565u: goto L_08A2AC98;
    case 566u: goto L_08A2ACB0;
    case 567u: goto L_08A2ACD4;
    case 568u: goto L_08A2ACE8;
    case 569u: goto L_08A2ACF4;
    case 570u: goto L_08A2ACFC;
    case 571u: goto L_08A2AD10;
    case 572u: goto L_08A2AD18;
    case 573u: goto L_08A2AD20;
    case 574u: goto L_08A2AD28;
    case 575u: goto L_08A2AD30;
    case 576u: goto L_08A2AD38;
    case 577u: goto L_08A2AD40;
    case 578u: goto L_08A2AD48;
    case 579u: goto L_08A2AD50;
    case 580u: goto L_08A2AD58;
    case 581u: goto L_08A2AD68;
    case 582u: goto L_08A2AD70;
    case 583u: goto L_08A2AD80;
    case 584u: goto L_08A2AD88;
    case 585u: goto L_08A2AD98;
    case 586u: goto L_08A2ADA0;
    case 587u: goto L_08A2ADB0;
    case 588u: goto L_08A2ADB8;
    case 589u: goto L_08A2ADC8;
    case 590u: goto L_08A2ADD0;
    case 591u: goto L_08A2ADE0;
    case 592u: goto L_08A2ADE8;
    case 593u: goto L_08A2ADEC;
    case 594u: goto L_08A2AE04;
    case 595u: goto L_08A2AE28;
    case 596u: goto L_08A2AE3C;
    case 597u: goto L_08A2AE48;
    case 598u: goto L_08A2AE50;
    case 599u: goto L_08A2AE64;
    case 600u: goto L_08A2AE6C;
    case 601u: goto L_08A2AE74;
    case 602u: goto L_08A2AE7C;
    case 603u: goto L_08A2AE84;
    case 604u: goto L_08A2AE8C;
    case 605u: goto L_08A2AE94;
    case 606u: goto L_08A2AE9C;
    case 607u: goto L_08A2AEA4;
    case 608u: goto L_08A2AEAC;
    case 609u: goto L_08A2AEBC;
    case 610u: goto L_08A2AEC4;
    case 611u: goto L_08A2AED4;
    case 612u: goto L_08A2AEDC;
    case 613u: goto L_08A2AEEC;
    case 614u: goto L_08A2AEF4;
    case 615u: goto L_08A2AF04;
    case 616u: goto L_08A2AF0C;
    case 617u: goto L_08A2AF1C;
    case 618u: goto L_08A2AF24;
    case 619u: goto L_08A2AF34;
    case 620u: goto L_08A2AF3C;
    case 621u: goto L_08A2AF40;
    case 622u: goto L_08A2AF58;
    case 623u: goto L_08A2AF7C;
    case 624u: goto L_08A2AF90;
    case 625u: goto L_08A2AF9C;
    case 626u: goto L_08A2AFA4;
    case 627u: goto L_08A2AFB8;
    case 628u: goto L_08A2AFC0;
    case 629u: goto L_08A2AFC8;
    case 630u: goto L_08A2AFD0;
    case 631u: goto L_08A2AFD8;
    case 632u: goto L_08A2AFE0;
    case 633u: goto L_08A2AFE8;
    case 634u: goto L_08A2AFF0;
    case 635u: goto L_08A2AFF8;
    case 636u: goto L_08A2B000;
    case 637u: goto L_08A2B010;
    case 638u: goto L_08A2B018;
    case 639u: goto L_08A2B028;
    case 640u: goto L_08A2B030;
    case 641u: goto L_08A2B040;
    case 642u: goto L_08A2B048;
    case 643u: goto L_08A2B058;
    case 644u: goto L_08A2B060;
    case 645u: goto L_08A2B070;
    case 646u: goto L_08A2B078;
    case 647u: goto L_08A2B088;
    case 648u: goto L_08A2B090;
    case 649u: goto L_08A2B094;
    case 650u: goto L_08A2B0AC;
    case 651u: goto L_08A2B0C0;
    case 652u: goto L_08A2B0D0;
    case 653u: goto L_08A2B0E0;
    case 654u: goto L_08A2B0E8;
    case 655u: goto L_08A2B0F0;
    case 656u: goto L_08A2B0F8;
    case 657u: goto L_08A2B100;
    case 658u: goto L_08A2B108;
    case 659u: goto L_08A2B110;
    case 660u: goto L_08A2B118;
    case 661u: goto L_08A2B120;
    case 662u: goto L_08A2B130;
    case 663u: goto L_08A2B138;
    case 664u: goto L_08A2B148;
    case 665u: goto L_08A2B150;
    case 666u: goto L_08A2B160;
    case 667u: goto L_08A2B168;
    case 668u: goto L_08A2B178;
    case 669u: goto L_08A2B180;
    case 670u: goto L_08A2B190;
    case 671u: goto L_08A2B198;
    case 672u: goto L_08A2B1A8;
    case 673u: goto L_08A2B1B0;
    case 674u: goto L_08A2B1B8;
    case 675u: goto L_08A2B1C0;
    case 676u: goto L_08A2B1C8;
    case 677u: goto L_08A2B1D0;
    case 678u: goto L_08A2B1E0;
    case 679u: goto L_08A2B218;
    case 680u: goto L_08A2B224;
    case 681u: goto L_08A2B26C;
    case 682u: goto L_08A2B2B4;
    case 683u: goto L_08A2B2E8;
    case 684u: goto L_08A2B2FC;
    case 685u: goto L_08A2B310;
    case 686u: goto L_08A2B334;
    case 687u: goto L_08A2B33C;
    case 688u: goto L_08A2B350;
    case 689u: goto L_08A2B37C;
    case 690u: goto L_08A2B384;
    case 691u: goto L_08A2B390;
    case 692u: goto L_08A2B3A0;
    case 693u: goto L_08A2B3C4;
    case 694u: goto L_08A2B3F8;
    case 695u: goto L_08A2B460;
    case 696u: goto L_08A2B478;
    case 697u: goto L_08A2B480;
    case 698u: goto L_08A2B488;
    case 699u: goto L_08A2B48C;
    case 700u: goto L_08A2B4AC;
    case 701u: goto L_08A2B4FC;
    case 702u: goto L_08A2B500;
    case 703u: goto L_08A2B510;
    case 704u: goto L_08A2B51C;
    case 705u: goto L_08A2B524;
    case 706u: goto L_08A2B534;
    case 707u: goto L_08A2B550;
    case 708u: goto L_08A2B560;
    case 709u: goto L_08A2B56C;
    case 710u: goto L_08A2B57C;
    case 711u: goto L_08A2B588;
    case 712u: goto L_08A2B594;
    case 713u: goto L_08A2B59C;
    case 714u: goto L_08A2B5A4;
    case 715u: goto L_08A2B5C4;
    case 716u: goto L_08A2B5CC;
    case 717u: goto L_08A2B5D8;
    case 718u: goto L_08A2B5DC;
    case 719u: goto L_08A2B5FC;
    case 720u: goto L_08A2B624;
    case 721u: goto L_08A2B628;
    case 722u: goto L_08A2B638;
    case 723u: goto L_08A2B640;
    case 724u: goto L_08A2B648;
    case 725u: goto L_08A2B650;
    case 726u: goto L_08A2B658;
    case 727u: goto L_08A2B668;
    case 728u: goto L_08A2B66C;
    case 729u: goto L_08A2B674;
    case 730u: goto L_08A2B6A4;
    case 731u: goto L_08A2B6B0;
    case 732u: goto L_08A2B6C0;
    case 733u: goto L_08A2B6C8;
    case 734u: goto L_08A2B6D0;
    case 735u: goto L_08A2B6D4;
    case 736u: goto L_08A2B6E4;
    case 737u: goto L_08A2B700;
    case 738u: goto L_08A2B710;
    case 739u: goto L_08A2B714;
    case 740u: goto L_08A2B72C;
    case 741u: goto L_08A2B73C;
    case 742u: goto L_08A2B740;
    case 743u: goto L_08A2B758;
    case 744u: goto L_08A2B768;
    case 745u: goto L_08A2B76C;
    case 746u: goto L_08A2B780;
    case 747u: goto L_08A2B790;
    case 748u: goto L_08A2B794;
    case 749u: goto L_08A2B79C;
    case 750u: goto L_08A2B7A4;
    case 751u: goto L_08A2B7C0;
    case 752u: goto L_08A2B7CC;
    case 753u: goto L_08A2B7DC;
    case 754u: goto L_08A2B7E0;
    case 755u: goto L_08A2B7F0;
    case 756u: goto L_08A2B7F8;
    case 757u: goto L_08A2B7FC;
    case 758u: goto L_08A2B804;
    case 759u: goto L_08A2B808;
    case 760u: goto L_08A2B810;
    case 761u: goto L_08A2B83C;
    case 762u: goto L_08A2B85C;
    case 763u: goto L_08A2B868;
    case 764u: goto L_08A2B878;
    case 765u: goto L_08A2B884;
    case 766u: goto L_08A2B894;
    case 767u: goto L_08A2B8A0;
    case 768u: goto L_08A2B8B0;
    case 769u: goto L_08A2B8BC;
    case 770u: goto L_08A2B8CC;
    case 771u: goto L_08A2B8D8;
    case 772u: goto L_08A2B8E0;
    case 773u: goto L_08A2B8E8;
    case 774u: goto L_08A2B8F0;
    case 775u: goto L_08A2B8F8;
    case 776u: goto L_08A2B900;
    case 777u: goto L_08A2B908;
    case 778u: goto L_08A2B910;
    case 779u: goto L_08A2B918;
    case 780u: goto L_08A2B91C;
    case 781u: goto L_08A2B928;
    case 782u: goto L_08A2B954;
    case 783u: goto L_08A2B964;
    case 784u: goto L_08A2B96C;
    case 785u: goto L_08A2B97C;
    case 786u: goto L_08A2B980;
    case 787u: goto L_08A2B988;
    case 788u: goto L_08A2B9D4;
    case 789u: goto L_08A2B9D8;
    case 790u: goto L_08A2B9EC;
    case 791u: goto L_08A2B9F4;
    case 792u: goto L_08A2BA04;
    case 793u: goto L_08A2BA0C;
    case 794u: goto L_08A2BA10;
    case 795u: goto L_08A2BA30;
    case 796u: goto L_08A2BA48;
    case 797u: goto L_08A2BA74;
    case 798u: goto L_08A2BA7C;
    case 799u: goto L_08A2BA84;
    case 800u: goto L_08A2BA88;
    case 801u: goto L_08A2BA94;
    case 802u: goto L_08A2BA9C;
    case 803u: goto L_08A2BAAC;
    case 804u: goto L_08A2BAB4;
    case 805u: goto L_08A2BAC0;
    case 806u: goto L_08A2BAC8;
    case 807u: goto L_08A2BAD0;
    case 808u: goto L_08A2BAD8;
    case 809u: goto L_08A2BAE0;
    case 810u: goto L_08A2BAF0;
    case 811u: goto L_08A2BAFC;
    case 812u: goto L_08A2BB08;
    case 813u: goto L_08A2BB14;
    case 814u: goto L_08A2BB1C;
    case 815u: goto L_08A2BB2C;
    case 816u: goto L_08A2BB30;
    case 817u: goto L_08A2BB3C;
    case 818u: goto L_08A2BB48;
    case 819u: goto L_08A2BB50;
    case 820u: goto L_08A2BB6C;
    case 821u: goto L_08A2BB70;
    case 822u: goto L_08A2BB84;
    case 823u: goto L_08A2BB94;
    case 824u: goto L_08A2BBC0;
    case 825u: goto L_08A2BBC8;
    case 826u: goto L_08A2BBD0;
    case 827u: goto L_08A2BBD4;
    case 828u: goto L_08A2BBE0;
    case 829u: goto L_08A2BBE8;
    case 830u: goto L_08A2BBF8;
    case 831u: goto L_08A2BC00;
    case 832u: goto L_08A2BC08;
    case 833u: goto L_08A2BC14;
    case 834u: goto L_08A2BC18;
    case 835u: goto L_08A2BC24;
    case 836u: goto L_08A2BC3C;
    case 837u: goto L_08A2BC68;
    case 838u: goto L_08A2BC70;
    case 839u: goto L_08A2BC78;
    case 840u: goto L_08A2BC7C;
    case 841u: goto L_08A2BC88;
    case 842u: goto L_08A2BC90;
    case 843u: goto L_08A2BCA0;
    case 844u: goto L_08A2BCA8;
    case 845u: goto L_08A2BCC4;
    case 846u: goto L_08A2BCCC;
    case 847u: goto L_08A2BCD4;
    case 848u: goto L_08A2BCDC;
    case 849u: goto L_08A2BCE4;
    case 850u: goto L_08A2BCF4;
    case 851u: goto L_08A2BD00;
    case 852u: goto L_08A2BD0C;
    case 853u: goto L_08A2BD18;
    case 854u: goto L_08A2BD20;
    case 855u: goto L_08A2BD30;
    case 856u: goto L_08A2BD34;
    case 857u: goto L_08A2BD40;
    case 858u: goto L_08A2BD4C;
    case 859u: goto L_08A2BD54;
    case 860u: goto L_08A2BD70;
    case 861u: goto L_08A2BD74;
    case 862u: goto L_08A2BD88;
    case 863u: goto L_08A2BD98;
    case 864u: goto L_08A2BDC4;
    case 865u: goto L_08A2BDCC;
    case 866u: goto L_08A2BDD4;
    case 867u: goto L_08A2BDE0;
    case 868u: goto L_08A2BDE8;
    case 869u: goto L_08A2BDF8;
    case 870u: goto L_08A2BE00;
    case 871u: goto L_08A2BE08;
    case 872u: goto L_08A2BE24;
    case 873u: goto L_08A2BE30;
    case 874u: goto L_08A2BE40;
    case 875u: goto L_08A2BE6C;
    case 876u: goto L_08A2BE74;
    case 877u: goto L_08A2BE7C;
    case 878u: goto L_08A2BE88;
    case 879u: goto L_08A2BE90;
    case 880u: goto L_08A2BEA0;
    case 881u: goto L_08A2BEA8;
    case 882u: goto L_08A2BEB0;
    case 883u: goto L_08A2BEBC;
    case 884u: goto L_08A2BEC8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A28000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[21] = (ctx.gpr[9] & 255u);
    ctx.gpr[22] = (ctx.gpr[10] & 255u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11696), 0u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[24];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[12] + ctx.fpr[1];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = ctx.fpr[26] + ctx.fpr[24];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[12] + ctx.fpr[3];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[3] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
      if (branch_taken) {
          goto L_08A28198;
      }
      goto L_08A2815C;
    }
L_08A2815C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28198;
      }
      goto L_08A28170;
    }
L_08A28170:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28198;
      }
      goto L_08A28184;
    }
L_08A28184:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A281B4;
      }
      goto L_08A28198;
    }
L_08A28198:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08A281BC;
    }
    goto L_08A281AC;
L_08A281AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A281F8;
      }
      goto L_08A281B4;
    }
L_08A281B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28784;
      }
      goto L_08A281BC;
    }
L_08A281BC:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A281F8;
      }
      goto L_08A281CC;
    }
L_08A281CC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A281F8;
      }
      goto L_08A281E0;
    }
L_08A281E0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2821C;
      }
      goto L_08A281F4;
    }
L_08A281F4:
    ctx.gpr[4] = (2229u << 16u);
    goto L_08A281F8;
L_08A281F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
        goto L_08A28224;
    }
    goto L_08A28214;
L_08A28214:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A28260;
      }
      goto L_08A2821C;
    }
L_08A2821C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28784;
      }
      goto L_08A28224;
    }
L_08A28224:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A28260;
      }
      goto L_08A28234;
    }
L_08A28234:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A28260;
      }
      goto L_08A28248;
    }
L_08A28248:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28288;
      }
      goto L_08A2825C;
    }
L_08A2825C:
    ctx.gpr[4] = (2229u << 16u);
    goto L_08A28260;
L_08A28260:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08A28290;
    }
    goto L_08A28280;
L_08A28280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A282D0;
      }
      goto L_08A28288;
    }
L_08A28288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28784;
      }
      goto L_08A28290;
    }
L_08A28290:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A282D0;
      }
      goto L_08A282A0;
    }
L_08A282A0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A282D0;
      }
      goto L_08A282B4;
    }
L_08A282B4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A282D0;
      }
      goto L_08A282C8;
    }
L_08A282C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28784;
      }
      goto L_08A282D0;
    }
L_08A282D0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11700)));
    ctx.gpr[30] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20144));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A2836Cu);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 288u, 0x08A25A08u>(ctx, &aot_mem) && ctx.pc == 0x08A2836Cu) goto L_08A2836C;
    return;
L_08A2836C:
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[26] + ctx.fpr[24];
    ctx.fpr[15] = ctx.fpr[26] - ctx.fpr[24];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[2])));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[1])));
    goto L_08A283CC;
L_08A283CC:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A283CC;
      }
      goto L_08A283E0;
    }
L_08A283E0:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83)));
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[4];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08A2840C;
    }
    goto L_08A2840C;
L_08A2840C:
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_08A2841C;
    }
    goto L_08A2841C;
L_08A2841C:
    ctx.fpr[4] = ctx.fpr[30] - ctx.fpr[3];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[7];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[8];
    ctx.fpr[5] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[5]));
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[4];
    ctx.fpr[6] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[6]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[3] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[3]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[4];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08A284A8;
    }
    goto L_08A284A8;
L_08A284A8:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_08A284B8;
    }
    goto L_08A284B8;
L_08A284B8:
    ctx.fpr[3] = ctx.fpr[30] - ctx.fpr[13];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[6];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[7];
    ctx.fpr[4] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[4]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[3];
    ctx.fpr[5] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[5]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[3];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08A28544;
    }
    goto L_08A28544;
L_08A28544:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_08A28554;
    }
    goto L_08A28554;
L_08A28554:
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[14];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[5];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[6];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[3]));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[4] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[4]));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[22]));
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08A285DC;
    }
    goto L_08A285DC;
L_08A285DC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_08A285EC;
    }
    goto L_08A285EC;
L_08A285EC:
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[12];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[18];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[0];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (18176u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-11700)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-29008));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-11700), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 96 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28784;
      }
      goto L_08A2877C;
    }
L_08A2877C:
    ctx.gpr[31] = (0x08A28784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 317u, 0x08A26060u>(ctx, &aot_mem) && ctx.pc == 0x08A28784u) goto L_08A28784;
    return;
L_08A28784:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A287CC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11732)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11736)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11708)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-11728), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-11720), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-11724), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11716), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11712), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-11704), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28860:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A28894u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A06670u>(ctx, &aot_mem) && ctx.pc == 0x08A28894u) goto L_08A28894;
    return;
L_08A28894:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A288A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08A288D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 498u, 0x08A060BCu>(ctx, &aot_mem) && ctx.pc == 0x08A288D0u) goto L_08A288D0;
    return;
L_08A288D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A288E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A288E4u) goto L_08A288E4;
    return;
L_08A288E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A288F4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A28910;
      }
      goto L_08A28904;
    }
L_08A28904:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_08A28910;
L_08A28910:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2892C;
      }
      goto L_08A28920;
    }
L_08A28920:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_08A2892C;
L_08A2892C:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28978;
      }
      goto L_08A2893C;
    }
L_08A2893C:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28978;
      }
      goto L_08A2894C;
    }
L_08A2894C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28978;
      }
      goto L_08A28960;
    }
L_08A28960:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28978;
      }
      goto L_08A28970;
    }
L_08A28970:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2897C;
      }
      goto L_08A28978;
    }
L_08A28978:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2897C;
L_08A2897C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28984:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A289A0;
      }
      goto L_08A28994;
    }
L_08A28994:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_08A289A0;
L_08A289A0:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A289BC;
      }
      goto L_08A289B0;
    }
L_08A289B0:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_08A289BC;
L_08A289BC:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A289D8;
      }
      goto L_08A289CC;
    }
L_08A289CC:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    goto L_08A289D8;
L_08A289D8:
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28A48;
      }
      goto L_08A289E8;
    }
L_08A289E8:
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28A48;
      }
      goto L_08A289F8;
    }
L_08A289F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28A48;
      }
      goto L_08A28A0C;
    }
L_08A28A0C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28A48;
      }
      goto L_08A28A1C;
    }
L_08A28A1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28A48;
      }
      goto L_08A28A30;
    }
L_08A28A30:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A28A48;
      }
      goto L_08A28A40;
    }
L_08A28A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A28A4C;
      }
      goto L_08A28A48;
    }
L_08A28A48:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A28A4C;
L_08A28A4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28A54:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6204), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28A60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28A68:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11644), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 30 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11644)));
        goto L_08A28A8C;
    }
    goto L_08A28A84;
L_08A28A84:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11644), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11644)));
    goto L_08A28A8C;
L_08A28A8C:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21984));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(22104));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(22224));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(22344));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(22464));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28AE4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(21984));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28B0C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22104));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28B34:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11644)));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22224));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28B5C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11676)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11680)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11652)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-11672), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-11664), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-11668), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11660), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11656), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-11648), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28BF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[19] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-8152), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-11604), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A28C94;
      }
      goto L_08A28C28;
    }
L_08A28C28:
    ctx.gpr[16] = (0u | 6u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08A28C30;
L_08A28C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C80;
      }
      goto L_08A28C44;
    }
L_08A28C44:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A28C80;
      }
      goto L_08A28C50;
    }
L_08A28C50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A28C68u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A28C68u) goto L_08A28C68;
    return;
L_08A28C68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28C80;
      }
      goto L_08A28C70;
    }
L_08A28C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08A28C80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 351u, 0x08876DA8u>(ctx, &aot_mem) && ctx.pc == 0x08A28C80u) goto L_08A28C80;
    return;
L_08A28C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A28C30;
      }
      goto L_08A28C94;
    }
L_08A28C94:
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
L_08A28CB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A28CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08A28CCCu) goto L_08A28CCC;
    return;
L_08A28CCC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A28D28;
      }
      goto L_08A28CE4;
    }
L_08A28CE4:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11604)));
    goto L_08A28CEC;
L_08A28CEC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28D18;
      }
      goto L_08A28CF8;
    }
L_08A28CF8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A28D18;
      }
      goto L_08A28D04;
    }
L_08A28D04:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28D10;
      }
      goto L_08A28D0C;
    }
L_08A28D0C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A28D10;
L_08A28D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28D2C;
      }
      goto L_08A28D18;
    }
L_08A28D18:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A28CEC;
      }
      goto L_08A28D28;
    }
L_08A28D28:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A28D2C;
L_08A28D2C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28D3C:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A28D94;
      }
      goto L_08A28D54;
    }
L_08A28D54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    goto L_08A28D58;
L_08A28D58:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28D84;
      }
      goto L_08A28D64;
    }
L_08A28D64:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A28D84;
      }
      goto L_08A28D70;
    }
L_08A28D70:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28D7C;
      }
      goto L_08A28D78;
    }
L_08A28D78:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_08A28D7C;
L_08A28D7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28D98;
      }
      goto L_08A28D84;
    }
L_08A28D84:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A28D58;
      }
      goto L_08A28D94;
    }
L_08A28D94:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A28D98;
L_08A28D98:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28DA0:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7372), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28DAC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28DD4;
      }
      goto L_08A28DC0;
    }
L_08A28DC0:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A28DD4;
L_08A28DD4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28E08;
      }
      goto L_08A28DDC;
    }
L_08A28DDC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A28E00;
      }
      goto L_08A28DEC;
    }
L_08A28DEC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28E10;
      }
      goto L_08A28DF8;
    }
L_08A28DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28E24;
      }
      goto L_08A28E00;
    }
L_08A28E00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28E38;
      }
      goto L_08A28E08;
    }
L_08A28E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28E38;
      }
      goto L_08A28E10;
    }
L_08A28E10:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A28E24;
L_08A28E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28E00;
      }
      goto L_08A28E34;
    }
L_08A28E34:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A28E38;
L_08A28E38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28E40:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28E68;
      }
      goto L_08A28E54;
    }
L_08A28E54:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A28E68;
L_08A28E68:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28E9C;
      }
      goto L_08A28E70;
    }
L_08A28E70:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A28E94;
      }
      goto L_08A28E80;
    }
L_08A28E80:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28EA4;
      }
      goto L_08A28E8C;
    }
L_08A28E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28EB8;
      }
      goto L_08A28E94;
    }
L_08A28E94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28EC8;
      }
      goto L_08A28E9C;
    }
L_08A28E9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28EC8;
      }
      goto L_08A28EA4;
    }
L_08A28EA4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A28EB8;
L_08A28EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A28E94;
      }
      goto L_08A28EC4;
    }
L_08A28EC4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A28EC8;
L_08A28EC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28ED0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28EF8;
      }
      goto L_08A28EE4;
    }
L_08A28EE4:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A28EF8;
L_08A28EF8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28F2C;
      }
      goto L_08A28F00;
    }
L_08A28F00:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A28F24;
      }
      goto L_08A28F10;
    }
L_08A28F10:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28F34;
      }
      goto L_08A28F1C;
    }
L_08A28F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28F48;
      }
      goto L_08A28F24;
    }
L_08A28F24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28F5C;
      }
      goto L_08A28F2C;
    }
L_08A28F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28F5C;
      }
      goto L_08A28F34;
    }
L_08A28F34:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A28F48;
L_08A28F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28F24;
      }
      goto L_08A28F58;
    }
L_08A28F58:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A28F5C;
L_08A28F5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28F64:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28F8C;
      }
      goto L_08A28F78;
    }
L_08A28F78:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A28F8C;
L_08A28F8C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28FC0;
      }
      goto L_08A28F94;
    }
L_08A28F94:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A28FB8;
      }
      goto L_08A28FA4;
    }
L_08A28FA4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28FC8;
      }
      goto L_08A28FB0;
    }
L_08A28FB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A28FDC;
      }
      goto L_08A28FB8;
    }
L_08A28FB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28FF0;
      }
      goto L_08A28FC0;
    }
L_08A28FC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A28FF0;
      }
      goto L_08A28FC8;
    }
L_08A28FC8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A28FDC;
L_08A28FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A28FB8;
      }
      goto L_08A28FEC;
    }
L_08A28FEC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A28FF0;
L_08A28FF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A28FF8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11636)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11640)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11612)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-11632), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-11624), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-11628), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11620), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-11608), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2908C:
    ctx.gpr[4] = (0u | 254u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A290C8;
      }
      goto L_08A290A0;
    }
L_08A290A0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A290B4;
      }
      goto L_08A290AC;
    }
L_08A290AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A290BC;
      }
      goto L_08A290B4;
    }
L_08A290B4:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A290BC;
L_08A290BC:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A29158;
      }
      goto L_08A290C8;
    }
L_08A290C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A29118;
      }
      goto L_08A290D4;
    }
L_08A290D4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A290EC;
      }
      goto L_08A290E0;
    }
L_08A290E0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2910C;
      }
      goto L_08A290EC;
    }
L_08A290EC:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A29104;
      }
      goto L_08A290F8;
    }
L_08A290F8:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2910C;
      }
      goto L_08A29104;
    }
L_08A29104:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A2910C;
L_08A2910C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A29158;
      }
      goto L_08A29118;
    }
L_08A29118:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A2913C;
      }
      goto L_08A29120;
    }
L_08A29120:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A29154;
      }
      goto L_08A29128;
    }
L_08A29128:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29158;
      }
      goto L_08A2913C;
    }
L_08A2913C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29158;
      }
      goto L_08A29154;
    }
L_08A29154:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A29158;
L_08A29158:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29160:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A29168;
      }
      goto L_08A29168;
    }
L_08A29168:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A29190u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A293C4;
L_08A29190:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A291A8;
      }
      goto L_08A291A0;
    }
L_08A291A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A291BC;
      }
      goto L_08A291A8;
    }
L_08A291A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A291B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A29388;
L_08A291B8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A291BC;
L_08A291BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A291D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A291F0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A29358;
L_08A291F0:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29208;
      }
      goto L_08A29200;
    }
L_08A29200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A29220;
      }
      goto L_08A29208;
    }
L_08A29208:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2921Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A29328;
L_08A2921C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A29220;
L_08A29220:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A29254u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2937C;
L_08A29254:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2926C;
      }
      goto L_08A29264;
    }
L_08A29264:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A29284;
      }
      goto L_08A2926C;
    }
L_08A2926C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A29280u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A29370;
L_08A29280:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A29284;
L_08A29284:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29298:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    goto L_08A292A0;
L_08A292A0:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A292A0;
      }
      goto L_08A292B8;
    }
L_08A292B8:
    ctx.gpr[5] = (0u | 0u);
    goto L_08A292BC;
L_08A292BC:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A292BC;
      }
      goto L_08A292D4;
    }
L_08A292D4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A292E0:
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] << (ctx.gpr[5] & 31u));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29310:
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[2] = (ctx.gpr[4] >> (ctx.gpr[5] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 3u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29328:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] << (ctx.gpr[5] & 31u));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] ^ ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29358:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[2] = (ctx.gpr[4] >> (ctx.gpr[5] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 15u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29370:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2937C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29388:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A293BC;
      }
      goto L_08A293A0;
    }
L_08A293A0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A293BC;
      }
      goto L_08A293A8;
    }
L_08A293A8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A293BC;
      }
      goto L_08A293B0;
    }
L_08A293B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A293BC;
L_08A293BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A293C4:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A293D0:
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(251) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A293E8;
      }
      goto L_08A293DC;
    }
L_08A293DC:
    ctx.gpr[5] = (0u | 250u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A293EC;
      }
      goto L_08A293E8;
    }
L_08A293E8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A293EC;
L_08A293EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A293F4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A293FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A29438u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08A2908C;
L_08A29438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11592));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[19];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08A2946C;
      }
      goto L_08A2945C;
    }
L_08A2945C:
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08A2946C;
L_08A2946C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11600)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29588;
      }
      goto L_08A29484;
    }
L_08A29484:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29580;
      }
      goto L_08A29490;
    }
L_08A29490:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A29534;
      }
      goto L_08A29498;
    }
L_08A29498:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A29504;
      }
      goto L_08A294A0;
    }
L_08A294A0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A294CC;
      }
      goto L_08A294A8;
    }
L_08A294A8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A29504;
      }
      goto L_08A294B0;
    }
L_08A294B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A29518;
      }
      goto L_08A294B8;
    }
L_08A294B8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A294C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A29234;
L_08A294C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29580;
      }
      goto L_08A294CC;
    }
L_08A294CC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11596)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A294F0;
      }
      goto L_08A294E4;
    }
L_08A294E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A294F0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A29160;
L_08A294F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A294FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A29170;
L_08A294FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29580;
      }
      goto L_08A29504;
    }
L_08A29504:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A29510u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A29170;
L_08A29510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29580;
      }
      goto L_08A29518;
    }
L_08A29518:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A29528u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08A292E0;
L_08A29528:
    ctx.gpr[4] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11596)));
      if (branch_taken) {
          goto L_08A2953C;
      }
      goto L_08A29534;
    }
L_08A29534:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11596)));
    goto L_08A2953C;
L_08A2953C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29574;
      }
      goto L_08A2954C;
    }
L_08A2954C:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 12u);
      if (branch_taken) {
          goto L_08A29568;
      }
      goto L_08A29558;
    }
L_08A29558:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A29568;
      }
      goto L_08A29560;
    }
L_08A29560:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A29574;
      }
      goto L_08A29568;
    }
L_08A29568:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A29574u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A29160;
L_08A29574:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A29580u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A291D0;
L_08A29580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A2958C;
      }
      goto L_08A29588;
    }
L_08A29588:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2958C;
L_08A2958C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A295B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08A295D4;
L_08A295D4:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[6] << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A295D4;
      }
      goto L_08A295F4;
    }
L_08A295F4:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A295F8;
L_08A295F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A29604u);
    ctx.gpr[5] = (0u | 16u);
    goto L_08A291D0;
L_08A29604:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A29610u);
    ctx.gpr[5] = (0u | 17u);
    goto L_08A291D0;
L_08A29610:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A295F8;
      }
      goto L_08A29628;
    }
L_08A29628:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2963Cu);
    ctx.gpr[5] = (0u | 250u);
    goto L_08A293D0;
L_08A2963C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29650:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
        goto L_08A29660;
    }
    goto L_08A29660;
L_08A29660:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29668:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11560)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A296B0;
      }
      goto L_08A29688;
    }
L_08A29688:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A29694u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A29694u) goto L_08A29694;
    return;
L_08A29694:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A296AC;
      }
      goto L_08A296A0;
    }
L_08A296A0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A296AC;
L_08A296AC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-11560), ctx.gpr[16]);
    goto L_08A296B0;
L_08A296B0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-11560)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A296C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2977C;
      }
      goto L_08A296EC;
    }
L_08A296EC:
    ctx.gpr[17] = (2275u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1824));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A29700u);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08A29700u) goto L_08A29700;
    return;
L_08A29700:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A2970Cu);
    ctx.gpr[4] = (0u | 84u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A2970Cu) goto L_08A2970C;
    return;
L_08A2970C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29770;
      }
      goto L_08A29718;
    }
L_08A29718:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A29770;
L_08A29770:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-11308), ctx.gpr[16]);
    ctx.gpr[31] = (0x08A2977Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08A2977Cu) goto L_08A2977C;
    return;
L_08A2977C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11308)));
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
L_08A29798:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A297ACu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A29818;
L_08A297AC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A297C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A297E4;
      }
      goto L_08A297D0;
    }
L_08A297D0:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A297E4;
      }
      goto L_08A297DC;
    }
L_08A297DC:
    ctx.gpr[31] = (0x08A297E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08A297E4u) goto L_08A297E4;
    return;
L_08A297E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A297F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A29804u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A29818;
L_08A29804:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29818:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    goto L_08A29830;
L_08A29830:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A29830;
      }
      goto L_08A298D4;
    }
L_08A298D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A298DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29938;
      }
      goto L_08A298EC;
    }
L_08A298EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29940;
      }
      goto L_08A29930;
    }
L_08A29930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2999C;
      }
      goto L_08A29938;
    }
L_08A29938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A299F8;
      }
      goto L_08A29940;
    }
L_08A29940:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A29994;
      }
      goto L_08A2998C;
    }
L_08A2998C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A299F8;
      }
      goto L_08A29994;
    }
L_08A29994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_08A299F8;
      }
      goto L_08A2999C;
    }
L_08A2999C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A299F0;
      }
      goto L_08A299E8;
    }
L_08A299E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A299F8;
      }
      goto L_08A299F0;
    }
L_08A299F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08A299F8;
      }
      goto L_08A299F8;
    }
L_08A299F8:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29A00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15748));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A29A88u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2B1E0;
L_08A29A88:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A29A98u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A2B224;
L_08A29A98:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A29AA8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08A2B26C;
L_08A29AA8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29AE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29B30;
      }
      goto L_08A29B0C;
    }
L_08A29B0C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29B20;
      }
      goto L_08A29B18;
    }
L_08A29B18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29B34;
      }
      goto L_08A29B20;
    }
L_08A29B20:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A29B0C;
      }
      goto L_08A29B30;
    }
L_08A29B30:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A29B34;
L_08A29B34:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29B3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29B7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29B9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A29C4C;
      }
      goto L_08A29BBC;
    }
L_08A29BBC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29C4C;
      }
      goto L_08A29C24;
    }
L_08A29C24:
    ctx.gpr[31] = (0x08A29C2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A29D1C;
L_08A29C2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.gpr[31] = (0x08A29C40u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A29D1C;
L_08A29C40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A29C4C;
L_08A29C4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29C60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A29CDC;
      }
      goto L_08A29C88;
    }
L_08A29C88:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A29CA4;
      }
      goto L_08A29C90;
    }
L_08A29C90:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(96));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29CB0;
      }
      goto L_08A29CA4;
    }
L_08A29CA4:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
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
    goto L_08A29CB0;
L_08A29CB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A29CC0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x08A29CC0u) goto L_08A29CC0;
    return;
L_08A29CC0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A29CDC;
      }
      goto L_08A29CC8;
    }
L_08A29CC8:
    ctx.gpr[31] = (0x08A29CD0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A29D58;
L_08A29CD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A29CDC;
L_08A29CDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29CF4:
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A29D0C;
      }
      goto L_08A29D00;
    }
L_08A29D00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A29D14;
      }
      goto L_08A29D0C;
    }
L_08A29D0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A29D14;
L_08A29D14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29D1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A29D38u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A29D38u) goto L_08A29D38;
    return;
L_08A29D38:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[22] + ctx.fpr[0];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29D58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A29D74u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A29D74u) goto L_08A29D74;
    return;
L_08A29D74:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[22] + ctx.fpr[0];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A29D94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29E30;
      }
      goto L_08A29DD0;
    }
L_08A29DD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A29E20;
      }
      goto L_08A29DDC;
    }
L_08A29DDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29E0C;
      }
      goto L_08A29DEC;
    }
L_08A29DEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A29E0C;
      }
      goto L_08A29DFC;
    }
L_08A29DFC:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08A29E0Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A29E0Cu) goto L_08A29E0C;
    return;
L_08A29E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2A014;
      }
      goto L_08A29E20;
    }
L_08A29E20:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A29DD0;
      }
      goto L_08A29E30;
    }
L_08A29E30:
    ctx.gpr[31] = (0x08A29E38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A29B3C;
L_08A29E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A010;
      }
      goto L_08A29E48;
    }
L_08A29E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A29E74;
    }
    goto L_08A29E58;
L_08A29E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
        goto L_08A29E64;
    }
    goto L_08A29E64;
L_08A29E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A29F88;
      }
      goto L_08A29E74;
    }
L_08A29E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A29EB0;
      }
      goto L_08A29EA8;
    }
L_08A29EA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
      if (branch_taken) {
          goto L_08A29EB4;
      }
      goto L_08A29EB0;
    }
L_08A29EB0:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_08A29EB4;
L_08A29EB4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A29EEC;
      }
      goto L_08A29EC8;
    }
L_08A29EC8:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[31] = (0x08A29ED4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08A29ED4u) goto L_08A29ED4;
    return;
L_08A29ED4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08A29EEC;
      }
      goto L_08A29EE0;
    }
L_08A29EE0:
    ctx.gpr[31] = (0x08A29EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08A29EE8u) goto L_08A29EE8;
    return;
L_08A29EE8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08A29EEC;
L_08A29EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A29F00;
      }
      goto L_08A29EF8;
    }
L_08A29EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A29F14;
      }
      goto L_08A29F00;
    }
L_08A29F00:
    ctx.gpr[22] = (ctx.gpr[18] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A29F10u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A29F10u) goto L_08A29F10;
    return;
L_08A29F10:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[22]);
    goto L_08A29F14;
L_08A29F14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
        goto L_08A29F34;
    }
    goto L_08A29F20;
L_08A29F20:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A29F20;
      }
      goto L_08A29F30;
    }
L_08A29F30:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A29F34;
L_08A29F34:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A29F60;
      }
      goto L_08A29F3C;
    }
L_08A29F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A29F60;
      }
      goto L_08A29F48;
    }
L_08A29F48:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A29F58u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A29F58u) goto L_08A29F58;
    return;
L_08A29F58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08A29F60;
      }
      goto L_08A29F60;
    }
L_08A29F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A29F74;
      }
      goto L_08A29F6C;
    }
L_08A29F6C:
    ctx.gpr[31] = (0x08A29F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A29F74u) goto L_08A29F74;
    return;
L_08A29F74:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08A29F88;
L_08A29F88:
    ctx.gpr[31] = (0x08A29F90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A29B7C;
L_08A29F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A29FB8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A29FB8u) goto L_08A29FB8;
    return;
L_08A29FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A29FD8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A29FD8u) goto L_08A29FD8;
    return;
L_08A29FD8:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A29FECu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08A29CF4;
L_08A29FEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A2A008u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 144u, 0x089A4A88u>(ctx, &aot_mem) && ctx.pc == 0x08A2A008u) goto L_08A2A008;
    return;
L_08A2A008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2A014;
      }
      goto L_08A2A010;
    }
L_08A2A010:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2A014;
L_08A2A014:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A03C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A0A4;
      }
      goto L_08A2A080;
    }
L_08A2A080:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A2A094;
      }
      goto L_08A2A08C;
    }
L_08A2A08C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2A09C;
      }
      goto L_08A2A094;
    }
L_08A2A094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A2DC;
      }
      goto L_08A2A09C;
    }
L_08A2A09C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A080;
      }
      goto L_08A2A0A4;
    }
L_08A2A0A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2A0D8;
      }
      goto L_08A2A0B0;
    }
L_08A2A0B0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
        goto L_08A2A0C8;
    }
    goto L_08A2A0BC;
L_08A2A0BC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    goto L_08A2A0C8;
L_08A2A0C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A2A1D0;
      }
      goto L_08A2A0D8;
    }
L_08A2A0D8:
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A2A110;
      }
      goto L_08A2A100;
    }
L_08A2A100:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A2A11C;
      }
      goto L_08A2A110;
    }
L_08A2A110:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[19]);
    goto L_08A2A11C;
L_08A2A11C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A158;
      }
      goto L_08A2A124;
    }
L_08A2A124:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2A134u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08A2A134u) goto L_08A2A134;
    return;
L_08A2A134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08A2A154;
      }
      goto L_08A2A144;
    }
L_08A2A144:
    ctx.gpr[31] = (0x08A2A14Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A14Cu) goto L_08A2A14C;
    return;
L_08A2A14C:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08A2A154;
L_08A2A154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08A2A158;
L_08A2A158:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2A16C;
      }
      goto L_08A2A164;
    }
L_08A2A164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08A2A188;
      }
      goto L_08A2A16C;
    }
L_08A2A16C:
    ctx.gpr[21] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A2A180u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2A180u) goto L_08A2A180;
    return;
L_08A2A180:
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08A2A188;
L_08A2A188:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2A1A0;
      }
      goto L_08A2A190;
    }
L_08A2A190:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2A190;
      }
      goto L_08A2A1A0;
    }
L_08A2A1A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2A1B4;
      }
      goto L_08A2A1AC;
    }
L_08A2A1AC:
    ctx.gpr[31] = (0x08A2A1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A1B4u) goto L_08A2A1B4;
    return;
L_08A2A1B4:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A2A1D0;
L_08A2A1D0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A234;
      }
      goto L_08A2A1DC;
    }
L_08A2A1DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A2A228;
      }
      goto L_08A2A1E8;
    }
L_08A2A1E8:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A21C;
      }
      goto L_08A2A1F4;
    }
L_08A2A1F4:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2A21C;
      }
      goto L_08A2A200;
    }
L_08A2A200:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08A2A214u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2A214u) goto L_08A2A214;
    return;
L_08A2A214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A2A21C;
L_08A2A21C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A2A234;
      }
      goto L_08A2A228;
    }
L_08A2A228:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A1DC;
      }
      goto L_08A2A234;
    }
L_08A2A234:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A2A2D8;
      }
      goto L_08A2A240;
    }
L_08A2A240:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_08A2A248;
L_08A2A248:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A2A258u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A29B7C;
L_08A2A258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2A27Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2A27Cu) goto L_08A2A27C;
    return;
L_08A2A27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2A29Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2A29Cu) goto L_08A2A29C;
    return;
L_08A2A29C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A2A2B0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    goto L_08A29CF4;
L_08A2A2B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A2A2CCu);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 144u, 0x089A4A88u>(ctx, &aot_mem) && ctx.pc == 0x08A2A2CCu) goto L_08A2A2CC;
    return;
L_08A2A2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2A248;
      }
      goto L_08A2A2D8;
    }
L_08A2A2D8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A2A2DC;
L_08A2A2DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A308:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_08A2A360;
    }
    goto L_08A2A334;
L_08A2A334:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A2A358;
      }
      goto L_08A2A340;
    }
L_08A2A340:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2A334;
      }
      goto L_08A2A350;
    }
L_08A2A350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A2A360;
      }
      goto L_08A2A358;
    }
L_08A2A358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2A3B8;
      }
      goto L_08A2A360;
    }
L_08A2A360:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A3B4;
      }
      goto L_08A2A388;
    }
L_08A2A388:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A2A3AC;
      }
      goto L_08A2A394;
    }
L_08A2A394:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2A388;
      }
      goto L_08A2A3A4;
    }
L_08A2A3A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A3B4;
      }
      goto L_08A2A3AC;
    }
L_08A2A3AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2A3B8;
      }
      goto L_08A2A3B4;
    }
L_08A2A3B4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2A3B8;
L_08A2A3B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A3C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2A3D4u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A2A3D4u) goto L_08A2A3D4;
    return;
L_08A2A3D4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11300)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11304)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A2A3ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A3ECu) goto L_08A2A3EC;
    return;
L_08A2A3EC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11292)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11296)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1916)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A448:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A450:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A458:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1916)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A474;
      }
      goto L_08A2A468;
    }
L_08A2A468:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2A478;
      }
      goto L_08A2A474;
    }
L_08A2A474:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(0u));
    goto L_08A2A478;
L_08A2A478:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2A4D0;
      }
      goto L_08A2A4A8;
    }
L_08A2A4A8:
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A2A4B4u);
    // nop
    goto L_08A2A548;
L_08A2A4B4:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A2A4D0;
L_08A2A4D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A4E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (16585u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2A510u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A2A510u) goto L_08A2A510;
    return;
L_08A2A510:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A538:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A540:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A548:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    ctx.gpr[19] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(22584));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22584)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    ctx.gpr[6] = (ctx.gpr[6] >> 28u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2A76C;
      }
      goto L_08A2A5B8;
    }
L_08A2A5B8:
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11392)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_08A2A76C;
      }
      goto L_08A2A5D0;
    }
L_08A2A5D0:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_08A2A5FC;
L_08A2A5FC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A2A608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A2A608u) goto L_08A2A608;
    return;
L_08A2A608:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2A654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A2A654u) goto L_08A2A654;
    return;
L_08A2A654:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22584)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[5] = (ctx.gpr[5] >> 28u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A6FC;
      }
      goto L_08A2A6A8;
    }
L_08A2A6A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22584)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2A6EC;
      }
      goto L_08A2A6E4;
    }
L_08A2A6E4:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08A2A6EC;
L_08A2A6EC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A6A8;
      }
      goto L_08A2A6FC;
    }
L_08A2A6FC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A5FC;
      }
      goto L_08A2A704;
    }
L_08A2A704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2A738;
      }
      goto L_08A2A714;
    }
L_08A2A714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08A2A72C;
    }
    goto L_08A2A720;
L_08A2A720:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_08A2A72C;
L_08A2A72C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2A758;
      }
      goto L_08A2A738;
    }
L_08A2A738:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A2A758u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 466u, 0x08B061A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A758u) goto L_08A2A758;
    return;
L_08A2A758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11392)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A5FC;
      }
      goto L_08A2A76C;
    }
L_08A2A76C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22584)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A7C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2A888;
      }
      goto L_08A2A7E4;
    }
L_08A2A7E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15316));
    ctx.gpr[31] = (0x08A2A7F4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    goto L_08A296C8;
L_08A2A7F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A2A800u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A2B674;
L_08A2A800:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A2A878;
      }
      goto L_08A2A808;
    }
L_08A2A808:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15748));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2A848;
      }
      goto L_08A2A820;
    }
L_08A2A820:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2A848;
      }
      goto L_08A2A830;
    }
L_08A2A830:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A848;
      }
      goto L_08A2A838;
    }
L_08A2A838:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A848;
      }
      goto L_08A2A840;
    }
L_08A2A840:
    ctx.gpr[31] = (0x08A2A848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A848u) goto L_08A2A848;
    return;
L_08A2A848:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A2A878;
      }
      goto L_08A2A850;
    }
L_08A2A850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2A874;
      }
      goto L_08A2A85C;
    }
L_08A2A85C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A2A878;
    }
    goto L_08A2A864;
L_08A2A864:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A2A878;
    }
    goto L_08A2A86C;
L_08A2A86C:
    ctx.gpr[31] = (0x08A2A874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2A874u) goto L_08A2A874;
    return;
L_08A2A874:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A2A878;
L_08A2A878:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A888;
      }
      goto L_08A2A880;
    }
L_08A2A880:
    ctx.gpr[31] = (0x08A2A888u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08A2A888u) goto L_08A2A888;
    return;
L_08A2A888:
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
L_08A2A8A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2A8A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[9] = (0u | 3u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A2A938;
      }
      goto L_08A2A8DC;
    }
L_08A2A8DC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A2A8E8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A2B83C;
L_08A2A8E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A930;
      }
      goto L_08A2A8F0;
    }
L_08A2A8F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A9E8;
      }
      goto L_08A2A900;
    }
L_08A2A900:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2A95C;
      }
      goto L_08A2A908;
    }
L_08A2A908:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2A940;
      }
      goto L_08A2A910;
    }
L_08A2A910:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2A978;
      }
      goto L_08A2A918;
    }
L_08A2A918:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2A994;
      }
      goto L_08A2A920;
    }
L_08A2A920:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2A9B0;
      }
      goto L_08A2A928;
    }
L_08A2A928:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2A9CC;
      }
      goto L_08A2A930;
    }
L_08A2A930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A9EC;
      }
      goto L_08A2A938;
    }
L_08A2A938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2A9EC;
      }
      goto L_08A2A940;
    }
L_08A2A940:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2A954u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 194u, 0x08A2CC64u>(ctx, &aot_mem) && ctx.pc == 0x08A2A954u) goto L_08A2A954;
    return;
L_08A2A954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A9EC;
      }
      goto L_08A2A95C;
    }
L_08A2A95C:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2A970u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 194u, 0x08A2CC64u>(ctx, &aot_mem) && ctx.pc == 0x08A2A970u) goto L_08A2A970;
    return;
L_08A2A970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A9EC;
      }
      goto L_08A2A978;
    }
L_08A2A978:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2A98Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 194u, 0x08A2CC64u>(ctx, &aot_mem) && ctx.pc == 0x08A2A98Cu) goto L_08A2A98C;
    return;
L_08A2A98C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A9EC;
      }
      goto L_08A2A994;
    }
L_08A2A994:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2A9A8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 194u, 0x08A2CC64u>(ctx, &aot_mem) && ctx.pc == 0x08A2A9A8u) goto L_08A2A9A8;
    return;
L_08A2A9A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A9EC;
      }
      goto L_08A2A9B0;
    }
L_08A2A9B0:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2A9C4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 194u, 0x08A2CC64u>(ctx, &aot_mem) && ctx.pc == 0x08A2A9C4u) goto L_08A2A9C4;
    return;
L_08A2A9C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A9EC;
      }
      goto L_08A2A9CC;
    }
L_08A2A9CC:
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2A9E0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 194u, 0x08A2CC64u>(ctx, &aot_mem) && ctx.pc == 0x08A2A9E0u) goto L_08A2A9E0;
    return;
L_08A2A9E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2A9EC;
      }
      goto L_08A2A9E8;
    }
L_08A2A9E8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2A9EC;
L_08A2A9EC:
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
L_08A2AA08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2AAA8;
      }
      goto L_08A2AA2C;
    }
L_08A2AA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2AAA0;
      }
      goto L_08A2AA40;
    }
L_08A2AA40:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2AA4Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2B83C;
L_08A2AA4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AA98;
      }
      goto L_08A2AA54;
    }
L_08A2AA54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB40;
      }
      goto L_08A2AA68;
    }
L_08A2AA68:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2AAC8;
      }
      goto L_08A2AA70;
    }
L_08A2AA70:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2AAB0;
      }
      goto L_08A2AA78;
    }
L_08A2AA78:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2AAE0;
      }
      goto L_08A2AA80;
    }
L_08A2AA80:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2AAF8;
      }
      goto L_08A2AA88;
    }
L_08A2AA88:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2AB10;
      }
      goto L_08A2AA90;
    }
L_08A2AA90:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2AB28;
      }
      goto L_08A2AA98;
    }
L_08A2AA98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AB44;
      }
      goto L_08A2AAA0;
    }
L_08A2AAA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AB44;
      }
      goto L_08A2AAA8;
    }
L_08A2AAA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AB44;
      }
      goto L_08A2AAB0;
    }
L_08A2AAB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2AAC0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A2BA30;
L_08A2AAC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB44;
      }
      goto L_08A2AAC8;
    }
L_08A2AAC8:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AAD8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BA30;
L_08A2AAD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB44;
      }
      goto L_08A2AAE0;
    }
L_08A2AAE0:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AAF0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BA30;
L_08A2AAF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB44;
      }
      goto L_08A2AAF8;
    }
L_08A2AAF8:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AB08u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BA30;
L_08A2AB08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB44;
      }
      goto L_08A2AB10;
    }
L_08A2AB10:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AB20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BA30;
L_08A2AB20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB44;
      }
      goto L_08A2AB28;
    }
L_08A2AB28:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AB38u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BA30;
L_08A2AB38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AB44;
      }
      goto L_08A2AB40;
    }
L_08A2AB40:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2AB44;
L_08A2AB44:
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
L_08A2AB5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2ABFC;
      }
      goto L_08A2AB80;
    }
L_08A2AB80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2ABF4;
      }
      goto L_08A2AB94;
    }
L_08A2AB94:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2ABA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2B83C;
L_08A2ABA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ABEC;
      }
      goto L_08A2ABA8;
    }
L_08A2ABA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AC94;
      }
      goto L_08A2ABBC;
    }
L_08A2ABBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2AC1C;
      }
      goto L_08A2ABC4;
    }
L_08A2ABC4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2AC04;
      }
      goto L_08A2ABCC;
    }
L_08A2ABCC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2AC34;
      }
      goto L_08A2ABD4;
    }
L_08A2ABD4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2AC4C;
      }
      goto L_08A2ABDC;
    }
L_08A2ABDC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2AC64;
      }
      goto L_08A2ABE4;
    }
L_08A2ABE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2AC7C;
      }
      goto L_08A2ABEC;
    }
L_08A2ABEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AC98;
      }
      goto L_08A2ABF4;
    }
L_08A2ABF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AC98;
      }
      goto L_08A2ABFC;
    }
L_08A2ABFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AC98;
      }
      goto L_08A2AC04;
    }
L_08A2AC04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2AC14u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A2BB84;
L_08A2AC14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AC98;
      }
      goto L_08A2AC1C;
    }
L_08A2AC1C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AC2Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BB84;
L_08A2AC2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AC98;
      }
      goto L_08A2AC34;
    }
L_08A2AC34:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AC44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BB84;
L_08A2AC44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AC98;
      }
      goto L_08A2AC4C;
    }
L_08A2AC4C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AC5Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BB84;
L_08A2AC5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AC98;
      }
      goto L_08A2AC64;
    }
L_08A2AC64:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AC74u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BB84;
L_08A2AC74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AC98;
      }
      goto L_08A2AC7C;
    }
L_08A2AC7C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AC8Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BB84;
L_08A2AC8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AC98;
      }
      goto L_08A2AC94;
    }
L_08A2AC94:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2AC98;
L_08A2AC98:
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
L_08A2ACB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2AD50;
      }
      goto L_08A2ACD4;
    }
L_08A2ACD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2AD48;
      }
      goto L_08A2ACE8;
    }
L_08A2ACE8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2ACF4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2B83C;
L_08A2ACF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AD40;
      }
      goto L_08A2ACFC;
    }
L_08A2ACFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ADE8;
      }
      goto L_08A2AD10;
    }
L_08A2AD10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2AD70;
      }
      goto L_08A2AD18;
    }
L_08A2AD18:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2AD58;
      }
      goto L_08A2AD20;
    }
L_08A2AD20:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2AD88;
      }
      goto L_08A2AD28;
    }
L_08A2AD28:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2ADA0;
      }
      goto L_08A2AD30;
    }
L_08A2AD30:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2ADB8;
      }
      goto L_08A2AD38;
    }
L_08A2AD38:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2ADD0;
      }
      goto L_08A2AD40;
    }
L_08A2AD40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2ADEC;
      }
      goto L_08A2AD48;
    }
L_08A2AD48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2ADEC;
      }
      goto L_08A2AD50;
    }
L_08A2AD50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2ADEC;
      }
      goto L_08A2AD58;
    }
L_08A2AD58:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2AD68u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A2BC24;
L_08A2AD68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ADEC;
      }
      goto L_08A2AD70;
    }
L_08A2AD70:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AD80u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BC24;
L_08A2AD80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ADEC;
      }
      goto L_08A2AD88;
    }
L_08A2AD88:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AD98u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BC24;
L_08A2AD98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ADEC;
      }
      goto L_08A2ADA0;
    }
L_08A2ADA0:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2ADB0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BC24;
L_08A2ADB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ADEC;
      }
      goto L_08A2ADB8;
    }
L_08A2ADB8:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2ADC8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BC24;
L_08A2ADC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ADEC;
      }
      goto L_08A2ADD0;
    }
L_08A2ADD0:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2ADE0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BC24;
L_08A2ADE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2ADEC;
      }
      goto L_08A2ADE8;
    }
L_08A2ADE8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2ADEC;
L_08A2ADEC:
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
L_08A2AE04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2AEA4;
      }
      goto L_08A2AE28;
    }
L_08A2AE28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2AE9C;
      }
      goto L_08A2AE3C;
    }
L_08A2AE3C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2AE48u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2B83C;
L_08A2AE48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AE94;
      }
      goto L_08A2AE50;
    }
L_08A2AE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF3C;
      }
      goto L_08A2AE64;
    }
L_08A2AE64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2AEC4;
      }
      goto L_08A2AE6C;
    }
L_08A2AE6C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2AEAC;
      }
      goto L_08A2AE74;
    }
L_08A2AE74:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2AEDC;
      }
      goto L_08A2AE7C;
    }
L_08A2AE7C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2AEF4;
      }
      goto L_08A2AE84;
    }
L_08A2AE84:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2AF0C;
      }
      goto L_08A2AE8C;
    }
L_08A2AE8C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2AF24;
      }
      goto L_08A2AE94;
    }
L_08A2AE94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AF40;
      }
      goto L_08A2AE9C;
    }
L_08A2AE9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AF40;
      }
      goto L_08A2AEA4;
    }
L_08A2AEA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2AF40;
      }
      goto L_08A2AEAC;
    }
L_08A2AEAC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2AEBCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A2BD88;
L_08A2AEBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF40;
      }
      goto L_08A2AEC4;
    }
L_08A2AEC4:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AED4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BD88;
L_08A2AED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF40;
      }
      goto L_08A2AEDC;
    }
L_08A2AEDC:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AEECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BD88;
L_08A2AEEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF40;
      }
      goto L_08A2AEF4;
    }
L_08A2AEF4:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AF04u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BD88;
L_08A2AF04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF40;
      }
      goto L_08A2AF0C;
    }
L_08A2AF0C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AF1Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BD88;
L_08A2AF1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF40;
      }
      goto L_08A2AF24;
    }
L_08A2AF24:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2AF34u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BD88;
L_08A2AF34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AF40;
      }
      goto L_08A2AF3C;
    }
L_08A2AF3C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2AF40;
L_08A2AF40:
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
L_08A2AF58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2AFF8;
      }
      goto L_08A2AF7C;
    }
L_08A2AF7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2AFF0;
      }
      goto L_08A2AF90;
    }
L_08A2AF90:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2AF9Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2B83C;
L_08A2AF9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2AFE8;
      }
      goto L_08A2AFA4;
    }
L_08A2AFA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B090;
      }
      goto L_08A2AFB8;
    }
L_08A2AFB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2B018;
      }
      goto L_08A2AFC0;
    }
L_08A2AFC0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2B000;
      }
      goto L_08A2AFC8;
    }
L_08A2AFC8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2B030;
      }
      goto L_08A2AFD0;
    }
L_08A2AFD0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2B048;
      }
      goto L_08A2AFD8;
    }
L_08A2AFD8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2B060;
      }
      goto L_08A2AFE0;
    }
L_08A2AFE0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2B078;
      }
      goto L_08A2AFE8;
    }
L_08A2AFE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B094;
      }
      goto L_08A2AFF0;
    }
L_08A2AFF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B094;
      }
      goto L_08A2AFF8;
    }
L_08A2AFF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B094;
      }
      goto L_08A2B000;
    }
L_08A2B000:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2B010u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A2BE30;
L_08A2B010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B094;
      }
      goto L_08A2B018;
    }
L_08A2B018:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2B028u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BE30;
L_08A2B028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B094;
      }
      goto L_08A2B030;
    }
L_08A2B030:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2B040u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BE30;
L_08A2B040:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B094;
      }
      goto L_08A2B048;
    }
L_08A2B048:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2B058u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BE30;
L_08A2B058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B094;
      }
      goto L_08A2B060;
    }
L_08A2B060:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2B070u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BE30;
L_08A2B070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B094;
      }
      goto L_08A2B078;
    }
L_08A2B078:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2B088u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A2BE30;
L_08A2B088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B094;
      }
      goto L_08A2B090;
    }
L_08A2B090:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2B094;
L_08A2B094:
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
L_08A2B0AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B118;
      }
      goto L_08A2B0C0;
    }
L_08A2B0C0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2B110;
      }
      goto L_08A2B0D0;
    }
L_08A2B0D0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B1B0;
      }
      goto L_08A2B0E0;
    }
L_08A2B0E0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2B120;
      }
      goto L_08A2B0E8;
    }
L_08A2B0E8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2B138;
      }
      goto L_08A2B0F0;
    }
L_08A2B0F0:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2B150;
      }
      goto L_08A2B0F8;
    }
L_08A2B0F8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2B168;
      }
      goto L_08A2B100;
    }
L_08A2B100:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2B180;
      }
      goto L_08A2B108;
    }
L_08A2B108:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2B198;
      }
      goto L_08A2B110;
    }
L_08A2B110:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B1D0;
      }
      goto L_08A2B118;
    }
L_08A2B118:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B1D0;
      }
      goto L_08A2B120;
    }
L_08A2B120:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A2B130u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A2B928;
L_08A2B130:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2B1B0;
      }
      goto L_08A2B138;
    }
L_08A2B138:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2B148u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08A2B928;
L_08A2B148:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2B1B0;
      }
      goto L_08A2B150;
    }
L_08A2B150:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A2B160u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A2B928;
L_08A2B160:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2B1B0;
      }
      goto L_08A2B168;
    }
L_08A2B168:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A2B178u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A2B928;
L_08A2B178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2B1B0;
      }
      goto L_08A2B180;
    }
L_08A2B180:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A2B190u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A2B928;
L_08A2B190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2B1B0;
      }
      goto L_08A2B198;
    }
L_08A2B198:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A2B1A8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A2B928;
L_08A2B1A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2B1B0;
      }
      goto L_08A2B1B0;
    }
L_08A2B1B0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B1C0;
      }
      goto L_08A2B1B8;
    }
L_08A2B1B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B1D0;
      }
      goto L_08A2B1C0;
    }
L_08A2B1C0:
    ctx.gpr[31] = (0x08A2B1C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A29B3C;
L_08A2B1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08A2B1D0;
L_08A2B1D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B1E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A2B218u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B218u) goto L_08A2B218;
    return;
L_08A2B218:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B224:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B26C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 3u;
      constexpr std::uint32_t vfpu_input_length = 3u;
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_target[i] = i < vfpu_input_length ? vfpu_target_raw[i] : 0.0f;
      if (vfpu_side - 1u >= vfpu_input_length) vfpu_target[vfpu_side - 1u] = 1.0f;
      for (std::uint32_t row = 0; row + 1u < vfpu_side; ++row) {
        float sum = 0.0f;
        for (std::uint32_t column = 0; column < vfpu_side; ++column) sum += vfpu_matrix[row * 4u + column] * vfpu_target[column];
        vfpu_result[row] = sum;
      }
      float vfpu_final_row[4]{vfpu_matrix[(vfpu_side - 1u) * 4u + 0u], vfpu_matrix[(vfpu_side - 1u) * 4u + 1u],
                              vfpu_matrix[(vfpu_side - 1u) * 4u + 2u], vfpu_matrix[(vfpu_side - 1u) * 4u + 3u]};
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_final_row);
      ctx.apply_vfpu_source_prefix_ct<4u, 1u>(vfpu_target);
      for (std::uint32_t column = 0; column < 4u; ++column) vfpu_result[vfpu_side - 1u] += vfpu_final_row[column] * vfpu_target[column];
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      const std::uint32_t vfpu_last_lane = vfpu_side - 1u;
      ctx.vfpu_ctrl[2] = ((vfpu_destination_prefix & (1u << 8u)) << vfpu_last_lane) |
                         ((vfpu_destination_prefix & 3u) << (vfpu_last_lane * 2u));
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 0u, vfpu_side); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B2B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 4u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A2B33C;
      }
      goto L_08A2B2E8;
    }
L_08A2B2E8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2B2FCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A2B26C;
L_08A2B2FC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2B310u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08A2B1E0;
L_08A2B310:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B3A0;
      }
      goto L_08A2B334;
    }
L_08A2B334:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A2B384;
      }
      goto L_08A2B33C;
    }
L_08A2B33C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2B350u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A2B1E0;
L_08A2B350:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A2B37Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B37Cu) goto L_08A2B37C;
    return;
L_08A2B37C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B48C;
      }
      goto L_08A2B384;
    }
L_08A2B384:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B3A0;
      }
      goto L_08A2B390;
    }
L_08A2B390:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B3C4;
      }
      goto L_08A2B3A0;
    }
L_08A2B3A0:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_08A2B3C4;
L_08A2B3C4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2B488;
      }
      goto L_08A2B3F8;
    }
L_08A2B3F8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11320)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2B488;
      }
      goto L_08A2B460;
    }
L_08A2B460:
    ctx.gpr[7] = (16384u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2B478u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 106u, 0x088C093Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2B478u) goto L_08A2B478;
    return;
L_08A2B478:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B488;
      }
      goto L_08A2B480;
    }
L_08A2B480:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B48C;
      }
      goto L_08A2B488;
    }
L_08A2B488:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2B48C;
L_08A2B48C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B4AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (0u | 272u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B534;
      }
      goto L_08A2B4FC;
    }
L_08A2B4FC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_08A2B500;
L_08A2B500:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A2B524;
      }
      goto L_08A2B510;
    }
L_08A2B510:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A2B51Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A298DC;
L_08A2B51C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B5DC;
      }
      goto L_08A2B524;
    }
L_08A2B524:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A2B500;
      }
      goto L_08A2B534;
    }
L_08A2B534:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2275u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1824));
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2B550u);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2B550u) goto L_08A2B550;
    return;
L_08A2B550:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2B560u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A2BEC8;
L_08A2B560:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2B56Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A298DC;
L_08A2B56C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A2B5A4;
      }
      goto L_08A2B57C;
    }
L_08A2B57C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A2B59C;
      }
      goto L_08A2B588;
    }
L_08A2B588:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A2B594u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A29798;
L_08A2B594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
    goto L_08A2B59C;
L_08A2B59C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2B5C4;
      }
      goto L_08A2B5A4;
    }
L_08A2B5A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A2B5C4u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 497u, 0x08B06388u>(ctx, &aot_mem) && ctx.pc == 0x08A2B5C4u) goto L_08A2B5C4;
    return;
L_08A2B5C4:
    ctx.gpr[31] = (0x08A2B5CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08A2B5CCu) goto L_08A2B5CC;
    return;
L_08A2B5CC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2B5D8u);
    ctx.gpr[5] = (0u | 2u);
    goto L_08A297C0;
L_08A2B5D8:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08A2B5DC;
L_08A2B5DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B5FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (0u | 272u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2B668;
      }
      goto L_08A2B624;
    }
L_08A2B624:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    goto L_08A2B628;
L_08A2B628:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A2B650;
      }
      goto L_08A2B638;
    }
L_08A2B638:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08A2B650;
      }
      goto L_08A2B640;
    }
L_08A2B640:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_08A2B650;
      }
      goto L_08A2B648;
    }
L_08A2B648:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2B658;
      }
      goto L_08A2B650;
    }
L_08A2B650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A2B66C;
      }
      goto L_08A2B658;
    }
L_08A2B658:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A2B628;
      }
      goto L_08A2B668;
    }
L_08A2B668:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2B66C;
L_08A2B66C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B674:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2B6A4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A2B5FC;
L_08A2B6A4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B6C8;
      }
      goto L_08A2B6B0;
    }
L_08A2B6B0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08A2B6D0;
      }
      goto L_08A2B6C0;
    }
L_08A2B6C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B810;
      }
      goto L_08A2B6C8;
    }
L_08A2B6C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B810;
      }
      goto L_08A2B6D0;
    }
L_08A2B6D0:
    ctx.gpr[22] = (0u | 272u);
    goto L_08A2B6D4;
L_08A2B6D4:
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A2B804;
      }
      goto L_08A2B6E4;
    }
L_08A2B6E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A2B700u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A2B928;
L_08A2B700:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A2B714;
      }
      goto L_08A2B710;
    }
L_08A2B710:
    ctx.gpr[7] = (0u | 1u);
    goto L_08A2B714;
L_08A2B714:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A2B72Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A2B928;
L_08A2B72C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A2B740;
      }
      goto L_08A2B73C;
    }
L_08A2B73C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A2B740;
L_08A2B740:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08A2B758u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A2B928;
L_08A2B758:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A2B76C;
      }
      goto L_08A2B768;
    }
L_08A2B768:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A2B76C;
L_08A2B76C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x08A2B780u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A2B928;
L_08A2B780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A2B794;
      }
      goto L_08A2B790;
    }
L_08A2B790:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A2B794;
L_08A2B794:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B7F8;
      }
      goto L_08A2B79C;
    }
L_08A2B79C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2B7E0;
      }
      goto L_08A2B7A4;
    }
L_08A2B7A4:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[20]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[23] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2B7E0;
      }
      goto L_08A2B7C0;
    }
L_08A2B7C0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A2B7CCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A297F0;
L_08A2B7CC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(272));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) > 0;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08A2B7C0;
      }
      goto L_08A2B7DC;
    }
L_08A2B7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_08A2B7E0;
L_08A2B7E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2B7F0u);
    ctx.gpr[5] = (0u | 2u);
    goto L_08A297C0;
L_08A2B7F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08A2B7FC;
      }
      goto L_08A2B7F8;
    }
L_08A2B7F8:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_08A2B7FC;
L_08A2B7FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B808;
      }
      goto L_08A2B804;
    }
L_08A2B804:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_08A2B808;
L_08A2B808:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2B6D4;
      }
      goto L_08A2B810;
    }
L_08A2B810:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B83C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2B85Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A2B988;
L_08A2B85C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A2B910;
      }
      goto L_08A2B868;
    }
L_08A2B868:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2B878u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    goto L_08A2B988;
L_08A2B878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A2B908;
      }
      goto L_08A2B884;
    }
L_08A2B884:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2B894u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    goto L_08A2B988;
L_08A2B894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A2B900;
      }
      goto L_08A2B8A0;
    }
L_08A2B8A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2B8B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    goto L_08A2B988;
L_08A2B8B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A2B8F8;
      }
      goto L_08A2B8BC;
    }
L_08A2B8BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2B8CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    goto L_08A2B988;
L_08A2B8CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A2B8F0;
      }
      goto L_08A2B8D8;
    }
L_08A2B8D8:
    ctx.gpr[31] = (0x08A2B8E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(60));
    goto L_08A2B988;
L_08A2B8E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B918;
      }
      goto L_08A2B8E8;
    }
L_08A2B8E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B91C;
      }
      goto L_08A2B8F0;
    }
L_08A2B8F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B91C;
      }
      goto L_08A2B8F8;
    }
L_08A2B8F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B91C;
      }
      goto L_08A2B900;
    }
L_08A2B900:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B91C;
      }
      goto L_08A2B908;
    }
L_08A2B908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B91C;
      }
      goto L_08A2B910;
    }
L_08A2B910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2B91C;
      }
      goto L_08A2B918;
    }
L_08A2B918:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2B91C;
L_08A2B91C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B928:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B97C;
      }
      goto L_08A2B954;
    }
L_08A2B954:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2B96C;
      }
      goto L_08A2B964;
    }
L_08A2B964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2B980;
      }
      goto L_08A2B96C;
    }
L_08A2B96C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2B954;
      }
      goto L_08A2B97C;
    }
L_08A2B97C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2B980;
L_08A2B980:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2B988:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2BA04;
      }
      goto L_08A2B9D4;
    }
L_08A2B9D4:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A2B9D8;
L_08A2B9D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A2B9ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A2A308;
L_08A2B9EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BA0C;
      }
      goto L_08A2B9F4;
    }
L_08A2B9F4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2B9D8;
      }
      goto L_08A2BA04;
    }
L_08A2BA04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BA10;
      }
      goto L_08A2BA0C;
    }
L_08A2BA0C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A2BA10;
L_08A2BA10:
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
L_08A2BA30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2BA7C;
      }
      goto L_08A2BA48;
    }
L_08A2BA48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BA84;
      }
      goto L_08A2BA74;
    }
L_08A2BA74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BAAC;
      }
      goto L_08A2BA7C;
    }
L_08A2BA7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BB70;
      }
      goto L_08A2BA84;
    }
L_08A2BA84:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A2BA88;
L_08A2BA88:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BA9C;
      }
      goto L_08A2BA94;
    }
L_08A2BA94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A2BAAC;
      }
      goto L_08A2BA9C;
    }
L_08A2BA9C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2BA88;
      }
      goto L_08A2BAAC;
    }
L_08A2BAAC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BAD8;
      }
      goto L_08A2BAB4;
    }
L_08A2BAB4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2BAC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 2u, 0x08A2C170u>(ctx, &aot_mem) && ctx.pc == 0x08A2BAC0u) goto L_08A2BAC0;
    return;
L_08A2BAC0:
    ctx.gpr[31] = (0x08A2BAC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A29B3C;
L_08A2BAC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BAE0;
      }
      goto L_08A2BAD0;
    }
L_08A2BAD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BB6C;
      }
      goto L_08A2BAD8;
    }
L_08A2BAD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BB70;
      }
      goto L_08A2BAE0;
    }
L_08A2BAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BB48;
      }
      goto L_08A2BAF0;
    }
L_08A2BAF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A2BB3C;
      }
      goto L_08A2BAFC;
    }
L_08A2BAFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BB30;
      }
      goto L_08A2BB08;
    }
L_08A2BB08:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2BB1C;
      }
      goto L_08A2BB14;
    }
L_08A2BB14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A2BB30;
      }
      goto L_08A2BB1C;
    }
L_08A2BB1C:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08A2BB2Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2BB2Cu) goto L_08A2BB2C;
    return;
L_08A2BB2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A2BB30;
L_08A2BB30:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2BB48;
      }
      goto L_08A2BB3C;
    }
L_08A2BB3C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BAF0;
      }
      goto L_08A2BB48;
    }
L_08A2BB48:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BB6C;
      }
      goto L_08A2BB50;
    }
L_08A2BB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2BB6Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2BB6Cu) goto L_08A2BB6C;
    return;
L_08A2BB6C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A2BB70;
L_08A2BB70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BB84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BBC8;
      }
      goto L_08A2BB94;
    }
L_08A2BB94:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BBD0;
      }
      goto L_08A2BBC0;
    }
L_08A2BBC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BBF8;
      }
      goto L_08A2BBC8;
    }
L_08A2BBC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BC18;
      }
      goto L_08A2BBD0;
    }
L_08A2BBD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A2BBD4;
L_08A2BBD4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BBE8;
      }
      goto L_08A2BBE0;
    }
L_08A2BBE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A2BBF8;
      }
      goto L_08A2BBE8;
    }
L_08A2BBE8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2BBD4;
      }
      goto L_08A2BBF8;
    }
L_08A2BBF8:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BC08;
      }
      goto L_08A2BC00;
    }
L_08A2BC00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BC18;
      }
      goto L_08A2BC08;
    }
L_08A2BC08:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2BC14u);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    goto L_08A2A03C;
L_08A2BC14:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A2BC18;
L_08A2BC18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BC24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A2BC70;
      }
      goto L_08A2BC3C;
    }
L_08A2BC3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BC78;
      }
      goto L_08A2BC68;
    }
L_08A2BC68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BCA0;
      }
      goto L_08A2BC70;
    }
L_08A2BC70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BD74;
      }
      goto L_08A2BC78;
    }
L_08A2BC78:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A2BC7C;
L_08A2BC7C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BC90;
      }
      goto L_08A2BC88;
    }
L_08A2BC88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A2BCA0;
      }
      goto L_08A2BC90;
    }
L_08A2BC90:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2BC7C;
      }
      goto L_08A2BCA0;
    }
L_08A2BCA0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BCDC;
      }
      goto L_08A2BCA8;
    }
L_08A2BCA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2BCC4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2BCC4u) goto L_08A2BCC4;
    return;
L_08A2BCC4:
    ctx.gpr[31] = (0x08A2BCCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A29B3C;
L_08A2BCCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BCE4;
      }
      goto L_08A2BCD4;
    }
L_08A2BCD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BD70;
      }
      goto L_08A2BCDC;
    }
L_08A2BCDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BD74;
      }
      goto L_08A2BCE4;
    }
L_08A2BCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD4C;
      }
      goto L_08A2BCF4;
    }
L_08A2BCF4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A2BD40;
      }
      goto L_08A2BD00;
    }
L_08A2BD00:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BD34;
      }
      goto L_08A2BD0C;
    }
L_08A2BD0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2BD20;
      }
      goto L_08A2BD18;
    }
L_08A2BD18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A2BD34;
      }
      goto L_08A2BD20;
    }
L_08A2BD20:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[31] = (0x08A2BD30u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2BD30u) goto L_08A2BD30;
    return;
L_08A2BD30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A2BD34;
L_08A2BD34:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2BD4C;
      }
      goto L_08A2BD40;
    }
L_08A2BD40:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BCF4;
      }
      goto L_08A2BD4C;
    }
L_08A2BD4C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BD70;
      }
      goto L_08A2BD54;
    }
L_08A2BD54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2BD70u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2BD70u) goto L_08A2BD70;
    return;
L_08A2BD70:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A2BD74;
L_08A2BD74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BD88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BDCC;
      }
      goto L_08A2BD98;
    }
L_08A2BD98:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BDD4;
      }
      goto L_08A2BDC4;
    }
L_08A2BDC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BDF8;
      }
      goto L_08A2BDCC;
    }
L_08A2BDCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BE24;
      }
      goto L_08A2BDD4;
    }
L_08A2BDD4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BDE8;
      }
      goto L_08A2BDE0;
    }
L_08A2BDE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A2BDF8;
      }
      goto L_08A2BDE8;
    }
L_08A2BDE8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2BDD4;
      }
      goto L_08A2BDF8;
    }
L_08A2BDF8:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BE08;
      }
      goto L_08A2BE00;
    }
L_08A2BE00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BE24;
      }
      goto L_08A2BE08;
    }
L_08A2BE08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2BE24u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2BE24u) goto L_08A2BE24;
    return;
L_08A2BE24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BE30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BE74;
      }
      goto L_08A2BE40;
    }
L_08A2BE40:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[9]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BE7C;
      }
      goto L_08A2BE6C;
    }
L_08A2BE6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BEA0;
      }
      goto L_08A2BE74;
    }
L_08A2BE74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BEBC;
      }
      goto L_08A2BE7C;
    }
L_08A2BE7C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2BE90;
      }
      goto L_08A2BE88;
    }
L_08A2BE88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08A2BEA0;
      }
      goto L_08A2BE90;
    }
L_08A2BE90:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2BE7C;
      }
      goto L_08A2BEA0;
    }
L_08A2BEA0:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2BEB0;
      }
      goto L_08A2BEA8;
    }
L_08A2BEA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2BEBC;
      }
      goto L_08A2BEB0;
    }
L_08A2BEB0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2BEBCu);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    goto L_08A29AE0;
L_08A2BEBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2BEC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    ctx.gpr[8] = (49024u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[7] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.pc = 0x08A2C000u; return;
}

void recomp_unit_0137(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0137_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_137(Runtime &runtime) {
    runtime.register_generated_unit(137u, 0x08A28000u, 16384u, &recomp_unit_0137, &recomp_unit_0137_entry);
    runtime.register_function(0x08A28000u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2815Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28170u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28184u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28198u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A281F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28214u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2821Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28224u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28234u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28248u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2825Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28260u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28280u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28288u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28290u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A282D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2836Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A283E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2840Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2841Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A284B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28544u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28554u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A285DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A285ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2877Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28784u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A287CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28860u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28894u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A288F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28904u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28910u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28920u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2892Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2893Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2894Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28960u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28970u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28978u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2897Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28984u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28994u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A289F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28A8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28AE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28B5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28BF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28C94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CCCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28CF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28D98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28DF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28E9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28ED0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28EF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28F94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A28FF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2908Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A290F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29104u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2910Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29118u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29120u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29128u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2913Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29154u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29158u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29160u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29168u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29170u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29190u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A291F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29200u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29208u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2921Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29220u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29234u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29254u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29264u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2926Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29280u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29284u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29298u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A292E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29310u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29328u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29358u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29370u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2937Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29388u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A293FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29438u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2945Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2946Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29484u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29490u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29498u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A294FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29504u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29510u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29518u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29528u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29534u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2953Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2954Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29558u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29560u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29568u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29574u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29580u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29588u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2958Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A295F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29604u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29610u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29628u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2963Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29650u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29660u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29668u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29688u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29694u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A296ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29700u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2970Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29718u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29770u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2977Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29798u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A297F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29804u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29818u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29830u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A298ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29930u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29938u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29940u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2998Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29994u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2999Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A299E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A299F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A299F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29A98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29AA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29ACCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29AE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29B9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29BBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29C90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29CF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29D94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29DFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29E74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29ED4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29EF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F60u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F6Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29F90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A29FECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A008u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A010u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A014u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A03Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A080u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A08Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A094u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A09Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A0D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A100u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A110u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A11Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A124u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A134u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A144u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A14Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A154u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A158u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A164u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A16Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A180u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A188u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A190u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A1F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A200u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A214u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A21Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A228u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A234u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A240u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A248u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A258u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A27Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A29Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A2DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A308u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A334u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A340u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A350u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A358u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A360u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A388u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A394u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A3ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A448u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A450u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A458u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A468u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A474u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A478u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A480u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A4E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A510u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A538u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A540u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A548u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A5B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A5D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A5FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A608u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A654u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A6FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A704u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A714u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A720u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A72Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A738u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A758u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A76Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A7F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A800u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A808u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A820u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A830u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A838u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A840u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A848u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A850u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A85Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A864u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A86Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A874u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A878u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A880u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A888u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A8F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A900u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A908u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A910u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A918u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A920u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A928u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A930u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A938u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A940u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A954u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A95Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A970u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A978u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A98Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A994u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2A9ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AA98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AAF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AB94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABCCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ABFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC44u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC5Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AC98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ACFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD38u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD80u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AD98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2ADECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE28u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE64u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE6Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE8Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AE9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AED4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AEF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF58u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AF9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFA4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFB8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2AFF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B000u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B010u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B018u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B028u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B030u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B040u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B048u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B058u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B060u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B070u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B078u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B088u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B090u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B094u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B0F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B100u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B108u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B110u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B118u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B120u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B130u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B138u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B148u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B150u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B160u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B168u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B178u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B180u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B190u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B198u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1A8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1B8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B1E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B218u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B224u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B26Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2B4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B2FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B310u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B334u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B33Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B350u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B37Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B384u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B390u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B3F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B460u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B478u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B480u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B488u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B48Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4ACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B4FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B500u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B510u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B51Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B524u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B534u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B550u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B560u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B56Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B57Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B588u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B594u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B59Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5C4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B5FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B624u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B628u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B638u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B640u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B648u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B650u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B658u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B668u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B66Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B674u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6C8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6D0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B6E4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B700u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B710u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B714u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B72Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B73Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B740u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B758u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B768u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B76Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B780u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B790u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B794u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B79Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7A4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7C0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7DCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B7FCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B804u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B808u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B810u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B83Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B85Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B868u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B878u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B884u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B894u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8A0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8B0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8BCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8CCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8E0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8E8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8F0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B8F8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B900u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B908u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B910u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B918u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B91Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B928u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B954u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B964u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B96Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B97Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B980u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B988u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9D4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9D8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9ECu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2B9F4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA04u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA10u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BA9Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAACu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAB4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAD8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAF0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BAFCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB1Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB2Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB48u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB50u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB6Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB84u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BB94u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBC0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBC8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBD0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BBF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC14u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC3Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC68u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC78u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BC90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCCCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCDCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCE4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BCF4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD0Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD18u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD20u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD34u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD4Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD54u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD70u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BD98u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDC4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDCCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDD4u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDE0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDE8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BDF8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE00u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE08u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE24u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE30u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE40u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE6Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE74u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE7Cu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE88u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BE90u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BEA0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BEA8u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BEB0u, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BEBCu, &recomp_unit_0137, "recomp_unit_0137");
    runtime.register_function(0x08A2BEC8u, &recomp_unit_0137, "recomp_unit_0137");
}
} // namespace psprecomp
