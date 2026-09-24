#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0094[4092] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 5, 0, 0, 0, 6, 0, 0, 7, 0, 8, 9, 0, 0, 0, 0, 0, 10, 0, 11,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 22, 0, 23, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 34, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 40, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50,
    0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73,
    0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 83,
    84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 97, 0, 0,
    0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 103, 0, 104, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123,
    0, 0, 0, 124, 0, 0, 0, 125, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 0, 0, 131, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 140, 0, 141, 0, 142, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 148,
    0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157,
    0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0,
    197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 211, 212, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 218, 0, 219, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    0, 0, 229, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0,
    236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0,
    0, 0, 0, 248, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 256,
    0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264,
    0, 265, 0, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274,
    0, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 281, 0, 0, 0, 0,
    0, 0, 282, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0,
    290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0,
    298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 304,
    0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0,
    0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0,
    0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0,
    0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0,
    339, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 344, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 347, 0, 0, 0, 0, 348, 0, 349, 0, 350, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353,
    0, 354, 0, 355, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0,
    0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0,
    371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0,
    0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 385, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393,
    0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 398, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 401,
    0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0,
    0, 0, 409, 0, 0, 0, 0, 410, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 416, 0, 417, 0, 0, 418, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0,
    424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 427, 428, 0, 429, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 432, 0, 0, 0,
    433, 434, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439,
    440, 0, 441, 0, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 445, 446, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0,
    0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 457, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 462, 0, 0, 0,
    0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0,
    469, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 474, 0, 475, 0, 476, 0, 0, 0, 0, 0,
    0, 477, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0,
    0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 487, 0, 488, 0, 489, 0, 0, 0, 0, 0, 0, 490,
    0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 493, 0, 494, 0, 495, 0, 0, 0, 0, 0, 496, 0, 497, 0, 498, 0, 499, 0, 0, 0, 0, 0,
    500, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 506, 0, 507,
    0, 0, 0, 508, 509, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0,
    0, 0, 514, 515, 0, 516, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 523, 0, 0,
    0, 0, 524, 525, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0,
    0, 530, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 534, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 537,
    0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 540, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 545,
    546, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 552,
    0, 553, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0,
    0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0,
    0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0,
    0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 570, 571, 0, 0, 0, 0, 0,
    0, 572, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0,
    0, 579, 0, 0, 580, 0, 0, 581, 0, 582, 583, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0,
    0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 591, 592, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 595, 0,
    596, 0, 0, 0, 0, 0, 597, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0,
    0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 0, 0,
    609, 0, 0, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0, 0, 613, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0,
    0, 617, 0, 0, 0, 618, 0, 619, 620, 0, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 624, 625, 0, 626, 0, 0, 0, 0,
    0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 632, 0, 633, 0, 0, 0, 634, 0,
    635, 636, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 642,
    643, 0, 644, 0, 0, 0, 645, 0, 646, 647, 0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 655, 0, 0, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0,
    658, 0, 0, 659, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 664, 665, 0, 0, 0, 666, 0, 0, 0,
    0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 669, 670, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0,
    0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 676, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0,
    0, 0, 0, 0, 680, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 684, 0, 685, 0, 686, 0, 0, 0, 0, 0, 687, 688, 689, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 690, 0, 691, 692, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 700, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 705,
    0, 0, 0, 706, 0, 0, 0, 707, 708, 0, 709, 0, 710, 0, 0, 0, 0, 0, 711, 712, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    714, 0, 715, 0, 716, 0, 0, 717, 0, 0, 718, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 722, 0, 723, 0, 0, 0, 724, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 731, 0, 0, 0, 732,
    0, 0, 0, 733, 0, 734, 0, 735, 0, 736, 0, 737, 738, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0,
    0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 748, 0,
    0, 0, 749, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 0, 753, 0, 0, 0, 0, 0, 754, 0, 755, 0,
    0, 0, 756, 0, 0, 0, 757, 758, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 763, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 765, 0, 766, 0, 0, 767, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 771,
    0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 775, 0, 776, 0, 0, 777, 0, 778, 0, 0, 0, 0, 779, 0, 780,
};
void recomp_unit_0094_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0897C004u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0094[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0897C004;
    case 2u: goto L_0897C020;
    case 3u: goto L_0897C02C;
    case 4u: goto L_0897C034;
    case 5u: goto L_0897C038;
    case 6u: goto L_0897C048;
    case 7u: goto L_0897C054;
    case 8u: goto L_0897C05C;
    case 9u: goto L_0897C060;
    case 10u: goto L_0897C078;
    case 11u: goto L_0897C080;
    case 12u: goto L_0897C0B4;
    case 13u: goto L_0897C0D0;
    case 14u: goto L_0897C22C;
    case 15u: goto L_0897C240;
    case 16u: goto L_0897C248;
    case 17u: goto L_0897C250;
    case 18u: goto L_0897C258;
    case 19u: goto L_0897C26C;
    case 20u: goto L_0897C2BC;
    case 21u: goto L_0897C30C;
    case 22u: goto L_0897C314;
    case 23u: goto L_0897C31C;
    case 24u: goto L_0897C32C;
    case 25u: goto L_0897C334;
    case 26u: goto L_0897C33C;
    case 27u: goto L_0897C34C;
    case 28u: goto L_0897C354;
    case 29u: goto L_0897C3A8;
    case 30u: goto L_0897C3B8;
    case 31u: goto L_0897C3C0;
    case 32u: goto L_0897C3D0;
    case 33u: goto L_0897C418;
    case 34u: goto L_0897C424;
    case 35u: goto L_0897C428;
    case 36u: goto L_0897C438;
    case 37u: goto L_0897C448;
    case 38u: goto L_0897C450;
    case 39u: goto L_0897C460;
    case 40u: goto L_0897C46C;
    case 41u: goto L_0897C470;
    case 42u: goto L_0897C49C;
    case 43u: goto L_0897C4C8;
    case 44u: goto L_0897C4F4;
    case 45u: goto L_0897C548;
    case 46u: goto L_0897C550;
    case 47u: goto L_0897C55C;
    case 48u: goto L_0897C568;
    case 49u: goto L_0897C574;
    case 50u: goto L_0897C580;
    case 51u: goto L_0897C58C;
    case 52u: goto L_0897C598;
    case 53u: goto L_0897C5A4;
    case 54u: goto L_0897C5BC;
    case 55u: goto L_0897C620;
    case 56u: goto L_0897C62C;
    case 57u: goto L_0897C650;
    case 58u: goto L_0897C674;
    case 59u: goto L_0897C698;
    case 60u: goto L_0897C6BC;
    case 61u: goto L_0897C764;
    case 62u: goto L_0897C7C8;
    case 63u: goto L_0897C7D0;
    case 64u: goto L_0897C7DC;
    case 65u: goto L_0897C7E4;
    case 66u: goto L_0897C7F8;
    case 67u: goto L_0897C814;
    case 68u: goto L_0897C85C;
    case 69u: goto L_0897C8F0;
    case 70u: goto L_0897C91C;
    case 71u: goto L_0897C94C;
    case 72u: goto L_0897C968;
    case 73u: goto L_0897C980;
    case 74u: goto L_0897C988;
    case 75u: goto L_0897C990;
    case 76u: goto L_0897C9A8;
    case 77u: goto L_0897C9B0;
    case 78u: goto L_0897C9B8;
    case 79u: goto L_0897C9D4;
    case 80u: goto L_0897C9E4;
    case 81u: goto L_0897C9F0;
    case 82u: goto L_0897C9F8;
    case 83u: goto L_0897CA00;
    case 84u: goto L_0897CA04;
    case 85u: goto L_0897CA1C;
    case 86u: goto L_0897CA24;
    case 87u: goto L_0897CA3C;
    case 88u: goto L_0897CA6C;
    case 89u: goto L_0897CA74;
    case 90u: goto L_0897CA8C;
    case 91u: goto L_0897CAA8;
    case 92u: goto L_0897CAB0;
    case 93u: goto L_0897CAC8;
    case 94u: goto L_0897CAE4;
    case 95u: goto L_0897CAEC;
    case 96u: goto L_0897CAF4;
    case 97u: goto L_0897CAF8;
    case 98u: goto L_0897CB1C;
    case 99u: goto L_0897CB24;
    case 100u: goto L_0897CB40;
    case 101u: goto L_0897CB54;
    case 102u: goto L_0897CB70;
    case 103u: goto L_0897CB74;
    case 104u: goto L_0897CB7C;
    case 105u: goto L_0897CB94;
    case 106u: goto L_0897CBC4;
    case 107u: goto L_0897CBCC;
    case 108u: goto L_0897CBD4;
    case 109u: goto L_0897CBD8;
    case 110u: goto L_0897CBFC;
    case 111u: goto L_0897CC04;
    case 112u: goto L_0897CC20;
    case 113u: goto L_0897CC34;
    case 114u: goto L_0897CC50;
    case 115u: goto L_0897CC54;
    case 116u: goto L_0897CC5C;
    case 117u: goto L_0897CC74;
    case 118u: goto L_0897CC90;
    case 119u: goto L_0897CC98;
    case 120u: goto L_0897CCB4;
    case 121u: goto L_0897CCC4;
    case 122u: goto L_0897CCE8;
    case 123u: goto L_0897CD00;
    case 124u: goto L_0897CD10;
    case 125u: goto L_0897CD20;
    case 126u: goto L_0897CD24;
    case 127u: goto L_0897CD48;
    case 128u: goto L_0897CD50;
    case 129u: goto L_0897CD6C;
    case 130u: goto L_0897CD80;
    case 131u: goto L_0897CD9C;
    case 132u: goto L_0897CDA0;
    case 133u: goto L_0897CDA8;
    case 134u: goto L_0897CDC8;
    case 135u: goto L_0897CDFC;
    case 136u: goto L_0897CE28;
    case 137u: goto L_0897CE30;
    case 138u: goto L_0897CE48;
    case 139u: goto L_0897CE7C;
    case 140u: goto L_0897CE90;
    case 141u: goto L_0897CE98;
    case 142u: goto L_0897CEA0;
    case 143u: goto L_0897CEA4;
    case 144u: goto L_0897CEC4;
    case 145u: goto L_0897CECC;
    case 146u: goto L_0897CEE8;
    case 147u: goto L_0897CEF8;
    case 148u: goto L_0897CF00;
    case 149u: goto L_0897CF18;
    case 150u: goto L_0897CF34;
    case 151u: goto L_0897CF3C;
    case 152u: goto L_0897CF54;
    case 153u: goto L_0897CF64;
    case 154u: goto L_0897CFC4;
    case 155u: goto L_0897CFE8;
    case 156u: goto L_0897CFF8;
    case 157u: goto L_0897D000;
    case 158u: goto L_0897D014;
    case 159u: goto L_0897D030;
    case 160u: goto L_0897D038;
    case 161u: goto L_0897D054;
    case 162u: goto L_0897D064;
    case 163u: goto L_0897D06C;
    case 164u: goto L_0897D080;
    case 165u: goto L_0897D09C;
    case 166u: goto L_0897D0A4;
    case 167u: goto L_0897D0C0;
    case 168u: goto L_0897D0C8;
    case 169u: goto L_0897D0D4;
    case 170u: goto L_0897D0EC;
    case 171u: goto L_0897D0F4;
    case 172u: goto L_0897D0FC;
    case 173u: goto L_0897D104;
    case 174u: goto L_0897D124;
    case 175u: goto L_0897D12C;
    case 176u: goto L_0897D134;
    case 177u: goto L_0897D13C;
    case 178u: goto L_0897D144;
    case 179u: goto L_0897D164;
    case 180u: goto L_0897D16C;
    case 181u: goto L_0897D1A8;
    case 182u: goto L_0897D1B0;
    case 183u: goto L_0897D1C8;
    case 184u: goto L_0897D1E0;
    case 185u: goto L_0897D1FC;
    case 186u: goto L_0897D214;
    case 187u: goto L_0897D220;
    case 188u: goto L_0897D228;
    case 189u: goto L_0897D230;
    case 190u: goto L_0897D238;
    case 191u: goto L_0897D240;
    case 192u: goto L_0897D248;
    case 193u: goto L_0897D250;
    case 194u: goto L_0897D258;
    case 195u: goto L_0897D260;
    case 196u: goto L_0897D274;
    case 197u: goto L_0897D284;
    case 198u: goto L_0897D28C;
    case 199u: goto L_0897D294;
    case 200u: goto L_0897D29C;
    case 201u: goto L_0897D2A4;
    case 202u: goto L_0897D2C0;
    case 203u: goto L_0897D2D0;
    case 204u: goto L_0897D314;
    case 205u: goto L_0897D330;
    case 206u: goto L_0897D340;
    case 207u: goto L_0897D37C;
    case 208u: goto L_0897D3AC;
    case 209u: goto L_0897D3D0;
    case 210u: goto L_0897D3D8;
    case 211u: goto L_0897D3F4;
    case 212u: goto L_0897D3F8;
    case 213u: goto L_0897D41C;
    case 214u: goto L_0897D424;
    case 215u: goto L_0897D440;
    case 216u: goto L_0897D454;
    case 217u: goto L_0897D470;
    case 218u: goto L_0897D474;
    case 219u: goto L_0897D47C;
    case 220u: goto L_0897D494;
    case 221u: goto L_0897D4A8;
    case 222u: goto L_0897D4C0;
    case 223u: goto L_0897D4F8;
    case 224u: goto L_0897D510;
    case 225u: goto L_0897D528;
    case 226u: goto L_0897D544;
    case 227u: goto L_0897D55C;
    case 228u: goto L_0897D574;
    case 229u: goto L_0897D58C;
    case 230u: goto L_0897D594;
    case 231u: goto L_0897D59C;
    case 232u: goto L_0897D5B8;
    case 233u: goto L_0897D5C8;
    case 234u: goto L_0897D5DC;
    case 235u: goto L_0897D5FC;
    case 236u: goto L_0897D604;
    case 237u: goto L_0897D61C;
    case 238u: goto L_0897D62C;
    case 239u: goto L_0897D660;
    case 240u: goto L_0897D670;
    case 241u: goto L_0897D684;
    case 242u: goto L_0897D698;
    case 243u: goto L_0897D6AC;
    case 244u: goto L_0897D6C0;
    case 245u: goto L_0897D6D4;
    case 246u: goto L_0897D6E8;
    case 247u: goto L_0897D6FC;
    case 248u: goto L_0897D710;
    case 249u: goto L_0897D714;
    case 250u: goto L_0897D768;
    case 251u: goto L_0897D780;
    case 252u: goto L_0897D79C;
    case 253u: goto L_0897D7B4;
    case 254u: goto L_0897D7D0;
    case 255u: goto L_0897D7E8;
    case 256u: goto L_0897D800;
    case 257u: goto L_0897D818;
    case 258u: goto L_0897D820;
    case 259u: goto L_0897D828;
    case 260u: goto L_0897D844;
    case 261u: goto L_0897D850;
    case 262u: goto L_0897D858;
    case 263u: goto L_0897D874;
    case 264u: goto L_0897D880;
    case 265u: goto L_0897D888;
    case 266u: goto L_0897D8A0;
    case 267u: goto L_0897D8A8;
    case 268u: goto L_0897D8B0;
    case 269u: goto L_0897D8C8;
    case 270u: goto L_0897D8D0;
    case 271u: goto L_0897D8D8;
    case 272u: goto L_0897D8F0;
    case 273u: goto L_0897D8F8;
    case 274u: goto L_0897D900;
    case 275u: goto L_0897D918;
    case 276u: goto L_0897D920;
    case 277u: goto L_0897D928;
    case 278u: goto L_0897D940;
    case 279u: goto L_0897D95C;
    case 280u: goto L_0897D968;
    case 281u: goto L_0897D970;
    case 282u: goto L_0897D98C;
    case 283u: goto L_0897D998;
    case 284u: goto L_0897D9A0;
    case 285u: goto L_0897D9BC;
    case 286u: goto L_0897D9C8;
    case 287u: goto L_0897D9D0;
    case 288u: goto L_0897D9E8;
    case 289u: goto L_0897D9F8;
    case 290u: goto L_0897DA04;
    case 291u: goto L_0897DA1C;
    case 292u: goto L_0897DA30;
    case 293u: goto L_0897DA48;
    case 294u: goto L_0897DA50;
    case 295u: goto L_0897DA58;
    case 296u: goto L_0897DA70;
    case 297u: goto L_0897DA78;
    case 298u: goto L_0897DA84;
    case 299u: goto L_0897DAA8;
    case 300u: goto L_0897DAB0;
    case 301u: goto L_0897DACC;
    case 302u: goto L_0897DAE0;
    case 303u: goto L_0897DAFC;
    case 304u: goto L_0897DB00;
    case 305u: goto L_0897DB08;
    case 306u: goto L_0897DB20;
    case 307u: goto L_0897DB30;
    case 308u: goto L_0897DB3C;
    case 309u: goto L_0897DB48;
    case 310u: goto L_0897DB54;
    case 311u: goto L_0897DB5C;
    case 312u: goto L_0897DB78;
    case 313u: goto L_0897DB88;
    case 314u: goto L_0897DBCC;
    case 315u: goto L_0897DBE8;
    case 316u: goto L_0897DBF8;
    case 317u: goto L_0897DC3C;
    case 318u: goto L_0897DC58;
    case 319u: goto L_0897DC68;
    case 320u: goto L_0897DC74;
    case 321u: goto L_0897DC88;
    case 322u: goto L_0897DC9C;
    case 323u: goto L_0897DCB0;
    case 324u: goto L_0897DCC4;
    case 325u: goto L_0897DCD8;
    case 326u: goto L_0897DCEC;
    case 327u: goto L_0897DD00;
    case 328u: goto L_0897DD14;
    case 329u: goto L_0897DD28;
    case 330u: goto L_0897DD3C;
    case 331u: goto L_0897DD50;
    case 332u: goto L_0897DD64;
    case 333u: goto L_0897DD78;
    case 334u: goto L_0897DD8C;
    case 335u: goto L_0897DD94;
    case 336u: goto L_0897DDCC;
    case 337u: goto L_0897DDE8;
    case 338u: goto L_0897DDF4;
    case 339u: goto L_0897DE04;
    case 340u: goto L_0897DE0C;
    case 341u: goto L_0897DE24;
    case 342u: goto L_0897DE5C;
    case 343u: goto L_0897DE74;
    case 344u: goto L_0897DE7C;
    case 345u: goto L_0897DE94;
    case 346u: goto L_0897DEA4;
    case 347u: goto L_0897DF08;
    case 348u: goto L_0897DF1C;
    case 349u: goto L_0897DF24;
    case 350u: goto L_0897DF2C;
    case 351u: goto L_0897DF30;
    case 352u: goto L_0897DF6C;
    case 353u: goto L_0897DF80;
    case 354u: goto L_0897DF88;
    case 355u: goto L_0897DF90;
    case 356u: goto L_0897DF94;
    case 357u: goto L_0897DFC4;
    case 358u: goto L_0897DFDC;
    case 359u: goto L_0897DFF8;
    case 360u: goto L_0897E00C;
    case 361u: goto L_0897E024;
    case 362u: goto L_0897E03C;
    case 363u: goto L_0897E058;
    case 364u: goto L_0897E06C;
    case 365u: goto L_0897E084;
    case 366u: goto L_0897E09C;
    case 367u: goto L_0897E0B8;
    case 368u: goto L_0897E0CC;
    case 369u: goto L_0897E0D0;
    case 370u: goto L_0897E0FC;
    case 371u: goto L_0897E104;
    case 372u: goto L_0897E120;
    case 373u: goto L_0897E130;
    case 374u: goto L_0897E190;
    case 375u: goto L_0897E1A4;
    case 376u: goto L_0897E1AC;
    case 377u: goto L_0897E1BC;
    case 378u: goto L_0897E1CC;
    case 379u: goto L_0897E1D0;
    case 380u: goto L_0897E1F4;
    case 381u: goto L_0897E1FC;
    case 382u: goto L_0897E218;
    case 383u: goto L_0897E22C;
    case 384u: goto L_0897E248;
    case 385u: goto L_0897E24C;
    case 386u: goto L_0897E254;
    case 387u: goto L_0897E26C;
    case 388u: goto L_0897E27C;
    case 389u: goto L_0897E2AC;
    case 390u: goto L_0897E2D0;
    case 391u: goto L_0897E2D8;
    case 392u: goto L_0897E2F0;
    case 393u: goto L_0897E300;
    case 394u: goto L_0897E30C;
    case 395u: goto L_0897E318;
    case 396u: goto L_0897E338;
    case 397u: goto L_0897E348;
    case 398u: goto L_0897E350;
    case 399u: goto L_0897E360;
    case 400u: goto L_0897E368;
    case 401u: goto L_0897E380;
    case 402u: goto L_0897E38C;
    case 403u: goto L_0897E3A0;
    case 404u: goto L_0897E3AC;
    case 405u: goto L_0897E3B4;
    case 406u: goto L_0897E3CC;
    case 407u: goto L_0897E3DC;
    case 408u: goto L_0897E3F4;
    case 409u: goto L_0897E40C;
    case 410u: goto L_0897E420;
    case 411u: goto L_0897E428;
    case 412u: goto L_0897E434;
    case 413u: goto L_0897E450;
    case 414u: goto L_0897E458;
    case 415u: goto L_0897E484;
    case 416u: goto L_0897E48C;
    case 417u: goto L_0897E494;
    case 418u: goto L_0897E4A0;
    case 419u: goto L_0897E4A8;
    case 420u: goto L_0897E4B4;
    case 421u: goto L_0897E4CC;
    case 422u: goto L_0897E4E4;
    case 423u: goto L_0897E4F4;
    case 424u: goto L_0897E504;
    case 425u: goto L_0897E524;
    case 426u: goto L_0897E52C;
    case 427u: goto L_0897E53C;
    case 428u: goto L_0897E540;
    case 429u: goto L_0897E548;
    case 430u: goto L_0897E560;
    case 431u: goto L_0897E568;
    case 432u: goto L_0897E574;
    case 433u: goto L_0897E584;
    case 434u: goto L_0897E588;
    case 435u: goto L_0897E5AC;
    case 436u: goto L_0897E5B4;
    case 437u: goto L_0897E5D0;
    case 438u: goto L_0897E5E4;
    case 439u: goto L_0897E600;
    case 440u: goto L_0897E604;
    case 441u: goto L_0897E60C;
    case 442u: goto L_0897E61C;
    case 443u: goto L_0897E628;
    case 444u: goto L_0897E634;
    case 445u: goto L_0897E63C;
    case 446u: goto L_0897E640;
    case 447u: goto L_0897E64C;
    case 448u: goto L_0897E664;
    case 449u: goto L_0897E690;
    case 450u: goto L_0897E6A4;
    case 451u: goto L_0897E6AC;
    case 452u: goto L_0897E6D4;
    case 453u: goto L_0897E6DC;
    case 454u: goto L_0897E6F8;
    case 455u: goto L_0897E70C;
    case 456u: goto L_0897E728;
    case 457u: goto L_0897E72C;
    case 458u: goto L_0897E734;
    case 459u: goto L_0897E744;
    case 460u: goto L_0897E760;
    case 461u: goto L_0897E768;
    case 462u: goto L_0897E774;
    case 463u: goto L_0897E78C;
    case 464u: goto L_0897E7A4;
    case 465u: goto L_0897E7B8;
    case 466u: goto L_0897E7D8;
    case 467u: goto L_0897E7E0;
    case 468u: goto L_0897E7FC;
    case 469u: goto L_0897E804;
    case 470u: goto L_0897E80C;
    case 471u: goto L_0897E814;
    case 472u: goto L_0897E83C;
    case 473u: goto L_0897E844;
    case 474u: goto L_0897E85C;
    case 475u: goto L_0897E864;
    case 476u: goto L_0897E86C;
    case 477u: goto L_0897E888;
    case 478u: goto L_0897E894;
    case 479u: goto L_0897E8A8;
    case 480u: goto L_0897E8C8;
    case 481u: goto L_0897E8D0;
    case 482u: goto L_0897E8E8;
    case 483u: goto L_0897E8F0;
    case 484u: goto L_0897E90C;
    case 485u: goto L_0897E934;
    case 486u: goto L_0897E93C;
    case 487u: goto L_0897E954;
    case 488u: goto L_0897E95C;
    case 489u: goto L_0897E964;
    case 490u: goto L_0897E980;
    case 491u: goto L_0897E98C;
    case 492u: goto L_0897E994;
    case 493u: goto L_0897E9AC;
    case 494u: goto L_0897E9B4;
    case 495u: goto L_0897E9BC;
    case 496u: goto L_0897E9D4;
    case 497u: goto L_0897E9DC;
    case 498u: goto L_0897E9E4;
    case 499u: goto L_0897E9EC;
    case 500u: goto L_0897EA04;
    case 501u: goto L_0897EA20;
    case 502u: goto L_0897EA28;
    case 503u: goto L_0897EA44;
    case 504u: goto L_0897EA58;
    case 505u: goto L_0897EA74;
    case 506u: goto L_0897EA78;
    case 507u: goto L_0897EA80;
    case 508u: goto L_0897EA90;
    case 509u: goto L_0897EA94;
    case 510u: goto L_0897EAB8;
    case 511u: goto L_0897EAC0;
    case 512u: goto L_0897EADC;
    case 513u: goto L_0897EAF0;
    case 514u: goto L_0897EB0C;
    case 515u: goto L_0897EB10;
    case 516u: goto L_0897EB18;
    case 517u: goto L_0897EB24;
    case 518u: goto L_0897EB3C;
    case 519u: goto L_0897EB44;
    case 520u: goto L_0897EB50;
    case 521u: goto L_0897EB60;
    case 522u: goto L_0897EB70;
    case 523u: goto L_0897EB78;
    case 524u: goto L_0897EB8C;
    case 525u: goto L_0897EB90;
    case 526u: goto L_0897EBB4;
    case 527u: goto L_0897EBBC;
    case 528u: goto L_0897EBD8;
    case 529u: goto L_0897EBEC;
    case 530u: goto L_0897EC08;
    case 531u: goto L_0897EC0C;
    case 532u: goto L_0897EC14;
    case 533u: goto L_0897EC34;
    case 534u: goto L_0897EC38;
    case 535u: goto L_0897EC5C;
    case 536u: goto L_0897EC64;
    case 537u: goto L_0897EC80;
    case 538u: goto L_0897EC94;
    case 539u: goto L_0897ECB0;
    case 540u: goto L_0897ECB4;
    case 541u: goto L_0897ECBC;
    case 542u: goto L_0897ECD0;
    case 543u: goto L_0897ECE8;
    case 544u: goto L_0897ECF0;
    case 545u: goto L_0897ED00;
    case 546u: goto L_0897ED04;
    case 547u: goto L_0897ED28;
    case 548u: goto L_0897ED30;
    case 549u: goto L_0897ED4C;
    case 550u: goto L_0897ED60;
    case 551u: goto L_0897ED7C;
    case 552u: goto L_0897ED80;
    case 553u: goto L_0897ED88;
    case 554u: goto L_0897EDA4;
    case 555u: goto L_0897EDCC;
    case 556u: goto L_0897EDFC;
    case 557u: goto L_0897EE18;
    case 558u: goto L_0897EE40;
    case 559u: goto L_0897EE70;
    case 560u: goto L_0897EE88;
    case 561u: goto L_0897EE98;
    case 562u: goto L_0897EEAC;
    case 563u: goto L_0897EEC0;
    case 564u: goto L_0897EEC8;
    case 565u: goto L_0897EEE0;
    case 566u: goto L_0897EEF0;
    case 567u: goto L_0897EF14;
    case 568u: goto L_0897EF30;
    case 569u: goto L_0897EF5C;
    case 570u: goto L_0897EF68;
    case 571u: goto L_0897EF6C;
    case 572u: goto L_0897EF88;
    case 573u: goto L_0897EF90;
    case 574u: goto L_0897EFA4;
    case 575u: goto L_0897F014;
    case 576u: goto L_0897F02C;
    case 577u: goto L_0897F064;
    case 578u: goto L_0897F06C;
    case 579u: goto L_0897F088;
    case 580u: goto L_0897F094;
    case 581u: goto L_0897F0A0;
    case 582u: goto L_0897F0A8;
    case 583u: goto L_0897F0AC;
    case 584u: goto L_0897F0B8;
    case 585u: goto L_0897F0D0;
    case 586u: goto L_0897F0F0;
    case 587u: goto L_0897F0F8;
    case 588u: goto L_0897F114;
    case 589u: goto L_0897F120;
    case 590u: goto L_0897F12C;
    case 591u: goto L_0897F134;
    case 592u: goto L_0897F138;
    case 593u: goto L_0897F144;
    case 594u: goto L_0897F15C;
    case 595u: goto L_0897F17C;
    case 596u: goto L_0897F184;
    case 597u: goto L_0897F19C;
    case 598u: goto L_0897F1A4;
    case 599u: goto L_0897F1AC;
    case 600u: goto L_0897F1C8;
    case 601u: goto L_0897F1D8;
    case 602u: goto L_0897F1F4;
    case 603u: goto L_0897F210;
    case 604u: goto L_0897F220;
    case 605u: goto L_0897F230;
    case 606u: goto L_0897F24C;
    case 607u: goto L_0897F25C;
    case 608u: goto L_0897F26C;
    case 609u: goto L_0897F284;
    case 610u: goto L_0897F294;
    case 611u: goto L_0897F2A0;
    case 612u: goto L_0897F2AC;
    case 613u: goto L_0897F2BC;
    case 614u: goto L_0897F2C4;
    case 615u: goto L_0897F2DC;
    case 616u: goto L_0897F2F0;
    case 617u: goto L_0897F308;
    case 618u: goto L_0897F318;
    case 619u: goto L_0897F320;
    case 620u: goto L_0897F324;
    case 621u: goto L_0897F344;
    case 622u: goto L_0897F34C;
    case 623u: goto L_0897F35C;
    case 624u: goto L_0897F364;
    case 625u: goto L_0897F368;
    case 626u: goto L_0897F370;
    case 627u: goto L_0897F38C;
    case 628u: goto L_0897F394;
    case 629u: goto L_0897F3B0;
    case 630u: goto L_0897F3C4;
    case 631u: goto L_0897F3E0;
    case 632u: goto L_0897F3E4;
    case 633u: goto L_0897F3EC;
    case 634u: goto L_0897F3FC;
    case 635u: goto L_0897F404;
    case 636u: goto L_0897F408;
    case 637u: goto L_0897F410;
    case 638u: goto L_0897F42C;
    case 639u: goto L_0897F434;
    case 640u: goto L_0897F450;
    case 641u: goto L_0897F464;
    case 642u: goto L_0897F480;
    case 643u: goto L_0897F484;
    case 644u: goto L_0897F48C;
    case 645u: goto L_0897F49C;
    case 646u: goto L_0897F4A4;
    case 647u: goto L_0897F4A8;
    case 648u: goto L_0897F4B0;
    case 649u: goto L_0897F4B8;
    case 650u: goto L_0897F4D4;
    case 651u: goto L_0897F4E4;
    case 652u: goto L_0897F50C;
    case 653u: goto L_0897F524;
    case 654u: goto L_0897F540;
    case 655u: goto L_0897F544;
    case 656u: goto L_0897F554;
    case 657u: goto L_0897F56C;
    case 658u: goto L_0897F584;
    case 659u: goto L_0897F590;
    case 660u: goto L_0897F594;
    case 661u: goto L_0897F5A4;
    case 662u: goto L_0897F5BC;
    case 663u: goto L_0897F5D4;
    case 664u: goto L_0897F5E0;
    case 665u: goto L_0897F5E4;
    case 666u: goto L_0897F5F4;
    case 667u: goto L_0897F60C;
    case 668u: goto L_0897F624;
    case 669u: goto L_0897F630;
    case 670u: goto L_0897F634;
    case 671u: goto L_0897F644;
    case 672u: goto L_0897F65C;
    case 673u: goto L_0897F678;
    case 674u: goto L_0897F690;
    case 675u: goto L_0897F6AC;
    case 676u: goto L_0897F6B0;
    case 677u: goto L_0897F6D4;
    case 678u: goto L_0897F7C8;
    case 679u: goto L_0897F7F4;
    case 680u: goto L_0897F814;
    case 681u: goto L_0897F81C;
    case 682u: goto L_0897F82C;
    case 683u: goto L_0897F83C;
    case 684u: goto L_0897F840;
    case 685u: goto L_0897F848;
    case 686u: goto L_0897F850;
    case 687u: goto L_0897F868;
    case 688u: goto L_0897F86C;
    case 689u: goto L_0897F870;
    case 690u: goto L_0897F8A0;
    case 691u: goto L_0897F8A8;
    case 692u: goto L_0897F8AC;
    case 693u: goto L_0897F8B4;
    case 694u: goto L_0897F8C8;
    case 695u: goto L_0897F918;
    case 696u: goto L_0897F934;
    case 697u: goto L_0897F998;
    case 698u: goto L_0897FA18;
    case 699u: goto L_0897FA24;
    case 700u: goto L_0897FA30;
    case 701u: goto L_0897FA3C;
    case 702u: goto L_0897FA48;
    case 703u: goto L_0897FA54;
    case 704u: goto L_0897FA78;
    case 705u: goto L_0897FA80;
    case 706u: goto L_0897FA90;
    case 707u: goto L_0897FAA0;
    case 708u: goto L_0897FAA4;
    case 709u: goto L_0897FAAC;
    case 710u: goto L_0897FAB4;
    case 711u: goto L_0897FACC;
    case 712u: goto L_0897FAD0;
    case 713u: goto L_0897FAD4;
    case 714u: goto L_0897FB04;
    case 715u: goto L_0897FB0C;
    case 716u: goto L_0897FB14;
    case 717u: goto L_0897FB20;
    case 718u: goto L_0897FB2C;
    case 719u: goto L_0897FB34;
    case 720u: goto L_0897FB4C;
    case 721u: goto L_0897FBB4;
    case 722u: goto L_0897FBBC;
    case 723u: goto L_0897FBC4;
    case 724u: goto L_0897FBD4;
    case 725u: goto L_0897FBE0;
    case 726u: goto L_0897FC24;
    case 727u: goto L_0897FC34;
    case 728u: goto L_0897FC40;
    case 729u: goto L_0897FC5C;
    case 730u: goto L_0897FC68;
    case 731u: goto L_0897FC70;
    case 732u: goto L_0897FC80;
    case 733u: goto L_0897FC90;
    case 734u: goto L_0897FC98;
    case 735u: goto L_0897FCA0;
    case 736u: goto L_0897FCA8;
    case 737u: goto L_0897FCB0;
    case 738u: goto L_0897FCB4;
    case 739u: goto L_0897FCBC;
    case 740u: goto L_0897FCF0;
    case 741u: goto L_0897FD14;
    case 742u: goto L_0897FD1C;
    case 743u: goto L_0897FD2C;
    case 744u: goto L_0897FD3C;
    case 745u: goto L_0897FD4C;
    case 746u: goto L_0897FD5C;
    case 747u: goto L_0897FD6C;
    case 748u: goto L_0897FD7C;
    case 749u: goto L_0897FD8C;
    case 750u: goto L_0897FD9C;
    case 751u: goto L_0897FDB4;
    case 752u: goto L_0897FDCC;
    case 753u: goto L_0897FDDC;
    case 754u: goto L_0897FDF4;
    case 755u: goto L_0897FDFC;
    case 756u: goto L_0897FE0C;
    case 757u: goto L_0897FE1C;
    case 758u: goto L_0897FE20;
    case 759u: goto L_0897FE3C;
    case 760u: goto L_0897FE68;
    case 761u: goto L_0897FEA8;
    case 762u: goto L_0897FEB8;
    case 763u: goto L_0897FEC4;
    case 764u: goto L_0897FEC8;
    case 765u: goto L_0897FF18;
    case 766u: goto L_0897FF20;
    case 767u: goto L_0897FF2C;
    case 768u: goto L_0897FF34;
    case 769u: goto L_0897FF64;
    case 770u: goto L_0897FF74;
    case 771u: goto L_0897FF80;
    case 772u: goto L_0897FF88;
    case 773u: goto L_0897FF9C;
    case 774u: goto L_0897FFAC;
    case 775u: goto L_0897FFB8;
    case 776u: goto L_0897FFC0;
    case 777u: goto L_0897FFCC;
    case 778u: goto L_0897FFD4;
    case 779u: goto L_0897FFE8;
    case 780u: goto L_0897FFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0897C004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_0897C078;
      }
      goto L_0897C020;
    }
L_0897C020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20436)));
        goto L_0897C038;
    }
    goto L_0897C02C;
L_0897C02C:
    ctx.gpr[31] = (0x0897C034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x0897C034u) goto L_0897C034;
    return;
L_0897C034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20436)));
    goto L_0897C038;
L_0897C038:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C078;
      }
      goto L_0897C048;
    }
L_0897C048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20436)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0897C060;
    }
    goto L_0897C054;
L_0897C054:
    ctx.gpr[31] = (0x0897C05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x0897C05Cu) goto L_0897C05C;
    return;
L_0897C05C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0897C060;
L_0897C060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2273), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[31] = (0x0897C078u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2192));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x0897C078u) goto L_0897C078;
    return;
L_0897C078:
    ctx.gpr[31] = (0x0897C080u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897C0B4;
L_0897C080:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C0B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897C258;
      }
      goto L_0897C0D0;
    }
L_0897C0D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897C22Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x0897C22Cu) goto L_0897C22C;
    return;
L_0897C22C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x0897C240u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x0897C240u) goto L_0897C240;
    return;
L_0897C240:
    ctx.gpr[31] = (0x0897C248u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x0897C248u) goto L_0897C248;
    return;
L_0897C248:
    ctx.gpr[31] = (0x0897C250u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x0897C250u) goto L_0897C250;
    return;
L_0897C250:
    ctx.gpr[31] = (0x0897C258u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 36u, 0x08A10220u>(ctx, &aot_mem) && ctx.pc == 0x0897C258u) goto L_0897C258;
    return;
L_0897C258:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C26C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0897C314;
      }
      goto L_0897C2BC;
    }
L_0897C2BC:
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[26] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[6] = (50716u << 16u);
    ctx.fpr[28] = ctx.fpr[15] + ctx.fpr[14];
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (2277u << 16u);
    ctx.gpr[6] = (18371u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 20467u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26796)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-15200));
      if (branch_taken) {
          goto L_0897C31C;
      }
      goto L_0897C30C;
    }
L_0897C30C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C334;
      }
      goto L_0897C314;
    }
L_0897C314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C4C8;
      }
      goto L_0897C31C;
    }
L_0897C31C:
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C334;
      }
      goto L_0897C32C;
    }
L_0897C32C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C33C;
      }
      goto L_0897C334;
    }
L_0897C334:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0897C33C;
L_0897C33C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (17096u << 16u);
      if (branch_taken) {
          goto L_0897C3D0;
      }
      goto L_0897C34C;
    }
L_0897C34C:
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[9]);
    goto L_0897C354;
L_0897C354:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.gpr[11] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.fpr[0] = ctx.fpr[16] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = ctx.fpr[16] - ctx.fpr[1];
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = ctx.fpr[17] - ctx.fpr[3];
    ctx.fpr[4] = ctx.fpr[17] - ctx.fpr[4];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[3];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C3C0;
      }
      goto L_0897C3A8;
    }
L_0897C3A8:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C3C0;
      }
      goto L_0897C3B8;
    }
L_0897C3B8:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    goto L_0897C3C0;
L_0897C3C0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0897C354;
      }
      goto L_0897C3D0;
    }
L_0897C3D0:
    ctx.gpr[17] = (ctx.gpr[17] << 7u);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(118), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(119), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0897C424;
      }
      goto L_0897C418;
    }
L_0897C418:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(121)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C428;
      }
      goto L_0897C424;
    }
L_0897C424:
    ctx.gpr[6] = (0u | 1u);
    goto L_0897C428;
L_0897C428:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897C448;
      }
      goto L_0897C438;
    }
L_0897C438:
    ctx.gpr[4] = (49011u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 29884u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897C470;
      }
      goto L_0897C448;
    }
L_0897C448:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C460;
      }
      goto L_0897C450;
    }
L_0897C450:
    ctx.gpr[4] = (16684u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 37958u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897C470;
      }
      goto L_0897C460;
    }
L_0897C460:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0897C46Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x0897C46Cu) goto L_0897C46C;
    return;
L_0897C46C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0897C470;
L_0897C470:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[7]);
    ctx.gpr[31] = (0x0897C49Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 348u, 0x0897A5B8u>(ctx, &aot_mem) && ctx.pc == 0x0897C49Cu) goto L_0897C49C;
    return;
L_0897C49C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[7]);
    ctx.gpr[31] = (0x0897C4C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 348u, 0x0897A5B8u>(ctx, &aot_mem) && ctx.pc == 0x0897C4C8u) goto L_0897C4C8;
    return;
L_0897C4C8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C4F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C550;
      }
      goto L_0897C548;
    }
L_0897C548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C814;
      }
      goto L_0897C550;
    }
L_0897C550:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x0897C55Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0897C55Cu) goto L_0897C55C;
    return;
L_0897C55C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0897C568u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0897C568u) goto L_0897C568;
    return;
L_0897C568:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0897C574u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0897C574u) goto L_0897C574;
    return;
L_0897C574:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0897C580u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0897C580u) goto L_0897C580;
    return;
L_0897C580:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0897C58Cu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0897C58Cu) goto L_0897C58C;
    return;
L_0897C58C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x0897C598u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0897C598u) goto L_0897C598;
    return;
L_0897C598:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0897C5A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0897C5A4u) goto L_0897C5A4;
    return;
L_0897C5A4:
    ctx.gpr[23] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-26796)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2232u << 16u);
      if (branch_taken) {
          goto L_0897C814;
      }
      goto L_0897C5BC;
    }
L_0897C5BC:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(20144));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(20));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (2277u << 16u);
    ctx.gpr[4] = (17302u << 16u);
    ctx.gpr[21] = (0u | 255u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(52));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-15200));
    goto L_0897C620;
L_0897C620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C7E4;
      }
      goto L_0897C62C;
    }
L_0897C62C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C7E4;
      }
      goto L_0897C650;
    }
L_0897C650:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C7E4;
      }
      goto L_0897C674;
    }
L_0897C674:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C7E4;
      }
      goto L_0897C698;
    }
L_0897C698:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C7E4;
      }
      goto L_0897C6BC;
    }
L_0897C6BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (16830u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 42992u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16646u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0897C764u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C764u) goto L_0897C764;
    return;
L_0897C764:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0897C7C8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868570u>(ctx, &aot_mem) && ctx.pc == 0x0897C7C8u) goto L_0897C7C8;
    return;
L_0897C7C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C7E4;
      }
      goto L_0897C7D0;
    }
L_0897C7D0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0897C7DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 62u, 0x08868728u>(ctx, &aot_mem) && ctx.pc == 0x0897C7DCu) goto L_0897C7DC;
    return;
L_0897C7DC:
    ctx.gpr[31] = (0x0897C7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868854u>(ctx, &aot_mem) && ctx.pc == 0x0897C7E4u) goto L_0897C7E4;
    return;
L_0897C7E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-26796)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0897C620;
      }
      goto L_0897C7F8;
    }
L_0897C7F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0897C814;
L_0897C814:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C85C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26828)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26832)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26804)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2228u << 16u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[3] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-26824), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2228u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-26816), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-26820), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26812), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26808), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-26800), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C8F0:
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
L_0897C91C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1497));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(103) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897F6AC;
      }
      goto L_0897C94C;
    }
L_0897C94C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1497));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24344)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C968:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897C980u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C980u) goto L_0897C980;
    return;
L_0897C980:
    ctx.gpr[31] = (0x0897C988u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 699u, 0x0896F62Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C988u) goto L_0897C988;
    return;
L_0897C988:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897C990;
    }
L_0897C990:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897C9A8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C9A8u) goto L_0897C9A8;
    return;
L_0897C9A8:
    ctx.gpr[31] = (0x0897C9B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 700u, 0x0896F634u>(ctx, &aot_mem) && ctx.pc == 0x0897C9B0u) goto L_0897C9B0;
    return;
L_0897C9B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897C9B8;
    }
L_0897C9B8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897C9D4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C9D4u) goto L_0897C9D4;
    return;
L_0897C9D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0897C9E4u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 718u, 0x0896F7B8u>(ctx, &aot_mem) && ctx.pc == 0x0897C9E4u) goto L_0897C9E4;
    return;
L_0897C9E4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CA04;
      }
      goto L_0897C9F0;
    }
L_0897C9F0:
    ctx.gpr[31] = (0x0897C9F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 743u, 0x0896F9A4u>(ctx, &aot_mem) && ctx.pc == 0x0897C9F8u) goto L_0897C9F8;
    return;
L_0897C9F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CA04;
      }
      goto L_0897CA00;
    }
L_0897CA00:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(848))))));
    goto L_0897CA04;
L_0897CA04:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897CA1Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0897CA1Cu) goto L_0897CA1C;
    return;
L_0897CA1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897CA24;
    }
L_0897CA24:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897CA3Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CA3Cu) goto L_0897CA3C;
    return;
L_0897CA3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(336));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0897CA6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897CA6Cu) goto L_0897CA6C;
    return;
L_0897CA6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897CA74;
    }
L_0897CA74:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897CA8Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CA8Cu) goto L_0897CA8C;
    return;
L_0897CA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0897CAA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 754u, 0x0896FB18u>(ctx, &aot_mem) && ctx.pc == 0x0897CAA8u) goto L_0897CAA8;
    return;
L_0897CAA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897CAB0;
    }
L_0897CAB0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897CAC8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CAC8u) goto L_0897CAC8;
    return;
L_0897CAC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0897CAE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 757u, 0x0896FB88u>(ctx, &aot_mem) && ctx.pc == 0x0897CAE4u) goto L_0897CAE4;
    return;
L_0897CAE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CAF4;
      }
      goto L_0897CAEC;
    }
L_0897CAEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0897CAF8;
      }
      goto L_0897CAF4;
    }
L_0897CAF4:
    ctx.gpr[4] = (0u | 0u);
    goto L_0897CAF8;
L_0897CAF8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897CB24;
      }
      goto L_0897CB1C;
    }
L_0897CB1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897CB74;
      }
      goto L_0897CB24;
    }
L_0897CB24:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897CB54;
    }
    goto L_0897CB40;
L_0897CB40:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897CB74;
      }
      goto L_0897CB54;
    }
L_0897CB54:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CB74;
      }
      goto L_0897CB70;
    }
L_0897CB70:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897CB74;
L_0897CB74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897CB7C;
    }
L_0897CB7C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897CB94u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CB94u) goto L_0897CB94;
    return;
L_0897CB94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(344));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0897CBC4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897CBC4u) goto L_0897CBC4;
    return;
L_0897CBC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CBD4;
      }
      goto L_0897CBCC;
    }
L_0897CBCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0897CBD8;
      }
      goto L_0897CBD4;
    }
L_0897CBD4:
    ctx.gpr[4] = (0u | 0u);
    goto L_0897CBD8;
L_0897CBD8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897CC04;
      }
      goto L_0897CBFC;
    }
L_0897CBFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897CC54;
      }
      goto L_0897CC04;
    }
L_0897CC04:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897CC34;
    }
    goto L_0897CC20;
L_0897CC20:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897CC54;
      }
      goto L_0897CC34;
    }
L_0897CC34:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CC54;
      }
      goto L_0897CC50;
    }
L_0897CC50:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897CC54;
L_0897CC54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897CC5C;
    }
L_0897CC5C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897CC74u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CC74u) goto L_0897CC74;
    return;
L_0897CC74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0897CC90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 717u, 0x0896F7ACu>(ctx, &aot_mem) && ctx.pc == 0x0897CC90u) goto L_0897CC90;
    return;
L_0897CC90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897CC98;
    }
L_0897CC98:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897CCB4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CCB4u) goto L_0897CCB4;
    return;
L_0897CCB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897CCC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0897CCC4u) goto L_0897CCC4;
    return;
L_0897CCC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897CCE8;
    }
L_0897CCE8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897CD00u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CD00u) goto L_0897CD00;
    return;
L_0897CD00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897CD10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0897CD10u) goto L_0897CD10;
    return;
L_0897CD10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0897CD24;
      }
      goto L_0897CD20;
    }
L_0897CD20:
    ctx.gpr[4] = (0u | 1u);
    goto L_0897CD24;
L_0897CD24:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897CD50;
      }
      goto L_0897CD48;
    }
L_0897CD48:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897CDA0;
      }
      goto L_0897CD50;
    }
L_0897CD50:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897CD80;
    }
    goto L_0897CD6C;
L_0897CD6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897CDA0;
      }
      goto L_0897CD80;
    }
L_0897CD80:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CDA0;
      }
      goto L_0897CD9C;
    }
L_0897CD9C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897CDA0;
L_0897CDA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897CDA8;
    }
L_0897CDA8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897CDC8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CDC8u) goto L_0897CDC8;
    return;
L_0897CDC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x0897CDFCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 235u, 0x08971974u>(ctx, &aot_mem) && ctx.pc == 0x0897CDFCu) goto L_0897CDFC;
    return;
L_0897CDFC:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897CE28u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0897CE28u) goto L_0897CE28;
    return;
L_0897CE28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897CE30;
    }
L_0897CE30:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897CE48u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CE48u) goto L_0897CE48;
    return;
L_0897CE48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27356)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0897CE98;
      }
      goto L_0897CE7C;
    }
L_0897CE7C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CE98;
      }
      goto L_0897CE90;
    }
L_0897CE90:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0897CEA4;
      }
      goto L_0897CE98;
    }
L_0897CE98:
    ctx.gpr[31] = (0x0897CEA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0897CEA0u) goto L_0897CEA0;
    return;
L_0897CEA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0897CEA4;
L_0897CEA4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897CEC4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0897CEC4u) goto L_0897CEC4;
    return;
L_0897CEC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897CECC;
    }
L_0897CECC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897CEE8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CEE8u) goto L_0897CEE8;
    return;
L_0897CEE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[31] = (0x0897CEF8u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 645u, 0x08B02F14u>(ctx, &aot_mem) && ctx.pc == 0x0897CEF8u) goto L_0897CEF8;
    return;
L_0897CEF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897CF00;
    }
L_0897CF00:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897CF18u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CF18u) goto L_0897CF18;
    return;
L_0897CF18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27356)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0897CF34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 801u, 0x0896FE08u>(ctx, &aot_mem) && ctx.pc == 0x0897CF34u) goto L_0897CF34;
    return;
L_0897CF34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897CF3C;
    }
L_0897CF3C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897CF54u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CF54u) goto L_0897CF54;
    return;
L_0897CF54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897CF64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0897CF64u) goto L_0897CF64;
    return;
L_0897CF64:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 192u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(15926), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0897CFC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0897CFC4u) goto L_0897CFC4;
    return;
L_0897CFC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0897CFE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0897CFE8u) goto L_0897CFE8;
    return;
L_0897CFE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0897D000;
      }
      goto L_0897CFF8;
    }
L_0897CFF8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897D06C;
      }
      goto L_0897D000;
    }
L_0897D000:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D038;
      }
      goto L_0897D014;
    }
L_0897D014:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0897D030u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 349u, 0x088EE490u>(ctx, &aot_mem) && ctx.pc == 0x0897D030u) goto L_0897D030;
    return;
L_0897D030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D054;
      }
      goto L_0897D038;
    }
L_0897D038:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0897D054u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 349u, 0x088EE490u>(ctx, &aot_mem) && ctx.pc == 0x0897D054u) goto L_0897D054;
    return;
L_0897D054:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0897D064u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 483u, 0x088EF028u>(ctx, &aot_mem) && ctx.pc == 0x0897D064u) goto L_0897D064;
    return;
L_0897D064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D0C8;
      }
      goto L_0897D06C;
    }
L_0897D06C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D0A4;
      }
      goto L_0897D080;
    }
L_0897D080:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0897D09Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 349u, 0x088EE490u>(ctx, &aot_mem) && ctx.pc == 0x0897D09Cu) goto L_0897D09C;
    return;
L_0897D09C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D0C0;
      }
      goto L_0897D0A4;
    }
L_0897D0A4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0897D0C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 349u, 0x088EE490u>(ctx, &aot_mem) && ctx.pc == 0x0897D0C0u) goto L_0897D0C0;
    return;
L_0897D0C0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(852), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897D0C8;
L_0897D0C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D0EC;
      }
      goto L_0897D0D4;
    }
L_0897D0D4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D0ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 194u, 0x08958B90u>(ctx, &aot_mem) && ctx.pc == 0x0897D0ECu) goto L_0897D0EC;
    return;
L_0897D0EC:
    ctx.gpr[31] = (0x0897D0F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0897D0F4u) goto L_0897D0F4;
    return;
L_0897D0F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D124;
      }
      goto L_0897D0FC;
    }
L_0897D0FC:
    ctx.gpr[31] = (0x0897D104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0897D104u) goto L_0897D104;
    return;
L_0897D104:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897D124;
L_0897D124:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D12C;
    }
L_0897D12C:
    ctx.gpr[31] = (0x0897D134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0897D134u) goto L_0897D134;
    return;
L_0897D134:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D164;
      }
      goto L_0897D13C;
    }
L_0897D13C:
    ctx.gpr[31] = (0x0897D144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0897D144u) goto L_0897D144;
    return;
L_0897D144:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897D164;
L_0897D164:
    ctx.gpr[31] = (0x0897D16Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 174u, 0x088414FCu>(ctx, &aot_mem) && ctx.pc == 0x0897D16Cu) goto L_0897D16C;
    return;
L_0897D16C:
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
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(242), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0897D1A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 373u, 0x088EE65Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D1A8u) goto L_0897D1A8;
    return;
L_0897D1A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D1B0;
    }
L_0897D1B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7516)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7516), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D1C8;
    }
L_0897D1C8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D1E0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D1E0u) goto L_0897D1E0;
    return;
L_0897D1E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7512)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7512), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D1FC;
    }
L_0897D1FC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D214u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D214u) goto L_0897D214;
    return;
L_0897D214:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0897D238;
      }
      goto L_0897D220;
    }
L_0897D220:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897D29C;
      }
      goto L_0897D228;
    }
L_0897D228:
    ctx.gpr[31] = (0x0897D230u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 349u, 0x08965674u>(ctx, &aot_mem) && ctx.pc == 0x0897D230u) goto L_0897D230;
    return;
L_0897D230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D29C;
      }
      goto L_0897D238;
    }
L_0897D238:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0897D250;
      }
      goto L_0897D240;
    }
L_0897D240:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D260;
      }
      goto L_0897D248;
    }
L_0897D248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D29C;
      }
      goto L_0897D250;
    }
L_0897D250:
    ctx.gpr[31] = (0x0897D258u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 349u, 0x08965674u>(ctx, &aot_mem) && ctx.pc == 0x0897D258u) goto L_0897D258;
    return;
L_0897D258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D29C;
      }
      goto L_0897D260;
    }
L_0897D260:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6780)));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0897D284;
      }
      goto L_0897D274;
    }
L_0897D274:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6780)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897D294;
      }
      goto L_0897D284;
    }
L_0897D284:
    ctx.gpr[31] = (0x0897D28Cu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 349u, 0x08965674u>(ctx, &aot_mem) && ctx.pc == 0x0897D28Cu) goto L_0897D28C;
    return;
L_0897D28C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D29C;
      }
      goto L_0897D294;
    }
L_0897D294:
    ctx.gpr[31] = (0x0897D29Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 349u, 0x08965674u>(ctx, &aot_mem) && ctx.pc == 0x0897D29Cu) goto L_0897D29C;
    return;
L_0897D29C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D2A4;
    }
L_0897D2A4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897D2C0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D2C0u) goto L_0897D2C0;
    return;
L_0897D2C0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x0897D2D0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0897D2D0u) goto L_0897D2D0;
    return;
L_0897D2D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D314;
    }
L_0897D314:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897D330u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D330u) goto L_0897D330;
    return;
L_0897D330:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897D340u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0897D340u) goto L_0897D340;
    return;
L_0897D340:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (18371u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20224u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_0897D3AC;
    }
    goto L_0897D37C;
L_0897D37C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897D3D0;
      }
      goto L_0897D3AC;
    }
L_0897D3AC:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897D3D0;
L_0897D3D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D3D8;
    }
L_0897D3D8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(684)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0897D3F8;
      }
      goto L_0897D3F4;
    }
L_0897D3F4:
    ctx.gpr[4] = (0u | 1u);
    goto L_0897D3F8;
L_0897D3F8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897D424;
      }
      goto L_0897D41C;
    }
L_0897D41C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897D474;
      }
      goto L_0897D424;
    }
L_0897D424:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897D454;
    }
    goto L_0897D440;
L_0897D440:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897D474;
      }
      goto L_0897D454;
    }
L_0897D454:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D474;
      }
      goto L_0897D470;
    }
L_0897D470:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897D474;
L_0897D474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D47C;
    }
L_0897D47C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D494u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D494u) goto L_0897D494;
    return;
L_0897D494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7780), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D4A8;
    }
L_0897D4A8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D4C0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D4C0u) goto L_0897D4C0;
    return;
L_0897D4C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D4F8;
    }
L_0897D4F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7508)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D510;
    }
L_0897D510:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D528u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D528u) goto L_0897D528;
    return;
L_0897D528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7504)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7504), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D544;
    }
L_0897D544:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7480)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7480), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D55C;
    }
L_0897D55C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7476)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7476), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D574;
    }
L_0897D574:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D58Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D58Cu) goto L_0897D58C;
    return;
L_0897D58C:
    ctx.gpr[31] = (0x0897D594u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 188u, 0x08844FB0u>(ctx, &aot_mem) && ctx.pc == 0x0897D594u) goto L_0897D594;
    return;
L_0897D594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D59C;
    }
L_0897D59C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D5B8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D5B8u) goto L_0897D5B8;
    return;
L_0897D5B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897D5C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0897D5C8u) goto L_0897D5C8;
    return;
L_0897D5C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897D5DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0897D5DCu) goto L_0897D5DC;
    return;
L_0897D5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897D5FCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 72u, 0x089B0398u>(ctx, &aot_mem) && ctx.pc == 0x0897D5FCu) goto L_0897D5FC;
    return;
L_0897D5FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D604;
    }
L_0897D604:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D61Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D61Cu) goto L_0897D61C;
    return;
L_0897D61C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897D62Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0897D62Cu) goto L_0897D62C;
    return;
L_0897D62C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 80u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0897D660u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 251u, 0x08A295B0u>(ctx, &aot_mem) && ctx.pc == 0x0897D660u) goto L_0897D660;
    return;
L_0897D660:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 169u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
        goto L_0897D714;
    }
    goto L_0897D670;
L_0897D670:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0897D684u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 412u, 0x0880B468u>(ctx, &aot_mem) && ctx.pc == 0x0897D684u) goto L_0897D684;
    return;
L_0897D684:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0897D698u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 412u, 0x0880B468u>(ctx, &aot_mem) && ctx.pc == 0x0897D698u) goto L_0897D698;
    return;
L_0897D698:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0897D6ACu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D6ACu) goto L_0897D6AC;
    return;
L_0897D6AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D6C0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D6C0u) goto L_0897D6C0;
    return;
L_0897D6C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D6D4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D6D4u) goto L_0897D6D4;
    return;
L_0897D6D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x0897D6E8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D6E8u) goto L_0897D6E8;
    return;
L_0897D6E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897D6FCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D6FCu) goto L_0897D6FC;
    return;
L_0897D6FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0897D710u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D710u) goto L_0897D710;
    return;
L_0897D710:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    goto L_0897D714;
L_0897D714:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D768;
    }
L_0897D768:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D780u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D780u) goto L_0897D780;
    return;
L_0897D780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7468)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7468), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D79C;
    }
L_0897D79C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D7B4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D7B4u) goto L_0897D7B4;
    return;
L_0897D7B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7464)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7464), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D7D0;
    }
L_0897D7D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7460)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7460), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D7E8;
    }
L_0897D7E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7452)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7452), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D800;
    }
L_0897D800:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D818u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D818u) goto L_0897D818;
    return;
L_0897D818:
    ctx.gpr[31] = (0x0897D820u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 193u, 0x08844FE4u>(ctx, &aot_mem) && ctx.pc == 0x0897D820u) goto L_0897D820;
    return;
L_0897D820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D828;
    }
L_0897D828:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D844u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D844u) goto L_0897D844;
    return;
L_0897D844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x0897D850u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 214u, 0x088450D4u>(ctx, &aot_mem) && ctx.pc == 0x0897D850u) goto L_0897D850;
    return;
L_0897D850:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D858;
    }
L_0897D858:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D874u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D874u) goto L_0897D874;
    return;
L_0897D874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x0897D880u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 219u, 0x08845118u>(ctx, &aot_mem) && ctx.pc == 0x0897D880u) goto L_0897D880;
    return;
L_0897D880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D888;
    }
L_0897D888:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D8A0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D8A0u) goto L_0897D8A0;
    return;
L_0897D8A0:
    ctx.gpr[31] = (0x0897D8A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 194u, 0x08844FF8u>(ctx, &aot_mem) && ctx.pc == 0x0897D8A8u) goto L_0897D8A8;
    return;
L_0897D8A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D8B0;
    }
L_0897D8B0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D8C8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D8C8u) goto L_0897D8C8;
    return;
L_0897D8C8:
    ctx.gpr[31] = (0x0897D8D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 199u, 0x0884502Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D8D0u) goto L_0897D8D0;
    return;
L_0897D8D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D8D8;
    }
L_0897D8D8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D8F0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D8F0u) goto L_0897D8F0;
    return;
L_0897D8F0:
    ctx.gpr[31] = (0x0897D8F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 207u, 0x08845080u>(ctx, &aot_mem) && ctx.pc == 0x0897D8F8u) goto L_0897D8F8;
    return;
L_0897D8F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D900;
    }
L_0897D900:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D918u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D918u) goto L_0897D918;
    return;
L_0897D918:
    ctx.gpr[31] = (0x0897D920u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 212u, 0x088450B4u>(ctx, &aot_mem) && ctx.pc == 0x0897D920u) goto L_0897D920;
    return;
L_0897D920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D928;
    }
L_0897D928:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7412)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7412), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D940;
    }
L_0897D940:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D95Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D95Cu) goto L_0897D95C;
    return;
L_0897D95C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x0897D968u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 228u, 0x088451ACu>(ctx, &aot_mem) && ctx.pc == 0x0897D968u) goto L_0897D968;
    return;
L_0897D968:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D970;
    }
L_0897D970:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D98Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D98Cu) goto L_0897D98C;
    return;
L_0897D98C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x0897D998u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 223u, 0x08845168u>(ctx, &aot_mem) && ctx.pc == 0x0897D998u) goto L_0897D998;
    return;
L_0897D998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D9A0;
    }
L_0897D9A0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D9BCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D9BCu) goto L_0897D9BC;
    return;
L_0897D9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x0897D9C8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 221u, 0x08845140u>(ctx, &aot_mem) && ctx.pc == 0x0897D9C8u) goto L_0897D9C8;
    return;
L_0897D9C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897D9D0;
    }
L_0897D9D0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D9E8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D9E8u) goto L_0897D9E8;
    return;
L_0897D9E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897D9F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0897D9F8u) goto L_0897D9F8;
    return;
L_0897D9F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0897DA78;
      }
      goto L_0897DA04;
    }
L_0897DA04:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[6] = (2269u << 16u);
      if (branch_taken) {
          goto L_0897DA30;
      }
      goto L_0897DA1C;
    }
L_0897DA1C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897DA58;
      }
      goto L_0897DA30;
    }
L_0897DA30:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(424))))));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0897DA48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 673u, 0x0887BBDCu>(ctx, &aot_mem) && ctx.pc == 0x0897DA48u) goto L_0897DA48;
    return;
L_0897DA48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DA84;
      }
      goto L_0897DA50;
    }
L_0897DA50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0897DA84;
      }
      goto L_0897DA58;
    }
L_0897DA58:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(424))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897DA84;
      }
      goto L_0897DA70;
    }
L_0897DA70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0897DA84;
      }
      goto L_0897DA78;
    }
L_0897DA78:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0897DA84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24496));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DA84u) goto L_0897DA84;
    return;
L_0897DA84:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897DAB0;
      }
      goto L_0897DAA8;
    }
L_0897DAA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0897DB00;
      }
      goto L_0897DAB0;
    }
L_0897DAB0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897DAE0;
    }
    goto L_0897DACC;
L_0897DACC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897DB00;
      }
      goto L_0897DAE0;
    }
L_0897DAE0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DB00;
      }
      goto L_0897DAFC;
    }
L_0897DAFC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897DB00;
L_0897DB00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897DB08;
    }
L_0897DB08:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897DB20u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DB20u) goto L_0897DB20;
    return;
L_0897DB20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897DB30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0897DB30u) goto L_0897DB30;
    return;
L_0897DB30:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DB48;
      }
      goto L_0897DB3C;
    }
L_0897DB3C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(424), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897DB54;
      }
      goto L_0897DB48;
    }
L_0897DB48:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0897DB54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24436));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DB54u) goto L_0897DB54;
    return;
L_0897DB54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897DB5C;
    }
L_0897DB5C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897DB78u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DB78u) goto L_0897DB78;
    return;
L_0897DB78:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0897DB88u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0897DB88u) goto L_0897DB88;
    return;
L_0897DB88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897DBCC;
    }
L_0897DBCC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897DBE8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DBE8u) goto L_0897DBE8;
    return;
L_0897DBE8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0897DBF8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0897DBF8u) goto L_0897DBF8;
    return;
L_0897DBF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897DC3C;
    }
L_0897DC3C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0897DC58u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DC58u) goto L_0897DC58;
    return;
L_0897DC58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897DC68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0897DC68u) goto L_0897DC68;
    return;
L_0897DC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897DC88;
      }
      goto L_0897DC74;
    }
L_0897DC74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897DC9C;
      }
      goto L_0897DC88;
    }
L_0897DC88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0897DC9C;
L_0897DC9C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DCC4;
      }
      goto L_0897DCB0;
    }
L_0897DCB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897DCD8;
      }
      goto L_0897DCC4;
    }
L_0897DCC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0897DCD8;
L_0897DCD8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DD00;
      }
      goto L_0897DCEC;
    }
L_0897DCEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897DD14;
      }
      goto L_0897DD00;
    }
L_0897DD00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0897DD14;
L_0897DD14:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DD3C;
      }
      goto L_0897DD28;
    }
L_0897DD28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897DD50;
      }
      goto L_0897DD3C;
    }
L_0897DD3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0897DD50;
L_0897DD50:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DD78;
      }
      goto L_0897DD64;
    }
L_0897DD64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897DD8C;
      }
      goto L_0897DD78;
    }
L_0897DD78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0897DD8C;
L_0897DD8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897DD94;
    }
L_0897DD94:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0897DDE8;
      }
      goto L_0897DDCC;
    }
L_0897DDCC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897DDF4;
      }
      goto L_0897DDE8;
    }
L_0897DDE8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    goto L_0897DDF4;
L_0897DDF4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897DE04u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0897DE04u) goto L_0897DE04;
    return;
L_0897DE04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897DE0C;
    }
L_0897DE0C:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897DE24u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DE24u) goto L_0897DE24;
    return;
L_0897DE24:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0897DE74;
      }
      goto L_0897DE5C;
    }
L_0897DE5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897DE74;
L_0897DE74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897DE7C;
    }
L_0897DE7C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897DE94u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DE94u) goto L_0897DE94;
    return;
L_0897DE94:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0897DEA4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0897DEA4u) goto L_0897DEA4;
    return;
L_0897DEA4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[15])) && ctx.fpr[12] == ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0897DF24;
      }
      goto L_0897DF08;
    }
L_0897DF08:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897DF24;
      }
      goto L_0897DF1C;
    }
L_0897DF1C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0897DF30;
      }
      goto L_0897DF24;
    }
L_0897DF24:
    ctx.gpr[31] = (0x0897DF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0897DF2Cu) goto L_0897DF2C;
    return;
L_0897DF2C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0897DF30;
L_0897DF30:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[15])) && ctx.fpr[12] == ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0897DF88;
      }
      goto L_0897DF6C;
    }
L_0897DF6C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897DF88;
      }
      goto L_0897DF80;
    }
L_0897DF80:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0897DF94;
      }
      goto L_0897DF88;
    }
L_0897DF88:
    ctx.gpr[31] = (0x0897DF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x0897DF90u) goto L_0897DF90;
    return;
L_0897DF90:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0897DF94;
L_0897DF94:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897DFDC;
      }
      goto L_0897DFC4;
    }
L_0897DFC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897E00C;
      }
      goto L_0897DFDC;
    }
L_0897DFDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897E00C;
      }
      goto L_0897DFF8;
    }
L_0897DFF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897E00C;
L_0897E00C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897E03C;
      }
      goto L_0897E024;
    }
L_0897E024:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897E06C;
      }
      goto L_0897E03C;
    }
L_0897E03C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897E06C;
      }
      goto L_0897E058;
    }
L_0897E058:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897E06C;
L_0897E06C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897E09C;
      }
      goto L_0897E084;
    }
L_0897E084:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897E0CC;
      }
      goto L_0897E09C;
    }
L_0897E09C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_0897E0D0;
    }
    goto L_0897E0B8;
L_0897E0B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897E0CC;
L_0897E0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_0897E0D0;
L_0897E0D0:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897E0FCu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0897E0FCu) goto L_0897E0FC;
    return;
L_0897E0FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E104;
    }
L_0897E104:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897E120u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E120u) goto L_0897E120;
    return;
L_0897E120:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0897E130u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0897E130u) goto L_0897E130;
    return;
L_0897E130:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x0897E190u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x0897E190u) goto L_0897E190;
    return;
L_0897E190:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x0897E1A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x0897E1A4u) goto L_0897E1A4;
    return;
L_0897E1A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E1AC;
    }
L_0897E1AC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25849)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0897E1D0;
      }
      goto L_0897E1BC;
    }
L_0897E1BC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25850)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E1D0;
      }
      goto L_0897E1CC;
    }
L_0897E1CC:
    ctx.gpr[4] = (0u | 1u);
    goto L_0897E1D0;
L_0897E1D0:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897E1FC;
      }
      goto L_0897E1F4;
    }
L_0897E1F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897E24C;
      }
      goto L_0897E1FC;
    }
L_0897E1FC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897E22C;
    }
    goto L_0897E218;
L_0897E218:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897E24C;
      }
      goto L_0897E22C;
    }
L_0897E22C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E24C;
      }
      goto L_0897E248;
    }
L_0897E248:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897E24C;
L_0897E24C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E254;
    }
L_0897E254:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897E26Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E26Cu) goto L_0897E26C;
    return;
L_0897E26C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897E27Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0897E27Cu) goto L_0897E27C;
    return;
L_0897E27C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (0u | 174u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(224));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 12u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0897E2ACu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E2ACu) goto L_0897E2AC;
    return;
L_0897E2AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(224));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0897E2D0u);
    ctx.gpr[6] = (0u | 170u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E2D0u) goto L_0897E2D0;
    return;
L_0897E2D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E2D8;
    }
L_0897E2D8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897E2F0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E2F0u) goto L_0897E2F0;
    return;
L_0897E2F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897E300u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0897E300u) goto L_0897E300;
    return;
L_0897E300:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), 0u);
      if (branch_taken) {
          goto L_0897E350;
      }
      goto L_0897E30C;
    }
L_0897E30C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E350;
      }
      goto L_0897E318;
    }
L_0897E318:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E350;
      }
      goto L_0897E338;
    }
L_0897E338:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897E348u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x0897E348u) goto L_0897E348;
    return;
L_0897E348:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    goto L_0897E350;
L_0897E350:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897E360u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0897E360u) goto L_0897E360;
    return;
L_0897E360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E368;
    }
L_0897E368:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897E380u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E380u) goto L_0897E380;
    return;
L_0897E380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E3A0;
      }
      goto L_0897E38C;
    }
L_0897E38C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897E3AC;
      }
      goto L_0897E3A0;
    }
L_0897E3A0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(0u));
    goto L_0897E3AC;
L_0897E3AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E3B4;
    }
L_0897E3B4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897E3CCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E3CCu) goto L_0897E3CC;
    return;
L_0897E3CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897E3DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0897E3DCu) goto L_0897E3DC;
    return;
L_0897E3DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E3F4;
    }
L_0897E3F4:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0897E40Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E40Cu) goto L_0897E40C;
    return;
L_0897E40C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0897E420;
L_0897E420:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897E548;
      }
      goto L_0897E428;
    }
L_0897E428:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0897E548;
      }
      goto L_0897E434;
    }
L_0897E434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
      if (branch_taken) {
          goto L_0897E458;
      }
      goto L_0897E450;
    }
L_0897E450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0897E484;
      }
      goto L_0897E458;
    }
L_0897E458:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0897E484;
L_0897E484:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E540;
      }
      goto L_0897E48C;
    }
L_0897E48C:
    ctx.gpr[31] = (0x0897E494u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0897E494u) goto L_0897E494;
    return;
L_0897E494:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897E4B4;
      }
      goto L_0897E4A0;
    }
L_0897E4A0:
    ctx.gpr[31] = (0x0897E4A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0897E4A8u) goto L_0897E4A8;
    return;
L_0897E4A8:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897E540;
      }
      goto L_0897E4B4;
    }
L_0897E4B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(616)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897E540;
      }
      goto L_0897E4CC;
    }
L_0897E4CC:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0897E4F4;
      }
      goto L_0897E4E4;
    }
L_0897E4E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897E540;
      }
      goto L_0897E4F4;
    }
L_0897E4F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897E540;
      }
      goto L_0897E504;
    }
L_0897E504:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0897E524u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A288F4u>(ctx, &aot_mem) && ctx.pc == 0x0897E524u) goto L_0897E524;
    return;
L_0897E524:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E540;
      }
      goto L_0897E52C;
    }
L_0897E52C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0897E53Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E53Cu) goto L_0897E53C;
    return;
L_0897E53C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0897E540;
L_0897E540:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0897E420;
      }
      goto L_0897E548;
    }
L_0897E548:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897E560u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0897E560u) goto L_0897E560;
    return;
L_0897E560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E568;
    }
L_0897E568:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0897E574u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0897E574u) goto L_0897E574;
    return;
L_0897E574:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E588;
      }
      goto L_0897E584;
    }
L_0897E584:
    ctx.gpr[17] = (0u | 1u);
    goto L_0897E588;
L_0897E588:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897E5B4;
      }
      goto L_0897E5AC;
    }
L_0897E5AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0897E604;
      }
      goto L_0897E5B4;
    }
L_0897E5B4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897E5E4;
    }
    goto L_0897E5D0;
L_0897E5D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897E604;
      }
      goto L_0897E5E4;
    }
L_0897E5E4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E604;
      }
      goto L_0897E600;
    }
L_0897E600:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897E604;
L_0897E604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E60C;
    }
L_0897E60C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897E64C;
    }
    goto L_0897E61C;
L_0897E61C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0897E628u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0897E628u) goto L_0897E628;
    return;
L_0897E628:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E640;
      }
      goto L_0897E634;
    }
L_0897E634:
    ctx.gpr[31] = (0x0897E63Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0897E63Cu) goto L_0897E63C;
    return;
L_0897E63C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0897E640;
L_0897E640:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0897E64C;
L_0897E64C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0897E664u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0897E664u) goto L_0897E664;
    return;
L_0897E664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897E690u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E690u) goto L_0897E690;
    return;
L_0897E690:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897E6A4u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 250u, 0x0887958Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E6A4u) goto L_0897E6A4;
    return;
L_0897E6A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E6AC;
    }
L_0897E6AC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897E6DC;
      }
      goto L_0897E6D4;
    }
L_0897E6D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897E72C;
      }
      goto L_0897E6DC;
    }
L_0897E6DC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897E70C;
    }
    goto L_0897E6F8;
L_0897E6F8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897E72C;
      }
      goto L_0897E70C;
    }
L_0897E70C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E72C;
      }
      goto L_0897E728;
    }
L_0897E728:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897E72C;
L_0897E72C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E734;
    }
L_0897E734:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897E744u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0897E744u) goto L_0897E744;
    return;
L_0897E744:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6828), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E760;
    }
L_0897E760:
    ctx.gpr[31] = (0x0897E768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 281u, 0x088799FCu>(ctx, &aot_mem) && ctx.pc == 0x0897E768u) goto L_0897E768;
    return;
L_0897E768:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x0897E774u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 485u, 0x08986EE4u>(ctx, &aot_mem) && ctx.pc == 0x0897E774u) goto L_0897E774;
    return;
L_0897E774:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6896)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6892), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E78C;
    }
L_0897E78C:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0897E7A4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E7A4u) goto L_0897E7A4;
    return;
L_0897E7A4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897E894;
      }
      goto L_0897E7B8;
    }
L_0897E7B8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_0897E7E0;
      }
      goto L_0897E7D8;
    }
L_0897E7D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0897E7FC;
      }
      goto L_0897E7E0;
    }
L_0897E7E0:
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_0897E7FC;
L_0897E7FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E888;
      }
      goto L_0897E804;
    }
L_0897E804:
    ctx.gpr[31] = (0x0897E80Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 244u, 0x0883D410u>(ctx, &aot_mem) && ctx.pc == 0x0897E80Cu) goto L_0897E80C;
    return;
L_0897E80C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E888;
      }
      goto L_0897E814;
    }
L_0897E814:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897E83Cu);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28984u>(ctx, &aot_mem) && ctx.pc == 0x0897E83Cu) goto L_0897E83C;
    return;
L_0897E83C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E888;
      }
      goto L_0897E844;
    }
L_0897E844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0897E85Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E85Cu) goto L_0897E85C;
    return;
L_0897E85C:
    ctx.gpr[31] = (0x0897E864u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x0897E864u) goto L_0897E864;
    return;
L_0897E864:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E888;
      }
      goto L_0897E86C;
    }
L_0897E86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0897E888u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E888u) goto L_0897E888;
    return;
L_0897E888:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897E7B8;
      }
      goto L_0897E894;
    }
L_0897E894:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15296)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897E98C;
      }
      goto L_0897E8A8;
    }
L_0897E8A8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15296)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_0897E8D0;
      }
      goto L_0897E8C8;
    }
L_0897E8C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0897E8E8;
      }
      goto L_0897E8D0;
    }
L_0897E8D0:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15296)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_0897E8E8;
L_0897E8E8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E980;
      }
      goto L_0897E8F0;
    }
L_0897E8F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E980;
      }
      goto L_0897E90C;
    }
L_0897E90C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897E934u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28984u>(ctx, &aot_mem) && ctx.pc == 0x0897E934u) goto L_0897E934;
    return;
L_0897E934:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E980;
      }
      goto L_0897E93C;
    }
L_0897E93C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0897E954u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E954u) goto L_0897E954;
    return;
L_0897E954:
    ctx.gpr[31] = (0x0897E95Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x0897E95Cu) goto L_0897E95C;
    return;
L_0897E95C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E980;
      }
      goto L_0897E964;
    }
L_0897E964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0897E980u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E980u) goto L_0897E980;
    return;
L_0897E980:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897E8A8;
      }
      goto L_0897E98C;
    }
L_0897E98C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E994;
    }
L_0897E994:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897E9ACu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E9ACu) goto L_0897E9AC;
    return;
L_0897E9AC:
    ctx.gpr[31] = (0x0897E9B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 278u, 0x089A5380u>(ctx, &aot_mem) && ctx.pc == 0x0897E9B4u) goto L_0897E9B4;
    return;
L_0897E9B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E9BC;
    }
L_0897E9BC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897E9D4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E9D4u) goto L_0897E9D4;
    return;
L_0897E9D4:
    ctx.gpr[31] = (0x0897E9DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 444u, 0x089BE2F8u>(ctx, &aot_mem) && ctx.pc == 0x0897E9DCu) goto L_0897E9DC;
    return;
L_0897E9DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E9E4;
    }
L_0897E9E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897E9EC;
    }
L_0897E9EC:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897EA04u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EA04u) goto L_0897EA04;
    return;
L_0897EA04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897EA28;
      }
      goto L_0897EA20;
    }
L_0897EA20:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897EA78;
      }
      goto L_0897EA28;
    }
L_0897EA28:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897EA58;
    }
    goto L_0897EA44;
L_0897EA44:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897EA78;
      }
      goto L_0897EA58;
    }
L_0897EA58:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EA78;
      }
      goto L_0897EA74;
    }
L_0897EA74:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897EA78;
L_0897EA78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897EA80;
    }
L_0897EA80:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0897EA94;
      }
      goto L_0897EA90;
    }
L_0897EA90:
    ctx.gpr[4] = (0u | 1u);
    goto L_0897EA94;
L_0897EA94:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897EAC0;
      }
      goto L_0897EAB8;
    }
L_0897EAB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897EB10;
      }
      goto L_0897EAC0;
    }
L_0897EAC0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897EAF0;
    }
    goto L_0897EADC;
L_0897EADC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897EB10;
      }
      goto L_0897EAF0;
    }
L_0897EAF0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EB10;
      }
      goto L_0897EB0C;
    }
L_0897EB0C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897EB10;
L_0897EB10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897EB18;
    }
L_0897EB18:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0897EB24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0897EB24u) goto L_0897EB24;
    return;
L_0897EB24:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897EB3Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0897EB3Cu) goto L_0897EB3C;
    return;
L_0897EB3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897EB44;
    }
L_0897EB44:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0897EB50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24380));
    goto L_0897C8F0;
L_0897EB50:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29620), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897EB60;
    }
L_0897EB60:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0897EB78;
      }
      goto L_0897EB70;
    }
L_0897EB70:
    ctx.gpr[31] = (0x0897EB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EB78u) goto L_0897EB78;
    return;
L_0897EB78:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EB90;
      }
      goto L_0897EB8C;
    }
L_0897EB8C:
    ctx.gpr[17] = (0u | 1u);
    goto L_0897EB90;
L_0897EB90:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897EBBC;
      }
      goto L_0897EBB4;
    }
L_0897EBB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0897EC0C;
      }
      goto L_0897EBBC;
    }
L_0897EBBC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897EBEC;
    }
    goto L_0897EBD8;
L_0897EBD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897EC0C;
      }
      goto L_0897EBEC;
    }
L_0897EBEC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EC0C;
      }
      goto L_0897EC08;
    }
L_0897EC08:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897EC0C;
L_0897EC0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897EC14;
    }
L_0897EC14:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0897EC38;
      }
      goto L_0897EC34;
    }
L_0897EC34:
    ctx.gpr[4] = (0u | 1u);
    goto L_0897EC38;
L_0897EC38:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897EC64;
      }
      goto L_0897EC5C;
    }
L_0897EC5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897ECB4;
      }
      goto L_0897EC64;
    }
L_0897EC64:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897EC94;
    }
    goto L_0897EC80;
L_0897EC80:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897ECB4;
      }
      goto L_0897EC94;
    }
L_0897EC94:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ECB4;
      }
      goto L_0897ECB0;
    }
L_0897ECB0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897ECB4;
L_0897ECB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897ECBC;
    }
L_0897ECBC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x0897ECD0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 49u, 0x088A82B0u>(ctx, &aot_mem) && ctx.pc == 0x0897ECD0u) goto L_0897ECD0;
    return;
L_0897ECD0:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897ECE8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0897ECE8u) goto L_0897ECE8;
    return;
L_0897ECE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897ECF0;
    }
L_0897ECF0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7904)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0897ED04;
      }
      goto L_0897ED00;
    }
L_0897ED00:
    ctx.gpr[4] = (0u | 1u);
    goto L_0897ED04;
L_0897ED04:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897ED30;
      }
      goto L_0897ED28;
    }
L_0897ED28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897ED80;
      }
      goto L_0897ED30;
    }
L_0897ED30:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897ED60;
    }
    goto L_0897ED4C;
L_0897ED4C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897ED80;
      }
      goto L_0897ED60;
    }
L_0897ED60:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ED80;
      }
      goto L_0897ED7C;
    }
L_0897ED7C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897ED80;
L_0897ED80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897ED88;
    }
L_0897ED88:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897EDA4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EDA4u) goto L_0897EDA4;
    return;
L_0897EDA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x0897EDCCu);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0897EDCCu) goto L_0897EDCC;
    return;
L_0897EDCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7196), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7196));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897EDFC;
    }
L_0897EDFC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897EE18u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EE18u) goto L_0897EE18;
    return;
L_0897EE18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x0897EE40u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0897EE40u) goto L_0897EE40;
    return;
L_0897EE40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7192), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7192));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897EE70;
    }
L_0897EE70:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897EE88u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EE88u) goto L_0897EE88;
    return;
L_0897EE88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897EE98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0897EE98u) goto L_0897EE98;
    return;
L_0897EE98:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0897EEACu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 210u, 0x08A29388u>(ctx, &aot_mem) && ctx.pc == 0x0897EEACu) goto L_0897EEAC;
    return;
L_0897EEAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897EEC0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EEC0u) goto L_0897EEC0;
    return;
L_0897EEC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897EEC8;
    }
L_0897EEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897EEE0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x0897EEE0u) goto L_0897EEE0;
    return;
L_0897EEE0:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31728)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897EF14;
      }
      goto L_0897EEF0;
    }
L_0897EEF0:
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(31728), ctx.gpr[4]);
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(31744));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(31744), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897EF14;
L_0897EF14:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0897EF30u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EF30u) goto L_0897EF30;
    return;
L_0897EF30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897EF6C;
      }
      goto L_0897EF5C;
    }
L_0897EF5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x0897EF68u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x0897EF68u) goto L_0897EF68;
    return;
L_0897EF68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0897EF6C;
L_0897EF6C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0897EF88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31744));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 563u, 0x0892751Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EF88u) goto L_0897EF88;
    return;
L_0897EF88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EFA4;
      }
      goto L_0897EF90;
    }
L_0897EF90:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897EFA4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 299u, 0x08825D78u>(ctx, &aot_mem) && ctx.pc == 0x0897EFA4u) goto L_0897EFA4;
    return;
L_0897EFA4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 255u);
    ctx.gpr[11] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[31] = (0x0897F014u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x0897F014u) goto L_0897F014;
    return;
L_0897F014:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31744));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F02C;
    }
L_0897F02C:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27872)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27872));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-2992), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897F064u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0897F064u) goto L_0897F064;
    return;
L_0897F064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F06C;
    }
L_0897F06C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7376), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897F0B8;
    }
    goto L_0897F088;
L_0897F088:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0897F094u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0897F094u) goto L_0897F094;
    return;
L_0897F094:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F0AC;
      }
      goto L_0897F0A0;
    }
L_0897F0A0:
    ctx.gpr[31] = (0x0897F0A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0897F0A8u) goto L_0897F0A8;
    return;
L_0897F0A8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0897F0AC;
L_0897F0AC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0897F0B8;
L_0897F0B8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0897F0D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0897F0D0u) goto L_0897F0D0;
    return;
L_0897F0D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0897F0F0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x0897F0F0u) goto L_0897F0F0;
    return;
L_0897F0F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F0F8;
    }
L_0897F0F8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7376), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897F144;
    }
    goto L_0897F114;
L_0897F114:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0897F120u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0897F120u) goto L_0897F120;
    return;
L_0897F120:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F138;
      }
      goto L_0897F12C;
    }
L_0897F12C:
    ctx.gpr[31] = (0x0897F134u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0897F134u) goto L_0897F134;
    return;
L_0897F134:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0897F138;
L_0897F138:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0897F144;
L_0897F144:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0897F15Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0897F15Cu) goto L_0897F15C;
    return;
L_0897F15C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F17Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x0897F17Cu) goto L_0897F17C;
    return;
L_0897F17C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F184;
    }
L_0897F184:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F19Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F19Cu) goto L_0897F19C;
    return;
L_0897F19C:
    ctx.gpr[31] = (0x0897F1A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 689u, 0x0896F588u>(ctx, &aot_mem) && ctx.pc == 0x0897F1A4u) goto L_0897F1A4;
    return;
L_0897F1A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F1AC;
    }
L_0897F1AC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897F1C8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F1C8u) goto L_0897F1C8;
    return;
L_0897F1C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897F1D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0897F1D8u) goto L_0897F1D8;
    return;
L_0897F1D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2044), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F1F4;
    }
L_0897F1F4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897F210u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F210u) goto L_0897F210;
    return;
L_0897F210:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897F220u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0897F220u) goto L_0897F220;
    return;
L_0897F220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1220), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F230;
    }
L_0897F230:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897F24Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F24Cu) goto L_0897F24C;
    return;
L_0897F24C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897F25Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0897F25Cu) goto L_0897F25C;
    return;
L_0897F25C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1224), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F26C;
    }
L_0897F26C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F284u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F284u) goto L_0897F284;
    return;
L_0897F284:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897F294u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0897F294u) goto L_0897F294;
    return;
L_0897F294:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897F2A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0897F2A0u) goto L_0897F2A0;
    return;
L_0897F2A0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897F2BC;
      }
      goto L_0897F2AC;
    }
L_0897F2AC:
    ctx.gpr[4] = (15969u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897F2BC;
L_0897F2BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F2C4;
    }
L_0897F2C4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F2DCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F2DCu) goto L_0897F2DC;
    return;
L_0897F2DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6844), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F2F0;
    }
L_0897F2F0:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897F308u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F308u) goto L_0897F308;
    return;
L_0897F308:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0897F324;
      }
      goto L_0897F318;
    }
L_0897F318:
    ctx.gpr[31] = (0x0897F320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x0897F320u) goto L_0897F320;
    return;
L_0897F320:
    ctx.gpr[4] = (2269u << 16u);
    goto L_0897F324;
L_0897F324:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0897F344u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 46u, 0x08950380u>(ctx, &aot_mem) && ctx.pc == 0x0897F344u) goto L_0897F344;
    return;
L_0897F344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F34C;
    }
L_0897F34C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0897F368;
      }
      goto L_0897F35C;
    }
L_0897F35C:
    ctx.gpr[31] = (0x0897F364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x0897F364u) goto L_0897F364;
    return;
L_0897F364:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0897F368;
L_0897F368:
    ctx.gpr[31] = (0x0897F370u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 51u, 0x089503F4u>(ctx, &aot_mem) && ctx.pc == 0x0897F370u) goto L_0897F370;
    return;
L_0897F370:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897F394;
      }
      goto L_0897F38C;
    }
L_0897F38C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897F3E4;
      }
      goto L_0897F394;
    }
L_0897F394:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897F3C4;
    }
    goto L_0897F3B0;
L_0897F3B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897F3E4;
      }
      goto L_0897F3C4;
    }
L_0897F3C4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F3E4;
      }
      goto L_0897F3E0;
    }
L_0897F3E0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897F3E4;
L_0897F3E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F3EC;
    }
L_0897F3EC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0897F408;
      }
      goto L_0897F3FC;
    }
L_0897F3FC:
    ctx.gpr[31] = (0x0897F404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x0897F404u) goto L_0897F404;
    return;
L_0897F404:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0897F408;
L_0897F408:
    ctx.gpr[31] = (0x0897F410u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 67u, 0x089504D0u>(ctx, &aot_mem) && ctx.pc == 0x0897F410u) goto L_0897F410;
    return;
L_0897F410:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897F434;
      }
      goto L_0897F42C;
    }
L_0897F42C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897F484;
      }
      goto L_0897F434;
    }
L_0897F434:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897F464;
    }
    goto L_0897F450;
L_0897F450:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897F484;
      }
      goto L_0897F464;
    }
L_0897F464:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F484;
      }
      goto L_0897F480;
    }
L_0897F480:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897F484;
L_0897F484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F48C;
    }
L_0897F48C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0897F4A8;
      }
      goto L_0897F49C;
    }
L_0897F49C:
    ctx.gpr[31] = (0x0897F4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x0897F4A4u) goto L_0897F4A4;
    return;
L_0897F4A4:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0897F4A8;
L_0897F4A8:
    ctx.gpr[31] = (0x0897F4B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 565u, 0x089530DCu>(ctx, &aot_mem) && ctx.pc == 0x0897F4B0u) goto L_0897F4B0;
    return;
L_0897F4B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F4B8;
    }
L_0897F4B8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897F4D4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F4D4u) goto L_0897F4D4;
    return;
L_0897F4D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897F4E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0897F4E4u) goto L_0897F4E4;
    return;
L_0897F4E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F50C;
    }
L_0897F50C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F524u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F524u) goto L_0897F524;
    return;
L_0897F524:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7576)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0897F544;
      }
      goto L_0897F540;
    }
L_0897F540:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7576)));
    goto L_0897F544;
L_0897F544:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F554;
    }
L_0897F554:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F56Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F56Cu) goto L_0897F56C;
    return;
L_0897F56C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7704)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0897F590;
      }
      goto L_0897F584;
    }
L_0897F584:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7704)));
      if (branch_taken) {
          goto L_0897F594;
      }
      goto L_0897F590;
    }
L_0897F590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    goto L_0897F594;
L_0897F594:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7704), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F5A4;
    }
L_0897F5A4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F5BCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F5BCu) goto L_0897F5BC;
    return;
L_0897F5BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7700)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0897F5E0;
      }
      goto L_0897F5D4;
    }
L_0897F5D4:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7700)));
      if (branch_taken) {
          goto L_0897F5E4;
      }
      goto L_0897F5E0;
    }
L_0897F5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    goto L_0897F5E4;
L_0897F5E4:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7700), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F5F4;
    }
L_0897F5F4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F60Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F60Cu) goto L_0897F60C;
    return;
L_0897F60C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7492)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0897F630;
      }
      goto L_0897F624;
    }
L_0897F624:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7492)));
      if (branch_taken) {
          goto L_0897F634;
      }
      goto L_0897F630;
    }
L_0897F630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    goto L_0897F634;
L_0897F634:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7492), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F644;
    }
L_0897F644:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F65Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F65Cu) goto L_0897F65C;
    return;
L_0897F65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7488)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7488), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F678;
    }
L_0897F678:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F690u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F690u) goto L_0897F690;
    return;
L_0897F690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7484)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7484), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897F6B0;
      }
      goto L_0897F6AC;
    }
L_0897F6AC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0897F6B0;
L_0897F6B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F6D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26780)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26784)));
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[6] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26776), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2228u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26756)));
    ctx.gpr[3] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26744)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26748)));
    ctx.gpr[24] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-26740), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26732), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2228u << 16u);
    ctx.gpr[12] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-26768), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-26772), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2228u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-26764), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[15] = (2228u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26760), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-26752), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[25] = (2228u << 16u);
    ctx.gpr[2] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-26736), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26728), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F7C8:
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
L_0897F7F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F848;
      }
      goto L_0897F814;
    }
L_0897F814:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_0897F81C;
L_0897F81C:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_0897F83C;
    }
    goto L_0897F82C;
L_0897F82C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897F840;
      }
      goto L_0897F83C;
    }
L_0897F83C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0897F840;
L_0897F840:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_0897F81C;
    }
    goto L_0897F848;
L_0897F848:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_0897F86C;
    }
    goto L_0897F850;
L_0897F850:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
        goto L_0897F870;
    }
    goto L_0897F868;
L_0897F868:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_0897F86C;
L_0897F86C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_0897F870;
L_0897F870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F8A8;
      }
      goto L_0897F8A0;
    }
L_0897F8A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F8AC;
      }
      goto L_0897F8A8;
    }
L_0897F8A8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_0897F8AC;
L_0897F8AC:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F8B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897F8C8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 391u, 0x0882B6D8u>(ctx, &aot_mem) && ctx.pc == 0x0897F8C8u) goto L_0897F8C8;
    return;
L_0897F8C8:
    ctx.gpr[4] = (0u | 65535u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(344), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(345), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F918:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897F934u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 393u, 0x0882B754u>(ctx, &aot_mem) && ctx.pc == 0x0897F934u) goto L_0897F934;
    return;
L_0897F934:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(182), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[31] = (0x0897F998u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 435u, 0x0892EB24u>(ctx, &aot_mem) && ctx.pc == 0x0897F998u) goto L_0897F998;
    return;
L_0897F998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 21u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 28u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1914)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(664))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(325)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(344), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(345), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0897FA18u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_0897FB4C;
L_0897FA18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(214)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FA30;
      }
      goto L_0897FA24;
    }
L_0897FA24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0897FA30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897FB4C;
L_0897FA30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1084)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897FA48;
      }
      goto L_0897FA3C;
    }
L_0897FA3C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0897FA48u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1088));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x0897FA48u) goto L_0897FA48;
    return;
L_0897FA48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FB2C;
      }
      goto L_0897FA54;
    }
L_0897FA54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FAAC;
      }
      goto L_0897FA78;
    }
L_0897FA78:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_0897FA80;
L_0897FA80:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_0897FAA0;
    }
    goto L_0897FA90;
L_0897FA90:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897FAA4;
      }
      goto L_0897FAA0;
    }
L_0897FAA0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_0897FAA4;
L_0897FAA4:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_0897FA80;
    }
    goto L_0897FAAC;
L_0897FAAC:
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_0897FAD0;
    }
    goto L_0897FAB4;
L_0897FAB4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
        goto L_0897FAD4;
    }
    goto L_0897FACC;
L_0897FACC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0897FAD0;
L_0897FAD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_0897FAD4;
L_0897FAD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
        goto L_0897FB0C;
    }
    goto L_0897FB04;
L_0897FB04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0897FB0C;
      }
      goto L_0897FB0C;
    }
L_0897FB0C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FB2C;
      }
      goto L_0897FB14;
    }
L_0897FB14:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0897FB20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0897F7F4;
L_0897FB20:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897FB34;
      }
      goto L_0897FB2C;
    }
L_0897FB2C:
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0897FB34;
L_0897FB34:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FB4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27512)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[20] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-23920));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    goto L_0897FBB4;
L_0897FBB4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_0897FC70;
      }
      goto L_0897FBBC;
    }
L_0897FBBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC70;
      }
      goto L_0897FBC4;
    }
L_0897FBC4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_0897FBE0;
    }
    goto L_0897FBD4;
L_0897FBD4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897FC68;
      }
      goto L_0897FBE0;
    }
L_0897FBE0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(50))))));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(232), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(234), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897FC34;
      }
      goto L_0897FC24;
    }
L_0897FC24:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897FC5C;
      }
      goto L_0897FC34;
    }
L_0897FC34:
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(232))))));
    ctx.gpr[31] = (0x0897FC40u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(234))))));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x0897FC40u) goto L_0897FC40;
    return;
L_0897FC40:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897FC5Cu);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    goto L_0897F7C8;
L_0897FC5C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_0897FC68;
L_0897FC68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FBB4;
      }
      goto L_0897FC70;
    }
L_0897FC70:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FCBC;
      }
      goto L_0897FC80;
    }
L_0897FC80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_0897FCA0;
    }
    goto L_0897FC90;
L_0897FC90:
    ctx.gpr[31] = (0x0897FC98u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 870u, 0x088B3F48u>(ctx, &aot_mem) && ctx.pc == 0x0897FC98u) goto L_0897FC98;
    return;
L_0897FC98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0897FCA0;
      }
      goto L_0897FCA0;
    }
L_0897FCA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FCB0;
      }
      goto L_0897FCA8;
    }
L_0897FCA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897FCB4;
      }
      goto L_0897FCB0;
    }
L_0897FCB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0897FCB4;
L_0897FCB4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC80;
      }
      goto L_0897FCBC;
    }
L_0897FCBC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FCF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897FD14u);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 395u, 0x0882B7D8u>(ctx, &aot_mem) && ctx.pc == 0x0897FD14u) goto L_0897FD14;
    return;
L_0897FD14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FD1C;
    }
L_0897FD1C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FD2C;
    }
L_0897FD2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FD3C;
    }
L_0897FD3C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(178)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FD4C;
    }
L_0897FD4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FD5C;
    }
L_0897FD5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(181)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(181)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FD6C;
    }
L_0897FD6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(182)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(182)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FD7C;
    }
L_0897FD7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(183)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(183)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FD8C;
    }
L_0897FD8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(345)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(345)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FD9C;
    }
L_0897FD9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FDB4;
    }
L_0897FDB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FDCC;
    }
L_0897FDCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(214)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FDDC;
    }
L_0897FDDC:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(216));
    ctx.gpr[31] = (0x0897FDF4u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 385u, 0x08AED584u>(ctx, &aot_mem) && ctx.pc == 0x0897FDF4u) goto L_0897FDF4;
    return;
L_0897FDF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FDFC;
    }
L_0897FDFC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(342)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(342)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FE0C;
    }
L_0897FE0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(344)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(344)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FE20;
      }
      goto L_0897FE1C;
    }
L_0897FE1C:
    ctx.gpr[18] = (0u | 1u);
    goto L_0897FE20;
L_0897FE20:
    ctx.gpr[2] = (ctx.gpr[18] & 255u);
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
L_0897FE3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897FE68u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 200u, 0x08A49ACCu>(ctx, &aot_mem) && ctx.pc == 0x0897FE68u) goto L_0897FE68;
    return;
L_0897FE68:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17236));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26684)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26684), ctx.gpr[5]);
    ctx.gpr[31] = (0x0897FEA8u);
    ctx.gpr[4] = (0u | 416u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0897FEA8u) goto L_0897FEA8;
    return;
L_0897FEA8:
    ctx.gpr[18] = (2276u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28216));
      if (branch_taken) {
          goto L_0897FEC8;
      }
      goto L_0897FEB8;
    }
L_0897FEB8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0897FEC4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 295u, 0x08981988u>(ctx, &aot_mem) && ctx.pc == 0x0897FEC4u) goto L_0897FEC4;
    return;
L_0897FEC4:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    goto L_0897FEC8;
L_0897FEC8:
    ctx.gpr[4] = (17036u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17096u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897FF34;
      }
      goto L_0897FF18;
    }
L_0897FF18:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0897FF2C;
      }
      goto L_0897FF20;
    }
L_0897FF20:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_0897FF2C;
L_0897FF2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 7u, 0x08980040u>(ctx, &aot_mem); return;
      }
      goto L_0897FF34;
    }
L_0897FF34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28216)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897FF74;
      }
      goto L_0897FF64;
    }
L_0897FF64:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0897FF80;
      }
      goto L_0897FF74;
    }
L_0897FF74:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[20]);
    goto L_0897FF80;
L_0897FF80:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0897FFC0;
      }
      goto L_0897FF88;
    }
L_0897FF88:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x0897FF9Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x0897FF9Cu) goto L_0897FF9C;
    return;
L_0897FF9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0897FFC0;
      }
      goto L_0897FFAC;
    }
L_0897FFAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x0897FFB8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x0897FFB8u) goto L_0897FFB8;
    return;
L_0897FFB8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_0897FFC0;
L_0897FFC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28216)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897FFD4;
      }
      goto L_0897FFCC;
    }
L_0897FFCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0897FFF0;
      }
      goto L_0897FFD4;
    }
L_0897FFD4:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0897FFE8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x0897FFE8u) goto L_0897FFE8;
    return;
L_0897FFE8:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0897FFF0;
L_0897FFF0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 4u, 0x08980018u>(ctx, &aot_mem); return;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 2u, 0x08980004u>(ctx, &aot_mem); return;
}

void recomp_unit_0094(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0094_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_94(Runtime &runtime) {
    runtime.register_generated_unit(94u, 0x0897C000u, 16384u, &recomp_unit_0094, &recomp_unit_0094_entry);
    runtime.register_function(0x0897C004u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C020u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C02Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C034u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C038u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C048u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C054u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C05Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C060u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C078u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C080u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C0B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C0D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C22Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C240u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C248u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C250u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C258u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C26Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C2BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C30Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C314u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C31Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C32Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C334u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C33Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C34Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C354u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C418u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C424u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C428u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C438u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C448u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C450u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C460u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C46Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C470u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C49Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C548u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C550u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C55Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C568u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C574u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C580u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C58Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C598u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C620u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C62Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C650u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C674u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C698u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C764u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C814u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C85Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C91Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C94Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C968u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C980u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C988u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C990u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CECCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D000u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D014u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D030u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D038u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D054u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D064u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D06Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D080u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D09Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D104u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D124u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D12Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D134u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D13Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D144u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D164u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D16Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D214u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D220u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D228u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D230u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D238u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D240u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D248u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D250u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D258u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D260u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D274u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D284u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D28Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D294u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D29Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D314u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D330u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D340u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D37Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D41Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D424u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D440u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D454u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D470u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D474u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D47Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D494u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D510u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D528u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D544u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D55Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D574u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D58Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D594u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D59Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D604u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D61Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D62Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D660u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D670u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D684u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D698u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D710u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D714u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D768u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D780u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D79Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D800u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D818u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D820u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D828u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D844u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D850u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D858u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D874u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D880u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D888u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D900u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D918u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D920u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D928u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D940u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D95Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D968u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D970u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D98Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D998u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DACCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E00Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E024u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E03Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E058u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E06Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E084u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E09Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E0B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E0CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E0D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E0FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E104u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E120u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E130u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E190u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E218u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E22Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E248u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E24Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E254u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E26Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E27Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E300u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E30Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E318u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E338u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E348u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E350u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E360u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E368u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E380u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E38Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E40Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E420u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E428u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E434u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E450u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E458u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E484u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E48Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E494u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E504u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E524u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E52Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E53Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E540u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E548u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E560u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E568u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E574u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E584u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E588u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E600u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E604u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E60Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E61Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E628u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E634u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E63Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E640u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E64Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E664u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E690u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E70Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E728u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E72Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E734u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E744u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E760u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E768u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E774u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E78Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E804u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E80Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E814u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E83Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E844u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E85Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E864u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E86Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E888u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E894u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E90Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E934u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E93Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E954u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E95Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E964u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E980u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E98Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E994u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EADCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECD0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F014u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F02Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F064u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F06Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F088u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F094u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F114u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F120u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F12Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F134u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F138u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F144u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F15Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F17Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F184u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F19Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F210u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F220u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F230u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F24Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F25Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F26Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F284u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F294u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F308u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F318u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F320u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F324u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F344u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F34Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F35Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F364u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F368u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F370u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F38Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F394u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F404u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F408u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F410u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F42Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F434u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F450u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F464u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F480u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F484u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F48Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F49Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F50Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F524u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F540u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F544u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F554u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F56Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F584u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F590u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F594u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F60Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F624u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F630u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F634u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F644u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F65Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F678u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F690u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F6D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F814u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F81Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F82Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F83Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F840u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F848u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F850u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F868u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F86Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F870u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F918u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F934u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F998u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FAA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FAA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FAACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FAB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FACCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FAD0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FAD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FDB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FDCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FDDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FDF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FDFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFF0u, &recomp_unit_0094, "recomp_unit_0094");
}
} // namespace psprecomp
