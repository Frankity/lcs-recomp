#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0160[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0,
    32, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0,
    0, 49, 0, 50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0,
    0, 68, 0, 69, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 77, 0, 0,
    78, 79, 0, 0, 80, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 87,
    0, 0, 0, 88, 0, 89, 0, 0, 90, 91, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97,
    0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0,
    0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 0,
    111, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0,
    122, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 130,
    131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0,
    0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0,
    0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 161, 162, 0,
    0, 163, 0, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 170, 171, 172, 0, 0, 173, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0,
    183, 0, 184, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197,
    198, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 207, 0, 208, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0, 218, 0, 219, 0, 0, 220, 0,
    0, 221, 0, 222, 223, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 229, 230, 0, 231, 0, 0, 0, 0, 0, 232, 0,
    233, 0, 0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0, 0, 243, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0,
    245, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0,
    0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 262, 0, 263, 264, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 275,
    0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 285, 0, 286,
    0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294,
    0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0,
    302, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0,
    0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0,
    0, 317, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 324, 0, 325, 0, 0, 0,
    326, 327, 0, 0, 0, 0, 328, 0, 329, 0, 0, 330, 0, 331, 0, 0, 0, 332, 333, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340,
    0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 352, 353, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0,
    0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372,
    373, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 381, 0,
    0, 0, 382, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 386, 0, 387, 388, 0, 0, 389, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0,
    0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412,
    0, 0, 0, 413, 0, 414, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 420, 421, 0, 422, 0, 423, 0, 424, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 426, 427, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 432, 433, 0, 434, 0, 435, 0, 436, 0, 0, 437,
    0, 0, 438, 0, 0, 439, 0, 440, 441, 0, 442, 0, 443, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 448, 449, 0, 450, 0, 451, 0,
    452, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 456, 457, 0, 458, 0, 459, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 464, 465, 0,
    466, 0, 467, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 472, 473, 0, 474, 0, 475, 0, 476, 0, 0, 477, 0, 0, 478, 0, 0, 479,
    0, 480, 481, 0, 482, 0, 483, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0, 487, 0, 488, 489, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 0,
    494, 0, 0, 495, 0, 496, 497, 0, 498, 0, 499, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 504, 505, 0, 506, 0, 507, 0, 508, 0,
    0, 509, 0, 0, 510, 0, 0, 511, 0, 512, 513, 0, 514, 0, 515, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 520, 521, 0, 522, 0,
    523, 0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 528, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 0, 0, 0, 0,
    536, 0, 0, 0, 0, 0, 537, 0, 538, 0, 539, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 542, 0, 543, 0, 544, 0, 545, 0, 0,
    0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0,
    549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553,
    0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 569, 0, 0, 0, 0, 570, 0, 0, 571,
    0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 0, 577, 0, 578, 0, 579, 0, 0, 580, 0,
    0, 581, 0, 0, 582, 0, 0, 0, 583, 0, 0, 584, 0, 0, 585, 0, 586, 587, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 593, 0, 0, 0, 0, 594, 0, 0, 0, 595, 596, 0, 597, 0, 0, 0, 0, 598,
    0, 0, 0, 0, 0, 599, 600, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 603, 604, 0, 0, 0, 0,
    0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 0, 0, 611, 0, 0, 612,
    0, 0, 613, 0, 614, 615, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 618, 0, 619, 0, 0, 620, 0, 621, 622, 0, 0, 0, 0, 623, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0,
    633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 635, 0, 0, 0, 636, 0, 0, 637, 0, 638, 639, 0, 0, 0, 0, 640, 0, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 0, 0,
    0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0,
    651, 0, 652, 0, 0, 653, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 661, 0, 662, 0, 663,
    0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0,
    667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 670, 0,
    671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0,
    0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678,
    0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 684, 0,
    0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 690, 0, 691, 692, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 0, 699,
    0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 708, 0, 0, 709, 0, 0, 0, 0, 710, 0, 711, 0, 0, 0,
    712, 0, 713, 0, 714, 0, 0, 715, 0, 716, 0, 0, 0, 0, 717, 0, 718, 0, 719, 0, 720, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 723,
    0, 0, 724, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 735, 0, 736, 0,
    0, 0, 737, 0, 738, 0, 0, 0, 739, 0, 740, 0, 0, 0, 741, 0, 0, 0, 742, 0, 743, 0, 0, 0, 744, 0, 0, 745, 0, 0, 746, 0,
    0, 0, 747, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751,
    0, 752, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 755, 0, 0, 756, 0, 0, 757, 0, 758, 0, 0, 0, 0, 759, 0, 760, 0, 761,
    762, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 767, 0, 768,
    0, 0, 769, 0, 0, 770, 0, 0, 0, 0, 771, 0, 0, 772, 773, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0,
    0, 0, 0, 776, 0, 0, 777, 0, 778, 0, 779, 0, 0, 0, 780, 0, 781, 0, 782, 0, 0, 783, 784, 0, 785, 0, 786, 0, 0, 787, 0, 0,
    0, 788, 789, 0, 0, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 792, 0, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 0, 795, 0, 0, 0,
    0, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0, 798, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 801, 0, 0, 0, 802, 0, 803,
    0, 804, 0, 0, 0, 805, 0, 806, 0, 0, 807, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 810, 811, 0, 0, 812,
};
void recomp_unit_0160_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A84000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0160[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A84000;
    case 2u: goto L_08A84020;
    case 3u: goto L_08A84034;
    case 4u: goto L_08A8403C;
    case 5u: goto L_08A84044;
    case 6u: goto L_08A840D8;
    case 7u: goto L_08A840E0;
    case 8u: goto L_08A840E8;
    case 9u: goto L_08A84134;
    case 10u: goto L_08A84148;
    case 11u: goto L_08A84150;
    case 12u: goto L_08A84158;
    case 13u: goto L_08A841F0;
    case 14u: goto L_08A84204;
    case 15u: goto L_08A84214;
    case 16u: goto L_08A84228;
    case 17u: goto L_08A84238;
    case 18u: goto L_08A84240;
    case 19u: goto L_08A84254;
    case 20u: goto L_08A8426C;
    case 21u: goto L_08A842A4;
    case 22u: goto L_08A842B8;
    case 23u: goto L_08A842C0;
    case 24u: goto L_08A842E0;
    case 25u: goto L_08A842E8;
    case 26u: goto L_08A842F0;
    case 27u: goto L_08A8431C;
    case 28u: goto L_08A84358;
    case 29u: goto L_08A8438C;
    case 30u: goto L_08A843D8;
    case 31u: goto L_08A843E4;
    case 32u: goto L_08A84400;
    case 33u: goto L_08A84408;
    case 34u: goto L_08A84418;
    case 35u: goto L_08A84420;
    case 36u: goto L_08A84438;
    case 37u: goto L_08A84440;
    case 38u: goto L_08A84450;
    case 39u: goto L_08A84468;
    case 40u: goto L_08A84480;
    case 41u: goto L_08A84490;
    case 42u: goto L_08A844A0;
    case 43u: goto L_08A844AC;
    case 44u: goto L_08A844B8;
    case 45u: goto L_08A844C8;
    case 46u: goto L_08A844D8;
    case 47u: goto L_08A844F0;
    case 48u: goto L_08A844F8;
    case 49u: goto L_08A84504;
    case 50u: goto L_08A8450C;
    case 51u: goto L_08A84518;
    case 52u: goto L_08A8452C;
    case 53u: goto L_08A84544;
    case 54u: goto L_08A84588;
    case 55u: goto L_08A8459C;
    case 56u: goto L_08A845A4;
    case 57u: goto L_08A845B4;
    case 58u: goto L_08A845BC;
    case 59u: goto L_08A845C4;
    case 60u: goto L_08A845E4;
    case 61u: goto L_08A845F0;
    case 62u: goto L_08A84610;
    case 63u: goto L_08A8462C;
    case 64u: goto L_08A84648;
    case 65u: goto L_08A84660;
    case 66u: goto L_08A84668;
    case 67u: goto L_08A84670;
    case 68u: goto L_08A84684;
    case 69u: goto L_08A8468C;
    case 70u: goto L_08A8469C;
    case 71u: goto L_08A846A4;
    case 72u: goto L_08A846AC;
    case 73u: goto L_08A846B4;
    case 74u: goto L_08A846C8;
    case 75u: goto L_08A846DC;
    case 76u: goto L_08A846EC;
    case 77u: goto L_08A846F4;
    case 78u: goto L_08A84700;
    case 79u: goto L_08A84704;
    case 80u: goto L_08A84710;
    case 81u: goto L_08A8471C;
    case 82u: goto L_08A84724;
    case 83u: goto L_08A8472C;
    case 84u: goto L_08A8473C;
    case 85u: goto L_08A84760;
    case 86u: goto L_08A84768;
    case 87u: goto L_08A8477C;
    case 88u: goto L_08A8478C;
    case 89u: goto L_08A84794;
    case 90u: goto L_08A847A0;
    case 91u: goto L_08A847A4;
    case 92u: goto L_08A847B0;
    case 93u: goto L_08A847BC;
    case 94u: goto L_08A847C4;
    case 95u: goto L_08A847DC;
    case 96u: goto L_08A847E4;
    case 97u: goto L_08A847FC;
    case 98u: goto L_08A84804;
    case 99u: goto L_08A84818;
    case 100u: goto L_08A8482C;
    case 101u: goto L_08A8485C;
    case 102u: goto L_08A8486C;
    case 103u: goto L_08A84878;
    case 104u: goto L_08A8488C;
    case 105u: goto L_08A84894;
    case 106u: goto L_08A848AC;
    case 107u: goto L_08A848C4;
    case 108u: goto L_08A848D8;
    case 109u: goto L_08A848E0;
    case 110u: goto L_08A848EC;
    case 111u: goto L_08A84900;
    case 112u: goto L_08A84908;
    case 113u: goto L_08A84910;
    case 114u: goto L_08A84924;
    case 115u: goto L_08A8492C;
    case 116u: goto L_08A8493C;
    case 117u: goto L_08A84944;
    case 118u: goto L_08A84950;
    case 119u: goto L_08A84958;
    case 120u: goto L_08A84960;
    case 121u: goto L_08A8496C;
    case 122u: goto L_08A84980;
    case 123u: goto L_08A84988;
    case 124u: goto L_08A84998;
    case 125u: goto L_08A849AC;
    case 126u: goto L_08A849B4;
    case 127u: goto L_08A849D8;
    case 128u: goto L_08A849E8;
    case 129u: goto L_08A849F0;
    case 130u: goto L_08A849FC;
    case 131u: goto L_08A84A00;
    case 132u: goto L_08A84A18;
    case 133u: goto L_08A84A34;
    case 134u: goto L_08A84A40;
    case 135u: goto L_08A84A5C;
    case 136u: goto L_08A84A68;
    case 137u: goto L_08A84A88;
    case 138u: goto L_08A84A90;
    case 139u: goto L_08A84A98;
    case 140u: goto L_08A84AE4;
    case 141u: goto L_08A84AF0;
    case 142u: goto L_08A84B08;
    case 143u: goto L_08A84B3C;
    case 144u: goto L_08A84B80;
    case 145u: goto L_08A84B8C;
    case 146u: goto L_08A84BA8;
    case 147u: goto L_08A84BB0;
    case 148u: goto L_08A84BF8;
    case 149u: goto L_08A84C04;
    case 150u: goto L_08A84C24;
    case 151u: goto L_08A84C30;
    case 152u: goto L_08A84C38;
    case 153u: goto L_08A84C40;
    case 154u: goto L_08A84C9C;
    case 155u: goto L_08A84CA4;
    case 156u: goto L_08A84CB4;
    case 157u: goto L_08A84CD0;
    case 158u: goto L_08A84CDC;
    case 159u: goto L_08A84CE8;
    case 160u: goto L_08A84CF0;
    case 161u: goto L_08A84CF4;
    case 162u: goto L_08A84CF8;
    case 163u: goto L_08A84D04;
    case 164u: goto L_08A84D18;
    case 165u: goto L_08A84D20;
    case 166u: goto L_08A84D2C;
    case 167u: goto L_08A84D40;
    case 168u: goto L_08A84D4C;
    case 169u: goto L_08A84D58;
    case 170u: goto L_08A84D60;
    case 171u: goto L_08A84D64;
    case 172u: goto L_08A84D68;
    case 173u: goto L_08A84D74;
    case 174u: goto L_08A84D98;
    case 175u: goto L_08A84DA0;
    case 176u: goto L_08A84DA8;
    case 177u: goto L_08A84DBC;
    case 178u: goto L_08A84DCC;
    case 179u: goto L_08A84DD4;
    case 180u: goto L_08A84DDC;
    case 181u: goto L_08A84DE8;
    case 182u: goto L_08A84DF4;
    case 183u: goto L_08A84E00;
    case 184u: goto L_08A84E08;
    case 185u: goto L_08A84E0C;
    case 186u: goto L_08A84E14;
    case 187u: goto L_08A84E20;
    case 188u: goto L_08A84E34;
    case 189u: goto L_08A84E3C;
    case 190u: goto L_08A84E74;
    case 191u: goto L_08A84EB4;
    case 192u: goto L_08A84EC0;
    case 193u: goto L_08A84ED0;
    case 194u: goto L_08A84EDC;
    case 195u: goto L_08A84EE8;
    case 196u: goto L_08A84EF4;
    case 197u: goto L_08A84EFC;
    case 198u: goto L_08A84F00;
    case 199u: goto L_08A84F08;
    case 200u: goto L_08A84F14;
    case 201u: goto L_08A84F28;
    case 202u: goto L_08A84F30;
    case 203u: goto L_08A84F40;
    case 204u: goto L_08A84F50;
    case 205u: goto L_08A84F68;
    case 206u: goto L_08A84F88;
    case 207u: goto L_08A84F90;
    case 208u: goto L_08A84F98;
    case 209u: goto L_08A84F9C;
    case 210u: goto L_08A84FC8;
    case 211u: goto L_08A8501C;
    case 212u: goto L_08A85028;
    case 213u: goto L_08A85034;
    case 214u: goto L_08A8503C;
    case 215u: goto L_08A85044;
    case 216u: goto L_08A8504C;
    case 217u: goto L_08A85054;
    case 218u: goto L_08A85064;
    case 219u: goto L_08A8506C;
    case 220u: goto L_08A85078;
    case 221u: goto L_08A85084;
    case 222u: goto L_08A8508C;
    case 223u: goto L_08A85090;
    case 224u: goto L_08A85098;
    case 225u: goto L_08A850A8;
    case 226u: goto L_08A850B0;
    case 227u: goto L_08A850BC;
    case 228u: goto L_08A850CC;
    case 229u: goto L_08A850D4;
    case 230u: goto L_08A850D8;
    case 231u: goto L_08A850E0;
    case 232u: goto L_08A850F8;
    case 233u: goto L_08A85100;
    case 234u: goto L_08A8510C;
    case 235u: goto L_08A8511C;
    case 236u: goto L_08A85124;
    case 237u: goto L_08A85134;
    case 238u: goto L_08A8513C;
    case 239u: goto L_08A85148;
    case 240u: goto L_08A85154;
    case 241u: goto L_08A85164;
    case 242u: goto L_08A8516C;
    case 243u: goto L_08A85178;
    case 244u: goto L_08A851F8;
    case 245u: goto L_08A85200;
    case 246u: goto L_08A85208;
    case 247u: goto L_08A85210;
    case 248u: goto L_08A85234;
    case 249u: goto L_08A8523C;
    case 250u: goto L_08A85248;
    case 251u: goto L_08A85250;
    case 252u: goto L_08A85264;
    case 253u: goto L_08A8526C;
    case 254u: goto L_08A85278;
    case 255u: goto L_08A85284;
    case 256u: goto L_08A8528C;
    case 257u: goto L_08A852A0;
    case 258u: goto L_08A852AC;
    case 259u: goto L_08A852B4;
    case 260u: goto L_08A852C8;
    case 261u: goto L_08A852D0;
    case 262u: goto L_08A852E4;
    case 263u: goto L_08A852EC;
    case 264u: goto L_08A852F0;
    case 265u: goto L_08A85318;
    case 266u: goto L_08A85324;
    case 267u: goto L_08A8532C;
    case 268u: goto L_08A85338;
    case 269u: goto L_08A85340;
    case 270u: goto L_08A85348;
    case 271u: goto L_08A85378;
    case 272u: goto L_08A853D0;
    case 273u: goto L_08A853DC;
    case 274u: goto L_08A853F4;
    case 275u: goto L_08A853FC;
    case 276u: goto L_08A85404;
    case 277u: goto L_08A8540C;
    case 278u: goto L_08A85414;
    case 279u: goto L_08A8541C;
    case 280u: goto L_08A85424;
    case 281u: goto L_08A85434;
    case 282u: goto L_08A85444;
    case 283u: goto L_08A85454;
    case 284u: goto L_08A8546C;
    case 285u: goto L_08A85474;
    case 286u: goto L_08A8547C;
    case 287u: goto L_08A8548C;
    case 288u: goto L_08A85498;
    case 289u: goto L_08A854AC;
    case 290u: goto L_08A854B4;
    case 291u: goto L_08A854C8;
    case 292u: goto L_08A854D4;
    case 293u: goto L_08A854E8;
    case 294u: goto L_08A854FC;
    case 295u: goto L_08A85508;
    case 296u: goto L_08A8551C;
    case 297u: goto L_08A85530;
    case 298u: goto L_08A85540;
    case 299u: goto L_08A85554;
    case 300u: goto L_08A85560;
    case 301u: goto L_08A85574;
    case 302u: goto L_08A85580;
    case 303u: goto L_08A85594;
    case 304u: goto L_08A855A0;
    case 305u: goto L_08A855B4;
    case 306u: goto L_08A855C0;
    case 307u: goto L_08A855D4;
    case 308u: goto L_08A855E4;
    case 309u: goto L_08A855F8;
    case 310u: goto L_08A85608;
    case 311u: goto L_08A8561C;
    case 312u: goto L_08A8562C;
    case 313u: goto L_08A85640;
    case 314u: goto L_08A85650;
    case 315u: goto L_08A85664;
    case 316u: goto L_08A85670;
    case 317u: goto L_08A85684;
    case 318u: goto L_08A85690;
    case 319u: goto L_08A85698;
    case 320u: goto L_08A856A0;
    case 321u: goto L_08A856B0;
    case 322u: goto L_08A856D4;
    case 323u: goto L_08A856DC;
    case 324u: goto L_08A856E8;
    case 325u: goto L_08A856F0;
    case 326u: goto L_08A85700;
    case 327u: goto L_08A85704;
    case 328u: goto L_08A85718;
    case 329u: goto L_08A85720;
    case 330u: goto L_08A8572C;
    case 331u: goto L_08A85734;
    case 332u: goto L_08A85744;
    case 333u: goto L_08A85748;
    case 334u: goto L_08A85758;
    case 335u: goto L_08A85760;
    case 336u: goto L_08A85768;
    case 337u: goto L_08A85828;
    case 338u: goto L_08A858E4;
    case 339u: goto L_08A85900;
    case 340u: goto L_08A8597C;
    case 341u: goto L_08A85988;
    case 342u: goto L_08A859D8;
    case 343u: goto L_08A859E0;
    case 344u: goto L_08A85A94;
    case 345u: goto L_08A85A9C;
    case 346u: goto L_08A85B54;
    case 347u: goto L_08A85B5C;
    case 348u: goto L_08A85BAC;
    case 349u: goto L_08A85BBC;
    case 350u: goto L_08A85BCC;
    case 351u: goto L_08A85BD8;
    case 352u: goto L_08A85BE4;
    case 353u: goto L_08A85BE8;
    case 354u: goto L_08A85C34;
    case 355u: goto L_08A85C48;
    case 356u: goto L_08A85C88;
    case 357u: goto L_08A85C90;
    case 358u: goto L_08A85CD4;
    case 359u: goto L_08A85D4C;
    case 360u: goto L_08A85D70;
    case 361u: goto L_08A85D90;
    case 362u: goto L_08A85DBC;
    case 363u: goto L_08A85DC0;
    case 364u: goto L_08A85E74;
    case 365u: goto L_08A85E84;
    case 366u: goto L_08A85E94;
    case 367u: goto L_08A85EB8;
    case 368u: goto L_08A85EC0;
    case 369u: goto L_08A85EC8;
    case 370u: goto L_08A85ED0;
    case 371u: goto L_08A85EF0;
    case 372u: goto L_08A85EFC;
    case 373u: goto L_08A85F00;
    case 374u: goto L_08A85F18;
    case 375u: goto L_08A85F24;
    case 376u: goto L_08A85FA8;
    case 377u: goto L_08A85FF4;
    case 378u: goto L_08A86020;
    case 379u: goto L_08A86058;
    case 380u: goto L_08A8606C;
    case 381u: goto L_08A86078;
    case 382u: goto L_08A86088;
    case 383u: goto L_08A86094;
    case 384u: goto L_08A8609C;
    case 385u: goto L_08A860AC;
    case 386u: goto L_08A860B8;
    case 387u: goto L_08A860C0;
    case 388u: goto L_08A860C4;
    case 389u: goto L_08A860D0;
    case 390u: goto L_08A860DC;
    case 391u: goto L_08A860E4;
    case 392u: goto L_08A860EC;
    case 393u: goto L_08A86110;
    case 394u: goto L_08A8616C;
    case 395u: goto L_08A8617C;
    case 396u: goto L_08A861D8;
    case 397u: goto L_08A86230;
    case 398u: goto L_08A86260;
    case 399u: goto L_08A86298;
    case 400u: goto L_08A8632C;
    case 401u: goto L_08A8633C;
    case 402u: goto L_08A86344;
    case 403u: goto L_08A86398;
    case 404u: goto L_08A863E0;
    case 405u: goto L_08A8642C;
    case 406u: goto L_08A86514;
    case 407u: goto L_08A86534;
    case 408u: goto L_08A86540;
    case 409u: goto L_08A8654C;
    case 410u: goto L_08A86554;
    case 411u: goto L_08A86564;
    case 412u: goto L_08A8657C;
    case 413u: goto L_08A8658C;
    case 414u: goto L_08A86594;
    case 415u: goto L_08A8659C;
    case 416u: goto L_08A865AC;
    case 417u: goto L_08A865B8;
    case 418u: goto L_08A865C4;
    case 419u: goto L_08A865D0;
    case 420u: goto L_08A865D8;
    case 421u: goto L_08A865DC;
    case 422u: goto L_08A865E4;
    case 423u: goto L_08A865EC;
    case 424u: goto L_08A865F4;
    case 425u: goto L_08A86610;
    case 426u: goto L_08A8661C;
    case 427u: goto L_08A86620;
    case 428u: goto L_08A86628;
    case 429u: goto L_08A86634;
    case 430u: goto L_08A86640;
    case 431u: goto L_08A8664C;
    case 432u: goto L_08A86654;
    case 433u: goto L_08A86658;
    case 434u: goto L_08A86660;
    case 435u: goto L_08A86668;
    case 436u: goto L_08A86670;
    case 437u: goto L_08A8667C;
    case 438u: goto L_08A86688;
    case 439u: goto L_08A86694;
    case 440u: goto L_08A8669C;
    case 441u: goto L_08A866A0;
    case 442u: goto L_08A866A8;
    case 443u: goto L_08A866B0;
    case 444u: goto L_08A866B8;
    case 445u: goto L_08A866C4;
    case 446u: goto L_08A866D0;
    case 447u: goto L_08A866DC;
    case 448u: goto L_08A866E4;
    case 449u: goto L_08A866E8;
    case 450u: goto L_08A866F0;
    case 451u: goto L_08A866F8;
    case 452u: goto L_08A86700;
    case 453u: goto L_08A8670C;
    case 454u: goto L_08A86718;
    case 455u: goto L_08A86724;
    case 456u: goto L_08A8672C;
    case 457u: goto L_08A86730;
    case 458u: goto L_08A86738;
    case 459u: goto L_08A86740;
    case 460u: goto L_08A86748;
    case 461u: goto L_08A86754;
    case 462u: goto L_08A86760;
    case 463u: goto L_08A8676C;
    case 464u: goto L_08A86774;
    case 465u: goto L_08A86778;
    case 466u: goto L_08A86780;
    case 467u: goto L_08A86788;
    case 468u: goto L_08A86790;
    case 469u: goto L_08A8679C;
    case 470u: goto L_08A867A8;
    case 471u: goto L_08A867B4;
    case 472u: goto L_08A867BC;
    case 473u: goto L_08A867C0;
    case 474u: goto L_08A867C8;
    case 475u: goto L_08A867D0;
    case 476u: goto L_08A867D8;
    case 477u: goto L_08A867E4;
    case 478u: goto L_08A867F0;
    case 479u: goto L_08A867FC;
    case 480u: goto L_08A86804;
    case 481u: goto L_08A86808;
    case 482u: goto L_08A86810;
    case 483u: goto L_08A86818;
    case 484u: goto L_08A86820;
    case 485u: goto L_08A8682C;
    case 486u: goto L_08A86838;
    case 487u: goto L_08A86844;
    case 488u: goto L_08A8684C;
    case 489u: goto L_08A86850;
    case 490u: goto L_08A86858;
    case 491u: goto L_08A86860;
    case 492u: goto L_08A86868;
    case 493u: goto L_08A86874;
    case 494u: goto L_08A86880;
    case 495u: goto L_08A8688C;
    case 496u: goto L_08A86894;
    case 497u: goto L_08A86898;
    case 498u: goto L_08A868A0;
    case 499u: goto L_08A868A8;
    case 500u: goto L_08A868B0;
    case 501u: goto L_08A868BC;
    case 502u: goto L_08A868C8;
    case 503u: goto L_08A868D4;
    case 504u: goto L_08A868DC;
    case 505u: goto L_08A868E0;
    case 506u: goto L_08A868E8;
    case 507u: goto L_08A868F0;
    case 508u: goto L_08A868F8;
    case 509u: goto L_08A86904;
    case 510u: goto L_08A86910;
    case 511u: goto L_08A8691C;
    case 512u: goto L_08A86924;
    case 513u: goto L_08A86928;
    case 514u: goto L_08A86930;
    case 515u: goto L_08A86938;
    case 516u: goto L_08A86940;
    case 517u: goto L_08A8694C;
    case 518u: goto L_08A86958;
    case 519u: goto L_08A86964;
    case 520u: goto L_08A8696C;
    case 521u: goto L_08A86970;
    case 522u: goto L_08A86978;
    case 523u: goto L_08A86980;
    case 524u: goto L_08A86988;
    case 525u: goto L_08A86994;
    case 526u: goto L_08A869A0;
    case 527u: goto L_08A869AC;
    case 528u: goto L_08A869B4;
    case 529u: goto L_08A869B8;
    case 530u: goto L_08A869C0;
    case 531u: goto L_08A869C8;
    case 532u: goto L_08A869D0;
    case 533u: goto L_08A869D8;
    case 534u: goto L_08A869E0;
    case 535u: goto L_08A869E8;
    case 536u: goto L_08A86A00;
    case 537u: goto L_08A86A18;
    case 538u: goto L_08A86A20;
    case 539u: goto L_08A86A28;
    case 540u: goto L_08A86A3C;
    case 541u: goto L_08A86A44;
    case 542u: goto L_08A86A5C;
    case 543u: goto L_08A86A64;
    case 544u: goto L_08A86A6C;
    case 545u: goto L_08A86A74;
    case 546u: goto L_08A86A88;
    case 547u: goto L_08A86AA4;
    case 548u: goto L_08A86AE0;
    case 549u: goto L_08A86B00;
    case 550u: goto L_08A86B28;
    case 551u: goto L_08A86B54;
    case 552u: goto L_08A86B68;
    case 553u: goto L_08A86B7C;
    case 554u: goto L_08A86B90;
    case 555u: goto L_08A86BA4;
    case 556u: goto L_08A86BB8;
    case 557u: goto L_08A86BCC;
    case 558u: goto L_08A86BD4;
    case 559u: goto L_08A86BE8;
    case 560u: goto L_08A86BF0;
    case 561u: goto L_08A86C30;
    case 562u: goto L_08A86C38;
    case 563u: goto L_08A86C4C;
    case 564u: goto L_08A86C54;
    case 565u: goto L_08A86C94;
    case 566u: goto L_08A86C9C;
    case 567u: goto L_08A86CCC;
    case 568u: goto L_08A86CD4;
    case 569u: goto L_08A86CDC;
    case 570u: goto L_08A86CF0;
    case 571u: goto L_08A86CFC;
    case 572u: goto L_08A86D10;
    case 573u: goto L_08A86D18;
    case 574u: goto L_08A86D2C;
    case 575u: goto L_08A86D40;
    case 576u: goto L_08A86D48;
    case 577u: goto L_08A86D5C;
    case 578u: goto L_08A86D64;
    case 579u: goto L_08A86D6C;
    case 580u: goto L_08A86D78;
    case 581u: goto L_08A86D84;
    case 582u: goto L_08A86D90;
    case 583u: goto L_08A86DA0;
    case 584u: goto L_08A86DAC;
    case 585u: goto L_08A86DB8;
    case 586u: goto L_08A86DC0;
    case 587u: goto L_08A86DC4;
    case 588u: goto L_08A86DD0;
    case 589u: goto L_08A86DE0;
    case 590u: goto L_08A86DF0;
    case 591u: goto L_08A86E20;
    case 592u: goto L_08A86E34;
    case 593u: goto L_08A86E38;
    case 594u: goto L_08A86E4C;
    case 595u: goto L_08A86E5C;
    case 596u: goto L_08A86E60;
    case 597u: goto L_08A86E68;
    case 598u: goto L_08A86E7C;
    case 599u: goto L_08A86E94;
    case 600u: goto L_08A86E98;
    case 601u: goto L_08A86EA4;
    case 602u: goto L_08A86EE0;
    case 603u: goto L_08A86EE8;
    case 604u: goto L_08A86EEC;
    case 605u: goto L_08A86F10;
    case 606u: goto L_08A86F2C;
    case 607u: goto L_08A86F34;
    case 608u: goto L_08A86F48;
    case 609u: goto L_08A86F54;
    case 610u: goto L_08A86F60;
    case 611u: goto L_08A86F70;
    case 612u: goto L_08A86F7C;
    case 613u: goto L_08A86F88;
    case 614u: goto L_08A86F90;
    case 615u: goto L_08A86F94;
    case 616u: goto L_08A86FA0;
    case 617u: goto L_08A86FB0;
    case 618u: goto L_08A86FC0;
    case 619u: goto L_08A86FC8;
    case 620u: goto L_08A86FD4;
    case 621u: goto L_08A86FDC;
    case 622u: goto L_08A86FE0;
    case 623u: goto L_08A86FF4;
    case 624u: goto L_08A87030;
    case 625u: goto L_08A87040;
    case 626u: goto L_08A87048;
    case 627u: goto L_08A87050;
    case 628u: goto L_08A87058;
    case 629u: goto L_08A87060;
    case 630u: goto L_08A87068;
    case 631u: goto L_08A87070;
    case 632u: goto L_08A87078;
    case 633u: goto L_08A87080;
    case 634u: goto L_08A87098;
    case 635u: goto L_08A87108;
    case 636u: goto L_08A87118;
    case 637u: goto L_08A87124;
    case 638u: goto L_08A8712C;
    case 639u: goto L_08A87130;
    case 640u: goto L_08A87144;
    case 641u: goto L_08A87150;
    case 642u: goto L_08A87158;
    case 643u: goto L_08A87160;
    case 644u: goto L_08A87168;
    case 645u: goto L_08A87170;
    case 646u: goto L_08A87188;
    case 647u: goto L_08A871A8;
    case 648u: goto L_08A871BC;
    case 649u: goto L_08A871C4;
    case 650u: goto L_08A871E8;
    case 651u: goto L_08A87200;
    case 652u: goto L_08A87208;
    case 653u: goto L_08A87214;
    case 654u: goto L_08A87218;
    case 655u: goto L_08A87230;
    case 656u: goto L_08A87288;
    case 657u: goto L_08A87290;
    case 658u: goto L_08A872B8;
    case 659u: goto L_08A872D4;
    case 660u: goto L_08A872E0;
    case 661u: goto L_08A872EC;
    case 662u: goto L_08A872F4;
    case 663u: goto L_08A872FC;
    case 664u: goto L_08A87310;
    case 665u: goto L_08A87364;
    case 666u: goto L_08A87378;
    case 667u: goto L_08A87380;
    case 668u: goto L_08A873C4;
    case 669u: goto L_08A873E0;
    case 670u: goto L_08A873F8;
    case 671u: goto L_08A87400;
    case 672u: goto L_08A87434;
    case 673u: goto L_08A874F0;
    case 674u: goto L_08A87504;
    case 675u: goto L_08A87548;
    case 676u: goto L_08A87594;
    case 677u: goto L_08A875B0;
    case 678u: goto L_08A8767C;
    case 679u: goto L_08A87690;
    case 680u: goto L_08A876A8;
    case 681u: goto L_08A876BC;
    case 682u: goto L_08A876E8;
    case 683u: goto L_08A876F0;
    case 684u: goto L_08A876F8;
    case 685u: goto L_08A8770C;
    case 686u: goto L_08A87714;
    case 687u: goto L_08A87744;
    case 688u: goto L_08A8774C;
    case 689u: goto L_08A87754;
    case 690u: goto L_08A8778C;
    case 691u: goto L_08A87794;
    case 692u: goto L_08A87798;
    case 693u: goto L_08A877BC;
    case 694u: goto L_08A877CC;
    case 695u: goto L_08A877F8;
    case 696u: goto L_08A87840;
    case 697u: goto L_08A878D4;
    case 698u: goto L_08A878F0;
    case 699u: goto L_08A878FC;
    case 700u: goto L_08A87908;
    case 701u: goto L_08A8791C;
    case 702u: goto L_08A87938;
    case 703u: goto L_08A87948;
    case 704u: goto L_08A87954;
    case 705u: goto L_08A87968;
    case 706u: goto L_08A879AC;
    case 707u: goto L_08A879C0;
    case 708u: goto L_08A879C8;
    case 709u: goto L_08A879D4;
    case 710u: goto L_08A879E8;
    case 711u: goto L_08A879F0;
    case 712u: goto L_08A87A00;
    case 713u: goto L_08A87A08;
    case 714u: goto L_08A87A10;
    case 715u: goto L_08A87A1C;
    case 716u: goto L_08A87A24;
    case 717u: goto L_08A87A38;
    case 718u: goto L_08A87A40;
    case 719u: goto L_08A87A48;
    case 720u: goto L_08A87A50;
    case 721u: goto L_08A87A5C;
    case 722u: goto L_08A87A68;
    case 723u: goto L_08A87A7C;
    case 724u: goto L_08A87A88;
    case 725u: goto L_08A87A98;
    case 726u: goto L_08A87AA0;
    case 727u: goto L_08A87AB4;
    case 728u: goto L_08A87ABC;
    case 729u: goto L_08A87B08;
    case 730u: goto L_08A87B18;
    case 731u: goto L_08A87B30;
    case 732u: goto L_08A87B40;
    case 733u: goto L_08A87B50;
    case 734u: goto L_08A87B60;
    case 735u: goto L_08A87B70;
    case 736u: goto L_08A87B78;
    case 737u: goto L_08A87B88;
    case 738u: goto L_08A87B90;
    case 739u: goto L_08A87BA0;
    case 740u: goto L_08A87BA8;
    case 741u: goto L_08A87BB8;
    case 742u: goto L_08A87BC8;
    case 743u: goto L_08A87BD0;
    case 744u: goto L_08A87BE0;
    case 745u: goto L_08A87BEC;
    case 746u: goto L_08A87BF8;
    case 747u: goto L_08A87C08;
    case 748u: goto L_08A87C0C;
    case 749u: goto L_08A87C3C;
    case 750u: goto L_08A87C64;
    case 751u: goto L_08A87C7C;
    case 752u: goto L_08A87C84;
    case 753u: goto L_08A87C98;
    case 754u: goto L_08A87CAC;
    case 755u: goto L_08A87CB8;
    case 756u: goto L_08A87CC4;
    case 757u: goto L_08A87CD0;
    case 758u: goto L_08A87CD8;
    case 759u: goto L_08A87CEC;
    case 760u: goto L_08A87CF4;
    case 761u: goto L_08A87CFC;
    case 762u: goto L_08A87D00;
    case 763u: goto L_08A87D1C;
    case 764u: goto L_08A87D40;
    case 765u: goto L_08A87D58;
    case 766u: goto L_08A87D60;
    case 767u: goto L_08A87D74;
    case 768u: goto L_08A87D7C;
    case 769u: goto L_08A87D88;
    case 770u: goto L_08A87D94;
    case 771u: goto L_08A87DA8;
    case 772u: goto L_08A87DB4;
    case 773u: goto L_08A87DB8;
    case 774u: goto L_08A87DD0;
    case 775u: goto L_08A87DF4;
    case 776u: goto L_08A87E0C;
    case 777u: goto L_08A87E18;
    case 778u: goto L_08A87E20;
    case 779u: goto L_08A87E28;
    case 780u: goto L_08A87E38;
    case 781u: goto L_08A87E40;
    case 782u: goto L_08A87E48;
    case 783u: goto L_08A87E54;
    case 784u: goto L_08A87E58;
    case 785u: goto L_08A87E60;
    case 786u: goto L_08A87E68;
    case 787u: goto L_08A87E74;
    case 788u: goto L_08A87E84;
    case 789u: goto L_08A87E88;
    case 790u: goto L_08A87EA0;
    case 791u: goto L_08A87EB0;
    case 792u: goto L_08A87EBC;
    case 793u: goto L_08A87ED4;
    case 794u: goto L_08A87EE0;
    case 795u: goto L_08A87EF0;
    case 796u: goto L_08A87F14;
    case 797u: goto L_08A87F20;
    case 798u: goto L_08A87F2C;
    case 799u: goto L_08A87F38;
    case 800u: goto L_08A87F58;
    case 801u: goto L_08A87F64;
    case 802u: goto L_08A87F74;
    case 803u: goto L_08A87F7C;
    case 804u: goto L_08A87F84;
    case 805u: goto L_08A87F94;
    case 806u: goto L_08A87F9C;
    case 807u: goto L_08A87FA8;
    case 808u: goto L_08A87FBC;
    case 809u: goto L_08A87FE4;
    case 810u: goto L_08A87FEC;
    case 811u: goto L_08A87FF0;
    case 812u: goto L_08A87FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A84000:
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A84020u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08A84020u) goto L_08A84020;
    return;
L_08A84020:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A84034u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A84034u) goto L_08A84034;
    return;
L_08A84034:
    ctx.gpr[31] = (0x08A8403Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8403Cu) goto L_08A8403C;
    return;
L_08A8403C:
    ctx.gpr[31] = (0x08A84044u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x08A84044u) goto L_08A84044;
    return;
L_08A84044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (65532u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (2228u << 16u);
      if (branch_taken) {
          goto L_08A840E8;
      }
      goto L_08A840D8;
    }
L_08A840D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A841F0;
      }
      goto L_08A840E0;
    }
L_08A840E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84358;
      }
      goto L_08A840E8;
    }
L_08A840E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A84134u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08A84134u) goto L_08A84134;
    return;
L_08A84134:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A84148u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A84148u) goto L_08A84148;
    return;
L_08A84148:
    ctx.gpr[31] = (0x08A84150u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A84150u) goto L_08A84150;
    return;
L_08A84150:
    ctx.gpr[31] = (0x08A84158u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x08A84158u) goto L_08A84158;
    return;
L_08A84158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(423), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A841F0;
L_08A841F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(290)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A84214;
      }
      goto L_08A84204;
    }
L_08A84204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(423), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A84240;
      }
      goto L_08A84214;
    }
L_08A84214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(306)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A84238;
      }
      goto L_08A84228;
    }
L_08A84228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(423), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A84240;
      }
      goto L_08A84238;
    }
L_08A84238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(423), static_cast<std::uint8_t>(0u));
    goto L_08A84240;
L_08A84240:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84358;
      }
      goto L_08A84254;
    }
L_08A84254:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-23072)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8426C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A842E0;
      }
      goto L_08A842A4;
    }
L_08A842A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(282)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A842E0;
      }
      goto L_08A842B8;
    }
L_08A842B8:
    ctx.gpr[31] = (0x08A842C0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 140u, 0x08A81858u>(ctx, &aot_mem) && ctx.pc == 0x08A842C0u) goto L_08A842C0;
    return;
L_08A842C0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22968));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A842E8;
      }
      goto L_08A842E0;
    }
L_08A842E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(426), static_cast<std::uint16_t>(0u));
    goto L_08A842E8;
L_08A842E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84358;
      }
      goto L_08A842F0;
    }
L_08A842F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A84358;
      }
      goto L_08A8431C;
    }
L_08A8431C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A84358;
      }
      goto L_08A84358;
    }
L_08A84358:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8438C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A843D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23440));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 9u, 0x08A80DF0u>(ctx, &aot_mem) && ctx.pc == 0x08A843D8u) goto L_08A843D8;
    return;
L_08A843D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84408;
      }
      goto L_08A843E4;
    }
L_08A843E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(302)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A84420;
      }
      goto L_08A84400;
    }
L_08A84400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84450;
      }
      goto L_08A84408;
    }
L_08A84408:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A84418u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23404));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 9u, 0x08A80DF0u>(ctx, &aot_mem) && ctx.pc == 0x08A84418u) goto L_08A84418;
    return;
L_08A84418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A84F9C;
      }
      goto L_08A84420;
    }
L_08A84420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A84450;
      }
      goto L_08A84438;
    }
L_08A84438:
    ctx.gpr[31] = (0x08A84440u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A84440u) goto L_08A84440;
    return;
L_08A84440:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 120u);
    ctx.gpr[31] = (0x08A84450u);
    ctx.gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 656u, 0x08A96CF8u>(ctx, &aot_mem) && ctx.pc == 0x08A84450u) goto L_08A84450;
    return;
L_08A84450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A84480;
      }
      goto L_08A84468;
    }
L_08A84468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8450C;
      }
      goto L_08A84480;
    }
L_08A84480:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8450C;
      }
      goto L_08A84490;
    }
L_08A84490:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A844A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 652u, 0x088A7E10u>(ctx, &aot_mem) && ctx.pc == 0x08A844A0u) goto L_08A844A0;
    return;
L_08A844A0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A844F0;
      }
      goto L_08A844AC;
    }
L_08A844AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08A844D8;
    }
    goto L_08A844B8;
L_08A844B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A844C8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08A844C8u) goto L_08A844C8;
    return;
L_08A844C8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08A844D8;
L_08A844D8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 65535u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84504;
      }
      goto L_08A844F0;
    }
L_08A844F0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8450C;
      }
      goto L_08A844F8;
    }
L_08A844F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8450C;
      }
      goto L_08A84504;
    }
L_08A84504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A84F9C;
      }
      goto L_08A8450C;
    }
L_08A8450C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A84518u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 140u, 0x08A81858u>(ctx, &aot_mem) && ctx.pc == 0x08A84518u) goto L_08A84518;
    return;
L_08A84518:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A84F98;
      }
      goto L_08A8452C;
    }
L_08A8452C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-22992)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84544:
    ctx.gpr[4] = (ctx.gpr[19] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[22] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(22968));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.gpr[23] = (ctx.gpr[22] + ctx.gpr[23]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84648;
      }
      goto L_08A84588;
    }
L_08A84588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08A8459Cu);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    goto L_08A86AE0;
L_08A8459C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84610;
      }
      goto L_08A845A4;
    }
L_08A845A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A845B4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 35u, 0x08944274u>(ctx, &aot_mem) && ctx.pc == 0x08A845B4u) goto L_08A845B4;
    return;
L_08A845B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A845C4;
      }
      goto L_08A845BC;
    }
L_08A845BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F98;
      }
      goto L_08A845C4;
    }
L_08A845C4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22820));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A845E4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A845E4u) goto L_08A845E4;
    return;
L_08A845E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A845F0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A845F0u) goto L_08A845F0;
    return;
L_08A845F0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x08A84610u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-270));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08A84610u) goto L_08A84610;
    return;
L_08A84610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8462Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80EDCu>(ctx, &aot_mem) && ctx.pc == 0x08A8462Cu) goto L_08A8462C;
    return;
L_08A8462C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A84660;
      }
      goto L_08A84648;
    }
L_08A84648:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 6000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A84660u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23352));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x08A84660u) goto L_08A84660;
    return;
L_08A84660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F98;
      }
      goto L_08A84668;
    }
L_08A84668:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A8485C;
      }
      goto L_08A84670;
    }
L_08A84670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08A84684u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    goto L_08A86AE0;
L_08A84684:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8485C;
      }
      goto L_08A8468C;
    }
L_08A8468C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8469Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 35u, 0x08944274u>(ctx, &aot_mem) && ctx.pc == 0x08A8469Cu) goto L_08A8469C;
    return;
L_08A8469C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A846AC;
      }
      goto L_08A846A4;
    }
L_08A846A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F98;
      }
      goto L_08A846AC;
    }
L_08A846AC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A847E4;
      }
      goto L_08A846B4;
    }
L_08A846B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8107));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A8472C;
      }
      goto L_08A846C8;
    }
L_08A846C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A846DCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A846DCu) goto L_08A846DC;
    return;
L_08A846DC:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A846ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A846ECu) goto L_08A846EC;
    return;
L_08A846EC:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A84704;
      }
      goto L_08A846F4;
    }
L_08A846F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A84700u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A84700u) goto L_08A84700;
    return;
L_08A84700:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A84704;
L_08A84704:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A847C4;
      }
      goto L_08A84710;
    }
L_08A84710:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A847C4;
      }
      goto L_08A8471C;
    }
L_08A8471C:
    ctx.gpr[31] = (0x08A84724u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 698u, 0x0899F968u>(ctx, &aot_mem) && ctx.pc == 0x08A84724u) goto L_08A84724;
    return;
L_08A84724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A847C4;
      }
      goto L_08A8472C;
    }
L_08A8472C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84768;
      }
      goto L_08A8473C;
    }
L_08A8473C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22894));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A84760u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A84760u) goto L_08A84760;
    return;
L_08A84760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8477C;
      }
      goto L_08A84768;
    }
L_08A84768:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A8477Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8477Cu) goto L_08A8477C;
    return;
L_08A8477C:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8478Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A8478Cu) goto L_08A8478C;
    return;
L_08A8478C:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A847A4;
      }
      goto L_08A84794;
    }
L_08A84794:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A847A0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A847A0u) goto L_08A847A0;
    return;
L_08A847A0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A847A4;
L_08A847A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A847C4;
      }
      goto L_08A847B0;
    }
L_08A847B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A847C4;
      }
      goto L_08A847BC;
    }
L_08A847BC:
    ctx.gpr[31] = (0x08A847C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 698u, 0x0899F968u>(ctx, &aot_mem) && ctx.pc == 0x08A847C4u) goto L_08A847C4;
    return;
L_08A847C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 78u);
    ctx.gpr[31] = (0x08A847DCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-270));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08A847DCu) goto L_08A847DC;
    return;
L_08A847DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8485C;
      }
      goto L_08A847E4;
    }
L_08A847E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8485C;
      }
      goto L_08A847FC;
    }
L_08A847FC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8485C;
      }
      goto L_08A84804;
    }
L_08A84804:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (0u | 84u);
    ctx.gpr[31] = (0x08A84818u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08A84818u) goto L_08A84818;
    return;
L_08A84818:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6176), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A8482Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A8482Cu) goto L_08A8482C;
    return;
L_08A8482C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6172), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23248));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6168), ctx.gpr[4]);
    goto L_08A8485C;
L_08A8485C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_08A8488C;
      }
      goto L_08A8486C;
    }
L_08A8486C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A848E0;
      }
      goto L_08A84878;
    }
L_08A84878:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A848E0;
      }
      goto L_08A8488C;
    }
L_08A8488C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A848E0;
      }
      goto L_08A84894;
    }
L_08A84894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A848C4;
      }
      goto L_08A848AC;
    }
L_08A848AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (5u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27680));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A848D8;
      }
      goto L_08A848C4;
    }
L_08A848C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (5u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32320));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A848D8;
L_08A848D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A848E0;
      }
      goto L_08A848E0;
    }
L_08A848E0:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08A848ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80EDCu>(ctx, &aot_mem) && ctx.pc == 0x08A848ECu) goto L_08A848EC;
    return;
L_08A848EC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A84900u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23344));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 9u, 0x08A80DF0u>(ctx, &aot_mem) && ctx.pc == 0x08A84900u) goto L_08A84900;
    return;
L_08A84900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F98;
      }
      goto L_08A84908;
    }
L_08A84908:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A84A34;
      }
      goto L_08A84910;
    }
L_08A84910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08A84924u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    goto L_08A86AE0;
L_08A84924:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84A34;
      }
      goto L_08A8492C;
    }
L_08A8492C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8493Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 35u, 0x08944274u>(ctx, &aot_mem) && ctx.pc == 0x08A8493Cu) goto L_08A8493C;
    return;
L_08A8493C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84958;
      }
      goto L_08A84944;
    }
L_08A84944:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A84950u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 34u, 0x08A80F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84950u) goto L_08A84950;
    return;
L_08A84950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F98;
      }
      goto L_08A84958;
    }
L_08A84958:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84A00;
      }
      goto L_08A84960;
    }
L_08A84960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84988;
      }
      goto L_08A8496C;
    }
L_08A8496C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A84980u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A84980u) goto L_08A84980;
    return;
L_08A84980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A849D8;
      }
      goto L_08A84988;
    }
L_08A84988:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A849B4;
      }
      goto L_08A84998;
    }
L_08A84998:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A849ACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A849ACu) goto L_08A849AC;
    return;
L_08A849AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A849D8;
      }
      goto L_08A849B4;
    }
L_08A849B4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22820));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A849D8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08A849D8u) goto L_08A849D8;
    return;
L_08A849D8:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A849E8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A849E8u) goto L_08A849E8;
    return;
L_08A849E8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A84A00;
      }
      goto L_08A849F0;
    }
L_08A849F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A849FCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 663u, 0x0899F6FCu>(ctx, &aot_mem) && ctx.pc == 0x08A849FCu) goto L_08A849FC;
    return;
L_08A849FC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A84A00;
L_08A84A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A84A34;
      }
      goto L_08A84A18;
    }
L_08A84A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 78u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x08A84A34u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-270));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08A84A34u) goto L_08A84A34;
    return;
L_08A84A34:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08A84A40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80EDCu>(ctx, &aot_mem) && ctx.pc == 0x08A84A40u) goto L_08A84A40;
    return;
L_08A84A40:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84A90;
      }
      goto L_08A84A5C;
    }
L_08A84A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84A90;
      }
      goto L_08A84A68;
    }
L_08A84A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A84A90;
      }
      goto L_08A84A88;
    }
L_08A84A88:
    ctx.gpr[31] = (0x08A84A90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 472u, 0x08919E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84A90u) goto L_08A84A90;
    return;
L_08A84A90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F98;
      }
      goto L_08A84A98;
    }
L_08A84A98:
    ctx.gpr[4] = (ctx.gpr[19] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-8107));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A84B3C;
      }
      goto L_08A84AE4;
    }
L_08A84AE4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A84AF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23316));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84AF0u) goto L_08A84AF0;
    return;
L_08A84AF0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 5000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A84B08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23276));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x08A84B08u) goto L_08A84B08;
    return;
L_08A84B08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A84B80;
      }
      goto L_08A84B3C;
    }
L_08A84B3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[6] = (0u | 5000u);
    ctx.gpr[31] = (0x08A84B80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23268));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x08A84B80u) goto L_08A84B80;
    return;
L_08A84B80:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08A84B8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80EDCu>(ctx, &aot_mem) && ctx.pc == 0x08A84B8Cu) goto L_08A84B8C;
    return;
L_08A84B8C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 86u);
    ctx.gpr[31] = (0x08A84BA8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08A84BA8u) goto L_08A84BA8;
    return;
L_08A84BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F98;
      }
      goto L_08A84BB0;
    }
L_08A84BB0:
    ctx.gpr[4] = (ctx.gpr[19] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9176));
    ctx.gpr[31] = (0x08A84BF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23260));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84BF8u) goto L_08A84BF8;
    return;
L_08A84BF8:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08A84C04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80EDCu>(ctx, &aot_mem) && ctx.pc == 0x08A84C04u) goto L_08A84C04;
    return;
L_08A84C04:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 85u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A84C24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08A84C24u) goto L_08A84C24;
    return;
L_08A84C24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A84C30u);
    ctx.gpr[5] = (0u | 122u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 499u, 0x088B6D24u>(ctx, &aot_mem) && ctx.pc == 0x08A84C30u) goto L_08A84C30;
    return;
L_08A84C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F98;
      }
      goto L_08A84C38;
    }
L_08A84C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F98;
      }
      goto L_08A84C40;
    }
L_08A84C40:
    ctx.gpr[4] = (ctx.gpr[19] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(188)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (0u | 85u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(188), ctx.gpr[8]);
    ctx.gpr[31] = (0x08A84C9Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08A84C9Cu) goto L_08A84C9C;
    return;
L_08A84C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F98;
      }
      goto L_08A84CA4;
    }
L_08A84CA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84D18;
      }
      goto L_08A84CB4;
    }
L_08A84CB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(42));
      if (branch_taken) {
          goto L_08A84CF8;
      }
      goto L_08A84CD0;
    }
L_08A84CD0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A84CDCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A84CDCu) goto L_08A84CDC;
    return;
L_08A84CDC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84CF4;
      }
      goto L_08A84CE8;
    }
L_08A84CE8:
    ctx.gpr[31] = (0x08A84CF0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A84CF0u) goto L_08A84CF0;
    return;
L_08A84CF0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A84CF4;
L_08A84CF4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    goto L_08A84CF8;
L_08A84CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A84D04u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A84D04u) goto L_08A84D04;
    return;
L_08A84D04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A84D18u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A84D18u) goto L_08A84D18;
    return;
L_08A84D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F98;
      }
      goto L_08A84D20;
    }
L_08A84D20:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(42));
    ctx.gpr[31] = (0x08A84D2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 11u, 0x08A80E44u>(ctx, &aot_mem) && ctx.pc == 0x08A84D2Cu) goto L_08A84D2C;
    return;
L_08A84D2C:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[22] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-5392));
      if (branch_taken) {
          goto L_08A84D68;
      }
      goto L_08A84D40;
    }
L_08A84D40:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A84D4Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A84D4Cu) goto L_08A84D4C;
    return;
L_08A84D4C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84D64;
      }
      goto L_08A84D58;
    }
L_08A84D58:
    ctx.gpr[31] = (0x08A84D60u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A84D60u) goto L_08A84D60;
    return;
L_08A84D60:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A84D64;
L_08A84D64:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    goto L_08A84D68;
L_08A84D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A84D74u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A84D74u) goto L_08A84D74;
    return;
L_08A84D74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A84D98u);
    ctx.gpr[11] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 517u, 0x0887B1D0u>(ctx, &aot_mem) && ctx.pc == 0x08A84D98u) goto L_08A84D98;
    return;
L_08A84D98:
    ctx.gpr[31] = (0x08A84DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 463u, 0x08986D54u>(ctx, &aot_mem) && ctx.pc == 0x08A84DA0u) goto L_08A84DA0;
    return;
L_08A84DA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84DBC;
      }
      goto L_08A84DA8;
    }
L_08A84DA8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A84DBCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A84DBCu) goto L_08A84DBC;
    return;
L_08A84DBC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23048)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F28;
      }
      goto L_08A84DCC;
    }
L_08A84DCC:
    ctx.gpr[31] = (0x08A84DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 33u, 0x08958280u>(ctx, &aot_mem) && ctx.pc == 0x08A84DD4u) goto L_08A84DD4;
    return;
L_08A84DD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A84E3C;
      }
      goto L_08A84DDC;
    }
L_08A84DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A84E14;
      }
      goto L_08A84DE8;
    }
L_08A84DE8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A84DF4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A84DF4u) goto L_08A84DF4;
    return;
L_08A84DF4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84E0C;
      }
      goto L_08A84E00;
    }
L_08A84E00:
    ctx.gpr[31] = (0x08A84E08u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A84E08u) goto L_08A84E08;
    return;
L_08A84E08:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08A84E0C;
L_08A84E0C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A84E14;
L_08A84E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A84E20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23256));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A84E20u) goto L_08A84E20;
    return;
L_08A84E20:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A84E34u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A84E34u) goto L_08A84E34;
    return;
L_08A84E34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F28;
      }
      goto L_08A84E3C;
    }
L_08A84E3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(188)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED0;
      }
      goto L_08A84E74;
    }
L_08A84E74:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A84EB4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A84EB4u) goto L_08A84EB4;
    return;
L_08A84EB4:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08A84EC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80EDCu>(ctx, &aot_mem) && ctx.pc == 0x08A84EC0u) goto L_08A84EC0;
    return;
L_08A84EC0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A84F28;
      }
      goto L_08A84ED0;
    }
L_08A84ED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A84F08;
      }
      goto L_08A84EDC;
    }
L_08A84EDC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A84EE8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A84EE8u) goto L_08A84EE8;
    return;
L_08A84EE8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F00;
      }
      goto L_08A84EF4;
    }
L_08A84EF4:
    ctx.gpr[31] = (0x08A84EFCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A84EFCu) goto L_08A84EFC;
    return;
L_08A84EFC:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08A84F00;
L_08A84F00:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A84F08;
L_08A84F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A84F14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23248));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A84F14u) goto L_08A84F14;
    return;
L_08A84F14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A84F28u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08A84F28u) goto L_08A84F28;
    return;
L_08A84F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F98;
      }
      goto L_08A84F30;
    }
L_08A84F30:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F90;
      }
      goto L_08A84F40;
    }
L_08A84F40:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08A84F50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80EDCu>(ctx, &aot_mem) && ctx.pc == 0x08A84F50u) goto L_08A84F50;
    return;
L_08A84F50:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F90;
      }
      goto L_08A84F68;
    }
L_08A84F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A84F90;
      }
      goto L_08A84F88;
    }
L_08A84F88:
    ctx.gpr[31] = (0x08A84F90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 472u, 0x08919E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84F90u) goto L_08A84F90;
    return;
L_08A84F90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84F98;
      }
      goto L_08A84F98;
    }
L_08A84F98:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    goto L_08A84F9C;
L_08A84F9C:
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
L_08A84FC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[22] = (ctx.gpr[10] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[17] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A8501Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 26u, 0x08B082A0u>(ctx, &aot_mem) && ctx.pc == 0x08A8501Cu) goto L_08A8501C;
    return;
L_08A8501C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8503C;
      }
      goto L_08A85028;
    }
L_08A85028:
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A85054;
      }
      goto L_08A85034;
    }
L_08A85034:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_08A85044;
      }
      goto L_08A8503C;
    }
L_08A8503C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85348;
      }
      goto L_08A85044;
    }
L_08A85044:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A85054;
      }
      goto L_08A8504C;
    }
L_08A8504C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85090;
      }
      goto L_08A85054;
    }
L_08A85054:
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30592));
    ctx.gpr[16] = (0u | 335u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32160));
    goto L_08A85064;
L_08A85064:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A85084;
      }
      goto L_08A8506C;
    }
L_08A8506C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85084;
      }
      goto L_08A85078;
    }
L_08A85078:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_08A85064;
      }
      goto L_08A85084;
    }
L_08A85084:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A85090;
      }
      goto L_08A8508C;
    }
L_08A8508C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A85090;
L_08A85090:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A850D8;
      }
      goto L_08A85098;
    }
L_08A85098:
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30592));
    goto L_08A850A8;
L_08A850A8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A850CC;
      }
      goto L_08A850B0;
    }
L_08A850B0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A850CC;
      }
      goto L_08A850BC;
    }
L_08A850BC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 320 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A850A8;
      }
      goto L_08A850CC;
    }
L_08A850CC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A850D8;
      }
      goto L_08A850D4;
    }
L_08A850D4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A850D8;
L_08A850D8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8516C;
      }
      goto L_08A850E0;
    }
L_08A850E0:
    ctx.gpr[7] = (2275u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-30592));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A850F8;
L_08A850F8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8511C;
      }
      goto L_08A85100;
    }
L_08A85100:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8511C;
      }
      goto L_08A8510C;
    }
L_08A8510C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 320 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A850F8;
      }
      goto L_08A8511C;
    }
L_08A8511C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8516C;
      }
      goto L_08A85124;
    }
L_08A85124:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08A85134;
L_08A85134:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85164;
      }
      goto L_08A8513C;
    }
L_08A8513C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A85164;
      }
      goto L_08A85148;
    }
L_08A85148:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A85164;
      }
      goto L_08A85154;
    }
L_08A85154:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 320 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A85134;
      }
      goto L_08A85164;
    }
L_08A85164:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85208;
      }
      goto L_08A8516C;
    }
L_08A8516C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 336 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A85200;
      }
      goto L_08A85178;
    }
L_08A85178:
    ctx.gpr[20] = (ctx.gpr[16] << 5u);
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[19] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-30592));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[20] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[8] = (0u | 20u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[8];
    ctx.gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_08A85210;
      }
      goto L_08A851F8;
    }
L_08A851F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85234;
      }
      goto L_08A85200;
    }
L_08A85200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85348;
      }
      goto L_08A85208;
    }
L_08A85208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85348;
      }
      goto L_08A85210;
    }
L_08A85210:
    ctx.gpr[8] = (ctx.gpr[21] << 3u);
    ctx.gpr[9] = (0u + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    goto L_08A85234;
L_08A85234:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A85248;
      }
      goto L_08A8523C;
    }
L_08A8523C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    goto L_08A85248;
L_08A85248:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A85264;
      }
      goto L_08A85250;
    }
L_08A85250:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11072));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    goto L_08A85264;
L_08A85264:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85278;
      }
      goto L_08A8526C;
    }
L_08A8526C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A85278;
L_08A85278:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_08A8528C;
      }
      goto L_08A85284;
    }
L_08A85284:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A852A0;
      }
      goto L_08A8528C;
    }
L_08A8528C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1500));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A852A0;
L_08A852A0:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 12u);
      if (branch_taken) {
          goto L_08A852B4;
      }
      goto L_08A852AC;
    }
L_08A852AC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A852C8;
      }
      goto L_08A852B4;
    }
L_08A852B4:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1500));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A852C8;
L_08A852C8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_08A852EC;
      }
      goto L_08A852D0;
    }
L_08A852D0:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(42));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A852E4u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08A852E4u) goto L_08A852E4;
    return;
L_08A852E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A852F0;
      }
      goto L_08A852EC;
    }
L_08A852EC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    goto L_08A852F0;
L_08A852F0:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A85318u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 597u, 0x08A83DB0u>(ctx, &aot_mem) && ctx.pc == 0x08A85318u) goto L_08A85318;
    return;
L_08A85318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8532C;
      }
      goto L_08A85324;
    }
L_08A85324:
    ctx.gpr[31] = (0x08A8532Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8532Cu) goto L_08A8532C;
    return;
L_08A8532C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85340;
      }
      goto L_08A85338;
    }
L_08A85338:
    ctx.gpr[31] = (0x08A85340u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85340u) goto L_08A85340;
    return;
L_08A85340:
    ctx.gpr[31] = (0x08A85348u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 223u, 0x08A8237Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85348u) goto L_08A85348;
    return;
L_08A85348:
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
L_08A85378:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-656));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[23]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A853D0u);
    ctx.gpr[22] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 261u, 0x08A82740u>(ctx, &aot_mem) && ctx.pc == 0x08A853D0u) goto L_08A853D0;
    return;
L_08A853D0:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A853FC;
      }
      goto L_08A853DC;
    }
L_08A853DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(294)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A85404;
      }
      goto L_08A853F4;
    }
L_08A853F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85444;
      }
      goto L_08A853FC;
    }
L_08A853FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86398;
      }
      goto L_08A85404;
    }
L_08A85404:
    ctx.gpr[31] = (0x08A8540Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 33u, 0x08958280u>(ctx, &aot_mem) && ctx.pc == 0x08A8540Cu) goto L_08A8540C;
    return;
L_08A8540C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A85424;
      }
      goto L_08A85414;
    }
L_08A85414:
    ctx.gpr[31] = (0x08A8541Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 83u, 0x0891857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8541Cu) goto L_08A8541C;
    return;
L_08A8541C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85434;
      }
      goto L_08A85424;
    }
L_08A85424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A85444;
      }
      goto L_08A85434;
    }
L_08A85434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08A85444;
L_08A85444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A85474;
      }
      goto L_08A85454;
    }
L_08A85454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(282)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A8548C;
      }
      goto L_08A8546C;
    }
L_08A8546C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
      if (branch_taken) {
          goto L_08A8547C;
      }
      goto L_08A85474;
    }
L_08A85474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86398;
      }
      goto L_08A8547C;
    }
L_08A8547C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85498;
      }
      goto L_08A8548C;
    }
L_08A8548C:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 37u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A85498;
    }
L_08A85498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A854B4;
      }
      goto L_08A854AC;
    }
L_08A854AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 38u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A854B4;
    }
L_08A854B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A854D4;
      }
      goto L_08A854C8;
    }
L_08A854C8:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A854D4;
    }
L_08A854D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(286)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A854FC;
      }
      goto L_08A854E8;
    }
L_08A854E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(294)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85508;
      }
      goto L_08A854FC;
    }
L_08A854FC:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A85508;
    }
L_08A85508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85530;
      }
      goto L_08A8551C;
    }
L_08A8551C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(290)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85540;
      }
      goto L_08A85530;
    }
L_08A85530:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 37u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A85540;
    }
L_08A85540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(302)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85560;
      }
      goto L_08A85554;
    }
L_08A85554:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A85560;
    }
L_08A85560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85580;
      }
      goto L_08A85574;
    }
L_08A85574:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A85580;
    }
L_08A85580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(298)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A855A0;
      }
      goto L_08A85594;
    }
L_08A85594:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A855A0;
    }
L_08A855A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A855C0;
      }
      goto L_08A855B4;
    }
L_08A855B4:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A855C0;
    }
L_08A855C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(306)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A855E4;
      }
      goto L_08A855D4;
    }
L_08A855D4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 37u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A855E4;
    }
L_08A855E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85608;
      }
      goto L_08A855F8;
    }
L_08A855F8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 37u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A85608;
    }
L_08A85608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(274)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8562C;
      }
      goto L_08A8561C;
    }
L_08A8561C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 37u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A8562C;
    }
L_08A8562C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85650;
      }
      goto L_08A85640;
    }
L_08A85640:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 37u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A85650;
    }
L_08A85650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85670;
      }
      goto L_08A85664;
    }
L_08A85664:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A85670;
    }
L_08A85670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85690;
      }
      goto L_08A85684;
    }
L_08A85684:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A856A0;
      }
      goto L_08A85690;
    }
L_08A85690:
    ctx.gpr[31] = (0x08A85698u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 140u, 0x08A81858u>(ctx, &aot_mem) && ctx.pc == 0x08A85698u) goto L_08A85698;
    return;
L_08A85698:
    ctx.gpr[23] = (ctx.gpr[2] << 16u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 16u));
    goto L_08A856A0;
L_08A856A0:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85BAC;
      }
      goto L_08A856B0;
    }
L_08A856B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (17026u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] >> 9u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] & 7u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A856DC;
      }
      goto L_08A856D4;
    }
L_08A856D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A85704;
      }
      goto L_08A856DC;
    }
L_08A856DC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85700;
      }
      goto L_08A856E8;
    }
L_08A856E8:
    ctx.gpr[31] = (0x08A856F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A856F0u) goto L_08A856F0;
    return;
L_08A856F0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[18] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A85704;
      }
      goto L_08A85700;
    }
L_08A85700:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A85704;
L_08A85704:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[16] & 7u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85720;
      }
      goto L_08A85718;
    }
L_08A85718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A85748;
      }
      goto L_08A85720;
    }
L_08A85720:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85744;
      }
      goto L_08A8572C;
    }
L_08A8572C:
    ctx.gpr[31] = (0x08A85734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A85734u) goto L_08A85734;
    return;
L_08A85734:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[16] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u < ctx.gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A85748;
      }
      goto L_08A85744;
    }
L_08A85744:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A85748;
L_08A85748:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85760;
      }
      goto L_08A85758;
    }
L_08A85758:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08A85760;
L_08A85760:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85988;
      }
      goto L_08A85768;
    }
L_08A85768:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(580), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[23] << 3u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23052));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16102u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (48962u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36700u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48844u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A85828u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08A85828u) goto L_08A85828;
    return;
L_08A85828:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27668)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A858E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 328u, 0x0892AA10u>(ctx, &aot_mem) && ctx.pc == 0x08A858E4u) goto L_08A858E4;
    return;
L_08A858E4:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A85900u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A85900u) goto L_08A85900;
    return;
L_08A85900:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (15232u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A8597Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 343u, 0x08AE5E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8597Cu) goto L_08A8597C;
    return;
L_08A8597C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
      if (branch_taken) {
          goto L_08A859D8;
      }
      goto L_08A85988;
    }
L_08A85988:
    ctx.gpr[2] = (48913u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (ctx.gpr[2] | 60293u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A859D8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08A859D8u) goto L_08A859D8;
    return;
L_08A859D8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A85B5C;
      }
      goto L_08A859E0;
    }
L_08A859E0:
    ctx.gpr[16] = (ctx.gpr[23] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23052));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16140u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (48921u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[2] = (48844u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A85A94u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08A85A94u) goto L_08A85A94;
    return;
L_08A85A94:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A85BAC;
      }
      goto L_08A85A9C;
    }
L_08A85A9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[6] = (16928u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(27668)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (49152u << 16u);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A85B54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 328u, 0x0892AA10u>(ctx, &aot_mem) && ctx.pc == 0x08A85B54u) goto L_08A85B54;
    return;
L_08A85B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85BAC;
      }
      goto L_08A85B5C;
    }
L_08A85B5C:
    ctx.gpr[2] = (48870u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (ctx.gpr[2] | 26214u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A85BACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08A85BACu) goto L_08A85BAC;
    return;
L_08A85BAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A85BE8;
      }
      goto L_08A85BBC;
    }
L_08A85BBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A85BE8;
      }
      goto L_08A85BCC;
    }
L_08A85BCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(423)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A85BE8;
      }
      goto L_08A85BD8;
    }
L_08A85BD8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(426)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_08A85DC0;
    }
    goto L_08A85BE4;
L_08A85BE4:
    ctx.gpr[5] = (2232u << 16u);
    goto L_08A85BE8;
L_08A85BE8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[5] = (16736u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_08A85DC0;
    }
    goto L_08A85C34;
L_08A85C34:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-6180)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_08A85DC0;
    }
    goto L_08A85C48;
L_08A85C48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16179u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A85C88u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85C88u) goto L_08A85C88;
    return;
L_08A85C88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85DBC;
      }
      goto L_08A85C90;
    }
L_08A85C90:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-6180)));
    ctx.gpr[18] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22720));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A85CD4u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 140u, 0x08A81858u>(ctx, &aot_mem) && ctx.pc == 0x08A85CD4u) goto L_08A85CD4;
    return;
L_08A85CD4:
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-6180)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[23] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(23052));
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (17279u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-6180)));
        goto L_08A85D70;
    }
    goto L_08A85D4C;
L_08A85D4C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-6180)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A85D90;
      }
      goto L_08A85D70;
    }
L_08A85D70:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A85D90;
L_08A85D90:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-6180)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(423)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(426)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(-6180), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A85DBC;
L_08A85DBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    goto L_08A85DC0;
L_08A85DC0:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (ctx.gpr[4] << 2u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08A85E74;
    }
    goto L_08A85E74;
L_08A85E74:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A85E84;
    }
    goto L_08A85E84;
L_08A85E84:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16281u << 16u);
      if (branch_taken) {
          goto L_08A85EC0;
      }
      goto L_08A85E94;
    }
L_08A85E94:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[26];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 294u);
      if (branch_taken) {
          goto L_08A85EC8;
      }
      goto L_08A85EB8;
    }
L_08A85EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08A85ED0;
      }
      goto L_08A85EC0;
    }
L_08A85EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86398;
      }
      goto L_08A85EC8;
    }
L_08A85EC8:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    goto L_08A85ED0;
L_08A85ED0:
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 290u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A85EFC;
      }
      goto L_08A85EF0;
    }
L_08A85EF0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85F00;
      }
      goto L_08A85EFC;
    }
L_08A85EFC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A85F00;
L_08A85F00:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] & 2047u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A85F24;
      }
      goto L_08A85F18;
    }
L_08A85F18:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A85F24;
L_08A85F24:
    ctx.gpr[5] = (15176u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A860E4;
      }
      goto L_08A85FA8;
    }
L_08A85FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A85FF4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A0606Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85FF4u) goto L_08A85FF4;
    return;
L_08A85FF4:
    ctx.gpr[5] = (15776u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 1798u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (48900u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55010u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (48280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 8384u);
    ctx.gpr[31] = (0x08A86020u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 524u, 0x08A06780u>(ctx, &aot_mem) && ctx.pc == 0x08A86020u) goto L_08A86020;
    return;
L_08A86020:
    ctx.gpr[4] = (16212u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14680u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (47747u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15975u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 27787u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A86058u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A86058u) goto L_08A86058;
    return;
L_08A86058:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8606Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A06584u>(ctx, &aot_mem) && ctx.pc == 0x08A8606Cu) goto L_08A8606C;
    return;
L_08A8606C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A86078u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 527u, 0x08A06A44u>(ctx, &aot_mem) && ctx.pc == 0x08A86078u) goto L_08A86078;
    return;
L_08A86078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8609C;
      }
      goto L_08A86088;
    }
L_08A86088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8609C;
      }
      goto L_08A86094;
    }
L_08A86094:
    ctx.gpr[31] = (0x08A8609Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A8609Cu) goto L_08A8609C;
    return;
L_08A8609C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
        goto L_08A860C4;
    }
    goto L_08A860AC;
L_08A860AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
        goto L_08A860C4;
    }
    goto L_08A860B8;
L_08A860B8:
    ctx.gpr[31] = (0x08A860C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A860C0u) goto L_08A860C0;
    return;
L_08A860C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    goto L_08A860C4;
L_08A860C4:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A860E4;
      }
      goto L_08A860D0;
    }
L_08A860D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A860E4;
      }
      goto L_08A860DC;
    }
L_08A860DC:
    ctx.gpr[31] = (0x08A860E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A860E4u) goto L_08A860E4;
    return;
L_08A860E4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8633C;
      }
      goto L_08A860EC;
    }
L_08A860EC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[26]) || std::isnan(ctx.fpr[20])) && ctx.fpr[26] == ctx.fpr[20]));
    ctx.gpr[23] = (ctx.gpr[23] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23052));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[4] = (17026u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A8616C;
      }
      goto L_08A86110;
    }
L_08A86110:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
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
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (15897u << 16u);
      if (branch_taken) {
          goto L_08A86230;
      }
      goto L_08A8616C;
    }
L_08A8616C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[26]) || std::isnan(ctx.fpr[24])) && ctx.fpr[26] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A861D8;
      }
      goto L_08A8617C;
    }
L_08A8617C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
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
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (15897u << 16u);
      if (branch_taken) {
          goto L_08A86230;
      }
      goto L_08A861D8;
    }
L_08A861D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
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
    ctx.gpr[4] = (15897u << 16u);
    goto L_08A86230;
L_08A86230:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[4] = (48896u << 16u);
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A86260;
L_08A86260:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A86298u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 10u, 0x08A80E1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86298u) goto L_08A86298;
    return;
L_08A86298:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(2)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A8632Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08A8632Cu) goto L_08A8632C;
    return;
L_08A8632C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A86260;
      }
      goto L_08A8633C;
    }
L_08A8633C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86398;
      }
      goto L_08A86344;
    }
L_08A86344:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (49049u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.gpr[2] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[5] = (0u | 82u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (0u | 94u);
    ctx.gpr[7] = (0u | 150u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A86398u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08A86398u) goto L_08A86398;
    return;
L_08A86398:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A863E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(-6180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A86AA4;
      }
      goto L_08A8642C;
    }
L_08A8642C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22720));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23240));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22968));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23232));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23224));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23216));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23208));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23192));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23184));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23176));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23168));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23160));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23152));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23144));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23136));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2233u << 16u);
    ctx.gpr[23] = (2227u << 16u);
    ctx.gpr[21] = (2269u << 16u);
    ctx.gpr[4] = (16880u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(9176));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-23260));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-5392));
    ctx.gpr[18] = (2227u << 16u);
    goto L_08A86514;
L_08A86514:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86554;
      }
      goto L_08A86534;
    }
L_08A86534:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A86540u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86540u) goto L_08A86540;
    return;
L_08A86540:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8654Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x08A8654Cu) goto L_08A8654C;
    return;
L_08A8654C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A86554;
    }
L_08A86554:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A86564;
    }
L_08A86564:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-22912)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8657C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_08A86594;
      }
      goto L_08A8658C;
    }
L_08A8658C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8659C;
      }
      goto L_08A86594;
    }
L_08A86594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A86620;
      }
      goto L_08A8659C;
    }
L_08A8659C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A865F4;
      }
      goto L_08A865AC;
    }
L_08A865AC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
        goto L_08A865E4;
    }
    goto L_08A865B8;
L_08A865B8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A865C4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A865C4u) goto L_08A865C4;
    return;
L_08A865C4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A865DC;
      }
      goto L_08A865D0;
    }
L_08A865D0:
    ctx.gpr[31] = (0x08A865D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A865D8u) goto L_08A865D8;
    return;
L_08A865D8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A865DC;
L_08A865DC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    goto L_08A865E4;
L_08A865E4:
    ctx.gpr[31] = (0x08A865ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A865ECu) goto L_08A865EC;
    return;
L_08A865EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86620;
      }
      goto L_08A865F4;
    }
L_08A865F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A86610u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86610u) goto L_08A86610;
    return;
L_08A86610:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8661Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A542E8u>(ctx, &aot_mem) && ctx.pc == 0x08A8661Cu) goto L_08A8661C;
    return;
L_08A8661C:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    goto L_08A86620;
L_08A86620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A86628;
    }
L_08A86628:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08A86660;
    }
    goto L_08A86634;
L_08A86634:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86640u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A86640u) goto L_08A86640;
    return;
L_08A86640:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86658;
      }
      goto L_08A8664C;
    }
L_08A8664C:
    ctx.gpr[31] = (0x08A86654u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A86654u) goto L_08A86654;
    return;
L_08A86654:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86658;
L_08A86658:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08A86660;
L_08A86660:
    ctx.gpr[31] = (0x08A86668u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A86668u) goto L_08A86668;
    return;
L_08A86668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A86670;
    }
L_08A86670:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_08A866A8;
    }
    goto L_08A8667C;
L_08A8667C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86688u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A86688u) goto L_08A86688;
    return;
L_08A86688:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A866A0;
      }
      goto L_08A86694;
    }
L_08A86694:
    ctx.gpr[31] = (0x08A8669Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8669Cu) goto L_08A8669C;
    return;
L_08A8669C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A866A0;
L_08A866A0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_08A866A8;
L_08A866A8:
    ctx.gpr[31] = (0x08A866B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A866B0u) goto L_08A866B0;
    return;
L_08A866B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A866B8;
    }
L_08A866B8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_08A866F0;
    }
    goto L_08A866C4;
L_08A866C4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A866D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A866D0u) goto L_08A866D0;
    return;
L_08A866D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A866E8;
      }
      goto L_08A866DC;
    }
L_08A866DC:
    ctx.gpr[31] = (0x08A866E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A866E4u) goto L_08A866E4;
    return;
L_08A866E4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A866E8;
L_08A866E8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08A866F0;
L_08A866F0:
    ctx.gpr[31] = (0x08A866F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A866F8u) goto L_08A866F8;
    return;
L_08A866F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A86700;
    }
L_08A86700:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_08A86738;
    }
    goto L_08A8670C;
L_08A8670C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86718u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A86718u) goto L_08A86718;
    return;
L_08A86718:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86730;
      }
      goto L_08A86724;
    }
L_08A86724:
    ctx.gpr[31] = (0x08A8672Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8672Cu) goto L_08A8672C;
    return;
L_08A8672C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86730;
L_08A86730:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_08A86738;
L_08A86738:
    ctx.gpr[31] = (0x08A86740u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A86740u) goto L_08A86740;
    return;
L_08A86740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A86748;
    }
L_08A86748:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08A86780;
    }
    goto L_08A86754;
L_08A86754:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86760u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A86760u) goto L_08A86760;
    return;
L_08A86760:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86778;
      }
      goto L_08A8676C;
    }
L_08A8676C:
    ctx.gpr[31] = (0x08A86774u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A86774u) goto L_08A86774;
    return;
L_08A86774:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86778;
L_08A86778:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08A86780;
L_08A86780:
    ctx.gpr[31] = (0x08A86788u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A86788u) goto L_08A86788;
    return;
L_08A86788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A86790;
    }
L_08A86790:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_08A867C8;
    }
    goto L_08A8679C;
L_08A8679C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A867A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A867A8u) goto L_08A867A8;
    return;
L_08A867A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A867C0;
      }
      goto L_08A867B4;
    }
L_08A867B4:
    ctx.gpr[31] = (0x08A867BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A867BCu) goto L_08A867BC;
    return;
L_08A867BC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A867C0;
L_08A867C0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_08A867C8;
L_08A867C8:
    ctx.gpr[31] = (0x08A867D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A867D0u) goto L_08A867D0;
    return;
L_08A867D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A867D8;
    }
L_08A867D8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08A86810;
    }
    goto L_08A867E4;
L_08A867E4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A867F0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A867F0u) goto L_08A867F0;
    return;
L_08A867F0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86808;
      }
      goto L_08A867FC;
    }
L_08A867FC:
    ctx.gpr[31] = (0x08A86804u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A86804u) goto L_08A86804;
    return;
L_08A86804:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86808;
L_08A86808:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08A86810;
L_08A86810:
    ctx.gpr[31] = (0x08A86818u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A86818u) goto L_08A86818;
    return;
L_08A86818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A86820;
    }
L_08A86820:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08A86858;
    }
    goto L_08A8682C;
L_08A8682C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86838u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A86838u) goto L_08A86838;
    return;
L_08A86838:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86850;
      }
      goto L_08A86844;
    }
L_08A86844:
    ctx.gpr[31] = (0x08A8684Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8684Cu) goto L_08A8684C;
    return;
L_08A8684C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86850;
L_08A86850:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08A86858;
L_08A86858:
    ctx.gpr[31] = (0x08A86860u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A86860u) goto L_08A86860;
    return;
L_08A86860:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A86868;
    }
L_08A86868:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_08A868A0;
    }
    goto L_08A86874;
L_08A86874:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86880u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A86880u) goto L_08A86880;
    return;
L_08A86880:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86898;
      }
      goto L_08A8688C;
    }
L_08A8688C:
    ctx.gpr[31] = (0x08A86894u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A86894u) goto L_08A86894;
    return;
L_08A86894:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86898;
L_08A86898:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08A868A0;
L_08A868A0:
    ctx.gpr[31] = (0x08A868A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A868A8u) goto L_08A868A8;
    return;
L_08A868A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A868B0;
    }
L_08A868B0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08A868E8;
    }
    goto L_08A868BC;
L_08A868BC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A868C8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A868C8u) goto L_08A868C8;
    return;
L_08A868C8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A868E0;
      }
      goto L_08A868D4;
    }
L_08A868D4:
    ctx.gpr[31] = (0x08A868DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A868DCu) goto L_08A868DC;
    return;
L_08A868DC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A868E0;
L_08A868E0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08A868E8;
L_08A868E8:
    ctx.gpr[31] = (0x08A868F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A868F0u) goto L_08A868F0;
    return;
L_08A868F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A868F8;
    }
L_08A868F8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08A86930;
    }
    goto L_08A86904;
L_08A86904:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86910u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A86910u) goto L_08A86910;
    return;
L_08A86910:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86928;
      }
      goto L_08A8691C;
    }
L_08A8691C:
    ctx.gpr[31] = (0x08A86924u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A86924u) goto L_08A86924;
    return;
L_08A86924:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86928;
L_08A86928:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08A86930;
L_08A86930:
    ctx.gpr[31] = (0x08A86938u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A86938u) goto L_08A86938;
    return;
L_08A86938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A86940;
    }
L_08A86940:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
        goto L_08A86978;
    }
    goto L_08A8694C;
L_08A8694C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86958u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A86958u) goto L_08A86958;
    return;
L_08A86958:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86970;
      }
      goto L_08A86964;
    }
L_08A86964:
    ctx.gpr[31] = (0x08A8696Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8696Cu) goto L_08A8696C;
    return;
L_08A8696C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86970;
L_08A86970:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08A86978;
L_08A86978:
    ctx.gpr[31] = (0x08A86980u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A86980u) goto L_08A86980;
    return;
L_08A86980:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A86988;
    }
L_08A86988:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_08A869C0;
    }
    goto L_08A86994;
L_08A86994:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A869A0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A869A0u) goto L_08A869A0;
    return;
L_08A869A0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A869B8;
      }
      goto L_08A869AC;
    }
L_08A869AC:
    ctx.gpr[31] = (0x08A869B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A869B4u) goto L_08A869B4;
    return;
L_08A869B4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A869B8;
L_08A869B8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08A869C0;
L_08A869C0:
    ctx.gpr[31] = (0x08A869C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A869C8u) goto L_08A869C8;
    return;
L_08A869C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A869D0;
      }
      goto L_08A869D0;
    }
L_08A869D0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86A88;
      }
      goto L_08A869D8;
    }
L_08A869D8:
    ctx.gpr[31] = (0x08A869E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08A869E0u) goto L_08A869E0;
    return;
L_08A869E0:
    ctx.gpr[31] = (0x08A869E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08A869E8u) goto L_08A869E8;
    return;
L_08A869E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A86A00;
    }
    goto L_08A86A00;
L_08A86A00:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A86A18;
    }
    goto L_08A86A18;
L_08A86A18:
    ctx.gpr[31] = (0x08A86A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08A86A20u) goto L_08A86A20;
    return;
L_08A86A20:
    ctx.gpr[31] = (0x08A86A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A86A28u) goto L_08A86A28;
    return;
L_08A86A28:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A86A3Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x08A86A3Cu) goto L_08A86A3C;
    return;
L_08A86A3C:
    ctx.gpr[31] = (0x08A86A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A86A44u) goto L_08A86A44;
    return;
L_08A86A44:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(21)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(22)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(23)));
    ctx.gpr[31] = (0x08A86A5Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08A86A5Cu) goto L_08A86A5C;
    return;
L_08A86A5C:
    ctx.gpr[31] = (0x08A86A64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08A86A64u) goto L_08A86A64;
    return;
L_08A86A64:
    ctx.gpr[31] = (0x08A86A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x08A86A6Cu) goto L_08A86A6C;
    return;
L_08A86A6C:
    ctx.gpr[31] = (0x08A86A74u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08A86A74u) goto L_08A86A74;
    return;
L_08A86A74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A86A88u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08A86A88u) goto L_08A86A88;
    return;
L_08A86A88:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(-6180)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A86514;
      }
      goto L_08A86AA4;
    }
L_08A86AA4:
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(-6180), static_cast<std::uint16_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
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
L_08A86AE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A86B28;
      }
      goto L_08A86B00;
    }
L_08A86B00:
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A86B54;
      }
      goto L_08A86B28;
    }
L_08A86B28:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[7] = (ctx.gpr[6] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A86B54;
L_08A86B54:
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(282)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86C9C;
      }
      goto L_08A86B68;
    }
L_08A86B68:
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(284)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
        goto L_08A86C54;
    }
    goto L_08A86B7C;
L_08A86B7C:
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(286)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A86C38;
      }
      goto L_08A86B90;
    }
L_08A86B90:
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(288)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
        goto L_08A86BF0;
    }
    goto L_08A86BA4;
L_08A86BA4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(290)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A86BD4;
      }
      goto L_08A86BB8;
    }
L_08A86BB8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A86CD4;
      }
      goto L_08A86BCC;
    }
L_08A86BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86D18;
      }
      goto L_08A86BD4;
    }
L_08A86BD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 84u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A86BE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08A86BE8u) goto L_08A86BE8;
    return;
L_08A86BE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86FE0;
      }
      goto L_08A86BF0;
    }
L_08A86BF0:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(359)));
    ctx.gpr[5] = (0u | 79u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x08A86C30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08A86C30u) goto L_08A86C30;
    return;
L_08A86C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86FE0;
      }
      goto L_08A86C38;
    }
L_08A86C38:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 84u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A86C4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08A86C4Cu) goto L_08A86C4C;
    return;
L_08A86C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86FE0;
      }
      goto L_08A86C54;
    }
L_08A86C54:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.gpr[5] = (0u | 83u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x08A86C94u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08A86C94u) goto L_08A86C94;
    return;
L_08A86C94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86FE0;
      }
      goto L_08A86C9C;
    }
L_08A86C9C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2995), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2940)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2988), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 82u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A86CCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08A86CCCu) goto L_08A86CCC;
    return;
L_08A86CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A86FE0;
      }
      goto L_08A86CD4;
    }
L_08A86CD4:
    ctx.gpr[31] = (0x08A86CDCu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86CDCu) goto L_08A86CDC;
    return;
L_08A86CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_08A86CF0;
    }
    goto L_08A86CF0;
L_08A86CF0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A86CFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 213u, 0x08944E84u>(ctx, &aot_mem) && ctx.pc == 0x08A86CFCu) goto L_08A86CFC;
    return;
L_08A86CFC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 84u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A86D10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08A86D10u) goto L_08A86D10;
    return;
L_08A86D10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86FE0;
      }
      goto L_08A86D18;
    }
L_08A86D18:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(294)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A86D48;
      }
      goto L_08A86D2C;
    }
L_08A86D2C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A86D64;
      }
      goto L_08A86D40;
    }
L_08A86D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86F34;
      }
      goto L_08A86D48;
    }
L_08A86D48:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 84u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A86D5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08A86D5Cu) goto L_08A86D5C;
    return;
L_08A86D5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86FE0;
      }
      goto L_08A86D64;
    }
L_08A86D64:
    ctx.gpr[31] = (0x08A86D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86D6Cu) goto L_08A86D6C;
    return;
L_08A86D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86F2C;
      }
      goto L_08A86D78;
    }
L_08A86D78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86F2C;
      }
      goto L_08A86D84;
    }
L_08A86D84:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A86D90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23128));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 9u, 0x08A80DF0u>(ctx, &aot_mem) && ctx.pc == 0x08A86D90u) goto L_08A86D90;
    return;
L_08A86D90:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A86DD0;
      }
      goto L_08A86DA0;
    }
L_08A86DA0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86DACu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A86DACu) goto L_08A86DAC;
    return;
L_08A86DAC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86DC4;
      }
      goto L_08A86DB8;
    }
L_08A86DB8:
    ctx.gpr[31] = (0x08A86DC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A86DC0u) goto L_08A86DC0;
    return;
L_08A86DC0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86DC4;
L_08A86DC4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A86DD0;
L_08A86DD0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A86DE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23108));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A86DE0u) goto L_08A86DE0;
    return;
L_08A86DE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x08A86DF0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86DF0u) goto L_08A86DF0;
    return;
L_08A86DF0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7240)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(45), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A86E20u);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86E20u) goto L_08A86E20;
    return;
L_08A86E20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_08A86E68;
      }
      goto L_08A86E34;
    }
L_08A86E34:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    goto L_08A86E38;
L_08A86E38:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_08A86E5C;
    }
    goto L_08A86E4C;
L_08A86E4C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A86E60;
      }
      goto L_08A86E5C;
    }
L_08A86E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A86E60;
L_08A86E60:
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
        goto L_08A86E38;
    }
    goto L_08A86E68;
L_08A86E68:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A86E98;
      }
      goto L_08A86E7C;
    }
L_08A86E7C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A86EA4;
      }
      goto L_08A86E94;
    }
L_08A86E94:
    ctx.gpr[4] = (2232u << 16u);
    goto L_08A86E98;
L_08A86E98:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (2232u << 16u);
    goto L_08A86EA4;
L_08A86EA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08A86EE8;
    }
    goto L_08A86EE0;
L_08A86EE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A86EEC;
      }
      goto L_08A86EE8;
    }
L_08A86EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A86EEC;
L_08A86EEC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(42));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(49), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A86F10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08A86F10u) goto L_08A86F10;
    return;
L_08A86F10:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(45), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A86F2Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 812u, 0x088AB948u>(ctx, &aot_mem) && ctx.pc == 0x08A86F2Cu) goto L_08A86F2C;
    return;
L_08A86F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86FE0;
      }
      goto L_08A86F34;
    }
L_08A86F34:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A86FDC;
      }
      goto L_08A86F48;
    }
L_08A86F48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86FD4;
      }
      goto L_08A86F54;
    }
L_08A86F54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A86F60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23100));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 9u, 0x08A80DF0u>(ctx, &aot_mem) && ctx.pc == 0x08A86F60u) goto L_08A86F60;
    return;
L_08A86F60:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A86FA0;
      }
      goto L_08A86F70;
    }
L_08A86F70:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86F7Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A86F7Cu) goto L_08A86F7C;
    return;
L_08A86F7C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86F94;
      }
      goto L_08A86F88;
    }
L_08A86F88:
    ctx.gpr[31] = (0x08A86F90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A86F90u) goto L_08A86F90;
    return;
L_08A86F90:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86F94;
L_08A86F94:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A86FA0;
L_08A86FA0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08A86FB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23080));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A86FB0u) goto L_08A86FB0;
    return;
L_08A86FB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x08A86FC0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86FC0u) goto L_08A86FC0;
    return;
L_08A86FC0:
    ctx.gpr[31] = (0x08A86FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86FC8u) goto L_08A86FC8;
    return;
L_08A86FC8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A86FD4u);
    ctx.gpr[5] = (0u | 30000u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 349u, 0x08945740u>(ctx, &aot_mem) && ctx.pc == 0x08A86FD4u) goto L_08A86FD4;
    return;
L_08A86FD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86FE0;
      }
      goto L_08A86FDC;
    }
L_08A86FDC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A86FE0;
L_08A86FE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86FF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A87048;
      }
      goto L_08A87030;
    }
L_08A87030:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87050;
      }
      goto L_08A87040;
    }
L_08A87040:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87290;
      }
      goto L_08A87048;
    }
L_08A87048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87400;
      }
      goto L_08A87050;
    }
L_08A87050:
    ctx.gpr[31] = (0x08A87058u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A87058u) goto L_08A87058;
    return;
L_08A87058:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A873F8;
      }
      goto L_08A87060;
    }
L_08A87060:
    ctx.gpr[31] = (0x08A87068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 83u, 0x0891857Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87068u) goto L_08A87068;
    return;
L_08A87068:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87158;
      }
      goto L_08A87070;
    }
L_08A87070:
    ctx.gpr[31] = (0x08A87078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87078u) goto L_08A87078;
    return;
L_08A87078:
    ctx.gpr[31] = (0x08A87080u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 361u, 0x0894583Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87080u) goto L_08A87080;
    return;
L_08A87080:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A87098u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A87434;
L_08A87098:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7044)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7036)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(294)));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A87108u);
    ctx.gpr[10] = (0u | 0u);
    goto L_08A84FC8;
L_08A87108:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A87118u);
    ctx.gpr[4] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A87118u) goto L_08A87118;
    return;
L_08A87118:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A87130;
      }
      goto L_08A87124;
    }
L_08A87124:
    ctx.gpr[31] = (0x08A8712Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 419u, 0x0891997Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8712Cu) goto L_08A8712C;
    return;
L_08A8712C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A87130;
L_08A87130:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08A87144u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 75u, 0x089C052Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87144u) goto L_08A87144;
    return;
L_08A87144:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A87150u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 429u, 0x08A5A3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A87150u) goto L_08A87150;
    return;
L_08A87150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A873F8;
      }
      goto L_08A87158;
    }
L_08A87158:
    ctx.gpr[31] = (0x08A87160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87160u) goto L_08A87160;
    return;
L_08A87160:
    ctx.gpr[31] = (0x08A87168u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 319u, 0x08945584u>(ctx, &aot_mem) && ctx.pc == 0x08A87168u) goto L_08A87168;
    return;
L_08A87168:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1720))))));
        goto L_08A871C4;
    }
    goto L_08A87170;
L_08A87170:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A87188u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A87434;
L_08A87188:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A871A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A871A8u) goto L_08A871A8;
    return;
L_08A871A8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A871BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 371u, 0x089458B4u>(ctx, &aot_mem) && ctx.pc == 0x08A871BCu) goto L_08A871BC;
    return;
L_08A871BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A873F8;
      }
      goto L_08A871C4;
    }
L_08A871C4:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(48) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87208;
      }
      goto L_08A871E8;
    }
L_08A871E8:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-22856)));
    jump_target = ctx.gpr[1];
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87288;
      }
      goto L_08A87208;
    }
L_08A87208:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A87218;
      }
      goto L_08A87214;
    }
L_08A87214:
    ctx.gpr[16] = (0u | 34u);
    goto L_08A87218;
L_08A87218:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A87230u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A87434;
L_08A87230:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A87288u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 119u, 0x08A8168Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87288u) goto L_08A87288;
    return;
L_08A87288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A873F8;
      }
      goto L_08A87290;
    }
L_08A87290:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[18] = (2229u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[30] = (0u | 34u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22894));
    goto L_08A872B8;
L_08A872B8:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A873E0;
      }
      goto L_08A872D4;
    }
L_08A872D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A873E0;
      }
      goto L_08A872E0;
    }
L_08A872E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A872FC;
      }
      goto L_08A872EC;
    }
L_08A872EC:
    ctx.gpr[31] = (0x08A872F4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850DACu>(ctx, &aot_mem) && ctx.pc == 0x08A872F4u) goto L_08A872F4;
    return;
L_08A872F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A873E0;
      }
      goto L_08A872FC;
    }
L_08A872FC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08A87310u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A87434;
L_08A87310:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1440));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A87364;
    }
    goto L_08A87364;
L_08A87364:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A87378u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 129u, 0x08A81768u>(ctx, &aot_mem) && ctx.pc == 0x08A87378u) goto L_08A87378;
    return;
L_08A87378:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A873E0;
      }
      goto L_08A87380;
    }
L_08A87380:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A873C4;
    }
    goto L_08A873C4;
L_08A873C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A873E0u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 119u, 0x08A8168Cu>(ctx, &aot_mem) && ctx.pc == 0x08A873E0u) goto L_08A873E0;
    return;
L_08A873E0:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A872B8;
      }
      goto L_08A873F8;
    }
L_08A873F8:
    ctx.gpr[31] = (0x08A87400u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 693u, 0x0899F8F8u>(ctx, &aot_mem) && ctx.pc == 0x08A87400u) goto L_08A87400;
    return;
L_08A87400:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87434:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    ctx.gpr[4] = (15561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16320u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[7]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[30]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A874F0;
L_08A874F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A87504u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A87504u) goto L_08A87504;
    return;
L_08A87504:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A87548u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A87548u) goto L_08A87548;
    return;
L_08A87548:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[26] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08A87594u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08A87594u) goto L_08A87594;
    return;
L_08A87594:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
      if (branch_taken) {
          goto L_08A877BC;
      }
      goto L_08A875B0;
    }
L_08A875B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A8767Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A8767Cu) goto L_08A8767C;
    return;
L_08A8767C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x08A87690u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A87690u) goto L_08A87690;
    return;
L_08A87690:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[31] = (0x08A876A8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A876A8u) goto L_08A876A8;
    return;
L_08A876A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[28] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x08A876BCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A876BCu) goto L_08A876BC;
    return;
L_08A876BC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[26] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
      if (branch_taken) {
          goto L_08A876F0;
      }
      goto L_08A876E8;
    }
L_08A876E8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A877BC;
      }
      goto L_08A876F0;
    }
L_08A876F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87714;
      }
      goto L_08A876F8;
    }
L_08A876F8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08A8770Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 206u, 0x08A82240u>(ctx, &aot_mem) && ctx.pc == 0x08A8770Cu) goto L_08A8770C;
    return;
L_08A8770C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A877BC;
      }
      goto L_08A87714;
    }
L_08A87714:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A87744u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87744u) goto L_08A87744;
    return;
L_08A87744:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A877BC;
      }
      goto L_08A8774C;
    }
L_08A8774C:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
        goto L_08A87798;
    }
    goto L_08A87754;
L_08A87754:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A8778Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 72u, 0x088C8430u>(ctx, &aot_mem) && ctx.pc == 0x08A8778Cu) goto L_08A8778C;
    return;
L_08A8778C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A877BC;
      }
      goto L_08A87794;
    }
L_08A87794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    goto L_08A87798;
L_08A87798:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A877F8;
      }
      goto L_08A877BC;
    }
L_08A877BC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_08A874F0;
    }
    goto L_08A877CC;
L_08A877CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A877F8;
L_08A877F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87840:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22788)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22784)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22812)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(22792), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(22800), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(22796), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(22804), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(22808), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(22816), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A878D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A878F0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08A878F0u) goto L_08A878F0;
    return;
L_08A878F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A878FCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08A878FCu) goto L_08A878FC;
    return;
L_08A878FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87908u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 28u, 0x0890C258u>(ctx, &aot_mem) && ctx.pc == 0x08A87908u) goto L_08A87908;
    return;
L_08A87908:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8791C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87938u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08A87938u) goto L_08A87938;
    return;
L_08A87938:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87948u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08A87948u) goto L_08A87948;
    return;
L_08A87948:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87954u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 28u, 0x0890C258u>(ctx, &aot_mem) && ctx.pc == 0x08A87954u) goto L_08A87954;
    return;
L_08A87954:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87968:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A879ACu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22572));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 444u, 0x08A4B700u>(ctx, &aot_mem) && ctx.pc == 0x08A879ACu) goto L_08A879AC;
    return;
L_08A879AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A879C0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08A879C0u) goto L_08A879C0;
    return;
L_08A879C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87A50;
      }
      goto L_08A879C8;
    }
L_08A879C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A879D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08A879D4u) goto L_08A879D4;
    return;
L_08A879D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A879E8u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 164u, 0x08A00B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A879E8u) goto L_08A879E8;
    return;
L_08A879E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87A40;
      }
      goto L_08A879F0;
    }
L_08A879F0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87A00u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 239u, 0x08A010C4u>(ctx, &aot_mem) && ctx.pc == 0x08A87A00u) goto L_08A87A00;
    return;
L_08A87A00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87A24;
      }
      goto L_08A87A08;
    }
L_08A87A08:
    ctx.gpr[31] = (0x08A87A10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 4u, 0x0890C064u>(ctx, &aot_mem) && ctx.pc == 0x08A87A10u) goto L_08A87A10;
    return;
L_08A87A10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A87ABC;
      }
      goto L_08A87A1C;
    }
L_08A87A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87C08;
      }
      goto L_08A87A24;
    }
L_08A87A24:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A87A38u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22532));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 361u, 0x08A4B144u>(ctx, &aot_mem) && ctx.pc == 0x08A87A38u) goto L_08A87A38;
    return;
L_08A87A38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87C0C;
      }
      goto L_08A87A40;
    }
L_08A87A40:
    ctx.gpr[31] = (0x08A87A48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BBF0u>(ctx, &aot_mem) && ctx.pc == 0x08A87A48u) goto L_08A87A48;
    return;
L_08A87A48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A87C0C;
      }
      goto L_08A87A50;
    }
L_08A87A50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87A5Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A87A5Cu) goto L_08A87A5C;
    return;
L_08A87A5C:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A87AA0;
      }
      goto L_08A87A68;
    }
L_08A87A68:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87A7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22564));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 690u, 0x0890BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87A7Cu) goto L_08A87A7C;
    return;
L_08A87A7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87A88u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B974u>(ctx, &aot_mem) && ctx.pc == 0x08A87A88u) goto L_08A87A88;
    return;
L_08A87A88:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87A98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08A87A98u) goto L_08A87A98;
    return;
L_08A87A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A879F0;
      }
      goto L_08A87AA0;
    }
L_08A87AA0:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A87AB4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22560));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 361u, 0x08A4B144u>(ctx, &aot_mem) && ctx.pc == 0x08A87AB4u) goto L_08A87AB4;
    return;
L_08A87AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87C0C;
      }
      goto L_08A87ABC;
    }
L_08A87ABC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22516));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22508));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[23] = (2227u << 16u);
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[18] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-22496));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-22484));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-22476));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-22464));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-22456));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-22448));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-22436));
    goto L_08A87B08;
L_08A87B08:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-83));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87BF8;
      }
      goto L_08A87B18;
    }
L_08A87B18:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-22200)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87B30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x08A87B40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A878D4;
L_08A87B40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A87B50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A878D4;
L_08A87B50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87B60u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08A8791C;
L_08A87B60:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87B70u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08A878D4;
L_08A87B70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87BF8;
      }
      goto L_08A87B78;
    }
L_08A87B78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87B88u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A8791C;
L_08A87B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87BF8;
      }
      goto L_08A87B90;
    }
L_08A87B90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87BA0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08A8791C;
L_08A87BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87BF8;
      }
      goto L_08A87BA8;
    }
L_08A87BA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87BB8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A878D4;
L_08A87BB8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87BC8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A878D4;
L_08A87BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87BF8;
      }
      goto L_08A87BD0;
    }
L_08A87BD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A87BE0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x08A87BE0u) goto L_08A87BE0;
    return;
L_08A87BE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87BECu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08A87BECu) goto L_08A87BEC;
    return;
L_08A87BEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87BF8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 28u, 0x0890C258u>(ctx, &aot_mem) && ctx.pc == 0x08A87BF8u) goto L_08A87BF8;
    return;
L_08A87BF8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87B08;
      }
      goto L_08A87C08;
    }
L_08A87C08:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A87C0C;
L_08A87C0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87C3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87C64u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08A87C64u) goto L_08A87C64;
    return;
L_08A87C64:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87C7Cu);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 164u, 0x08A00B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87C7Cu) goto L_08A87C7C;
    return;
L_08A87C7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87CD8;
      }
      goto L_08A87C84;
    }
L_08A87C84:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87C98u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08A87C98u) goto L_08A87C98;
    return;
L_08A87C98:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A87CACu);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 180u, 0x08A00BE0u>(ctx, &aot_mem) && ctx.pc == 0x08A87CACu) goto L_08A87CAC;
    return;
L_08A87CAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87CF4;
      }
      goto L_08A87CB8;
    }
L_08A87CB8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A87CC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08A87CC4u) goto L_08A87CC4;
    return;
L_08A87CC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87CD0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B670u>(ctx, &aot_mem) && ctx.pc == 0x08A87CD0u) goto L_08A87CD0;
    return;
L_08A87CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A87D00;
      }
      goto L_08A87CD8;
    }
L_08A87CD8:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A87CECu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22428));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 361u, 0x08A4B144u>(ctx, &aot_mem) && ctx.pc == 0x08A87CECu) goto L_08A87CEC;
    return;
L_08A87CEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87D00;
      }
      goto L_08A87CF4;
    }
L_08A87CF4:
    ctx.gpr[31] = (0x08A87CFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BBF0u>(ctx, &aot_mem) && ctx.pc == 0x08A87CFCu) goto L_08A87CFC;
    return;
L_08A87CFC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A87D00;
L_08A87D00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87D1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87D40u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08A87D40u) goto L_08A87D40;
    return;
L_08A87D40:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87D58u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 164u, 0x08A00B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87D58u) goto L_08A87D58;
    return;
L_08A87D58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87D7C;
      }
      goto L_08A87D60;
    }
L_08A87D60:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A87D74u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22428));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 361u, 0x08A4B144u>(ctx, &aot_mem) && ctx.pc == 0x08A87D74u) goto L_08A87D74;
    return;
L_08A87D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87DB8;
      }
      goto L_08A87D7C;
    }
L_08A87D7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87D88u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 433u, 0x08A4B634u>(ctx, &aot_mem) && ctx.pc == 0x08A87D88u) goto L_08A87D88;
    return;
L_08A87D88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87D94u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08A87D94u) goto L_08A87D94;
    return;
L_08A87D94:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87DA8u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 187u, 0x08A00C94u>(ctx, &aot_mem) && ctx.pc == 0x08A87DA8u) goto L_08A87DA8;
    return;
L_08A87DA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87DB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08A87DB4u) goto L_08A87DB4;
    return;
L_08A87DB4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A87DB8;
L_08A87DB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87DD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87DF4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08A87DF4u) goto L_08A87DF4;
    return;
L_08A87DF4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A87E0Cu);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 429u, 0x08A4B5E0u>(ctx, &aot_mem) && ctx.pc == 0x08A87E0Cu) goto L_08A87E0C;
    return;
L_08A87E0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87E18u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 581u, 0x0890B728u>(ctx, &aot_mem) && ctx.pc == 0x08A87E18u) goto L_08A87E18;
    return;
L_08A87E18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87E40;
      }
      goto L_08A87E20;
    }
L_08A87E20:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A87E48;
      }
      goto L_08A87E28;
    }
L_08A87E28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A87E38u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 113u, 0x0890C974u>(ctx, &aot_mem) && ctx.pc == 0x08A87E38u) goto L_08A87E38;
    return;
L_08A87E38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A87E58;
      }
      goto L_08A87E40;
    }
L_08A87E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A87E88;
      }
      goto L_08A87E48;
    }
L_08A87E48:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A87E54u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 117u, 0x0890C9D4u>(ctx, &aot_mem) && ctx.pc == 0x08A87E54u) goto L_08A87E54;
    return;
L_08A87E54:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A87E58;
L_08A87E58:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87E68;
      }
      goto L_08A87E60;
    }
L_08A87E60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A87E88;
      }
      goto L_08A87E68;
    }
L_08A87E68:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87E74u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08A87E74u) goto L_08A87E74;
    return;
L_08A87E74:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (0u - ctx.gpr[16]);
    ctx.gpr[31] = (0x08A87E84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B580u>(ctx, &aot_mem) && ctx.pc == 0x08A87E84u) goto L_08A87E84;
    return;
L_08A87E84:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08A87E88;
L_08A87E88:
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
L_08A87EA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87EB0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A87DD0;
L_08A87EB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87ED4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 433u, 0x08A4B634u>(ctx, &aot_mem) && ctx.pc == 0x08A87ED4u) goto L_08A87ED4;
    return;
L_08A87ED4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87EE0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A87DD0;
L_08A87EE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87EF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87F14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23424));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 702u, 0x0890BF00u>(ctx, &aot_mem) && ctx.pc == 0x08A87F14u) goto L_08A87F14;
    return;
L_08A87F14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87F20u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 706u, 0x0890BF8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87F20u) goto L_08A87F20;
    return;
L_08A87F20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87F2Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B6CCu>(ctx, &aot_mem) && ctx.pc == 0x08A87F2Cu) goto L_08A87F2C;
    return;
L_08A87F2C:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A87F9C;
      }
      goto L_08A87F38;
    }
L_08A87F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23508));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A87F58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08A87F58u) goto L_08A87F58;
    return;
L_08A87F58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A87F7C;
      }
      goto L_08A87F64;
    }
L_08A87F64:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87F74u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08A87F74u) goto L_08A87F74;
    return;
L_08A87F74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87F84;
      }
      goto L_08A87F7C;
    }
L_08A87F7C:
    ctx.gpr[31] = (0x08A87F84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BBF0u>(ctx, &aot_mem) && ctx.pc == 0x08A87F84u) goto L_08A87F84;
    return;
L_08A87F84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A87F94u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 50u, 0x0890C488u>(ctx, &aot_mem) && ctx.pc == 0x08A87F94u) goto L_08A87F94;
    return;
L_08A87F94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87FA8;
      }
      goto L_08A87F9C;
    }
L_08A87F9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87FA8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08A87FA8u) goto L_08A87FA8;
    return;
L_08A87FA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87FBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87FE4u);
    ctx.gpr[5] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 412u, 0x08AED718u>(ctx, &aot_mem) && ctx.pc == 0x08A87FE4u) goto L_08A87FE4;
    return;
L_08A87FE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87FF0;
      }
      goto L_08A87FEC;
    }
L_08A87FEC:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A87FF0;
L_08A87FF0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87FFCu);
    ctx.gpr[5] = (0u | 114u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 412u, 0x08AED718u>(ctx, &aot_mem) && ctx.pc == 0x08A87FFCu) goto L_08A87FFC;
    return;
L_08A87FFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 2u, 0x08A88008u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 1u, 0x08A88004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0160(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0160_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_160(Runtime &runtime) {
    runtime.register_generated_unit(160u, 0x08A84000u, 16384u, &recomp_unit_0160, &recomp_unit_0160_entry);
    runtime.register_function(0x08A84000u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84020u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84034u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8403Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84044u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84134u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84148u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84150u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84158u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84204u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84214u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84228u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84238u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84240u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84254u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8426Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8431Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84358u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8438Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84400u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84408u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84418u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84420u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84438u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84440u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84450u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84468u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84480u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84490u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84504u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8450Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84518u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8452Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84544u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84588u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8459Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84610u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8462Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84648u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84660u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84668u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84670u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84684u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8468Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8469Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84700u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84704u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84710u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8471Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84724u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8472Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8473Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84760u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84768u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8477Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8478Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84794u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84804u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84818u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8482Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8485Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8486Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84878u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8488Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84894u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84900u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84908u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84910u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84924u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8492Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8493Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84944u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84950u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84958u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84960u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8496Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84980u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84988u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84998u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84ED0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8501Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85028u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85034u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8503Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85044u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8504Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85054u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85064u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8506Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85078u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85084u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8508Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85090u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85098u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85100u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8510Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8511Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85124u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85134u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8513Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85148u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85154u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85164u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8516Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85178u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85200u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85208u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85210u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85234u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8523Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85248u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85250u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85264u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8526Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85278u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85284u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8528Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85318u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85324u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8532Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85338u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85340u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85348u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85378u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85404u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8540Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85414u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8541Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85424u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85434u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85444u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85454u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8546Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85474u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8547Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8548Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85498u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85508u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8551Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85530u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85540u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85554u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85560u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85574u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85580u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85594u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85608u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8561Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8562Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85640u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85650u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85664u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85670u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85684u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85690u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85698u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85700u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85704u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85718u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85720u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8572Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85734u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85744u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85748u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85758u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85760u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85768u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85828u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85900u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8597Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85988u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85BACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85BBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85BCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85BD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85BE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85BE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85D4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85D70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85D90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85DBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85DC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85ED0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86020u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86058u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8606Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86078u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86088u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86094u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8609Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86110u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8616Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8617Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86230u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86260u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86298u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8632Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8633Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86344u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86398u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A863E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8642Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86514u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86534u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86540u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8654Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86554u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86564u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8657Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8658Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86594u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8659Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86610u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8661Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86620u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86628u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86634u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86640u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8664Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86654u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86658u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86660u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86668u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86670u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8667Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86688u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86694u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8669Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86700u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8670Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86718u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86724u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8672Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86730u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86738u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86740u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86748u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86754u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86760u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8676Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86774u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86778u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86780u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86788u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86790u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8679Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86804u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86808u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86810u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86818u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86820u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8682Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86838u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86844u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8684Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86850u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86858u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86860u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86868u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86874u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86880u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8688Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86894u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86898u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86904u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86910u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8691Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86924u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86928u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86930u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86938u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86940u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8694Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86958u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86964u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8696Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86970u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86978u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86980u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86988u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86994u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87030u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87040u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87048u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87050u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87058u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87060u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87068u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87070u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87078u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87080u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87098u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87108u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87118u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87124u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8712Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87130u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87144u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87150u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87158u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87160u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87168u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87170u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87188u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87200u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87208u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87214u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87218u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87230u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87288u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87290u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87310u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87364u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87378u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87380u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A873C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A873E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A873F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87400u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87434u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87504u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87548u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87594u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A875B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8767Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87690u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8770Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87714u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87744u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8774Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87754u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8778Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87794u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87798u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87840u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A878D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A878F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A878FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87908u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8791Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87938u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87948u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87954u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87968u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87ABCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87ED4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FFCu, &recomp_unit_0160, "recomp_unit_0160");
}
} // namespace psprecomp
