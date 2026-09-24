#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0070[4082] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 9, 0, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 22, 0, 0, 0, 23, 0, 24,
    25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39,
    0, 40, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 54, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 82, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 89, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0,
    0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100,
    0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 120, 0, 0, 0, 121, 0, 0, 0, 122, 123, 0, 124, 0, 0, 0, 125,
    0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0,
    133, 0, 0, 134, 0, 135, 0, 0, 0, 136, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0,
    0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0,
    150, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 176,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0,
    0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 198, 0, 199, 0, 200, 0, 201, 0, 0, 0,
    0, 202, 0, 203, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 218, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232,
    0, 233, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 244, 0, 245, 0, 0,
    246, 0, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253,
    254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 261, 0,
    0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0,
    267, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 286, 0, 287,
    0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    0, 301, 0, 302, 0, 303, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 0, 0, 0,
    312, 0, 313, 0, 314, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0,
    321, 0, 322, 0, 323, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 336,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0,
    346, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0,
    0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 366, 0, 367, 0,
    368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 372, 0, 0, 0, 0, 373, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0,
    0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 391, 392, 0, 0, 0, 0,
    0, 393, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 396, 0, 0, 397, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0,
    406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412,
    0, 0, 0, 413, 0, 0, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0,
    0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 428, 0, 0, 0, 429,
    0, 430, 0, 431, 0, 432, 0, 433, 0, 0, 434, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 447, 0, 448, 0, 449, 0, 450, 0, 451, 0, 452, 0, 453, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 456, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 460, 0, 0, 0,
    0, 461, 0, 462, 0, 0, 463, 0, 0, 0, 464, 465, 0, 0, 0, 466, 0, 467, 0, 468, 0, 469, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0,
    0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 478, 0,
    479, 0, 480, 0, 481, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486,
    0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 490, 0, 491, 0, 0, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 499, 0, 500, 0, 501, 0, 502, 0,
    503, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 508, 0, 0, 509, 0, 0, 0, 510, 0, 0,
    0, 511, 512, 0, 0, 0, 0, 513, 0, 514, 0, 0, 515, 0, 0, 0, 516, 517, 0, 0, 0, 518, 0, 519, 0, 520, 0, 521, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 524, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0,
    0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0,
    0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 543, 0, 544, 0, 545, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0,
    0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 0, 555, 0, 556, 0, 557, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 562, 0, 0,
    563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 569, 0, 570, 0, 571, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0,
    576, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0,
    0, 580, 0, 0, 581, 582, 0, 583, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 590, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 595, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 601, 0, 602, 0, 0, 603, 604, 0, 605, 0, 0, 606, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 0,
    610, 0, 611, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 616, 0, 617, 0, 618, 0,
    0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 0,
    624, 0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 629, 0, 0, 630, 0, 631, 0, 0, 0, 632, 0, 633, 0, 634,
    0, 635, 0, 0, 636, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0,
    0, 641, 0, 642, 0, 643, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 647, 0, 648, 0, 0, 0, 649, 0, 650, 0,
    651, 0, 652, 0, 0, 0, 653, 0, 654, 0, 0, 655, 0, 656, 0, 657, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0,
    660, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0,
    667, 0, 668, 0, 669, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 674, 0, 0, 0, 675, 676, 0, 677, 0,
    0, 678, 0, 0, 0, 679, 0, 680, 0, 0, 681, 0, 682, 0, 683, 0, 684, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0,
    0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0,
    695, 696, 0, 0, 697, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0,
    0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 705, 706, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0,
    710, 0, 0, 0, 0, 711, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0,
    0, 0, 717, 0, 718, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0,
    724, 0, 725, 0, 726, 0, 727, 0, 728, 0, 0, 729, 0, 730, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0,
    0, 0, 734, 0, 735, 0, 736, 0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 745, 0, 0, 0,
    0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0,
    750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 0, 0, 754,
    0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 758, 0, 759, 0, 0, 760, 0, 761, 0,
    0, 0, 0, 0, 762, 0, 0, 763, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 0, 767, 0, 0, 0, 768, 0, 769, 0,
    0, 770, 0, 771, 0, 0, 772, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 775, 0, 776, 0, 0, 0, 0,
    777, 0, 0, 0, 778, 0, 0, 779, 0, 0, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0, 784, 0, 785, 0, 786, 0, 0, 787, 0, 788, 0, 789,
    0, 0, 790, 0, 791, 0, 0, 792, 0, 0, 0, 0, 0, 0, 793, 0, 794, 0, 795, 0, 0, 796, 0, 797, 0, 0, 798, 0, 799, 0, 0, 800,
    0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 804, 0, 805, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 808, 0, 809, 810, 0, 0, 811, 0,
    0, 812, 0, 813, 0, 0, 0, 814, 0, 815, 816, 0, 817, 0, 0, 0, 818, 0, 819, 0, 820, 0, 821, 0, 0, 822, 0, 0, 0, 0, 0, 0,
    823, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0,
    0, 0, 0, 0, 827, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 832, 0, 0,
    0, 833, 0, 0, 834, 0, 835, 0, 0, 0, 836, 0, 0, 0, 0, 0, 837, 0, 0, 838, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 840,
    0, 0, 841, 0, 0, 0, 842, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 844,
};
void recomp_unit_0070_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0891C000u;
        entry_id = (entry_delta < 16328u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0070[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0891C000;
    case 2u: goto L_0891C008;
    case 3u: goto L_0891C014;
    case 4u: goto L_0891C024;
    case 5u: goto L_0891C034;
    case 6u: goto L_0891C044;
    case 7u: goto L_0891C054;
    case 8u: goto L_0891C068;
    case 9u: goto L_0891C06C;
    case 10u: goto L_0891C074;
    case 11u: goto L_0891C09C;
    case 12u: goto L_0891C0B4;
    case 13u: goto L_0891C0C0;
    case 14u: goto L_0891C0D0;
    case 15u: goto L_0891C0D8;
    case 16u: goto L_0891C0E0;
    case 17u: goto L_0891C0F4;
    case 18u: goto L_0891C100;
    case 19u: goto L_0891C124;
    case 20u: goto L_0891C14C;
    case 21u: goto L_0891C160;
    case 22u: goto L_0891C164;
    case 23u: goto L_0891C174;
    case 24u: goto L_0891C17C;
    case 25u: goto L_0891C180;
    case 26u: goto L_0891C194;
    case 27u: goto L_0891C1A8;
    case 28u: goto L_0891C1B4;
    case 29u: goto L_0891C1C4;
    case 30u: goto L_0891C1CC;
    case 31u: goto L_0891C1D4;
    case 32u: goto L_0891C1E8;
    case 33u: goto L_0891C1F4;
    case 34u: goto L_0891C218;
    case 35u: goto L_0891C23C;
    case 36u: goto L_0891C254;
    case 37u: goto L_0891C264;
    case 38u: goto L_0891C26C;
    case 39u: goto L_0891C27C;
    case 40u: goto L_0891C284;
    case 41u: goto L_0891C29C;
    case 42u: goto L_0891C2A4;
    case 43u: goto L_0891C2B4;
    case 44u: goto L_0891C2BC;
    case 45u: goto L_0891C2CC;
    case 46u: goto L_0891C2D4;
    case 47u: goto L_0891C2F0;
    case 48u: goto L_0891C2F8;
    case 49u: goto L_0891C314;
    case 50u: goto L_0891C320;
    case 51u: goto L_0891C350;
    case 52u: goto L_0891C360;
    case 53u: goto L_0891C374;
    case 54u: goto L_0891C38C;
    case 55u: goto L_0891C390;
    case 56u: goto L_0891C398;
    case 57u: goto L_0891C3B8;
    case 58u: goto L_0891C3F0;
    case 59u: goto L_0891C404;
    case 60u: goto L_0891C42C;
    case 61u: goto L_0891C448;
    case 62u: goto L_0891C48C;
    case 63u: goto L_0891C494;
    case 64u: goto L_0891C4AC;
    case 65u: goto L_0891C4B0;
    case 66u: goto L_0891C4C0;
    case 67u: goto L_0891C4D8;
    case 68u: goto L_0891C4EC;
    case 69u: goto L_0891C514;
    case 70u: goto L_0891C540;
    case 71u: goto L_0891C550;
    case 72u: goto L_0891C554;
    case 73u: goto L_0891C55C;
    case 74u: goto L_0891C5AC;
    case 75u: goto L_0891C5C0;
    case 76u: goto L_0891C5FC;
    case 77u: goto L_0891C600;
    case 78u: goto L_0891C650;
    case 79u: goto L_0891C660;
    case 80u: goto L_0891C688;
    case 81u: goto L_0891C6A4;
    case 82u: goto L_0891C6A8;
    case 83u: goto L_0891C6BC;
    case 84u: goto L_0891C6C8;
    case 85u: goto L_0891C6DC;
    case 86u: goto L_0891C6F0;
    case 87u: goto L_0891C720;
    case 88u: goto L_0891C734;
    case 89u: goto L_0891C73C;
    case 90u: goto L_0891C740;
    case 91u: goto L_0891C750;
    case 92u: goto L_0891C764;
    case 93u: goto L_0891C76C;
    case 94u: goto L_0891C778;
    case 95u: goto L_0891C784;
    case 96u: goto L_0891C794;
    case 97u: goto L_0891C79C;
    case 98u: goto L_0891C7B4;
    case 99u: goto L_0891C7F4;
    case 100u: goto L_0891C7FC;
    case 101u: goto L_0891C804;
    case 102u: goto L_0891C80C;
    case 103u: goto L_0891C820;
    case 104u: goto L_0891C82C;
    case 105u: goto L_0891C834;
    case 106u: goto L_0891C83C;
    case 107u: goto L_0891C844;
    case 108u: goto L_0891C84C;
    case 109u: goto L_0891C854;
    case 110u: goto L_0891C85C;
    case 111u: goto L_0891C878;
    case 112u: goto L_0891C890;
    case 113u: goto L_0891C8A0;
    case 114u: goto L_0891C8AC;
    case 115u: goto L_0891C8B4;
    case 116u: goto L_0891C8C8;
    case 117u: goto L_0891C8E8;
    case 118u: goto L_0891C930;
    case 119u: goto L_0891C93C;
    case 120u: goto L_0891C940;
    case 121u: goto L_0891C950;
    case 122u: goto L_0891C960;
    case 123u: goto L_0891C964;
    case 124u: goto L_0891C96C;
    case 125u: goto L_0891C97C;
    case 126u: goto L_0891C98C;
    case 127u: goto L_0891C9A0;
    case 128u: goto L_0891C9B0;
    case 129u: goto L_0891C9E0;
    case 130u: goto L_0891C9E8;
    case 131u: goto L_0891C9F0;
    case 132u: goto L_0891C9F8;
    case 133u: goto L_0891CA00;
    case 134u: goto L_0891CA0C;
    case 135u: goto L_0891CA14;
    case 136u: goto L_0891CA24;
    case 137u: goto L_0891CA28;
    case 138u: goto L_0891CA40;
    case 139u: goto L_0891CA54;
    case 140u: goto L_0891CA5C;
    case 141u: goto L_0891CA70;
    case 142u: goto L_0891CA88;
    case 143u: goto L_0891CA94;
    case 144u: goto L_0891CAA8;
    case 145u: goto L_0891CAB8;
    case 146u: goto L_0891CACC;
    case 147u: goto L_0891CAD4;
    case 148u: goto L_0891CADC;
    case 149u: goto L_0891CAEC;
    case 150u: goto L_0891CB00;
    case 151u: goto L_0891CB08;
    case 152u: goto L_0891CB10;
    case 153u: goto L_0891CB24;
    case 154u: goto L_0891CB50;
    case 155u: goto L_0891CBA0;
    case 156u: goto L_0891CBE0;
    case 157u: goto L_0891CBE8;
    case 158u: goto L_0891CC10;
    case 159u: goto L_0891CC18;
    case 160u: goto L_0891CC74;
    case 161u: goto L_0891CD10;
    case 162u: goto L_0891CD34;
    case 163u: goto L_0891CD44;
    case 164u: goto L_0891CD60;
    case 165u: goto L_0891CD84;
    case 166u: goto L_0891CDD8;
    case 167u: goto L_0891CDF0;
    case 168u: goto L_0891CE14;
    case 169u: goto L_0891CE60;
    case 170u: goto L_0891CF00;
    case 171u: goto L_0891CF14;
    case 172u: goto L_0891CF34;
    case 173u: goto L_0891CF50;
    case 174u: goto L_0891CF68;
    case 175u: goto L_0891CF74;
    case 176u: goto L_0891CF7C;
    case 177u: goto L_0891CF90;
    case 178u: goto L_0891CFA8;
    case 179u: goto L_0891CFB4;
    case 180u: goto L_0891D044;
    case 181u: goto L_0891D050;
    case 182u: goto L_0891D06C;
    case 183u: goto L_0891D07C;
    case 184u: goto L_0891D0A8;
    case 185u: goto L_0891D104;
    case 186u: goto L_0891D130;
    case 187u: goto L_0891D140;
    case 188u: goto L_0891D150;
    case 189u: goto L_0891D15C;
    case 190u: goto L_0891D170;
    case 191u: goto L_0891D178;
    case 192u: goto L_0891D18C;
    case 193u: goto L_0891D19C;
    case 194u: goto L_0891D1AC;
    case 195u: goto L_0891D1B4;
    case 196u: goto L_0891D1C0;
    case 197u: goto L_0891D1C8;
    case 198u: goto L_0891D1D8;
    case 199u: goto L_0891D1E0;
    case 200u: goto L_0891D1E8;
    case 201u: goto L_0891D1F0;
    case 202u: goto L_0891D204;
    case 203u: goto L_0891D20C;
    case 204u: goto L_0891D210;
    case 205u: goto L_0891D220;
    case 206u: goto L_0891D230;
    case 207u: goto L_0891D25C;
    case 208u: goto L_0891D26C;
    case 209u: goto L_0891D294;
    case 210u: goto L_0891D2A4;
    case 211u: goto L_0891D2C4;
    case 212u: goto L_0891D2D4;
    case 213u: goto L_0891D2E0;
    case 214u: goto L_0891D2E8;
    case 215u: goto L_0891D334;
    case 216u: goto L_0891D33C;
    case 217u: goto L_0891D344;
    case 218u: goto L_0891D348;
    case 219u: goto L_0891D34C;
    case 220u: goto L_0891D390;
    case 221u: goto L_0891D3AC;
    case 222u: goto L_0891D400;
    case 223u: goto L_0891D420;
    case 224u: goto L_0891D438;
    case 225u: goto L_0891D440;
    case 226u: goto L_0891D448;
    case 227u: goto L_0891D450;
    case 228u: goto L_0891D45C;
    case 229u: goto L_0891D464;
    case 230u: goto L_0891D46C;
    case 231u: goto L_0891D474;
    case 232u: goto L_0891D47C;
    case 233u: goto L_0891D484;
    case 234u: goto L_0891D490;
    case 235u: goto L_0891D498;
    case 236u: goto L_0891D4A0;
    case 237u: goto L_0891D4A8;
    case 238u: goto L_0891D4B0;
    case 239u: goto L_0891D4B8;
    case 240u: goto L_0891D4C0;
    case 241u: goto L_0891D4C8;
    case 242u: goto L_0891D4D8;
    case 243u: goto L_0891D4E4;
    case 244u: goto L_0891D4EC;
    case 245u: goto L_0891D4F4;
    case 246u: goto L_0891D500;
    case 247u: goto L_0891D50C;
    case 248u: goto L_0891D518;
    case 249u: goto L_0891D520;
    case 250u: goto L_0891D528;
    case 251u: goto L_0891D540;
    case 252u: goto L_0891D570;
    case 253u: goto L_0891D57C;
    case 254u: goto L_0891D580;
    case 255u: goto L_0891D598;
    case 256u: goto L_0891D5A8;
    case 257u: goto L_0891D5BC;
    case 258u: goto L_0891D5C8;
    case 259u: goto L_0891D5D8;
    case 260u: goto L_0891D5EC;
    case 261u: goto L_0891D5F8;
    case 262u: goto L_0891D608;
    case 263u: goto L_0891D63C;
    case 264u: goto L_0891D648;
    case 265u: goto L_0891D65C;
    case 266u: goto L_0891D674;
    case 267u: goto L_0891D680;
    case 268u: goto L_0891D688;
    case 269u: goto L_0891D690;
    case 270u: goto L_0891D6A4;
    case 271u: goto L_0891D6B8;
    case 272u: goto L_0891D6C4;
    case 273u: goto L_0891D6E0;
    case 274u: goto L_0891D6E8;
    case 275u: goto L_0891D6FC;
    case 276u: goto L_0891D728;
    case 277u: goto L_0891D73C;
    case 278u: goto L_0891D764;
    case 279u: goto L_0891D798;
    case 280u: goto L_0891D7A0;
    case 281u: goto L_0891D7A8;
    case 282u: goto L_0891D7B4;
    case 283u: goto L_0891D7C8;
    case 284u: goto L_0891D7E0;
    case 285u: goto L_0891D7EC;
    case 286u: goto L_0891D7F4;
    case 287u: goto L_0891D7FC;
    case 288u: goto L_0891D810;
    case 289u: goto L_0891D824;
    case 290u: goto L_0891D830;
    case 291u: goto L_0891D848;
    case 292u: goto L_0891D850;
    case 293u: goto L_0891D864;
    case 294u: goto L_0891D890;
    case 295u: goto L_0891D8A4;
    case 296u: goto L_0891D8CC;
    case 297u: goto L_0891D8EC;
    case 298u: goto L_0891D914;
    case 299u: goto L_0891D928;
    case 300u: goto L_0891D96C;
    case 301u: goto L_0891D984;
    case 302u: goto L_0891D98C;
    case 303u: goto L_0891D994;
    case 304u: goto L_0891D9A8;
    case 305u: goto L_0891D9B0;
    case 306u: goto L_0891D9B8;
    case 307u: goto L_0891D9C0;
    case 308u: goto L_0891D9D4;
    case 309u: goto L_0891D9DC;
    case 310u: goto L_0891D9E4;
    case 311u: goto L_0891D9EC;
    case 312u: goto L_0891DA00;
    case 313u: goto L_0891DA08;
    case 314u: goto L_0891DA10;
    case 315u: goto L_0891DA14;
    case 316u: goto L_0891DA20;
    case 317u: goto L_0891DA60;
    case 318u: goto L_0891DA68;
    case 319u: goto L_0891DA70;
    case 320u: goto L_0891DA78;
    case 321u: goto L_0891DA80;
    case 322u: goto L_0891DA88;
    case 323u: goto L_0891DA90;
    case 324u: goto L_0891DA94;
    case 325u: goto L_0891DA9C;
    case 326u: goto L_0891DAE8;
    case 327u: goto L_0891DB00;
    case 328u: goto L_0891DB14;
    case 329u: goto L_0891DB2C;
    case 330u: goto L_0891DB34;
    case 331u: goto L_0891DB3C;
    case 332u: goto L_0891DB6C;
    case 333u: goto L_0891DB9C;
    case 334u: goto L_0891DBC8;
    case 335u: goto L_0891DBF8;
    case 336u: goto L_0891DBFC;
    case 337u: goto L_0891DC10;
    case 338u: goto L_0891DC64;
    case 339u: goto L_0891DC70;
    case 340u: goto L_0891DCA4;
    case 341u: goto L_0891DCAC;
    case 342u: goto L_0891DCC4;
    case 343u: goto L_0891DCD0;
    case 344u: goto L_0891DCE8;
    case 345u: goto L_0891DCF4;
    case 346u: goto L_0891DD00;
    case 347u: goto L_0891DD18;
    case 348u: goto L_0891DD24;
    case 349u: goto L_0891DD3C;
    case 350u: goto L_0891DD48;
    case 351u: goto L_0891DD50;
    case 352u: goto L_0891DD58;
    case 353u: goto L_0891DD84;
    case 354u: goto L_0891DD90;
    case 355u: goto L_0891DDC4;
    case 356u: goto L_0891DDCC;
    case 357u: goto L_0891DDE4;
    case 358u: goto L_0891DDF0;
    case 359u: goto L_0891DE08;
    case 360u: goto L_0891DE14;
    case 361u: goto L_0891DE20;
    case 362u: goto L_0891DE38;
    case 363u: goto L_0891DE44;
    case 364u: goto L_0891DE5C;
    case 365u: goto L_0891DE68;
    case 366u: goto L_0891DE70;
    case 367u: goto L_0891DE78;
    case 368u: goto L_0891DE80;
    case 369u: goto L_0891DE88;
    case 370u: goto L_0891DEBC;
    case 371u: goto L_0891DEC8;
    case 372u: goto L_0891DF0C;
    case 373u: goto L_0891DF20;
    case 374u: goto L_0891DF24;
    case 375u: goto L_0891DF3C;
    case 376u: goto L_0891DF78;
    case 377u: goto L_0891DF90;
    case 378u: goto L_0891DF9C;
    case 379u: goto L_0891DFA8;
    case 380u: goto L_0891DFB4;
    case 381u: goto L_0891DFC0;
    case 382u: goto L_0891DFCC;
    case 383u: goto L_0891DFD8;
    case 384u: goto L_0891DFE0;
    case 385u: goto L_0891DFE8;
    case 386u: goto L_0891E020;
    case 387u: goto L_0891E030;
    case 388u: goto L_0891E040;
    case 389u: goto L_0891E050;
    case 390u: goto L_0891E060;
    case 391u: goto L_0891E068;
    case 392u: goto L_0891E06C;
    case 393u: goto L_0891E084;
    case 394u: goto L_0891E09C;
    case 395u: goto L_0891E0A4;
    case 396u: goto L_0891E0B0;
    case 397u: goto L_0891E0BC;
    case 398u: goto L_0891E0C4;
    case 399u: goto L_0891E0D8;
    case 400u: goto L_0891E0F4;
    case 401u: goto L_0891E12C;
    case 402u: goto L_0891E134;
    case 403u: goto L_0891E140;
    case 404u: goto L_0891E154;
    case 405u: goto L_0891E168;
    case 406u: goto L_0891E180;
    case 407u: goto L_0891E188;
    case 408u: goto L_0891E1A0;
    case 409u: goto L_0891E1B8;
    case 410u: goto L_0891E1CC;
    case 411u: goto L_0891E1EC;
    case 412u: goto L_0891E1FC;
    case 413u: goto L_0891E20C;
    case 414u: goto L_0891E21C;
    case 415u: goto L_0891E224;
    case 416u: goto L_0891E22C;
    case 417u: goto L_0891E234;
    case 418u: goto L_0891E23C;
    case 419u: goto L_0891E244;
    case 420u: goto L_0891E25C;
    case 421u: goto L_0891E274;
    case 422u: goto L_0891E288;
    case 423u: goto L_0891E2A8;
    case 424u: goto L_0891E2B8;
    case 425u: goto L_0891E2C8;
    case 426u: goto L_0891E2D4;
    case 427u: goto L_0891E2E4;
    case 428u: goto L_0891E2EC;
    case 429u: goto L_0891E2FC;
    case 430u: goto L_0891E304;
    case 431u: goto L_0891E30C;
    case 432u: goto L_0891E314;
    case 433u: goto L_0891E31C;
    case 434u: goto L_0891E328;
    case 435u: goto L_0891E330;
    case 436u: goto L_0891E340;
    case 437u: goto L_0891E350;
    case 438u: goto L_0891E358;
    case 439u: goto L_0891E38C;
    case 440u: goto L_0891E3A8;
    case 441u: goto L_0891E3C0;
    case 442u: goto L_0891E3C8;
    case 443u: goto L_0891E3D0;
    case 444u: goto L_0891E3D8;
    case 445u: goto L_0891E40C;
    case 446u: goto L_0891E444;
    case 447u: goto L_0891E448;
    case 448u: goto L_0891E450;
    case 449u: goto L_0891E458;
    case 450u: goto L_0891E460;
    case 451u: goto L_0891E468;
    case 452u: goto L_0891E470;
    case 453u: goto L_0891E478;
    case 454u: goto L_0891E4AC;
    case 455u: goto L_0891E4BC;
    case 456u: goto L_0891E4C0;
    case 457u: goto L_0891E4CC;
    case 458u: goto L_0891E4DC;
    case 459u: goto L_0891E4EC;
    case 460u: goto L_0891E4F0;
    case 461u: goto L_0891E504;
    case 462u: goto L_0891E50C;
    case 463u: goto L_0891E518;
    case 464u: goto L_0891E528;
    case 465u: goto L_0891E52C;
    case 466u: goto L_0891E53C;
    case 467u: goto L_0891E544;
    case 468u: goto L_0891E54C;
    case 469u: goto L_0891E554;
    case 470u: goto L_0891E55C;
    case 471u: goto L_0891E574;
    case 472u: goto L_0891E58C;
    case 473u: goto L_0891E5A0;
    case 474u: goto L_0891E5C0;
    case 475u: goto L_0891E5D0;
    case 476u: goto L_0891E5E0;
    case 477u: goto L_0891E5F0;
    case 478u: goto L_0891E5F8;
    case 479u: goto L_0891E600;
    case 480u: goto L_0891E608;
    case 481u: goto L_0891E610;
    case 482u: goto L_0891E618;
    case 483u: goto L_0891E630;
    case 484u: goto L_0891E648;
    case 485u: goto L_0891E65C;
    case 486u: goto L_0891E67C;
    case 487u: goto L_0891E68C;
    case 488u: goto L_0891E69C;
    case 489u: goto L_0891E6A8;
    case 490u: goto L_0891E6B8;
    case 491u: goto L_0891E6C0;
    case 492u: goto L_0891E6D0;
    case 493u: goto L_0891E6D8;
    case 494u: goto L_0891E6E0;
    case 495u: goto L_0891E6E8;
    case 496u: goto L_0891E6F0;
    case 497u: goto L_0891E724;
    case 498u: goto L_0891E75C;
    case 499u: goto L_0891E760;
    case 500u: goto L_0891E768;
    case 501u: goto L_0891E770;
    case 502u: goto L_0891E778;
    case 503u: goto L_0891E780;
    case 504u: goto L_0891E788;
    case 505u: goto L_0891E790;
    case 506u: goto L_0891E7C4;
    case 507u: goto L_0891E7D4;
    case 508u: goto L_0891E7D8;
    case 509u: goto L_0891E7E4;
    case 510u: goto L_0891E7F4;
    case 511u: goto L_0891E804;
    case 512u: goto L_0891E808;
    case 513u: goto L_0891E81C;
    case 514u: goto L_0891E824;
    case 515u: goto L_0891E830;
    case 516u: goto L_0891E840;
    case 517u: goto L_0891E844;
    case 518u: goto L_0891E854;
    case 519u: goto L_0891E85C;
    case 520u: goto L_0891E864;
    case 521u: goto L_0891E86C;
    case 522u: goto L_0891E8B4;
    case 523u: goto L_0891E8C4;
    case 524u: goto L_0891E8CC;
    case 525u: goto L_0891E8D4;
    case 526u: goto L_0891E91C;
    case 527u: goto L_0891E92C;
    case 528u: goto L_0891E934;
    case 529u: goto L_0891E93C;
    case 530u: goto L_0891E978;
    case 531u: goto L_0891E988;
    case 532u: goto L_0891E9A0;
    case 533u: goto L_0891E9A8;
    case 534u: goto L_0891E9C0;
    case 535u: goto L_0891E9D4;
    case 536u: goto L_0891E9DC;
    case 537u: goto L_0891E9F0;
    case 538u: goto L_0891EA14;
    case 539u: goto L_0891EA24;
    case 540u: goto L_0891EA34;
    case 541u: goto L_0891EA54;
    case 542u: goto L_0891EA5C;
    case 543u: goto L_0891EA68;
    case 544u: goto L_0891EA70;
    case 545u: goto L_0891EA78;
    case 546u: goto L_0891EABC;
    case 547u: goto L_0891EAD0;
    case 548u: goto L_0891EAD8;
    case 549u: goto L_0891EAEC;
    case 550u: goto L_0891EB10;
    case 551u: goto L_0891EB20;
    case 552u: goto L_0891EB30;
    case 553u: goto L_0891EB50;
    case 554u: goto L_0891EB58;
    case 555u: goto L_0891EB64;
    case 556u: goto L_0891EB6C;
    case 557u: goto L_0891EB74;
    case 558u: goto L_0891EBA8;
    case 559u: goto L_0891EBB8;
    case 560u: goto L_0891EBE4;
    case 561u: goto L_0891EBEC;
    case 562u: goto L_0891EBF4;
    case 563u: goto L_0891EC00;
    case 564u: goto L_0891EC08;
    case 565u: goto L_0891EC2C;
    case 566u: goto L_0891EC4C;
    case 567u: goto L_0891EC54;
    case 568u: goto L_0891EC64;
    case 569u: goto L_0891EC90;
    case 570u: goto L_0891EC98;
    case 571u: goto L_0891ECA0;
    case 572u: goto L_0891ECAC;
    case 573u: goto L_0891ECB4;
    case 574u: goto L_0891ECD8;
    case 575u: goto L_0891ECF8;
    case 576u: goto L_0891ED00;
    case 577u: goto L_0891ED0C;
    case 578u: goto L_0891ED64;
    case 579u: goto L_0891ED74;
    case 580u: goto L_0891ED84;
    case 581u: goto L_0891ED90;
    case 582u: goto L_0891ED94;
    case 583u: goto L_0891ED9C;
    case 584u: goto L_0891EDA8;
    case 585u: goto L_0891EDB0;
    case 586u: goto L_0891EE08;
    case 587u: goto L_0891EE18;
    case 588u: goto L_0891EE28;
    case 589u: goto L_0891EE38;
    case 590u: goto L_0891EE40;
    case 591u: goto L_0891EE4C;
    case 592u: goto L_0891EE54;
    case 593u: goto L_0891EE88;
    case 594u: goto L_0891EEA4;
    case 595u: goto L_0891EEA8;
    case 596u: goto L_0891EEB0;
    case 597u: goto L_0891EEBC;
    case 598u: goto L_0891EF14;
    case 599u: goto L_0891EF24;
    case 600u: goto L_0891EF34;
    case 601u: goto L_0891EF44;
    case 602u: goto L_0891EF4C;
    case 603u: goto L_0891EF58;
    case 604u: goto L_0891EF5C;
    case 605u: goto L_0891EF64;
    case 606u: goto L_0891EF70;
    case 607u: goto L_0891EFC8;
    case 608u: goto L_0891EFD8;
    case 609u: goto L_0891EFE8;
    case 610u: goto L_0891F000;
    case 611u: goto L_0891F008;
    case 612u: goto L_0891F00C;
    case 613u: goto L_0891F014;
    case 614u: goto L_0891F058;
    case 615u: goto L_0891F060;
    case 616u: goto L_0891F068;
    case 617u: goto L_0891F070;
    case 618u: goto L_0891F078;
    case 619u: goto L_0891F090;
    case 620u: goto L_0891F0A8;
    case 621u: goto L_0891F0BC;
    case 622u: goto L_0891F0EC;
    case 623u: goto L_0891F0F4;
    case 624u: goto L_0891F100;
    case 625u: goto L_0891F118;
    case 626u: goto L_0891F120;
    case 627u: goto L_0891F130;
    case 628u: goto L_0891F140;
    case 629u: goto L_0891F148;
    case 630u: goto L_0891F154;
    case 631u: goto L_0891F15C;
    case 632u: goto L_0891F16C;
    case 633u: goto L_0891F174;
    case 634u: goto L_0891F17C;
    case 635u: goto L_0891F184;
    case 636u: goto L_0891F190;
    case 637u: goto L_0891F198;
    case 638u: goto L_0891F1A4;
    case 639u: goto L_0891F1BC;
    case 640u: goto L_0891F1F4;
    case 641u: goto L_0891F204;
    case 642u: goto L_0891F20C;
    case 643u: goto L_0891F214;
    case 644u: goto L_0891F220;
    case 645u: goto L_0891F248;
    case 646u: goto L_0891F250;
    case 647u: goto L_0891F258;
    case 648u: goto L_0891F260;
    case 649u: goto L_0891F270;
    case 650u: goto L_0891F278;
    case 651u: goto L_0891F280;
    case 652u: goto L_0891F288;
    case 653u: goto L_0891F298;
    case 654u: goto L_0891F2A0;
    case 655u: goto L_0891F2AC;
    case 656u: goto L_0891F2B4;
    case 657u: goto L_0891F2BC;
    case 658u: goto L_0891F2C4;
    case 659u: goto L_0891F2E8;
    case 660u: goto L_0891F300;
    case 661u: goto L_0891F308;
    case 662u: goto L_0891F32C;
    case 663u: goto L_0891F344;
    case 664u: goto L_0891F34C;
    case 665u: goto L_0891F36C;
    case 666u: goto L_0891F378;
    case 667u: goto L_0891F380;
    case 668u: goto L_0891F388;
    case 669u: goto L_0891F390;
    case 670u: goto L_0891F394;
    case 671u: goto L_0891F3A4;
    case 672u: goto L_0891F3B4;
    case 673u: goto L_0891F3D0;
    case 674u: goto L_0891F3DC;
    case 675u: goto L_0891F3EC;
    case 676u: goto L_0891F3F0;
    case 677u: goto L_0891F3F8;
    case 678u: goto L_0891F404;
    case 679u: goto L_0891F414;
    case 680u: goto L_0891F41C;
    case 681u: goto L_0891F428;
    case 682u: goto L_0891F430;
    case 683u: goto L_0891F438;
    case 684u: goto L_0891F440;
    case 685u: goto L_0891F44C;
    case 686u: goto L_0891F478;
    case 687u: goto L_0891F488;
    case 688u: goto L_0891F49C;
    case 689u: goto L_0891F4A8;
    case 690u: goto L_0891F4B4;
    case 691u: goto L_0891F4C4;
    case 692u: goto L_0891F4D4;
    case 693u: goto L_0891F4E0;
    case 694u: goto L_0891F4F0;
    case 695u: goto L_0891F500;
    case 696u: goto L_0891F504;
    case 697u: goto L_0891F510;
    case 698u: goto L_0891F51C;
    case 699u: goto L_0891F52C;
    case 700u: goto L_0891F548;
    case 701u: goto L_0891F554;
    case 702u: goto L_0891F570;
    case 703u: goto L_0891F58C;
    case 704u: goto L_0891F5A0;
    case 705u: goto L_0891F5B0;
    case 706u: goto L_0891F5B4;
    case 707u: goto L_0891F5C0;
    case 708u: goto L_0891F5D4;
    case 709u: goto L_0891F5E4;
    case 710u: goto L_0891F600;
    case 711u: goto L_0891F614;
    case 712u: goto L_0891F618;
    case 713u: goto L_0891F630;
    case 714u: goto L_0891F640;
    case 715u: goto L_0891F65C;
    case 716u: goto L_0891F678;
    case 717u: goto L_0891F688;
    case 718u: goto L_0891F690;
    case 719u: goto L_0891F698;
    case 720u: goto L_0891F6B4;
    case 721u: goto L_0891F6D0;
    case 722u: goto L_0891F6E0;
    case 723u: goto L_0891F6F0;
    case 724u: goto L_0891F700;
    case 725u: goto L_0891F708;
    case 726u: goto L_0891F710;
    case 727u: goto L_0891F718;
    case 728u: goto L_0891F720;
    case 729u: goto L_0891F72C;
    case 730u: goto L_0891F734;
    case 731u: goto L_0891F754;
    case 732u: goto L_0891F76C;
    case 733u: goto L_0891F778;
    case 734u: goto L_0891F788;
    case 735u: goto L_0891F790;
    case 736u: goto L_0891F798;
    case 737u: goto L_0891F7A0;
    case 738u: goto L_0891F7A8;
    case 739u: goto L_0891F7E4;
    case 740u: goto L_0891F7EC;
    case 741u: goto L_0891F81C;
    case 742u: goto L_0891F824;
    case 743u: goto L_0891F83C;
    case 744u: goto L_0891F864;
    case 745u: goto L_0891F870;
    case 746u: goto L_0891F888;
    case 747u: goto L_0891F8AC;
    case 748u: goto L_0891F8B4;
    case 749u: goto L_0891F8F4;
    case 750u: goto L_0891F900;
    case 751u: goto L_0891F944;
    case 752u: goto L_0891F95C;
    case 753u: goto L_0891F968;
    case 754u: goto L_0891F97C;
    case 755u: goto L_0891F988;
    case 756u: goto L_0891F9CC;
    case 757u: goto L_0891F9D4;
    case 758u: goto L_0891F9DC;
    case 759u: goto L_0891F9E4;
    case 760u: goto L_0891F9F0;
    case 761u: goto L_0891F9F8;
    case 762u: goto L_0891FA10;
    case 763u: goto L_0891FA1C;
    case 764u: goto L_0891FA24;
    case 765u: goto L_0891FA40;
    case 766u: goto L_0891FA48;
    case 767u: goto L_0891FA60;
    case 768u: goto L_0891FA70;
    case 769u: goto L_0891FA78;
    case 770u: goto L_0891FA84;
    case 771u: goto L_0891FA8C;
    case 772u: goto L_0891FA98;
    case 773u: goto L_0891FAA0;
    case 774u: goto L_0891FAD4;
    case 775u: goto L_0891FAE4;
    case 776u: goto L_0891FAEC;
    case 777u: goto L_0891FB00;
    case 778u: goto L_0891FB10;
    case 779u: goto L_0891FB1C;
    case 780u: goto L_0891FB2C;
    case 781u: goto L_0891FB34;
    case 782u: goto L_0891FB40;
    case 783u: goto L_0891FB48;
    case 784u: goto L_0891FB50;
    case 785u: goto L_0891FB58;
    case 786u: goto L_0891FB60;
    case 787u: goto L_0891FB6C;
    case 788u: goto L_0891FB74;
    case 789u: goto L_0891FB7C;
    case 790u: goto L_0891FB88;
    case 791u: goto L_0891FB90;
    case 792u: goto L_0891FB9C;
    case 793u: goto L_0891FBB8;
    case 794u: goto L_0891FBC0;
    case 795u: goto L_0891FBC8;
    case 796u: goto L_0891FBD4;
    case 797u: goto L_0891FBDC;
    case 798u: goto L_0891FBE8;
    case 799u: goto L_0891FBF0;
    case 800u: goto L_0891FBFC;
    case 801u: goto L_0891FC14;
    case 802u: goto L_0891FC3C;
    case 803u: goto L_0891FC90;
    case 804u: goto L_0891FCA8;
    case 805u: goto L_0891FCB0;
    case 806u: goto L_0891FCB8;
    case 807u: goto L_0891FD48;
    case 808u: goto L_0891FD60;
    case 809u: goto L_0891FD68;
    case 810u: goto L_0891FD6C;
    case 811u: goto L_0891FD78;
    case 812u: goto L_0891FD84;
    case 813u: goto L_0891FD8C;
    case 814u: goto L_0891FD9C;
    case 815u: goto L_0891FDA4;
    case 816u: goto L_0891FDA8;
    case 817u: goto L_0891FDB0;
    case 818u: goto L_0891FDC0;
    case 819u: goto L_0891FDC8;
    case 820u: goto L_0891FDD0;
    case 821u: goto L_0891FDD8;
    case 822u: goto L_0891FDE4;
    case 823u: goto L_0891FE00;
    case 824u: goto L_0891FE10;
    case 825u: goto L_0891FE48;
    case 826u: goto L_0891FE70;
    case 827u: goto L_0891FE90;
    case 828u: goto L_0891FEA0;
    case 829u: goto L_0891FEC4;
    case 830u: goto L_0891FED0;
    case 831u: goto L_0891FED8;
    case 832u: goto L_0891FEF4;
    case 833u: goto L_0891FF04;
    case 834u: goto L_0891FF10;
    case 835u: goto L_0891FF18;
    case 836u: goto L_0891FF28;
    case 837u: goto L_0891FF40;
    case 838u: goto L_0891FF4C;
    case 839u: goto L_0891FF60;
    case 840u: goto L_0891FF7C;
    case 841u: goto L_0891FF88;
    case 842u: goto L_0891FF98;
    case 843u: goto L_0891FFAC;
    case 844u: goto L_0891FFC4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0891C000:
    ctx.gpr[31] = (0x0891C008u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 800u, 0x0891BAC8u>(ctx, &aot_mem) && ctx.pc == 0x0891C008u) goto L_0891C008;
    return;
L_0891C008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 860u, 0x0891BF74u>(ctx, &aot_mem); return;
      }
      goto L_0891C014;
    }
L_0891C014:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C024:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0891C044;
      }
      goto L_0891C034;
    }
L_0891C034:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0891C044;
L_0891C044:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0891C068;
      }
      goto L_0891C054;
    }
L_0891C054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C06C;
      }
      goto L_0891C068;
    }
L_0891C068:
    ctx.gpr[2] = (0u | 1u);
    goto L_0891C06C;
L_0891C06C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0891C100;
      }
      goto L_0891C09C;
    }
L_0891C09C:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (ctx.gpr[20] << (ctx.gpr[4] & 31u));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0891C0F4;
      }
      goto L_0891C0B4;
    }
L_0891C0B4:
    ctx.gpr[17] = (ctx.gpr[18] << 4u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_0891C0C0;
L_0891C0C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0891C0D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891C024;
L_0891C0D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C0E0;
      }
      goto L_0891C0D8;
    }
L_0891C0D8:
    ctx.gpr[31] = (0x0891C0E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 797u, 0x0891BAA8u>(ctx, &aot_mem) && ctx.pc == 0x0891C0E0u) goto L_0891C0E0;
    return;
L_0891C0E0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_0891C0C0;
      }
      goto L_0891C0F4;
    }
L_0891C0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C09C;
      }
      goto L_0891C100;
    }
L_0891C100:
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
L_0891C124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0891C1F4;
      }
      goto L_0891C14C;
    }
L_0891C14C:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0891C194;
      }
      goto L_0891C160;
    }
L_0891C160:
    ctx.gpr[21] = (ctx.gpr[17] << 3u);
    goto L_0891C164;
L_0891C164:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[31] = (0x0891C174u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0891C024;
L_0891C174:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C180;
      }
      goto L_0891C17C;
    }
L_0891C17C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_0891C180;
L_0891C180:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0891C164;
      }
      goto L_0891C194;
    }
L_0891C194:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (ctx.gpr[16] << (ctx.gpr[4] & 31u));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0891C1E8;
      }
      goto L_0891C1A8;
    }
L_0891C1A8:
    ctx.gpr[21] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    goto L_0891C1B4;
L_0891C1B4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[31] = (0x0891C1C4u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    goto L_0891C024;
L_0891C1C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C1D4;
      }
      goto L_0891C1CC;
    }
L_0891C1CC:
    ctx.gpr[31] = (0x0891C1D4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 797u, 0x0891BAA8u>(ctx, &aot_mem) && ctx.pc == 0x0891C1D4u) goto L_0891C1D4;
    return;
L_0891C1D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_0891C1B4;
      }
      goto L_0891C1E8;
    }
L_0891C1E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C14C;
      }
      goto L_0891C1F4;
    }
L_0891C1F4:
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
L_0891C218:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0891C314;
      }
      goto L_0891C23C;
    }
L_0891C23C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19312)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C254:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0891C264u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 151u, 0x08878CD4u>(ctx, &aot_mem) && ctx.pc == 0x0891C264u) goto L_0891C264;
    return;
L_0891C264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C314;
      }
      goto L_0891C26C;
    }
L_0891C26C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0891C27Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 159u, 0x08878DA8u>(ctx, &aot_mem) && ctx.pc == 0x0891C27Cu) goto L_0891C27C;
    return;
L_0891C27C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C314;
      }
      goto L_0891C284;
    }
L_0891C284:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x0891C29Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C29Cu) goto L_0891C29C;
    return;
L_0891C29C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C314;
      }
      goto L_0891C2A4;
    }
L_0891C2A4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0891C2B4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 4u, 0x08928050u>(ctx, &aot_mem) && ctx.pc == 0x0891C2B4u) goto L_0891C2B4;
    return;
L_0891C2B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C314;
      }
      goto L_0891C2BC;
    }
L_0891C2BC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0891C2CCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 115u, 0x089FD298u>(ctx, &aot_mem) && ctx.pc == 0x0891C2CCu) goto L_0891C2CC;
    return;
L_0891C2CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C314;
      }
      goto L_0891C2D4;
    }
L_0891C2D4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x0891C2F0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C2F0u) goto L_0891C2F0;
    return;
L_0891C2F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C314;
      }
      goto L_0891C2F8;
    }
L_0891C2F8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0891C314u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C314u) goto L_0891C314;
    return;
L_0891C314:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C320:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0891C398;
      }
      goto L_0891C350;
    }
L_0891C350:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C374;
      }
      goto L_0891C360;
    }
L_0891C360:
    ctx.gpr[5] = (ctx.gpr[5] & 254u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0891C390;
      }
      goto L_0891C374;
    }
L_0891C374:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891C38Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0891C218;
L_0891C38C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0891C390;
L_0891C390:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C350;
      }
      goto L_0891C398;
    }
L_0891C398:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0891C3B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0891C42C;
      }
      goto L_0891C3F0;
    }
L_0891C3F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0891C404u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0891C320;
L_0891C404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891C3F0;
      }
      goto L_0891C42C;
    }
L_0891C42C:
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
L_0891C448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891C4B0;
      }
      goto L_0891C48C;
    }
L_0891C48C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C4B0;
      }
      goto L_0891C494;
    }
L_0891C494:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[31] = (0x0891C4ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 541u, 0x08916FD4u>(ctx, &aot_mem) && ctx.pc == 0x0891C4ACu) goto L_0891C4AC;
    return;
L_0891C4AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_0891C4B0;
L_0891C4B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(65) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C4EC;
      }
      goto L_0891C4C0;
    }
L_0891C4C0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] >> 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891C4D8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 329u, 0x0894DE9Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C4D8u) goto L_0891C4D8;
    return;
L_0891C4D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_0891C4EC;
L_0891C4EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
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
L_0891C514:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0891C554;
      }
      goto L_0891C540;
    }
L_0891C540:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0891C550u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 7u, 0x08AA80E8u>(ctx, &aot_mem) && ctx.pc == 0x0891C550u) goto L_0891C550;
    return;
L_0891C550:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0891C554;
L_0891C554:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C5AC;
      }
      goto L_0891C55C;
    }
L_0891C55C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    ctx.gpr[31] = (0x0891C5ACu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 358u, 0x088B9F94u>(ctx, &aot_mem) && ctx.pc == 0x0891C5ACu) goto L_0891C5AC;
    return;
L_0891C5AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C5C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 7u);
      if (branch_taken) {
          goto L_0891C660;
      }
      goto L_0891C5FC;
    }
L_0891C5FC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_0891C600;
L_0891C600:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 254u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(5)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 253u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0891C650u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0891C514;
L_0891C650:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891C600;
      }
      goto L_0891C660;
    }
L_0891C660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_0891C688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891C6A8;
      }
      goto L_0891C6A4;
    }
L_0891C6A4:
    ctx.gpr[16] = (0u | 256u);
    goto L_0891C6A8;
L_0891C6A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0891C6BCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0891C320;
L_0891C6BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891C6C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0891C3B8;
L_0891C6C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x0891C6DCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0891C320;
L_0891C6DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C6F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0891C740;
      }
      goto L_0891C720;
    }
L_0891C720:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[6] = (ctx.gpr[6] & 17u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C740;
      }
      goto L_0891C734;
    }
L_0891C734:
    ctx.gpr[31] = (0x0891C73Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 767u, 0x0891B87Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C73Cu) goto L_0891C73C;
    return;
L_0891C73C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0891C740;
L_0891C740:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C76C;
      }
      goto L_0891C750;
    }
L_0891C750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891C76C;
      }
      goto L_0891C764;
    }
L_0891C764:
    ctx.gpr[31] = (0x0891C76Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 767u, 0x0891B87Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C76Cu) goto L_0891C76C;
    return;
L_0891C76C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x0891C778u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 843u, 0x0891BE40u>(ctx, &aot_mem) && ctx.pc == 0x0891C778u) goto L_0891C778;
    return;
L_0891C778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891C79C;
      }
      goto L_0891C784;
    }
L_0891C784:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    ctx.gpr[4] = (ctx.gpr[4] & 17u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0891C79C;
      }
      goto L_0891C794;
    }
L_0891C794:
    ctx.gpr[31] = (0x0891C79Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 767u, 0x0891B87Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C79Cu) goto L_0891C79C;
    return;
L_0891C79C:
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
L_0891C7B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891C7F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0891C6F0;
L_0891C7F4:
    ctx.gpr[31] = (0x0891C7FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 859u, 0x0891BF5Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C7FCu) goto L_0891C7FC;
    return;
L_0891C7FC:
    ctx.gpr[31] = (0x0891C804u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0891C124;
L_0891C804:
    ctx.gpr[31] = (0x0891C80Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0891C124;
L_0891C80C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[31] = (0x0891C820u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 784u, 0x0891B988u>(ctx, &aot_mem) && ctx.pc == 0x0891C820u) goto L_0891C820;
    return;
L_0891C820:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0891C82Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 780u, 0x0891B930u>(ctx, &aot_mem) && ctx.pc == 0x0891C82Cu) goto L_0891C82C;
    return;
L_0891C82C:
    ctx.gpr[31] = (0x0891C834u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 859u, 0x0891BF5Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C834u) goto L_0891C834;
    return;
L_0891C834:
    ctx.gpr[31] = (0x0891C83Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0891C074;
L_0891C83C:
    ctx.gpr[31] = (0x0891C844u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_0891C074;
L_0891C844:
    ctx.gpr[31] = (0x0891C84Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0891C124;
L_0891C84C:
    ctx.gpr[31] = (0x0891C854u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0891C074;
L_0891C854:
    ctx.gpr[31] = (0x0891C85Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0891C124;
L_0891C85C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C878:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891C890u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0891C7B4;
L_0891C890:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C8A0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0891C688;
L_0891C8A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C8ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0891C448;
L_0891C8AC:
    ctx.gpr[31] = (0x0891C8B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891C5C0;
L_0891C8B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C8C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C8E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 17u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0891C940;
      }
      goto L_0891C930;
    }
L_0891C930:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0891C93Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 767u, 0x0891B87Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C93Cu) goto L_0891C93C;
    return;
L_0891C93C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_0891C940;
L_0891C940:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0891C964;
      }
      goto L_0891C950;
    }
L_0891C950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x0891C960u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 7u, 0x08AA80E8u>(ctx, &aot_mem) && ctx.pc == 0x0891C960u) goto L_0891C960;
    return;
L_0891C960:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_0891C964;
L_0891C964:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA0C;
      }
      goto L_0891C96C;
    }
L_0891C96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891CA0C;
      }
      goto L_0891C97C;
    }
L_0891C97C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 107u);
    ctx.gpr[31] = (0x0891C98Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 412u, 0x08AED718u>(ctx, &aot_mem) && ctx.pc == 0x0891C98Cu) goto L_0891C98C;
    return;
L_0891C98C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0891C9A0u);
    ctx.gpr[5] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 412u, 0x08AED718u>(ctx, &aot_mem) && ctx.pc == 0x0891C9A0u) goto L_0891C9A0;
    return;
L_0891C9A0:
    ctx.gpr[19] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA0C;
      }
      goto L_0891C9B0;
    }
L_0891C9B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-7));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[18] << 1u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891C9F0;
      }
      goto L_0891C9E0;
    }
L_0891C9E0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C9F0;
      }
      goto L_0891C9E8;
    }
L_0891C9E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0891CA00;
      }
      goto L_0891C9F0;
    }
L_0891C9F0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0891CA00;
      }
      goto L_0891C9F8;
    }
L_0891C9F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891CA00;
      }
      goto L_0891CA00;
    }
L_0891CA00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_0891CA0C;
L_0891CA0C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA70;
      }
      goto L_0891CA14;
    }
L_0891CA14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_0891CA70;
      }
      goto L_0891CA24;
    }
L_0891CA24:
    ctx.gpr[20] = (ctx.gpr[21] << 3u);
    goto L_0891CA28;
L_0891CA28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA5C;
      }
      goto L_0891CA40;
    }
L_0891CA40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891CA5C;
      }
      goto L_0891CA54;
    }
L_0891CA54:
    ctx.gpr[31] = (0x0891CA5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 767u, 0x0891B87Cu>(ctx, &aot_mem) && ctx.pc == 0x0891CA5Cu) goto L_0891CA5C;
    return;
L_0891CA5C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0891CA28;
      }
      goto L_0891CA70;
    }
L_0891CA70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(7)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_0891CB24;
      }
      goto L_0891CA88;
    }
L_0891CA88:
    ctx.gpr[22] = (ctx.gpr[21] << 4u);
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    goto L_0891CA94;
L_0891CA94:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CB10;
      }
      goto L_0891CAA8;
    }
L_0891CAA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CADC;
      }
      goto L_0891CAB8;
    }
L_0891CAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CADC;
      }
      goto L_0891CACC;
    }
L_0891CACC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891CADC;
      }
      goto L_0891CAD4;
    }
L_0891CAD4:
    ctx.gpr[31] = (0x0891CADCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 767u, 0x0891B87Cu>(ctx, &aot_mem) && ctx.pc == 0x0891CADCu) goto L_0891CADC;
    return;
L_0891CADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CB10;
      }
      goto L_0891CAEC;
    }
L_0891CAEC:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(5)));
    ctx.gpr[4] = (ctx.gpr[4] & 17u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CB10;
      }
      goto L_0891CB00;
    }
L_0891CB00:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0891CB10;
      }
      goto L_0891CB08;
    }
L_0891CB08:
    ctx.gpr[31] = (0x0891CB10u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 767u, 0x0891B87Cu>(ctx, &aot_mem) && ctx.pc == 0x0891CB10u) goto L_0891CB10;
    return;
L_0891CB10:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_0891CA94;
      }
      goto L_0891CB24;
    }
L_0891CB24:
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
L_0891CB50:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[19];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
    ctx.fpr[16] = std::sqrt(ctx.fpr[16]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[6] = (16230u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 26214u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[18]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_0891CBE8;
    }
    goto L_0891CBA0;
L_0891CBA0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0891CBE0;
    }
    goto L_0891CBE0;
L_0891CBE0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[16] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0891CC10;
      }
      goto L_0891CBE8;
    }
L_0891CBE8:
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[17] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    goto L_0891CC10;
L_0891CC10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CC18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[10] | 0u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0891CC74u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_0891CB50;
L_0891CC74:
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3670u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
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
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[18] - ctx.fpr[19];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = ctx.fpr[0] - ctx.fpr[2];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[6] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[6] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[6]) ^ 0x80000000u);
        goto L_0891CD10;
    }
    goto L_0891CD10;
L_0891CD10:
    ctx.fpr[8] = ctx.fpr[19] - ctx.fpr[18];
    ctx.fpr[9] = ctx.fpr[2] - ctx.fpr[0];
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[7] + ctx.fpr[4];
    ctx.set_fpu_condition((ctx.fpr[7] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[7] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[7]) ^ 0x80000000u);
        goto L_0891CD34;
    }
    goto L_0891CD34;
L_0891CD34:
    ctx.set_fpu_condition((ctx.fpr[6] <= ctx.fpr[7]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[4] = ctx.fpr[6] + ctx.fpr[7];
      if (branch_taken) {
          goto L_0891CDD8;
      }
      goto L_0891CD44;
    }
L_0891CD44:
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[4] - ctx.fpr[5];
    ctx.fpr[6] = ctx.fpr[6] / ctx.fpr[4];
    ctx.set_fpu_condition((ctx.fpr[6] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891CD84;
      }
      goto L_0891CD60;
    }
L_0891CD60:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[17] = ctx.fpr[3] - ctx.fpr[16];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[6] + ctx.fpr[4];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[5] = ctx.fpr[7] + ctx.fpr[5];
      if (branch_taken) {
          goto L_0891CE60;
      }
      goto L_0891CD84;
    }
L_0891CD84:
    ctx.fpr[6] = ctx.fpr[20] - ctx.fpr[6];
    ctx.fpr[4] = ctx.fpr[4] / ctx.fpr[5];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
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
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[17] = ctx.fpr[3] - ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[5];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[6];
      if (branch_taken) {
          goto L_0891CE60;
      }
      goto L_0891CDD8;
    }
L_0891CDD8:
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[5] / ctx.fpr[4];
    ctx.set_fpu_condition((ctx.fpr[7] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891CE14;
      }
      goto L_0891CDF0;
    }
L_0891CDF0:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[17] = ctx.fpr[16] - ctx.fpr[16];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[6] + ctx.fpr[4];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[5] = ctx.fpr[7] + ctx.fpr[5];
      if (branch_taken) {
          goto L_0891CE60;
      }
      goto L_0891CE14;
    }
L_0891CE14:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] / ctx.fpr[5];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
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
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[17] = ctx.fpr[3] - ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[5];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[6];
    goto L_0891CE60;
L_0891CE60:
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (14979u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[6])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[7] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[19] + ctx.fpr[12];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[2] + ctx.fpr[13];
    ctx.fpr[19] = ctx.fpr[4] / ctx.fpr[6];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[2] = ctx.fpr[5] / ctx.fpr[6];
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[18] - ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[0] - ctx.fpr[15];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CF00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891CF14u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 126u, 0x08AB87DCu>(ctx, &aot_mem) && ctx.pc == 0x0891CF14u) goto L_0891CF14;
    return;
L_0891CF14:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19132));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CF34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891CF7C;
      }
      goto L_0891CF50;
    }
L_0891CF50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19132));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891CF68u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 128u, 0x08AB8830u>(ctx, &aot_mem) && ctx.pc == 0x0891CF68u) goto L_0891CF68;
    return;
L_0891CF68:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CF7C;
      }
      goto L_0891CF74;
    }
L_0891CF74:
    ctx.gpr[31] = (0x0891CF7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0891CF90;
L_0891CF7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CF90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891CFA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15304)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 287u, 0x08B01268u>(ctx, &aot_mem) && ctx.pc == 0x0891CFA8u) goto L_0891CFA8;
    return;
L_0891CFA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CFB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27364)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 14571u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27360)));
    ctx.gpr[7] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(27368), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27376), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27372), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(11488));
    ctx.gpr[6] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(27380), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891D044u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0891CF00;
L_0891D044:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0891D050u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27388));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x0891D050u) goto L_0891D050;
    return;
L_0891D050:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11584));
    ctx.gpr[31] = (0x0891D06Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19344));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AF04u>(ctx, &aot_mem) && ctx.pc == 0x0891D06Cu) goto L_0891D06C;
    return;
L_0891D06C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D07C:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    { const float vfpu_constant = std::bit_cast<float>(0x3EA2F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vrot(4u, 0u, 4u, 11u);
    ctx.execute_vfpu_vscl_ct<4u, 8u, 68u, 3u>();
    jump_target = ctx.gpr[31];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D0A8:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.vfpu_ctrl[0u] = 0x000C001Bu;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x0009004Eu;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x000A00B1u;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<6u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x0004001Bu;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x0001004Eu;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<9u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x000200B1u;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<10u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x000700E4u;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<11u, 4u>(vfpu_d); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 40u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 32u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D104:
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
L_0891D130:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(417)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D140:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(417)));
        goto L_0891D15C;
    }
    goto L_0891D150;
L_0891D150:
    ctx.gpr[4] = (16968u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891D170;
      }
      goto L_0891D15C;
    }
L_0891D15C:
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[13];
    goto L_0891D170;
L_0891D170:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891D18Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D18Cu) goto L_0891D18C;
    return;
L_0891D18C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D1E8;
      }
      goto L_0891D19C;
    }
L_0891D19C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D210;
      }
      goto L_0891D1AC;
    }
L_0891D1AC:
    ctx.gpr[31] = (0x0891D1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D1B4u) goto L_0891D1B4;
    return;
L_0891D1B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D1E8;
      }
      goto L_0891D1C0;
    }
L_0891D1C0:
    ctx.gpr[31] = (0x0891D1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D1C8u) goto L_0891D1C8;
    return;
L_0891D1C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D1E8;
      }
      goto L_0891D1D8;
    }
L_0891D1D8:
    ctx.gpr[31] = (0x0891D1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 424u, 0x08ACA960u>(ctx, &aot_mem) && ctx.pc == 0x0891D1E0u) goto L_0891D1E0;
    return;
L_0891D1E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D210;
      }
      goto L_0891D1E8;
    }
L_0891D1E8:
    ctx.gpr[31] = (0x0891D1F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x0891D1F0u) goto L_0891D1F0;
    return;
L_0891D1F0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0891D204u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 424u, 0x08ACA960u>(ctx, &aot_mem) && ctx.pc == 0x0891D204u) goto L_0891D204;
    return;
L_0891D204:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D210;
      }
      goto L_0891D20C;
    }
L_0891D20C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    goto L_0891D210;
L_0891D210:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D220:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(384), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D230:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(398))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 8u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891D26C;
      }
      goto L_0891D25C;
    }
L_0891D25C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[18] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0891D2E8;
      }
      goto L_0891D26C;
    }
L_0891D26C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
        goto L_0891D294;
    }
    goto L_0891D294;
L_0891D294:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891D2D4;
      }
      goto L_0891D2A4;
    }
L_0891D2A4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(436)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_0891D2C4;
    }
    goto L_0891D2C4;
L_0891D2C4:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891D2E0;
      }
      goto L_0891D2D4;
    }
L_0891D2D4:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0891D2E0;
L_0891D2E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0891D34C;
      }
      goto L_0891D2E8;
    }
L_0891D2E8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891D334u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 235u, 0x089ED82Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D334u) goto L_0891D334;
    return;
L_0891D334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D344;
      }
      goto L_0891D33C;
    }
L_0891D33C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0891D348;
      }
      goto L_0891D344;
    }
L_0891D344:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_0891D348;
L_0891D348:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    goto L_0891D34C;
L_0891D34C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D390:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891D3ACu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0891D230;
L_0891D3AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(602))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D440;
      }
      goto L_0891D420;
    }
L_0891D420:
    ctx.gpr[5] = (ctx.gpr[4] | 1u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 158 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 148 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891D448;
      }
      goto L_0891D438;
    }
L_0891D438:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 164 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891D47C;
      }
      goto L_0891D440;
    }
L_0891D440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D598;
      }
      goto L_0891D448;
    }
L_0891D448:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 149 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891D464;
      }
      goto L_0891D450;
    }
L_0891D450:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-954));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891D520;
      }
      goto L_0891D45C;
    }
L_0891D45C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D598;
      }
      goto L_0891D464;
    }
L_0891D464:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 157 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891D4EC;
      }
      goto L_0891D46C;
    }
L_0891D46C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D598;
      }
      goto L_0891D474;
    }
L_0891D474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D4B8;
      }
      goto L_0891D47C;
    }
L_0891D47C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 196u);
      if (branch_taken) {
          goto L_0891D4A0;
      }
      goto L_0891D484;
    }
L_0891D484:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 159 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 162 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891D4EC;
      }
      goto L_0891D490;
    }
L_0891D490:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D598;
      }
      goto L_0891D498;
    }
L_0891D498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D4B8;
      }
      goto L_0891D4A0;
    }
L_0891D4A0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891D598;
      }
      goto L_0891D4A8;
    }
L_0891D4A8:
    ctx.gpr[31] = (0x0891D4B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 756u, 0x0889F9C8u>(ctx, &aot_mem) && ctx.pc == 0x0891D4B0u) goto L_0891D4B0;
    return;
L_0891D4B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D598;
      }
      goto L_0891D4B8;
    }
L_0891D4B8:
    ctx.gpr[31] = (0x0891D4C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 756u, 0x0889F9C8u>(ctx, &aot_mem) && ctx.pc == 0x0891D4C0u) goto L_0891D4C0;
    return;
L_0891D4C0:
    ctx.gpr[31] = (0x0891D4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D4C8u) goto L_0891D4C8;
    return;
L_0891D4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D4E4;
      }
      goto L_0891D4D8;
    }
L_0891D4D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891D4E4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 231u, 0x088A1620u>(ctx, &aot_mem) && ctx.pc == 0x0891D4E4u) goto L_0891D4E4;
    return;
L_0891D4E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D598;
      }
      goto L_0891D4EC;
    }
L_0891D4EC:
    ctx.gpr[31] = (0x0891D4F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 756u, 0x0889F9C8u>(ctx, &aot_mem) && ctx.pc == 0x0891D4F4u) goto L_0891D4F4;
    return;
L_0891D4F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891D500u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 231u, 0x088A1620u>(ctx, &aot_mem) && ctx.pc == 0x0891D500u) goto L_0891D500;
    return;
L_0891D500:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891D50Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 231u, 0x088A1620u>(ctx, &aot_mem) && ctx.pc == 0x0891D50Cu) goto L_0891D50C;
    return;
L_0891D50C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891D518u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 231u, 0x088A1620u>(ctx, &aot_mem) && ctx.pc == 0x0891D518u) goto L_0891D518;
    return;
L_0891D518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D598;
      }
      goto L_0891D520;
    }
L_0891D520:
    ctx.gpr[31] = (0x0891D528u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 756u, 0x0889F9C8u>(ctx, &aot_mem) && ctx.pc == 0x0891D528u) goto L_0891D528;
    return;
L_0891D528:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 8192u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(412), ctx.gpr[5]);
    ctx.gpr[31] = (0x0891D540u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 231u, 0x088A1620u>(ctx, &aot_mem) && ctx.pc == 0x0891D540u) goto L_0891D540;
    return;
L_0891D540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25828)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(25828), ctx.gpr[6]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17400)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[5] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_0891D57C;
      }
      goto L_0891D570;
    }
L_0891D570:
    ctx.gpr[16] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_0891D580;
      }
      goto L_0891D57C;
    }
L_0891D57C:
    ctx.gpr[16] = (ctx.gpr[16] & 3u);
    goto L_0891D580;
L_0891D580:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17400), ctx.gpr[16]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17396), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891D598;
      }
      goto L_0891D598;
    }
L_0891D598:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D5A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891D5BCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 756u, 0x0889F9C8u>(ctx, &aot_mem) && ctx.pc == 0x0891D5BCu) goto L_0891D5BC;
    return;
L_0891D5BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891D5C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 231u, 0x088A1620u>(ctx, &aot_mem) && ctx.pc == 0x0891D5C8u) goto L_0891D5C8;
    return;
L_0891D5C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D5D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891D5ECu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 756u, 0x0889F9C8u>(ctx, &aot_mem) && ctx.pc == 0x0891D5ECu) goto L_0891D5EC;
    return;
L_0891D5EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891D5F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 231u, 0x088A1620u>(ctx, &aot_mem) && ctx.pc == 0x0891D5F8u) goto L_0891D5F8;
    return;
L_0891D5F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D608:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D690;
      }
      goto L_0891D63C;
    }
L_0891D63C:
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x0891D648u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x0891D648u) goto L_0891D648;
    return;
L_0891D648:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-138));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D690;
      }
      goto L_0891D65C;
    }
L_0891D65C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19400)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x0891D680u);
    ctx.gpr[5] = (0u | 141u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x0891D680u) goto L_0891D680;
    return;
L_0891D680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D690;
      }
      goto L_0891D688;
    }
L_0891D688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D690;
      }
      goto L_0891D690;
    }
L_0891D690:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 100u);
      if (branch_taken) {
          goto L_0891D73C;
      }
      goto L_0891D6A4;
    }
L_0891D6A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27436)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27432)));
    ctx.gpr[22] = (2230u << 16u);
    goto L_0891D6B8;
L_0891D6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D728;
      }
      goto L_0891D6C4;
    }
L_0891D6C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1772), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x0891D6E0u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x0891D6E0u) goto L_0891D6E0;
    return;
L_0891D6E0:
    ctx.gpr[31] = (0x0891D6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0891D6E8u) goto L_0891D6E8;
    return;
L_0891D6E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0891D6FCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0891D6FCu) goto L_0891D6FC;
    return;
L_0891D6FC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_0891D728;
L_0891D728:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891D6B8;
      }
      goto L_0891D73C;
    }
L_0891D73C:
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
L_0891D764:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D7FC;
      }
      goto L_0891D798;
    }
L_0891D798:
    ctx.gpr[31] = (0x0891D7A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0891D7A0u) goto L_0891D7A0;
    return;
L_0891D7A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D7FC;
      }
      goto L_0891D7A8;
    }
L_0891D7A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x0891D7B4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x0891D7B4u) goto L_0891D7B4;
    return;
L_0891D7B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-138));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D7FC;
      }
      goto L_0891D7C8;
    }
L_0891D7C8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19504)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x0891D7ECu);
    ctx.gpr[5] = (0u | 141u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x0891D7ECu) goto L_0891D7EC;
    return;
L_0891D7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D7FC;
      }
      goto L_0891D7F4;
    }
L_0891D7F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D7FC;
      }
      goto L_0891D7FC;
    }
L_0891D7FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 100u);
      if (branch_taken) {
          goto L_0891D8A4;
      }
      goto L_0891D810;
    }
L_0891D810:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27436)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27432)));
    ctx.gpr[22] = (2230u << 16u);
    goto L_0891D824;
L_0891D824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D890;
      }
      goto L_0891D830;
    }
L_0891D830:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1772), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x0891D848u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x0891D848u) goto L_0891D848;
    return;
L_0891D848:
    ctx.gpr[31] = (0x0891D850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0891D850u) goto L_0891D850;
    return;
L_0891D850:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0891D864u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x0891D864u) goto L_0891D864;
    return;
L_0891D864:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_0891D890;
L_0891D890:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891D824;
      }
      goto L_0891D8A4;
    }
L_0891D8A4:
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
L_0891D8CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(484), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891D8ECu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(484));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0891D8ECu) goto L_0891D8EC;
    return;
L_0891D8EC:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0891D914;
    }
    goto L_0891D914;
L_0891D914:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D928:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DA10;
      }
      goto L_0891D96C;
    }
L_0891D96C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19608)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0891DA14;
      }
      goto L_0891D98C;
    }
L_0891D98C:
    ctx.gpr[31] = (0x0891D994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0891D994u) goto L_0891D994;
    return;
L_0891D994:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D9B0;
      }
      goto L_0891D9A8;
    }
L_0891D9A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0891DA14;
      }
      goto L_0891D9B0;
    }
L_0891D9B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0891DA14;
      }
      goto L_0891D9B8;
    }
L_0891D9B8:
    ctx.gpr[31] = (0x0891D9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0891D9C0u) goto L_0891D9C0;
    return;
L_0891D9C0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D9DC;
      }
      goto L_0891D9D4;
    }
L_0891D9D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0891DA14;
      }
      goto L_0891D9DC;
    }
L_0891D9DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0891DA14;
      }
      goto L_0891D9E4;
    }
L_0891D9E4:
    ctx.gpr[31] = (0x0891D9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0891D9ECu) goto L_0891D9EC;
    return;
L_0891D9EC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DA08;
      }
      goto L_0891DA00;
    }
L_0891DA00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0891DA14;
      }
      goto L_0891DA08;
    }
L_0891DA08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0891DA14;
      }
      goto L_0891DA10;
    }
L_0891DA10:
    ctx.gpr[2] = (0u | 4u);
    goto L_0891DA14;
L_0891DA14:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DA20:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DA88;
      }
      goto L_0891DA60;
    }
L_0891DA60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0891DA90;
      }
      goto L_0891DA68;
    }
L_0891DA68:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0891DA90;
      }
      goto L_0891DA70;
    }
L_0891DA70:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0891DA90;
      }
      goto L_0891DA78;
    }
L_0891DA78:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891DA90;
      }
      goto L_0891DA80;
    }
L_0891DA80:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0891DA90;
      }
      goto L_0891DA88;
    }
L_0891DA88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0891DA94;
      }
      goto L_0891DA90;
    }
L_0891DA90:
    ctx.gpr[2] = (0u | 21u);
    goto L_0891DA94;
L_0891DA94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DA9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2096)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DBF8;
      }
      goto L_0891DAE8;
    }
L_0891DAE8:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19640)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DB00:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.gpr[31] = (0x0891DB14u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x0891DB14u) goto L_0891DB14;
    return;
L_0891DB14:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891DBFC;
      }
      goto L_0891DB2C;
    }
L_0891DB2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 25u);
      if (branch_taken) {
          goto L_0891DBFC;
      }
      goto L_0891DB34;
    }
L_0891DB34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 34u);
      if (branch_taken) {
          goto L_0891DBFC;
      }
      goto L_0891DB3C;
    }
L_0891DB3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891DBFC;
      }
      goto L_0891DB6C;
    }
L_0891DB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16281u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891DBFC;
      }
      goto L_0891DB9C;
    }
L_0891DB9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16288u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891DBFC;
      }
      goto L_0891DBC8;
    }
L_0891DBC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16294u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891DBFC;
      }
      goto L_0891DBF8;
    }
L_0891DBF8:
    ctx.gpr[2] = (0u | 0u);
    goto L_0891DBFC;
L_0891DBFC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DC10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[8] = (ctx.gpr[6] << 7u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[31]);
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
        goto L_0891DD58;
    }
    goto L_0891DC64;
L_0891DC64:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0891DC70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891DC70u) goto L_0891DC70;
    return;
L_0891DC70:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0891DCA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891DCA4u) goto L_0891DCA4;
    return;
L_0891DCA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DD00;
      }
      goto L_0891DCAC;
    }
L_0891DCAC:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DCD0;
      }
      goto L_0891DCC4;
    }
L_0891DCC4:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DD50;
      }
      goto L_0891DCD0;
    }
L_0891DCD0:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DCF4;
      }
      goto L_0891DCE8;
    }
L_0891DCE8:
    ctx.gpr[4] = (0u | 22u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DD50;
      }
      goto L_0891DCF4;
    }
L_0891DCF4:
    ctx.gpr[4] = (0u | 25u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DD50;
      }
      goto L_0891DD00;
    }
L_0891DD00:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DD24;
      }
      goto L_0891DD18;
    }
L_0891DD18:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DD50;
      }
      goto L_0891DD24;
    }
L_0891DD24:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DD48;
      }
      goto L_0891DD3C;
    }
L_0891DD3C:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DD50;
      }
      goto L_0891DD48;
    }
L_0891DD48:
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891DD50;
L_0891DD50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DE70;
      }
      goto L_0891DD58;
    }
L_0891DD58:
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891DE70;
      }
      goto L_0891DD84;
    }
L_0891DD84:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0891DD90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891DD90u) goto L_0891DD90;
    return;
L_0891DD90:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0891DDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891DDC4u) goto L_0891DDC4;
    return;
L_0891DDC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DE20;
      }
      goto L_0891DDCC;
    }
L_0891DDCC:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DDF0;
      }
      goto L_0891DDE4;
    }
L_0891DDE4:
    ctx.gpr[4] = (0u | 27u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DE70;
      }
      goto L_0891DDF0;
    }
L_0891DDF0:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DE14;
      }
      goto L_0891DE08;
    }
L_0891DE08:
    ctx.gpr[4] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DE70;
      }
      goto L_0891DE14;
    }
L_0891DE14:
    ctx.gpr[4] = (0u | 34u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DE70;
      }
      goto L_0891DE20;
    }
L_0891DE20:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DE44;
      }
      goto L_0891DE38;
    }
L_0891DE38:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DE70;
      }
      goto L_0891DE44;
    }
L_0891DE44:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DE68;
      }
      goto L_0891DE5C;
    }
L_0891DE5C:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DE70;
      }
      goto L_0891DE68;
    }
L_0891DE68:
    ctx.gpr[4] = (0u | 34u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891DE70;
L_0891DE70:
    ctx.gpr[31] = (0x0891DE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891DE78u) goto L_0891DE78;
    return;
L_0891DE78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891DF24;
      }
      goto L_0891DE80;
    }
L_0891DE80:
    ctx.gpr[31] = (0x0891DE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891DE88u) goto L_0891DE88;
    return;
L_0891DE88:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DF24;
      }
      goto L_0891DEBC;
    }
L_0891DEBC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0891DEC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891DEC8u) goto L_0891DEC8;
    return;
L_0891DEC8:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DF24;
      }
      goto L_0891DF0C;
    }
L_0891DF0C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
        goto L_0891DF20;
    }
    goto L_0891DF20;
L_0891DF20:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891DF24;
L_0891DF24:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DF3C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DFE0;
      }
      goto L_0891DF78;
    }
L_0891DF78:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19672)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DF90:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0891DFE0;
      }
      goto L_0891DF9C;
    }
L_0891DF9C:
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0891DFE0;
      }
      goto L_0891DFA8;
    }
L_0891DFA8:
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0891DFE0;
      }
      goto L_0891DFB4;
    }
L_0891DFB4:
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0891DFE0;
      }
      goto L_0891DFC0;
    }
L_0891DFC0:
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0891DFE0;
      }
      goto L_0891DFCC;
    }
L_0891DFCC:
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0891DFE0;
      }
      goto L_0891DFD8;
    }
L_0891DFD8:
    ctx.gpr[5] = (0u | 40u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0891DFE0;
L_0891DFE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DFE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E06C;
      }
      goto L_0891E020;
    }
L_0891E020:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E060;
      }
      goto L_0891E030;
    }
L_0891E030:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E060;
      }
      goto L_0891E040;
    }
L_0891E040:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E060;
      }
      goto L_0891E050;
    }
L_0891E050:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E06C;
      }
      goto L_0891E060;
    }
L_0891E060:
    ctx.gpr[31] = (0x0891E068u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891DA9C;
L_0891E068:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0891E06C;
L_0891E06C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F404;
      }
      goto L_0891E084;
    }
L_0891E084:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19704)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E09C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F404;
      }
      goto L_0891E0A4;
    }
L_0891E0A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(576)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E0D8;
      }
      goto L_0891E0B0;
    }
L_0891E0B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(576)));
    ctx.gpr[31] = (0x0891E0BCu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 340u, 0x08965614u>(ctx, &aot_mem) && ctx.pc == 0x0891E0BCu) goto L_0891E0BC;
    return;
L_0891E0BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E0D8;
      }
      goto L_0891E0C4;
    }
L_0891E0C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0891E0D8;
L_0891E0D8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E154;
      }
      goto L_0891E0F4;
    }
L_0891E0F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (49152u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0891E12Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E12Cu) goto L_0891E12C;
    return;
L_0891E12C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E154;
      }
      goto L_0891E134;
    }
L_0891E134:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891E140u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19360));
    goto L_0891D104;
L_0891E140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0891E154;
L_0891E154:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0891F288;
      }
      goto L_0891E168;
    }
L_0891E168:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19760)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E180:
    ctx.gpr[31] = (0x0891E188u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E188u) goto L_0891E188;
    return;
L_0891E188:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x0891E1A0u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E1A0u) goto L_0891E1A0;
    return;
L_0891E1A0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[31] = (0x0891E1B8u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E1B8u) goto L_0891E1B8;
    return;
L_0891E1B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x0891E1CCu);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E1CCu) goto L_0891E1CC;
    return;
L_0891E1CC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[20] + ctx.fpr[14];
    ctx.fpr[24] = std::sqrt(ctx.fpr[14]);
    ctx.gpr[31] = (0x0891E1ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D130;
L_0891E1EC:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E20C;
      }
      goto L_0891E1FC;
    }
L_0891E1FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E22C;
      }
      goto L_0891E20C;
    }
L_0891E20C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0891E21Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 834u, 0x0889FDC8u>(ctx, &aot_mem) && ctx.pc == 0x0891E21Cu) goto L_0891E21C;
    return;
L_0891E21C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E22C;
      }
      goto L_0891E224;
    }
L_0891E224:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891E22C;
L_0891E22C:
    ctx.gpr[31] = (0x0891E234u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D178;
L_0891E234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F404;
      }
      goto L_0891E23C;
    }
L_0891E23C:
    ctx.gpr[31] = (0x0891E244u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E244u) goto L_0891E244;
    return;
L_0891E244:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x0891E25Cu);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E25Cu) goto L_0891E25C;
    return;
L_0891E25C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[31] = (0x0891E274u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E274u) goto L_0891E274;
    return;
L_0891E274:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0891E288u);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E288u) goto L_0891E288;
    return;
L_0891E288:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[31] = (0x0891E2A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D140;
L_0891E2A8:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E304;
      }
      goto L_0891E2B8;
    }
L_0891E2B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E304;
      }
      goto L_0891E2C8;
    }
L_0891E2C8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0891E2D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E2D4u) goto L_0891E2D4;
    return;
L_0891E2D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891E2E4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 235u, 0x089ED82Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E2E4u) goto L_0891E2E4;
    return;
L_0891E2E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E2FC;
      }
      goto L_0891E2EC;
    }
L_0891E2EC:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), 0u);
    goto L_0891E2FC;
L_0891E2FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E52C;
      }
      goto L_0891E304;
    }
L_0891E304:
    ctx.gpr[31] = (0x0891E30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891E30Cu) goto L_0891E30C;
    return;
L_0891E30C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E3C0;
      }
      goto L_0891E314;
    }
L_0891E314:
    ctx.gpr[31] = (0x0891E31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891E31Cu) goto L_0891E31C;
    return;
L_0891E31C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891E328u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 269u, 0x08A0E174u>(ctx, &aot_mem) && ctx.pc == 0x0891E328u) goto L_0891E328;
    return;
L_0891E328:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E3C0;
      }
      goto L_0891E330;
    }
L_0891E330:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(399))))));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E3C0;
      }
      goto L_0891E340;
    }
L_0891E340:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(399))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E3C0;
      }
      goto L_0891E350;
    }
L_0891E350:
    ctx.gpr[31] = (0x0891E358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891E358u) goto L_0891E358;
    return;
L_0891E358:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E3A8;
      }
      goto L_0891E38C;
    }
L_0891E38C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(800));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891E3C0;
      }
      goto L_0891E3A8;
    }
L_0891E3A8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_0891E3C0;
L_0891E3C0:
    ctx.gpr[31] = (0x0891E3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891E3C8u) goto L_0891E3C8;
    return;
L_0891E3C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E444;
      }
      goto L_0891E3D0;
    }
L_0891E3D0:
    ctx.gpr[31] = (0x0891E3D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891E3D8u) goto L_0891E3D8;
    return;
L_0891E3D8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E444;
      }
      goto L_0891E40C;
    }
L_0891E40C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16773u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 21845u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(644), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891E448;
      }
      goto L_0891E444;
    }
L_0891E444:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(644), static_cast<std::uint16_t>(0u));
    goto L_0891E448;
L_0891E448:
    ctx.gpr[31] = (0x0891E450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891E450u) goto L_0891E450;
    return;
L_0891E450:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
        goto L_0891E4C0;
    }
    goto L_0891E458;
L_0891E458:
    ctx.gpr[31] = (0x0891E460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891E460u) goto L_0891E460;
    return;
L_0891E460:
    ctx.gpr[31] = (0x0891E468u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 825u, 0x0889FD24u>(ctx, &aot_mem) && ctx.pc == 0x0891E468u) goto L_0891E468;
    return;
L_0891E468:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
        goto L_0891E4C0;
    }
    goto L_0891E470;
L_0891E470:
    ctx.gpr[31] = (0x0891E478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891E478u) goto L_0891E478;
    return;
L_0891E478:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E52C;
      }
      goto L_0891E4AC;
    }
L_0891E4AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2501 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E52C;
      }
      goto L_0891E4BC;
    }
L_0891E4BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    goto L_0891E4C0;
L_0891E4C0:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E52C;
      }
      goto L_0891E4CC;
    }
L_0891E4CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16672u << 16u);
      if (branch_taken) {
          goto L_0891E4F0;
      }
      goto L_0891E4DC;
    }
L_0891E4DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E52C;
      }
      goto L_0891E4EC;
    }
L_0891E4EC:
    ctx.gpr[4] = (16672u << 16u);
    goto L_0891E4F0;
L_0891E4F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E52C;
      }
      goto L_0891E504;
    }
L_0891E504:
    ctx.gpr[31] = (0x0891E50Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D608;
L_0891E50C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0891E518u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E518u) goto L_0891E518;
    return;
L_0891E518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E52C;
      }
      goto L_0891E528;
    }
L_0891E528:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    goto L_0891E52C;
L_0891E52C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E544;
      }
      goto L_0891E53C;
    }
L_0891E53C:
    ctx.gpr[31] = (0x0891E544u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891DC10;
L_0891E544:
    ctx.gpr[31] = (0x0891E54Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D178;
L_0891E54C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891E554;
    }
L_0891E554:
    ctx.gpr[31] = (0x0891E55Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E55Cu) goto L_0891E55C;
    return;
L_0891E55C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x0891E574u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E574u) goto L_0891E574;
    return;
L_0891E574:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[31] = (0x0891E58Cu);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E58Cu) goto L_0891E58C;
    return;
L_0891E58C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0891E5A0u);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E5A0u) goto L_0891E5A0;
    return;
L_0891E5A0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[20] + ctx.fpr[14];
    ctx.fpr[24] = std::sqrt(ctx.fpr[14]);
    ctx.gpr[31] = (0x0891E5C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D130;
L_0891E5C0:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E5E0;
      }
      goto L_0891E5D0;
    }
L_0891E5D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E600;
      }
      goto L_0891E5E0;
    }
L_0891E5E0:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0891E5F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 834u, 0x0889FDC8u>(ctx, &aot_mem) && ctx.pc == 0x0891E5F0u) goto L_0891E5F0;
    return;
L_0891E5F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E600;
      }
      goto L_0891E5F8;
    }
L_0891E5F8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891E600;
L_0891E600:
    ctx.gpr[31] = (0x0891E608u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D178;
L_0891E608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891E610;
    }
L_0891E610:
    ctx.gpr[31] = (0x0891E618u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E618u) goto L_0891E618;
    return;
L_0891E618:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x0891E630u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E630u) goto L_0891E630;
    return;
L_0891E630:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[31] = (0x0891E648u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E648u) goto L_0891E648;
    return;
L_0891E648:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0891E65Cu);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E65Cu) goto L_0891E65C;
    return;
L_0891E65C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[31] = (0x0891E67Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D140;
L_0891E67C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E6D8;
      }
      goto L_0891E68C;
    }
L_0891E68C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E6D8;
      }
      goto L_0891E69C;
    }
L_0891E69C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x0891E6A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891E6A8u) goto L_0891E6A8;
    return;
L_0891E6A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891E6B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 235u, 0x089ED82Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E6B8u) goto L_0891E6B8;
    return;
L_0891E6B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E6D0;
      }
      goto L_0891E6C0;
    }
L_0891E6C0:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), 0u);
    goto L_0891E6D0;
L_0891E6D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E844;
      }
      goto L_0891E6D8;
    }
L_0891E6D8:
    ctx.gpr[31] = (0x0891E6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891E6E0u) goto L_0891E6E0;
    return;
L_0891E6E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E75C;
      }
      goto L_0891E6E8;
    }
L_0891E6E8:
    ctx.gpr[31] = (0x0891E6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891E6F0u) goto L_0891E6F0;
    return;
L_0891E6F0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E75C;
      }
      goto L_0891E724;
    }
L_0891E724:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16773u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 21845u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(644), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891E760;
      }
      goto L_0891E75C;
    }
L_0891E75C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(644), static_cast<std::uint16_t>(0u));
    goto L_0891E760;
L_0891E760:
    ctx.gpr[31] = (0x0891E768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891E768u) goto L_0891E768;
    return;
L_0891E768:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
        goto L_0891E7D8;
    }
    goto L_0891E770;
L_0891E770:
    ctx.gpr[31] = (0x0891E778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891E778u) goto L_0891E778;
    return;
L_0891E778:
    ctx.gpr[31] = (0x0891E780u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 825u, 0x0889FD24u>(ctx, &aot_mem) && ctx.pc == 0x0891E780u) goto L_0891E780;
    return;
L_0891E780:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
        goto L_0891E7D8;
    }
    goto L_0891E788;
L_0891E788:
    ctx.gpr[31] = (0x0891E790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891E790u) goto L_0891E790;
    return;
L_0891E790:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E844;
      }
      goto L_0891E7C4;
    }
L_0891E7C4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2501 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E844;
      }
      goto L_0891E7D4;
    }
L_0891E7D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    goto L_0891E7D8;
L_0891E7D8:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E844;
      }
      goto L_0891E7E4;
    }
L_0891E7E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16672u << 16u);
      if (branch_taken) {
          goto L_0891E808;
      }
      goto L_0891E7F4;
    }
L_0891E7F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E844;
      }
      goto L_0891E804;
    }
L_0891E804:
    ctx.gpr[4] = (16672u << 16u);
    goto L_0891E808;
L_0891E808:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E844;
      }
      goto L_0891E81C;
    }
L_0891E81C:
    ctx.gpr[31] = (0x0891E824u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D608;
L_0891E824:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0891E830u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E830u) goto L_0891E830;
    return;
L_0891E830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E844;
      }
      goto L_0891E840;
    }
L_0891E840:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    goto L_0891E844;
L_0891E844:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E85C;
      }
      goto L_0891E854;
    }
L_0891E854:
    ctx.gpr[31] = (0x0891E85Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891DC10;
L_0891E85C:
    ctx.gpr[31] = (0x0891E864u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D178;
L_0891E864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891E86C;
    }
L_0891E86C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(417)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E8C4;
      }
      goto L_0891E8B4;
    }
L_0891E8B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E8CC;
      }
      goto L_0891E8C4;
    }
L_0891E8C4:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891E8CC;
L_0891E8CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891E8D4;
    }
L_0891E8D4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(417)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E92C;
      }
      goto L_0891E91C;
    }
L_0891E91C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E934;
      }
      goto L_0891E92C;
    }
L_0891E92C:
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891E934;
L_0891E934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891E93C;
    }
L_0891E93C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E988;
      }
      goto L_0891E978;
    }
L_0891E978:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E9A8;
      }
      goto L_0891E988;
    }
L_0891E988:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E9A8;
      }
      goto L_0891E9A0;
    }
L_0891E9A0:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891E9A8;
L_0891E9A8:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(417)));
        goto L_0891E9F0;
    }
    goto L_0891E9C0;
L_0891E9C0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0891EA70;
      }
      goto L_0891E9D4;
    }
L_0891E9D4:
    ctx.gpr[31] = (0x0891E9DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D608;
L_0891E9DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891EA70;
      }
      goto L_0891E9F0;
    }
L_0891E9F0:
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EA70;
      }
      goto L_0891EA14;
    }
L_0891EA14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0891EA70;
      }
      goto L_0891EA24;
    }
L_0891EA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EA70;
      }
      goto L_0891EA34;
    }
L_0891EA34:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891EA54u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 235u, 0x089ED82Cu>(ctx, &aot_mem) && ctx.pc == 0x0891EA54u) goto L_0891EA54;
    return;
L_0891EA54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EA68;
      }
      goto L_0891EA5C;
    }
L_0891EA5C:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891EA70;
      }
      goto L_0891EA68;
    }
L_0891EA68:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891EA70;
L_0891EA70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891EA78;
    }
L_0891EA78:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(417)));
        goto L_0891EAEC;
    }
    goto L_0891EABC;
L_0891EABC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0891EB6C;
      }
      goto L_0891EAD0;
    }
L_0891EAD0:
    ctx.gpr[31] = (0x0891EAD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D608;
L_0891EAD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891EB6C;
      }
      goto L_0891EAEC;
    }
L_0891EAEC:
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EB6C;
      }
      goto L_0891EB10;
    }
L_0891EB10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0891EB6C;
      }
      goto L_0891EB20;
    }
L_0891EB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EB6C;
      }
      goto L_0891EB30;
    }
L_0891EB30:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891EB50u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 235u, 0x089ED82Cu>(ctx, &aot_mem) && ctx.pc == 0x0891EB50u) goto L_0891EB50;
    return;
L_0891EB50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EB64;
      }
      goto L_0891EB58;
    }
L_0891EB58:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891EB6C;
      }
      goto L_0891EB64;
    }
L_0891EB64:
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891EB6C;
L_0891EB6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891EB74;
    }
L_0891EB74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891ECF8;
      }
      goto L_0891EBA8;
    }
L_0891EBA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC54;
      }
      goto L_0891EBB8;
    }
L_0891EBB8:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16664));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0891EBE4u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 57u, 0x088B03A0u>(ctx, &aot_mem) && ctx.pc == 0x0891EBE4u) goto L_0891EBE4;
    return;
L_0891EBE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC00;
      }
      goto L_0891EBEC;
    }
L_0891EBEC:
    ctx.gpr[31] = (0x0891EBF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D608;
L_0891EBF4:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891EC4C;
      }
      goto L_0891EC00;
    }
L_0891EC00:
    ctx.gpr[31] = (0x0891EC08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x0891EC08u) goto L_0891EC08;
    return;
L_0891EC08:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC4C;
      }
      goto L_0891EC2C;
    }
L_0891EC2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17436)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17436), ctx.gpr[5]);
    goto L_0891EC4C;
L_0891EC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ECF8;
      }
      goto L_0891EC54;
    }
L_0891EC54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ECF8;
      }
      goto L_0891EC64;
    }
L_0891EC64:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25056));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0891EC90u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 581u, 0x0884E3D4u>(ctx, &aot_mem) && ctx.pc == 0x0891EC90u) goto L_0891EC90;
    return;
L_0891EC90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ECAC;
      }
      goto L_0891EC98;
    }
L_0891EC98:
    ctx.gpr[31] = (0x0891ECA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D608;
L_0891ECA0:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891ECF8;
      }
      goto L_0891ECAC;
    }
L_0891ECAC:
    ctx.gpr[31] = (0x0891ECB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x0891ECB4u) goto L_0891ECB4;
    return;
L_0891ECB4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ECF8;
      }
      goto L_0891ECD8;
    }
L_0891ECD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17432)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17432), ctx.gpr[5]);
    goto L_0891ECF8;
L_0891ECF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891ED00;
    }
L_0891ED00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ED90;
      }
      goto L_0891ED0C;
    }
L_0891ED0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x0891ED64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D130;
L_0891ED64:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891ED84;
      }
      goto L_0891ED74;
    }
L_0891ED74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ED94;
      }
      goto L_0891ED84;
    }
L_0891ED84:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891ED94;
      }
      goto L_0891ED90;
    }
L_0891ED90:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    goto L_0891ED94;
L_0891ED94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891ED9C;
    }
L_0891ED9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EEA4;
      }
      goto L_0891EDA8;
    }
L_0891EDA8:
    ctx.gpr[31] = (0x0891EDB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D178;
L_0891EDB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x0891EE08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D140;
L_0891EE08:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EE40;
      }
      goto L_0891EE18;
    }
L_0891EE18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EE40;
      }
      goto L_0891EE28;
    }
L_0891EE28:
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0891EE38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x0891EE38u) goto L_0891EE38;
    return;
L_0891EE38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EEA8;
      }
      goto L_0891EE40;
    }
L_0891EE40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    ctx.gpr[31] = (0x0891EE4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 269u, 0x08A0E174u>(ctx, &aot_mem) && ctx.pc == 0x0891EE4Cu) goto L_0891EE4C;
    return;
L_0891EE4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EEA8;
      }
      goto L_0891EE54;
    }
L_0891EE54:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EEA8;
      }
      goto L_0891EE88;
    }
L_0891EE88:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(800));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891EEA8;
      }
      goto L_0891EEA4;
    }
L_0891EEA4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    goto L_0891EEA8;
L_0891EEA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891EEB0;
    }
L_0891EEB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EF58;
      }
      goto L_0891EEBC;
    }
L_0891EEBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x0891EF14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D130;
L_0891EF14:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EF34;
      }
      goto L_0891EF24;
    }
L_0891EF24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EF5C;
      }
      goto L_0891EF34;
    }
L_0891EF34:
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0891EF44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 834u, 0x0889FDC8u>(ctx, &aot_mem) && ctx.pc == 0x0891EF44u) goto L_0891EF44;
    return;
L_0891EF44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EF5C;
      }
      goto L_0891EF4C;
    }
L_0891EF4C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891EF5C;
      }
      goto L_0891EF58;
    }
L_0891EF58:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    goto L_0891EF5C;
L_0891EF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891EF64;
    }
L_0891EF64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F008;
      }
      goto L_0891EF70;
    }
L_0891EF70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x0891EFC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D140;
L_0891EFC8:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F00C;
      }
      goto L_0891EFD8;
    }
L_0891EFD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F00C;
      }
      goto L_0891EFE8;
    }
L_0891EFE8:
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), 0u);
    ctx.gpr[31] = (0x0891F000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x0891F000u) goto L_0891F000;
    return;
L_0891F000:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F00C;
      }
      goto L_0891F008;
    }
L_0891F008:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    goto L_0891F00C;
L_0891F00C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891F014;
    }
L_0891F014:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F060;
      }
      goto L_0891F058;
    }
L_0891F058:
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891F060;
L_0891F060:
    ctx.gpr[31] = (0x0891F068u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D178;
L_0891F068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891F070;
    }
L_0891F070:
    ctx.gpr[31] = (0x0891F078u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891F078u) goto L_0891F078;
    return;
L_0891F078:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x0891F090u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891F090u) goto L_0891F090;
    return;
L_0891F090:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[31] = (0x0891F0A8u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891F0A8u) goto L_0891F0A8;
    return;
L_0891F0A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0891F0BCu);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891F0BCu) goto L_0891F0BC;
    return;
L_0891F0BC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F100;
      }
      goto L_0891F0EC;
    }
L_0891F0EC:
    ctx.gpr[31] = (0x0891F0F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D608;
L_0891F0F4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891F100;
L_0891F100:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F17C;
      }
      goto L_0891F118;
    }
L_0891F118:
    ctx.gpr[31] = (0x0891F120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F120u) goto L_0891F120;
    return;
L_0891F120:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F17C;
      }
      goto L_0891F130;
    }
L_0891F130:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F190;
      }
      goto L_0891F140;
    }
L_0891F140:
    ctx.gpr[31] = (0x0891F148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F148u) goto L_0891F148;
    return;
L_0891F148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F17C;
      }
      goto L_0891F154;
    }
L_0891F154:
    ctx.gpr[31] = (0x0891F15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F15Cu) goto L_0891F15C;
    return;
L_0891F15C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F17C;
      }
      goto L_0891F16C;
    }
L_0891F16C:
    ctx.gpr[31] = (0x0891F174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 424u, 0x08ACA960u>(ctx, &aot_mem) && ctx.pc == 0x0891F174u) goto L_0891F174;
    return;
L_0891F174:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F190;
      }
      goto L_0891F17C;
    }
L_0891F17C:
    ctx.gpr[31] = (0x0891F184u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D608;
L_0891F184:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891F190;
L_0891F190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891F198;
    }
L_0891F198:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x0891F1A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891F1A4u) goto L_0891F1A4;
    return;
L_0891F1A4:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891F1BCu);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891F1BCu) goto L_0891F1BC;
    return;
L_0891F1BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0891F1F4;
    }
    goto L_0891F1F4;
L_0891F1F4:
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[31] = (0x0891F204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891F204u) goto L_0891F204;
    return;
L_0891F204:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F248;
      }
      goto L_0891F20C;
    }
L_0891F20C:
    ctx.gpr[31] = (0x0891F214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x0891F214u) goto L_0891F214;
    return;
L_0891F214:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0891F220u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x0891F220u) goto L_0891F220;
    return;
L_0891F220:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (15692u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F250;
      }
      goto L_0891F248;
    }
L_0891F248:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891F250;
L_0891F250:
    ctx.gpr[31] = (0x0891F258u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D178;
L_0891F258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891F260;
    }
L_0891F260:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F278;
      }
      goto L_0891F270;
    }
L_0891F270:
    ctx.gpr[31] = (0x0891F278u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891DF3C;
L_0891F278:
    ctx.gpr[31] = (0x0891F280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D178;
L_0891F280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891F288;
    }
L_0891F288:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891F298;
    }
L_0891F298:
    ctx.gpr[31] = (0x0891F2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F2A0u) goto L_0891F2A0;
    return;
L_0891F2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891F2AC;
    }
L_0891F2AC:
    ctx.gpr[31] = (0x0891F2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 424u, 0x08ACA960u>(ctx, &aot_mem) && ctx.pc == 0x0891F2B4u) goto L_0891F2B4;
    return;
L_0891F2B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891F2BC;
    }
L_0891F2BC:
    ctx.gpr[31] = (0x0891F2C4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891F2C4u) goto L_0891F2C4;
    return;
L_0891F2C4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0891F2E8;
    }
    goto L_0891F2E8;
L_0891F2E8:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F344;
      }
      goto L_0891F300;
    }
L_0891F300:
    ctx.gpr[31] = (0x0891F308u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891F308u) goto L_0891F308;
    return;
L_0891F308:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0891F32C;
    }
    goto L_0891F32C;
L_0891F32C:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F3A4;
      }
      goto L_0891F344;
    }
L_0891F344:
    ctx.gpr[31] = (0x0891F34Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891DA9C;
L_0891F34C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891F36Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0891F36Cu) goto L_0891F36C;
    return;
L_0891F36C:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891F388;
      }
      goto L_0891F378;
    }
L_0891F378:
    ctx.gpr[31] = (0x0891F380u);
    // nop
    goto L_0891DA20;
L_0891F380:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_0891F394;
      }
      goto L_0891F388;
    }
L_0891F388:
    ctx.gpr[31] = (0x0891F390u);
    // nop
    goto L_0891D928;
L_0891F390:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0891F394;
L_0891F394:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891F3F0;
      }
      goto L_0891F3A4;
    }
L_0891F3A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F3F0;
      }
      goto L_0891F3B4;
    }
L_0891F3B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891F3D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D608;
L_0891F3D0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0891F3DCu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F3DCu) goto L_0891F3DC;
    return;
L_0891F3DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F3F0;
      }
      goto L_0891F3EC;
    }
L_0891F3EC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    goto L_0891F3F0;
L_0891F3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E234;
      }
      goto L_0891F3F8;
    }
L_0891F3F8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0891F404;
      }
      goto L_0891F404;
    }
L_0891F404:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_0891F44C;
    }
    goto L_0891F414;
L_0891F414:
    ctx.gpr[31] = (0x0891F41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F41Cu) goto L_0891F41C;
    return;
L_0891F41C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_0891F44C;
    }
    goto L_0891F428;
L_0891F428:
    ctx.gpr[31] = (0x0891F430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 428u, 0x08ACA988u>(ctx, &aot_mem) && ctx.pc == 0x0891F430u) goto L_0891F430;
    return;
L_0891F430:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_0891F44C;
    }
    goto L_0891F438;
L_0891F438:
    ctx.gpr[31] = (0x0891F440u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D608;
L_0891F440:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_0891F44C;
L_0891F44C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (14761u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 56970u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F488;
      }
      goto L_0891F478;
    }
L_0891F478:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(388), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    goto L_0891F488;
L_0891F488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F630;
      }
      goto L_0891F49C;
    }
L_0891F49C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(399))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F630;
      }
      goto L_0891F4A8;
    }
L_0891F4A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F630;
      }
      goto L_0891F4B4;
    }
L_0891F4B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F630;
      }
      goto L_0891F4C4;
    }
L_0891F4C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F630;
      }
      goto L_0891F4D4;
    }
L_0891F4D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F630;
      }
      goto L_0891F4E0;
    }
L_0891F4E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
        goto L_0891F504;
    }
    goto L_0891F4F0;
L_0891F4F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F630;
      }
      goto L_0891F500;
    }
L_0891F500:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    goto L_0891F504;
L_0891F504:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F52C;
      }
      goto L_0891F510;
    }
L_0891F510:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F630;
      }
      goto L_0891F51C;
    }
L_0891F51C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F630;
      }
      goto L_0891F52C;
    }
L_0891F52C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F554;
      }
      goto L_0891F548;
    }
L_0891F548:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    goto L_0891F554;
L_0891F554:
    ctx.gpr[4] = (14761u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 56970u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F630;
      }
      goto L_0891F570;
    }
L_0891F570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(384)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F630;
      }
      goto L_0891F58C;
    }
L_0891F58C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
        goto L_0891F5B4;
    }
    goto L_0891F5A0;
L_0891F5A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F5C0;
      }
      goto L_0891F5B0;
    }
L_0891F5B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    goto L_0891F5B4;
L_0891F5B4:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F5D4;
      }
      goto L_0891F5C0;
    }
L_0891F5C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1500));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891F5E4;
      }
      goto L_0891F5D4;
    }
L_0891F5D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(700));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_0891F5E4;
L_0891F5E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891F618;
      }
      goto L_0891F600;
    }
L_0891F600:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
        goto L_0891F614;
    }
    goto L_0891F614;
L_0891F614:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891F618;
L_0891F618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0891F630u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F630u) goto L_0891F630;
    return;
L_0891F630:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F6D0;
      }
      goto L_0891F640;
    }
L_0891F640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(388)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(30001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F6D0;
      }
      goto L_0891F65C;
    }
L_0891F65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(388)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8132)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(30001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F6D0;
      }
      goto L_0891F678;
    }
L_0891F678:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F6D0;
      }
      goto L_0891F688;
    }
L_0891F688:
    ctx.gpr[31] = (0x0891F690u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 394u, 0x08865B74u>(ctx, &aot_mem) && ctx.pc == 0x0891F690u) goto L_0891F690;
    return;
L_0891F690:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F6D0;
      }
      goto L_0891F698;
    }
L_0891F698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891F6B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 218u, 0x089ED5ACu>(ctx, &aot_mem) && ctx.pc == 0x0891F6B4u) goto L_0891F6B4;
    return;
L_0891F6B4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_0891F6D0;
L_0891F6D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F734;
      }
      goto L_0891F6E0;
    }
L_0891F6E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F700;
      }
      goto L_0891F6F0;
    }
L_0891F6F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F734;
      }
      goto L_0891F700;
    }
L_0891F700:
    ctx.gpr[31] = (0x0891F708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891F708u) goto L_0891F708;
    return;
L_0891F708:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F734;
      }
      goto L_0891F710;
    }
L_0891F710:
    ctx.gpr[31] = (0x0891F718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891F718u) goto L_0891F718;
    return;
L_0891F718:
    ctx.gpr[31] = (0x0891F720u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0891F720u) goto L_0891F720;
    return;
L_0891F720:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891F734;
      }
      goto L_0891F72C;
    }
L_0891F72C:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891F734;
L_0891F734:
    ctx.gpr[4] = (48947u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F76C;
      }
      goto L_0891F754;
    }
L_0891F754:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_0891F76C;
L_0891F76C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(399))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F95C;
      }
      goto L_0891F778;
    }
L_0891F778:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891F95C;
      }
      goto L_0891F788;
    }
L_0891F788:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F95C;
      }
      goto L_0891F790;
    }
L_0891F790:
    ctx.gpr[31] = (0x0891F798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891F798u) goto L_0891F798;
    return;
L_0891F798:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F95C;
      }
      goto L_0891F7A0;
    }
L_0891F7A0:
    ctx.gpr[31] = (0x0891F7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x0891F7A8u) goto L_0891F7A8;
    return;
L_0891F7A8:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F95C;
      }
      goto L_0891F7E4;
    }
L_0891F7E4:
    ctx.gpr[31] = (0x0891F7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x0891F7ECu) goto L_0891F7EC;
    return;
L_0891F7EC:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F95C;
      }
      goto L_0891F81C;
    }
L_0891F81C:
    ctx.gpr[31] = (0x0891F824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891F824u) goto L_0891F824;
    return;
L_0891F824:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0891F83Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891F83Cu) goto L_0891F83C;
    return;
L_0891F83C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F95C;
      }
      goto L_0891F864;
    }
L_0891F864:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[31] = (0x0891F870u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891F870u) goto L_0891F870;
    return;
L_0891F870:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891F888u);
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891F888u) goto L_0891F888;
    return;
L_0891F888:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[24] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x0891F8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x0891F8ACu) goto L_0891F8AC;
    return;
L_0891F8AC:
    ctx.gpr[31] = (0x0891F8B4u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 175u, 0x089D5818u>(ctx, &aot_mem) && ctx.pc == 0x0891F8B4u) goto L_0891F8B4;
    return;
L_0891F8B4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[12] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (16128u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F95C;
      }
      goto L_0891F8F4;
    }
L_0891F8F4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x0891F900u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891F900u) goto L_0891F900;
    return;
L_0891F900:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F95C;
      }
      goto L_0891F944;
    }
L_0891F944:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_0891F95C;
L_0891F95C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FA10;
      }
      goto L_0891F968;
    }
L_0891F968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891FA10;
      }
      goto L_0891F97C;
    }
L_0891F97C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[31] = (0x0891F988u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0891F988u) goto L_0891F988;
    return;
L_0891F988:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FA10;
      }
      goto L_0891F9CC;
    }
L_0891F9CC:
    ctx.gpr[31] = (0x0891F9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891F9D4u) goto L_0891F9D4;
    return;
L_0891F9D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F9F8;
      }
      goto L_0891F9DC;
    }
L_0891F9DC:
    ctx.gpr[31] = (0x0891F9E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891F9E4u) goto L_0891F9E4;
    return;
L_0891F9E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891F9F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 269u, 0x08A0E174u>(ctx, &aot_mem) && ctx.pc == 0x0891F9F0u) goto L_0891F9F0;
    return;
L_0891F9F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FA10;
      }
      goto L_0891F9F8;
    }
L_0891F9F8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_0891FA10;
L_0891FA10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FA48;
      }
      goto L_0891FA1C;
    }
L_0891FA1C:
    ctx.gpr[31] = (0x0891FA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0891FA24u) goto L_0891FA24;
    return;
L_0891FA24:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 173u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891FA48;
      }
      goto L_0891FA40;
    }
L_0891FA40:
    ctx.gpr[4] = (0u | 45u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), ctx.gpr[4]);
    goto L_0891FA48;
L_0891FA48:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891FAA0;
      }
      goto L_0891FA60;
    }
L_0891FA60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(409))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
        goto L_0891FA84;
    }
    goto L_0891FA70;
L_0891FA70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891FA98;
      }
      goto L_0891FA78;
    }
L_0891FA78:
    ctx.gpr[4] = (16320u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891FAA0;
      }
      goto L_0891FA84;
    }
L_0891FA84:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FA98;
      }
      goto L_0891FA8C;
    }
L_0891FA8C:
    ctx.gpr[4] = (16384u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891FAA0;
      }
      goto L_0891FA98;
    }
L_0891FA98:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0891FAA0;
L_0891FAA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0891FAD4;
    }
    goto L_0891FAD4;
L_0891FAD4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FAEC;
      }
      goto L_0891FAE4;
    }
L_0891FAE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0891FB1C;
      }
      goto L_0891FAEC;
    }
L_0891FAEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FB10;
      }
      goto L_0891FB00;
    }
L_0891FB00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891FB1C;
      }
      goto L_0891FB10;
    }
L_0891FB10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0891FB1C;
L_0891FB1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FC14;
      }
      goto L_0891FB2C;
    }
L_0891FB2C:
    ctx.gpr[31] = (0x0891FB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0891FB34u) goto L_0891FB34;
    return;
L_0891FB34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891FC14;
      }
      goto L_0891FB40;
    }
L_0891FB40:
    ctx.gpr[31] = (0x0891FB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891FB48u) goto L_0891FB48;
    return;
L_0891FB48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FB88;
      }
      goto L_0891FB50;
    }
L_0891FB50:
    ctx.gpr[31] = (0x0891FB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891FB58u) goto L_0891FB58;
    return;
L_0891FB58:
    ctx.gpr[31] = (0x0891FB60u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0891FB60u) goto L_0891FB60;
    return;
L_0891FB60:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891FB88;
      }
      goto L_0891FB6C;
    }
L_0891FB6C:
    ctx.gpr[31] = (0x0891FB74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891FB74u) goto L_0891FB74;
    return;
L_0891FB74:
    ctx.gpr[31] = (0x0891FB7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0891FB7Cu) goto L_0891FB7C;
    return;
L_0891FB7C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891FBB8;
      }
      goto L_0891FB88;
    }
L_0891FB88:
    ctx.gpr[31] = (0x0891FB90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0891FB90u) goto L_0891FB90;
    return;
L_0891FB90:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891FC14;
      }
      goto L_0891FB9C;
    }
L_0891FB9C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891FC14;
      }
      goto L_0891FBB8;
    }
L_0891FBB8:
    ctx.gpr[31] = (0x0891FBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0891FBC0u) goto L_0891FBC0;
    return;
L_0891FBC0:
    ctx.gpr[31] = (0x0891FBC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0891FBC8u) goto L_0891FBC8;
    return;
L_0891FBC8:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891FC14;
      }
      goto L_0891FBD4;
    }
L_0891FBD4:
    ctx.gpr[31] = (0x0891FBDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0891FBDCu) goto L_0891FBDC;
    return;
L_0891FBDC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891FBFC;
      }
      goto L_0891FBE8;
    }
L_0891FBE8:
    ctx.gpr[31] = (0x0891FBF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0891FBF0u) goto L_0891FBF0;
    return;
L_0891FBF0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891FC14;
      }
      goto L_0891FBFC;
    }
L_0891FBFC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_0891FC14;
L_0891FC14:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891FC3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[17] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15312)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.fpr[17] = std::sqrt(ctx.fpr[17]);
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FCB0;
      }
      goto L_0891FC90;
    }
L_0891FC90:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[17];
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891FCB8;
      }
      goto L_0891FCA8;
    }
L_0891FCA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FFAC;
      }
      goto L_0891FCB0;
    }
L_0891FCB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FFAC;
      }
      goto L_0891FCB8;
    }
L_0891FCB8:
    ctx.gpr[8] = (16948u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16800u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (15692u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[5] << 5u);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[15];
    ctx.gpr[9] = (0u - ctx.gpr[8]);
    ctx.gpr[24] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] << 1u);
    ctx.gpr[25] = (ctx.gpr[9] - ctx.gpr[24]);
    ctx.gpr[9] = (ctx.gpr[24] << 2u);
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[9]);
    ctx.gpr[9] = (16204u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    ctx.fpr[19] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[15] = (0u | 5u);
    ctx.gpr[9] = (16179u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[14] = (0u | 32u);
    ctx.gpr[9] = (16544u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[13] = (0u | 48u);
    ctx.gpr[12] = (0u | 1u);
    ctx.gpr[3] = (0u | 2u);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[11] = (0u | 9u);
    ctx.gpr[10] = (0u | 10u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[9] = (2230u << 16u);
    goto L_0891FD48;
L_0891FD48:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[5]);
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (ctx.gpr[24] & 128u);
    if (ctx.gpr[24] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_0891FD68;
    }
    goto L_0891FD60;
L_0891FD60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0891FD6C;
      }
      goto L_0891FD68;
    }
L_0891FD68:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[25]);
    goto L_0891FD6C;
L_0891FD6C:
    ctx.gpr[24] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FD78;
    }
L_0891FD78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FD8C;
      }
      goto L_0891FD84;
    }
L_0891FD84:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[15];
    // nop
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FD8C;
    }
L_0891FD8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (ctx.gpr[16] & 496u);
    if (ctx.gpr[18] == ctx.gpr[14]) {
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(596)));
        goto L_0891FDA8;
    }
    goto L_0891FD9C;
L_0891FD9C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FDA4;
    }
L_0891FDA4:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(596)));
    goto L_0891FDA8;
L_0891FDA8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FDB0;
    }
L_0891FDB0:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[19] = (ctx.gpr[18] & 1u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FDC0;
    }
L_0891FDC0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[18] & 2u);
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FDC8;
    }
L_0891FDC8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[17] = (ctx.gpr[18] & 4u);
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FDD0;
    }
L_0891FDD0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FDD8;
    }
L_0891FDD8:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(397))))));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    ctx.gpr[17] = (ctx.gpr[24] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FDE4;
    }
L_0891FDE4:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
        goto L_0891FE00;
    }
    goto L_0891FE00;
L_0891FE00:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FE10;
    }
L_0891FE10:
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[4] = ctx.fpr[4] - ctx.fpr[0];
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[2];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[5];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FE48;
    }
L_0891FE48:
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(112)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[6];
    ctx.fpr[5] = std::sqrt(ctx.fpr[5]);
    ctx.set_fpu_condition((ctx.fpr[5] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FE70;
    }
L_0891FE70:
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[6];
    ctx.fpr[0] = ctx.fpr[5] / ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FE90;
    }
L_0891FE90:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[24] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891FF60;
      }
      goto L_0891FEA0;
    }
L_0891FEA0:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[5];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
        goto L_0891FF28;
    }
    goto L_0891FEC4;
L_0891FEC4:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(399))))));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0891FF18;
      }
      goto L_0891FED0;
    }
L_0891FED0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_0891FF18;
      }
      goto L_0891FED8;
    }
L_0891FED8:
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FF04;
      }
      goto L_0891FEF4;
    }
L_0891FEF4:
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-8148)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2000));
      if (branch_taken) {
          goto L_0891FF10;
      }
      goto L_0891FF04;
    }
L_0891FF04:
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2000));
    goto L_0891FF10;
L_0891FF10:
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(400), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(68)));
    goto L_0891FF18;
L_0891FF18:
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[8]);
    ctx.gpr[16] = (ctx.gpr[16] | 48u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FF28;
    }
L_0891FF28:
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FF40;
    }
L_0891FF40:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(399))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FF4C;
    }
L_0891FF4C:
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(400), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FF60;
    }
L_0891FF60:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FF7C;
    }
L_0891FF7C:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(399))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0891FF98;
      }
      goto L_0891FF88;
    }
L_0891FF88:
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(400), ctx.gpr[16]);
    goto L_0891FF98;
L_0891FF98:
    ctx.gpr[24] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_0891FD48;
      }
      goto L_0891FFAC;
    }
L_0891FFAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891FFC4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27404)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27400)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.pc = 0x08920000u; return;
}

void recomp_unit_0070(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0070_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_70(Runtime &runtime) {
    runtime.register_generated_unit(70u, 0x0891C000u, 16384u, &recomp_unit_0070, &recomp_unit_0070_entry);
    runtime.register_function(0x0891C000u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C008u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C014u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C024u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C034u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C044u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C054u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C068u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C06Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C074u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C09Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C100u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C124u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C14Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C160u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C164u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C174u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C17Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C180u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C194u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C218u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C23Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C254u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C264u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C26Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C27Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C284u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C29Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C314u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C320u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C350u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C360u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C374u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C38Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C390u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C398u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C404u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C42Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C448u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C48Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C494u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C514u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C540u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C550u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C554u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C55Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C600u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C650u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C660u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C688u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C720u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C734u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C73Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C740u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C750u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C764u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C76Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C778u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C784u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C794u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C79Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C804u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C80Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C820u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C82Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C834u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C83Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C844u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C84Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C854u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C85Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C878u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C890u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C930u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C93Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C940u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C950u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C960u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C964u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C96Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C97Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C98Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA28u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CACCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CADCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CDD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CDF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D044u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D050u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D06Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D07Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D104u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D130u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D140u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D150u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D15Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D170u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D178u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D18Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D19Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D204u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D20Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D210u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D220u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D230u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D25Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D26Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D294u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D334u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D33Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D344u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D348u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D34Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D390u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D400u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D420u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D438u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D440u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D448u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D450u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D45Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D464u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D46Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D474u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D47Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D484u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D490u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D498u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D500u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D50Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D518u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D520u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D528u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D540u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D570u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D57Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D580u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D598u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D608u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D63Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D648u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D65Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D674u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D680u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D688u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D690u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D728u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D73Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D764u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D798u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D810u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D824u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D830u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D848u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D850u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D864u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D890u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D8A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D8CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D8ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D914u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D928u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D96Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D984u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D98Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D994u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DAE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBF8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DEBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DEC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E020u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E030u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E040u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E050u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E060u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E068u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E06Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E084u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E09Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E12Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E134u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E140u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E154u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E168u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E180u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E188u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E20Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E21Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E224u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E22Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E234u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E23Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E244u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E25Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E274u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E288u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E304u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E30Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E314u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E31Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E328u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E330u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E340u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E350u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E358u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E38Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E40Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E444u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E448u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E450u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E458u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E460u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E468u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E470u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E478u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E504u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E50Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E518u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E528u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E52Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E53Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E544u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E54Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E554u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E55Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E574u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E58Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E600u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E608u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E610u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E618u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E630u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E648u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E65Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E67Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E68Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E69Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E724u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E75Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E760u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E768u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E770u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E778u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E780u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E788u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E790u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E804u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E808u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E81Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E824u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E830u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E840u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E844u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E854u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E85Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E864u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E86Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E91Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E92Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E934u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E93Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E978u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E988u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EABCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECF8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE28u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F000u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F008u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F00Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F014u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F058u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F060u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F068u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F070u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F078u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F090u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F100u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F118u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F120u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F130u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F140u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F148u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F154u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F15Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F16Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F174u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F17Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F184u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F190u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F198u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F204u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F20Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F214u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F220u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F248u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F250u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F258u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F260u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F270u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F278u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F280u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F288u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F298u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F300u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F308u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F32Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F344u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F34Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F36Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F378u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F380u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F388u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F390u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F394u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F404u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F414u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F41Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F428u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F430u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F438u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F440u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F44Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F478u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F488u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F49Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F500u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F504u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F510u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F51Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F52Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F548u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F554u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F570u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F58Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F600u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F614u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F618u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F630u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F640u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F65Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F678u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F688u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F690u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F698u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F700u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F708u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F710u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F718u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F720u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F72Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F734u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F754u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F76Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F778u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F788u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F790u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F798u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F81Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F824u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F83Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F864u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F870u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F888u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F900u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F944u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F95Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F968u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F97Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F988u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FED0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FED8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF28u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFC4u, &recomp_unit_0070, "recomp_unit_0070");
}
} // namespace psprecomp
