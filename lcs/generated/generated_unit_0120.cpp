#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0120[4092] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17,
    0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0,
    30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 51,
    0, 52, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0,
    0, 74, 0, 0, 0, 0, 0, 0, 75, 76, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 0, 89,
    0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 102, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0,
    0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 112,
    0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0,
    0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 0, 129,
    0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 135, 0, 0, 136, 0, 0, 137,
    0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 147, 0,
    148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 157,
    0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 166, 0, 167,
    0, 168, 0, 169, 0, 0, 0, 170, 0, 171, 172, 0, 173, 0, 0, 0, 174, 0, 175, 176, 0, 177, 178, 179, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 186, 0, 187, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0,
    0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 200, 0,
    201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0,
    0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0,
    0, 0, 230, 0, 231, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 237, 238, 0, 0, 0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 253, 0, 254, 0, 255, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 260, 0, 0, 0, 0, 0, 0, 261, 262, 0, 0, 0, 263, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0,
    270, 271, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0,
    281, 0, 0, 282, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 294, 0, 0, 295, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 299, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 307, 0, 0, 0, 0, 0, 308, 0,
    0, 309, 0, 0, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0,
    319, 0, 320, 321, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 333, 334, 0, 0, 335,
    0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0,
    0, 339, 0, 0, 340, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0,
    0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 356,
    0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 362,
    0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0,
    371, 0, 0, 0, 0, 372, 373, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0,
    0, 379, 0, 0, 0, 0, 380, 381, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0,
    394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0,
    401, 0, 402, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0,
    0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415,
    0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 419, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0,
    0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 426, 0, 0, 0, 427, 0, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 0,
    0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 435, 0, 436,
    0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 443, 0, 444, 0,
    445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 448, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0,
    452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 455, 0, 0, 0, 456, 0, 0, 457, 0, 458, 0, 459, 0, 0, 0, 460, 0, 0, 461,
    0, 462, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 470, 471, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0,
    0, 0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 477, 478, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    481, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0,
    486, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0,
    0, 492, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0,
    498, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 510, 0, 0,
    0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0,
    0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0,
    522, 0, 0, 523, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0, 0, 529, 0,
    0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535, 536, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 544,
    0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0,
    0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 557, 0, 0, 0, 0, 558, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0,
    562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 569,
    0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572,
    0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0,
    0, 579, 0, 0, 0, 0, 580, 0, 581, 582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0,
    586, 0, 0, 0, 0, 0, 0, 587, 588, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 593, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 596,
    0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0,
    601, 0, 602, 603, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0,
    0, 608, 609, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0,
    0, 616, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 621, 0, 622, 0, 623, 0, 0, 0,
    0, 0, 0, 624, 0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 630, 0, 0,
    0, 631, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0, 638, 0, 639, 0, 640, 0,
    641, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 646, 0, 0,
    647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 651, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 655,
    0, 0, 656, 0, 0, 657, 0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 661, 662, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0,
    664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 667, 668, 0, 669, 0, 0, 0, 0, 0, 670, 0, 0, 0,
    0, 671, 0, 672, 673, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 0,
    0, 0, 678, 679, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0,
    0, 686, 0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0,
    692, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0,
    699, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0,
    706, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0,
    0, 712, 0, 713, 0, 0, 0, 0, 0, 714, 0, 715, 0, 716, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    718, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 725, 0, 726, 727,
    0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 729, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 734, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0,
    0, 0, 0, 737, 0, 0, 738, 0, 739, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 744, 745, 0, 0, 746, 0, 0, 0, 0, 0, 747,
    0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0,
    752, 0, 0, 0, 753, 0, 0, 754, 0, 0, 755, 0, 756, 757, 0, 0, 758, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 760, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 764, 0, 0, 765, 0, 0, 0,
    0, 0, 766, 0, 0, 0, 0, 0, 767, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 771, 0, 772, 0, 773, 0, 774, 0,
    0, 775, 0, 776, 0, 777, 0, 778, 0, 779, 0, 0, 0, 780, 0, 0, 781, 0, 0, 782, 0, 783, 0, 784, 0, 785, 0, 786, 0, 787, 0, 0,
    788, 0, 0, 789, 0, 790, 0, 791, 0, 792, 0, 793, 0, 794, 0, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 797, 798, 0, 0, 0, 799, 800,
    0, 0, 801, 0, 0, 802, 0, 803, 0, 804, 0, 0, 805, 0, 0, 806, 0, 0, 807, 808, 0, 0, 0, 809, 0, 0, 810, 0, 0, 811, 0, 0,
    812, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 815, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 819, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 822, 823, 0, 0, 0, 0, 0, 0,
    0, 0, 824, 0, 825, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 828, 829, 0, 830, 0, 0, 0, 0, 0,
    831, 0, 832, 0, 0, 833, 0, 0, 834, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 838, 839, 0, 0, 0, 0, 0, 0,
    0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 844, 845, 0, 846, 0, 0, 0, 0, 0,
    847, 0, 0, 0, 848, 0, 849, 850, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 852, 0, 0, 0, 0, 0, 0, 853, 0, 0, 0, 0, 854, 0,
    0, 0, 0, 0, 0, 855, 856, 0, 857, 0, 0, 0, 0, 0, 0, 858, 0, 0, 0, 859, 0, 0, 0, 0, 860, 0, 861, 0, 862, 0, 0, 0,
    0, 0, 0, 863, 0, 0, 0, 864, 0, 0, 0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 0, 867, 0, 0, 0, 868, 0, 869, 0, 0, 0, 0,
    0, 870, 0, 0, 0, 871, 0, 0, 0, 0, 872, 0, 873, 874, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 876, 0, 0, 0, 0, 0, 0, 877,
    0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 879, 880, 0, 881, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 884, 0, 885, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 887, 0, 888, 0, 889, 890, 0, 0, 0, 0, 0,
    0, 0, 0, 891, 0, 892, 0, 0, 0, 0, 0, 0, 893, 0, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 895, 896, 0, 897,
};
void recomp_unit_0120_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089E4000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0120[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E4000;
    case 2u: goto L_089E400C;
    case 3u: goto L_089E4020;
    case 4u: goto L_089E4028;
    case 5u: goto L_089E402C;
    case 6u: goto L_089E4050;
    case 7u: goto L_089E4058;
    case 8u: goto L_089E4074;
    case 9u: goto L_089E4088;
    case 10u: goto L_089E40A4;
    case 11u: goto L_089E40A8;
    case 12u: goto L_089E40B8;
    case 13u: goto L_089E40C4;
    case 14u: goto L_089E40CC;
    case 15u: goto L_089E40D4;
    case 16u: goto L_089E40EC;
    case 17u: goto L_089E40FC;
    case 18u: goto L_089E4108;
    case 19u: goto L_089E4118;
    case 20u: goto L_089E4124;
    case 21u: goto L_089E4130;
    case 22u: goto L_089E4138;
    case 23u: goto L_089E4140;
    case 24u: goto L_089E4190;
    case 25u: goto L_089E41B8;
    case 26u: goto L_089E41C4;
    case 27u: goto L_089E41DC;
    case 28u: goto L_089E41EC;
    case 29u: goto L_089E41F8;
    case 30u: goto L_089E4200;
    case 31u: goto L_089E4208;
    case 32u: goto L_089E4224;
    case 33u: goto L_089E4234;
    case 34u: goto L_089E4240;
    case 35u: goto L_089E4260;
    case 36u: goto L_089E427C;
    case 37u: goto L_089E428C;
    case 38u: goto L_089E4298;
    case 39u: goto L_089E42A0;
    case 40u: goto L_089E42A8;
    case 41u: goto L_089E42C0;
    case 42u: goto L_089E42D0;
    case 43u: goto L_089E42F0;
    case 44u: goto L_089E4300;
    case 45u: goto L_089E4314;
    case 46u: goto L_089E4324;
    case 47u: goto L_089E4334;
    case 48u: goto L_089E4348;
    case 49u: goto L_089E4360;
    case 50u: goto L_089E4370;
    case 51u: goto L_089E437C;
    case 52u: goto L_089E4384;
    case 53u: goto L_089E438C;
    case 54u: goto L_089E43A4;
    case 55u: goto L_089E43B4;
    case 56u: goto L_089E43BC;
    case 57u: goto L_089E43CC;
    case 58u: goto L_089E43D8;
    case 59u: goto L_089E43E0;
    case 60u: goto L_089E43E8;
    case 61u: goto L_089E4404;
    case 62u: goto L_089E4428;
    case 63u: goto L_089E4434;
    case 64u: goto L_089E4444;
    case 65u: goto L_089E4450;
    case 66u: goto L_089E4460;
    case 67u: goto L_089E446C;
    case 68u: goto L_089E449C;
    case 69u: goto L_089E44A4;
    case 70u: goto L_089E44A8;
    case 71u: goto L_089E44CC;
    case 72u: goto L_089E44D4;
    case 73u: goto L_089E44F0;
    case 74u: goto L_089E4504;
    case 75u: goto L_089E4520;
    case 76u: goto L_089E4524;
    case 77u: goto L_089E4534;
    case 78u: goto L_089E4540;
    case 79u: goto L_089E4548;
    case 80u: goto L_089E4550;
    case 81u: goto L_089E456C;
    case 82u: goto L_089E457C;
    case 83u: goto L_089E4590;
    case 84u: goto L_089E45B8;
    case 85u: goto L_089E45C8;
    case 86u: goto L_089E45D4;
    case 87u: goto L_089E45DC;
    case 88u: goto L_089E45E4;
    case 89u: goto L_089E45FC;
    case 90u: goto L_089E460C;
    case 91u: goto L_089E4640;
    case 92u: goto L_089E4650;
    case 93u: goto L_089E465C;
    case 94u: goto L_089E4664;
    case 95u: goto L_089E466C;
    case 96u: goto L_089E4688;
    case 97u: goto L_089E46F0;
    case 98u: goto L_089E46F8;
    case 99u: goto L_089E4700;
    case 100u: goto L_089E4730;
    case 101u: goto L_089E4738;
    case 102u: goto L_089E473C;
    case 103u: goto L_089E4754;
    case 104u: goto L_089E4760;
    case 105u: goto L_089E4768;
    case 106u: goto L_089E4770;
    case 107u: goto L_089E478C;
    case 108u: goto L_089E479C;
    case 109u: goto L_089E47D0;
    case 110u: goto L_089E47D8;
    case 111u: goto L_089E47E0;
    case 112u: goto L_089E47FC;
    case 113u: goto L_089E4804;
    case 114u: goto L_089E480C;
    case 115u: goto L_089E4820;
    case 116u: goto L_089E482C;
    case 117u: goto L_089E4834;
    case 118u: goto L_089E483C;
    case 119u: goto L_089E4854;
    case 120u: goto L_089E4874;
    case 121u: goto L_089E4884;
    case 122u: goto L_089E4890;
    case 123u: goto L_089E4898;
    case 124u: goto L_089E48A0;
    case 125u: goto L_089E48B8;
    case 126u: goto L_089E48D8;
    case 127u: goto L_089E48E8;
    case 128u: goto L_089E48F4;
    case 129u: goto L_089E48FC;
    case 130u: goto L_089E4904;
    case 131u: goto L_089E4920;
    case 132u: goto L_089E4930;
    case 133u: goto L_089E4954;
    case 134u: goto L_089E4960;
    case 135u: goto L_089E4964;
    case 136u: goto L_089E4970;
    case 137u: goto L_089E497C;
    case 138u: goto L_089E4990;
    case 139u: goto L_089E49A0;
    case 140u: goto L_089E49B0;
    case 141u: goto L_089E49B8;
    case 142u: goto L_089E4A40;
    case 143u: goto L_089E4A4C;
    case 144u: goto L_089E4A58;
    case 145u: goto L_089E4A68;
    case 146u: goto L_089E4A70;
    case 147u: goto L_089E4A78;
    case 148u: goto L_089E4A80;
    case 149u: goto L_089E4A88;
    case 150u: goto L_089E4A90;
    case 151u: goto L_089E4A98;
    case 152u: goto L_089E4AA0;
    case 153u: goto L_089E4AB0;
    case 154u: goto L_089E4AC0;
    case 155u: goto L_089E4AE0;
    case 156u: goto L_089E4AE8;
    case 157u: goto L_089E4AFC;
    case 158u: goto L_089E4B0C;
    case 159u: goto L_089E4B1C;
    case 160u: goto L_089E4B2C;
    case 161u: goto L_089E4B34;
    case 162u: goto L_089E4B44;
    case 163u: goto L_089E4B54;
    case 164u: goto L_089E4B5C;
    case 165u: goto L_089E4B6C;
    case 166u: goto L_089E4B74;
    case 167u: goto L_089E4B7C;
    case 168u: goto L_089E4B84;
    case 169u: goto L_089E4B8C;
    case 170u: goto L_089E4B9C;
    case 171u: goto L_089E4BA4;
    case 172u: goto L_089E4BA8;
    case 173u: goto L_089E4BB0;
    case 174u: goto L_089E4BC0;
    case 175u: goto L_089E4BC8;
    case 176u: goto L_089E4BCC;
    case 177u: goto L_089E4BD4;
    case 178u: goto L_089E4BD8;
    case 179u: goto L_089E4BDC;
    case 180u: goto L_089E4C14;
    case 181u: goto L_089E4C20;
    case 182u: goto L_089E4C38;
    case 183u: goto L_089E4C44;
    case 184u: goto L_089E4C50;
    case 185u: goto L_089E4C5C;
    case 186u: goto L_089E4C60;
    case 187u: goto L_089E4C68;
    case 188u: goto L_089E4C6C;
    case 189u: goto L_089E4CB8;
    case 190u: goto L_089E4CC4;
    case 191u: goto L_089E4CD4;
    case 192u: goto L_089E4CE0;
    case 193u: goto L_089E4CEC;
    case 194u: goto L_089E4D04;
    case 195u: goto L_089E4D0C;
    case 196u: goto L_089E4D3C;
    case 197u: goto L_089E4D54;
    case 198u: goto L_089E4D64;
    case 199u: goto L_089E4D70;
    case 200u: goto L_089E4D78;
    case 201u: goto L_089E4D80;
    case 202u: goto L_089E4D9C;
    case 203u: goto L_089E4DBC;
    case 204u: goto L_089E4DC8;
    case 205u: goto L_089E4DCC;
    case 206u: goto L_089E4DF0;
    case 207u: goto L_089E4E10;
    case 208u: goto L_089E4E54;
    case 209u: goto L_089E4E60;
    case 210u: goto L_089E4E94;
    case 211u: goto L_089E4EA0;
    case 212u: goto L_089E4EBC;
    case 213u: goto L_089E4F00;
    case 214u: goto L_089E4F14;
    case 215u: goto L_089E4F84;
    case 216u: goto L_089E4F94;
    case 217u: goto L_089E4FAC;
    case 218u: goto L_089E4FB4;
    case 219u: goto L_089E4FC8;
    case 220u: goto L_089E4FE4;
    case 221u: goto L_089E4FEC;
    case 222u: goto L_089E500C;
    case 223u: goto L_089E501C;
    case 224u: goto L_089E5028;
    case 225u: goto L_089E5030;
    case 226u: goto L_089E5038;
    case 227u: goto L_089E5054;
    case 228u: goto L_089E5064;
    case 229u: goto L_089E5074;
    case 230u: goto L_089E5088;
    case 231u: goto L_089E5090;
    case 232u: goto L_089E5094;
    case 233u: goto L_089E50B8;
    case 234u: goto L_089E50C0;
    case 235u: goto L_089E50DC;
    case 236u: goto L_089E50F0;
    case 237u: goto L_089E510C;
    case 238u: goto L_089E5110;
    case 239u: goto L_089E5120;
    case 240u: goto L_089E512C;
    case 241u: goto L_089E5134;
    case 242u: goto L_089E513C;
    case 243u: goto L_089E5154;
    case 244u: goto L_089E5164;
    case 245u: goto L_089E5194;
    case 246u: goto L_089E51A4;
    case 247u: goto L_089E51B0;
    case 248u: goto L_089E51B8;
    case 249u: goto L_089E51C0;
    case 250u: goto L_089E51D8;
    case 251u: goto L_089E51E8;
    case 252u: goto L_089E5200;
    case 253u: goto L_089E5214;
    case 254u: goto L_089E521C;
    case 255u: goto L_089E5224;
    case 256u: goto L_089E5228;
    case 257u: goto L_089E524C;
    case 258u: goto L_089E5254;
    case 259u: goto L_089E5270;
    case 260u: goto L_089E5284;
    case 261u: goto L_089E52A0;
    case 262u: goto L_089E52A4;
    case 263u: goto L_089E52B4;
    case 264u: goto L_089E52C0;
    case 265u: goto L_089E52C8;
    case 266u: goto L_089E52D0;
    case 267u: goto L_089E52E0;
    case 268u: goto L_089E52EC;
    case 269u: goto L_089E52F8;
    case 270u: goto L_089E5300;
    case 271u: goto L_089E5304;
    case 272u: goto L_089E5310;
    case 273u: goto L_089E5328;
    case 274u: goto L_089E5354;
    case 275u: goto L_089E5394;
    case 276u: goto L_089E53A4;
    case 277u: goto L_089E53B0;
    case 278u: goto L_089E53B8;
    case 279u: goto L_089E53C0;
    case 280u: goto L_089E53DC;
    case 281u: goto L_089E5400;
    case 282u: goto L_089E540C;
    case 283u: goto L_089E541C;
    case 284u: goto L_089E5428;
    case 285u: goto L_089E5484;
    case 286u: goto L_089E5494;
    case 287u: goto L_089E54A0;
    case 288u: goto L_089E54A8;
    case 289u: goto L_089E54B0;
    case 290u: goto L_089E54CC;
    case 291u: goto L_089E5500;
    case 292u: goto L_089E5514;
    case 293u: goto L_089E5520;
    case 294u: goto L_089E5530;
    case 295u: goto L_089E553C;
    case 296u: goto L_089E5544;
    case 297u: goto L_089E554C;
    case 298u: goto L_089E5568;
    case 299u: goto L_089E5578;
    case 300u: goto L_089E558C;
    case 301u: goto L_089E55A0;
    case 302u: goto L_089E55AC;
    case 303u: goto L_089E55B4;
    case 304u: goto L_089E55C4;
    case 305u: goto L_089E55D0;
    case 306u: goto L_089E55D8;
    case 307u: goto L_089E55E0;
    case 308u: goto L_089E55F8;
    case 309u: goto L_089E5604;
    case 310u: goto L_089E5614;
    case 311u: goto L_089E561C;
    case 312u: goto L_089E562C;
    case 313u: goto L_089E563C;
    case 314u: goto L_089E5648;
    case 315u: goto L_089E5650;
    case 316u: goto L_089E5658;
    case 317u: goto L_089E5668;
    case 318u: goto L_089E5674;
    case 319u: goto L_089E5680;
    case 320u: goto L_089E5688;
    case 321u: goto L_089E568C;
    case 322u: goto L_089E5698;
    case 323u: goto L_089E56B0;
    case 324u: goto L_089E56DC;
    case 325u: goto L_089E5710;
    case 326u: goto L_089E5720;
    case 327u: goto L_089E572C;
    case 328u: goto L_089E5734;
    case 329u: goto L_089E573C;
    case 330u: goto L_089E574C;
    case 331u: goto L_089E5758;
    case 332u: goto L_089E5764;
    case 333u: goto L_089E576C;
    case 334u: goto L_089E5770;
    case 335u: goto L_089E577C;
    case 336u: goto L_089E5794;
    case 337u: goto L_089E57C0;
    case 338u: goto L_089E57F4;
    case 339u: goto L_089E5804;
    case 340u: goto L_089E5810;
    case 341u: goto L_089E5818;
    case 342u: goto L_089E5820;
    case 343u: goto L_089E583C;
    case 344u: goto L_089E584C;
    case 345u: goto L_089E585C;
    case 346u: goto L_089E5868;
    case 347u: goto L_089E5884;
    case 348u: goto L_089E588C;
    case 349u: goto L_089E58A8;
    case 350u: goto L_089E58B8;
    case 351u: goto L_089E58C4;
    case 352u: goto L_089E58CC;
    case 353u: goto L_089E58D4;
    case 354u: goto L_089E58E0;
    case 355u: goto L_089E58F0;
    case 356u: goto L_089E58FC;
    case 357u: goto L_089E5904;
    case 358u: goto L_089E590C;
    case 359u: goto L_089E5924;
    case 360u: goto L_089E5958;
    case 361u: goto L_089E5974;
    case 362u: goto L_089E597C;
    case 363u: goto L_089E5988;
    case 364u: goto L_089E5990;
    case 365u: goto L_089E5998;
    case 366u: goto L_089E59A0;
    case 367u: goto L_089E59B8;
    case 368u: goto L_089E59CC;
    case 369u: goto L_089E59E4;
    case 370u: goto L_089E59EC;
    case 371u: goto L_089E5A00;
    case 372u: goto L_089E5A14;
    case 373u: goto L_089E5A18;
    case 374u: goto L_089E5A24;
    case 375u: goto L_089E5A38;
    case 376u: goto L_089E5A4C;
    case 377u: goto L_089E5A64;
    case 378u: goto L_089E5A6C;
    case 379u: goto L_089E5A84;
    case 380u: goto L_089E5A98;
    case 381u: goto L_089E5A9C;
    case 382u: goto L_089E5AA8;
    case 383u: goto L_089E5AB4;
    case 384u: goto L_089E5AC4;
    case 385u: goto L_089E5ACC;
    case 386u: goto L_089E5B40;
    case 387u: goto L_089E5B4C;
    case 388u: goto L_089E5B50;
    case 389u: goto L_089E5BB4;
    case 390u: goto L_089E5BC8;
    case 391u: goto L_089E5BD4;
    case 392u: goto L_089E5BE4;
    case 393u: goto L_089E5BF4;
    case 394u: goto L_089E5C00;
    case 395u: goto L_089E5C08;
    case 396u: goto L_089E5C28;
    case 397u: goto L_089E5C40;
    case 398u: goto L_089E5C4C;
    case 399u: goto L_089E5C64;
    case 400u: goto L_089E5C74;
    case 401u: goto L_089E5C80;
    case 402u: goto L_089E5C88;
    case 403u: goto L_089E5C90;
    case 404u: goto L_089E5CA8;
    case 405u: goto L_089E5CB8;
    case 406u: goto L_089E5CE8;
    case 407u: goto L_089E5CF8;
    case 408u: goto L_089E5D04;
    case 409u: goto L_089E5D0C;
    case 410u: goto L_089E5D14;
    case 411u: goto L_089E5D30;
    case 412u: goto L_089E5D54;
    case 413u: goto L_089E5D60;
    case 414u: goto L_089E5D70;
    case 415u: goto L_089E5D7C;
    case 416u: goto L_089E5D8C;
    case 417u: goto L_089E5D98;
    case 418u: goto L_089E5DB4;
    case 419u: goto L_089E5DBC;
    case 420u: goto L_089E5DC0;
    case 421u: goto L_089E5DE4;
    case 422u: goto L_089E5DEC;
    case 423u: goto L_089E5E08;
    case 424u: goto L_089E5E1C;
    case 425u: goto L_089E5E38;
    case 426u: goto L_089E5E3C;
    case 427u: goto L_089E5E4C;
    case 428u: goto L_089E5E58;
    case 429u: goto L_089E5E60;
    case 430u: goto L_089E5E68;
    case 431u: goto L_089E5E84;
    case 432u: goto L_089E5E94;
    case 433u: goto L_089E5EE0;
    case 434u: goto L_089E5EEC;
    case 435u: goto L_089E5EF4;
    case 436u: goto L_089E5EFC;
    case 437u: goto L_089E5F18;
    case 438u: goto L_089E5F28;
    case 439u: goto L_089E5F34;
    case 440u: goto L_089E5F44;
    case 441u: goto L_089E5F54;
    case 442u: goto L_089E5F64;
    case 443u: goto L_089E5F70;
    case 444u: goto L_089E5F78;
    case 445u: goto L_089E5F80;
    case 446u: goto L_089E5F98;
    case 447u: goto L_089E5FA8;
    case 448u: goto L_089E5FB4;
    case 449u: goto L_089E5FB8;
    case 450u: goto L_089E5FDC;
    case 451u: goto L_089E5FE4;
    case 452u: goto L_089E6000;
    case 453u: goto L_089E6014;
    case 454u: goto L_089E6030;
    case 455u: goto L_089E6034;
    case 456u: goto L_089E6044;
    case 457u: goto L_089E6050;
    case 458u: goto L_089E6058;
    case 459u: goto L_089E6060;
    case 460u: goto L_089E6070;
    case 461u: goto L_089E607C;
    case 462u: goto L_089E6084;
    case 463u: goto L_089E6088;
    case 464u: goto L_089E60BC;
    case 465u: goto L_089E6100;
    case 466u: goto L_089E611C;
    case 467u: goto L_089E612C;
    case 468u: goto L_089E6138;
    case 469u: goto L_089E6144;
    case 470u: goto L_089E614C;
    case 471u: goto L_089E6150;
    case 472u: goto L_089E615C;
    case 473u: goto L_089E6174;
    case 474u: goto L_089E618C;
    case 475u: goto L_089E6198;
    case 476u: goto L_089E61A4;
    case 477u: goto L_089E61AC;
    case 478u: goto L_089E61B0;
    case 479u: goto L_089E61B8;
    case 480u: goto L_089E61D4;
    case 481u: goto L_089E6200;
    case 482u: goto L_089E6218;
    case 483u: goto L_089E6220;
    case 484u: goto L_089E623C;
    case 485u: goto L_089E6274;
    case 486u: goto L_089E6280;
    case 487u: goto L_089E6290;
    case 488u: goto L_089E629C;
    case 489u: goto L_089E62AC;
    case 490u: goto L_089E62B8;
    case 491u: goto L_089E62F8;
    case 492u: goto L_089E6304;
    case 493u: goto L_089E6308;
    case 494u: goto L_089E632C;
    case 495u: goto L_089E6334;
    case 496u: goto L_089E6350;
    case 497u: goto L_089E6364;
    case 498u: goto L_089E6380;
    case 499u: goto L_089E6384;
    case 500u: goto L_089E638C;
    case 501u: goto L_089E6394;
    case 502u: goto L_089E639C;
    case 503u: goto L_089E63A4;
    case 504u: goto L_089E63AC;
    case 505u: goto L_089E63C8;
    case 506u: goto L_089E63D8;
    case 507u: goto L_089E643C;
    case 508u: goto L_089E6458;
    case 509u: goto L_089E6468;
    case 510u: goto L_089E6474;
    case 511u: goto L_089E6484;
    case 512u: goto L_089E64AC;
    case 513u: goto L_089E64B4;
    case 514u: goto L_089E64C4;
    case 515u: goto L_089E64EC;
    case 516u: goto L_089E64F4;
    case 517u: goto L_089E650C;
    case 518u: goto L_089E6520;
    case 519u: goto L_089E653C;
    case 520u: goto L_089E6544;
    case 521u: goto L_089E6560;
    case 522u: goto L_089E6580;
    case 523u: goto L_089E658C;
    case 524u: goto L_089E6590;
    case 525u: goto L_089E65B8;
    case 526u: goto L_089E65C0;
    case 527u: goto L_089E65D8;
    case 528u: goto L_089E65E4;
    case 529u: goto L_089E65F8;
    case 530u: goto L_089E6604;
    case 531u: goto L_089E660C;
    case 532u: goto L_089E6628;
    case 533u: goto L_089E6638;
    case 534u: goto L_089E6644;
    case 535u: goto L_089E6650;
    case 536u: goto L_089E6654;
    case 537u: goto L_089E665C;
    case 538u: goto L_089E6678;
    case 539u: goto L_089E66A8;
    case 540u: goto L_089E66B0;
    case 541u: goto L_089E66C8;
    case 542u: goto L_089E66D8;
    case 543u: goto L_089E66E8;
    case 544u: goto L_089E66FC;
    case 545u: goto L_089E670C;
    case 546u: goto L_089E6720;
    case 547u: goto L_089E6730;
    case 548u: goto L_089E6744;
    case 549u: goto L_089E6754;
    case 550u: goto L_089E6764;
    case 551u: goto L_089E676C;
    case 552u: goto L_089E6788;
    case 553u: goto L_089E67A8;
    case 554u: goto L_089E67B4;
    case 555u: goto L_089E67B8;
    case 556u: goto L_089E67E0;
    case 557u: goto L_089E67E4;
    case 558u: goto L_089E67F8;
    case 559u: goto L_089E6820;
    case 560u: goto L_089E6830;
    case 561u: goto L_089E6878;
    case 562u: goto L_089E6880;
    case 563u: goto L_089E689C;
    case 564u: goto L_089E68AC;
    case 565u: goto L_089E68B8;
    case 566u: goto L_089E68C8;
    case 567u: goto L_089E68D8;
    case 568u: goto L_089E68E0;
    case 569u: goto L_089E68FC;
    case 570u: goto L_089E690C;
    case 571u: goto L_089E6968;
    case 572u: goto L_089E697C;
    case 573u: goto L_089E6990;
    case 574u: goto L_089E69B8;
    case 575u: goto L_089E69C8;
    case 576u: goto L_089E69D0;
    case 577u: goto L_089E69D8;
    case 578u: goto L_089E69F4;
    case 579u: goto L_089E6A04;
    case 580u: goto L_089E6A18;
    case 581u: goto L_089E6A20;
    case 582u: goto L_089E6A24;
    case 583u: goto L_089E6A48;
    case 584u: goto L_089E6A50;
    case 585u: goto L_089E6A6C;
    case 586u: goto L_089E6A80;
    case 587u: goto L_089E6A9C;
    case 588u: goto L_089E6AA0;
    case 589u: goto L_089E6AA8;
    case 590u: goto L_089E6AC4;
    case 591u: goto L_089E6AE4;
    case 592u: goto L_089E6AF0;
    case 593u: goto L_089E6AF4;
    case 594u: goto L_089E6B58;
    case 595u: goto L_089E6B60;
    case 596u: goto L_089E6B7C;
    case 597u: goto L_089E6B8C;
    case 598u: goto L_089E6BB4;
    case 599u: goto L_089E6BCC;
    case 600u: goto L_089E6BDC;
    case 601u: goto L_089E6C00;
    case 602u: goto L_089E6C08;
    case 603u: goto L_089E6C0C;
    case 604u: goto L_089E6C30;
    case 605u: goto L_089E6C38;
    case 606u: goto L_089E6C54;
    case 607u: goto L_089E6C68;
    case 608u: goto L_089E6C84;
    case 609u: goto L_089E6C88;
    case 610u: goto L_089E6C90;
    case 611u: goto L_089E6CAC;
    case 612u: goto L_089E6CBC;
    case 613u: goto L_089E6CD0;
    case 614u: goto L_089E6CE0;
    case 615u: goto L_089E6CF0;
    case 616u: goto L_089E6D04;
    case 617u: goto L_089E6D20;
    case 618u: goto L_089E6D28;
    case 619u: goto L_089E6D40;
    case 620u: goto L_089E6D48;
    case 621u: goto L_089E6D60;
    case 622u: goto L_089E6D68;
    case 623u: goto L_089E6D70;
    case 624u: goto L_089E6D8C;
    case 625u: goto L_089E6DA4;
    case 626u: goto L_089E6DAC;
    case 627u: goto L_089E6DC8;
    case 628u: goto L_089E6DD8;
    case 629u: goto L_089E6DE4;
    case 630u: goto L_089E6DF4;
    case 631u: goto L_089E6E04;
    case 632u: goto L_089E6E0C;
    case 633u: goto L_089E6E24;
    case 634u: goto L_089E6E34;
    case 635u: goto L_089E6E3C;
    case 636u: goto L_089E6E54;
    case 637u: goto L_089E6E60;
    case 638u: goto L_089E6E68;
    case 639u: goto L_089E6E70;
    case 640u: goto L_089E6E78;
    case 641u: goto L_089E6E80;
    case 642u: goto L_089E6E9C;
    case 643u: goto L_089E6EC0;
    case 644u: goto L_089E6EE4;
    case 645u: goto L_089E6EEC;
    case 646u: goto L_089E6EF4;
    case 647u: goto L_089E6F00;
    case 648u: goto L_089E6F10;
    case 649u: goto L_089E6F34;
    case 650u: goto L_089E6F3C;
    case 651u: goto L_089E6F44;
    case 652u: goto L_089E6F50;
    case 653u: goto L_089E6F58;
    case 654u: goto L_089E6F70;
    case 655u: goto L_089E6F7C;
    case 656u: goto L_089E6F88;
    case 657u: goto L_089E6F94;
    case 658u: goto L_089E6F9C;
    case 659u: goto L_089E6FB4;
    case 660u: goto L_089E6FC8;
    case 661u: goto L_089E6FD0;
    case 662u: goto L_089E6FD4;
    case 663u: goto L_089E6FF8;
    case 664u: goto L_089E7000;
    case 665u: goto L_089E701C;
    case 666u: goto L_089E7030;
    case 667u: goto L_089E704C;
    case 668u: goto L_089E7050;
    case 669u: goto L_089E7058;
    case 670u: goto L_089E7070;
    case 671u: goto L_089E7084;
    case 672u: goto L_089E708C;
    case 673u: goto L_089E7090;
    case 674u: goto L_089E70B4;
    case 675u: goto L_089E70BC;
    case 676u: goto L_089E70D8;
    case 677u: goto L_089E70EC;
    case 678u: goto L_089E7108;
    case 679u: goto L_089E710C;
    case 680u: goto L_089E7114;
    case 681u: goto L_089E7130;
    case 682u: goto L_089E714C;
    case 683u: goto L_089E7154;
    case 684u: goto L_089E716C;
    case 685u: goto L_089E7178;
    case 686u: goto L_089E7184;
    case 687u: goto L_089E7190;
    case 688u: goto L_089E7198;
    case 689u: goto L_089E71B0;
    case 690u: goto L_089E71DC;
    case 691u: goto L_089E71E4;
    case 692u: goto L_089E7200;
    case 693u: goto L_089E7224;
    case 694u: goto L_089E7230;
    case 695u: goto L_089E7240;
    case 696u: goto L_089E724C;
    case 697u: goto L_089E725C;
    case 698u: goto L_089E7268;
    case 699u: goto L_089E7280;
    case 700u: goto L_089E7288;
    case 701u: goto L_089E72A0;
    case 702u: goto L_089E72B0;
    case 703u: goto L_089E72B8;
    case 704u: goto L_089E72D4;
    case 705u: goto L_089E72F4;
    case 706u: goto L_089E7300;
    case 707u: goto L_089E7304;
    case 708u: goto L_089E7338;
    case 709u: goto L_089E7340;
    case 710u: goto L_089E734C;
    case 711u: goto L_089E736C;
    case 712u: goto L_089E7384;
    case 713u: goto L_089E738C;
    case 714u: goto L_089E73A4;
    case 715u: goto L_089E73AC;
    case 716u: goto L_089E73B4;
    case 717u: goto L_089E73D0;
    case 718u: goto L_089E7400;
    case 719u: goto L_089E7414;
    case 720u: goto L_089E741C;
    case 721u: goto L_089E7430;
    case 722u: goto L_089E7438;
    case 723u: goto L_089E7450;
    case 724u: goto L_089E7460;
    case 725u: goto L_089E7470;
    case 726u: goto L_089E7478;
    case 727u: goto L_089E747C;
    case 728u: goto L_089E7490;
    case 729u: goto L_089E74A8;
    case 730u: goto L_089E74B0;
    case 731u: goto L_089E74C8;
    case 732u: goto L_089E74FC;
    case 733u: goto L_089E7538;
    case 734u: goto L_089E754C;
    case 735u: goto L_089E7554;
    case 736u: goto L_089E7568;
    case 737u: goto L_089E758C;
    case 738u: goto L_089E7598;
    case 739u: goto L_089E75A0;
    case 740u: goto L_089E75A4;
    case 741u: goto L_089E75B4;
    case 742u: goto L_089E75C0;
    case 743u: goto L_089E75CC;
    case 744u: goto L_089E75D4;
    case 745u: goto L_089E75D8;
    case 746u: goto L_089E75E4;
    case 747u: goto L_089E75FC;
    case 748u: goto L_089E7618;
    case 749u: goto L_089E7640;
    case 750u: goto L_089E7648;
    case 751u: goto L_089E765C;
    case 752u: goto L_089E7680;
    case 753u: goto L_089E7690;
    case 754u: goto L_089E769C;
    case 755u: goto L_089E76A8;
    case 756u: goto L_089E76B0;
    case 757u: goto L_089E76B4;
    case 758u: goto L_089E76C0;
    case 759u: goto L_089E76D8;
    case 760u: goto L_089E76F4;
    case 761u: goto L_089E7730;
    case 762u: goto L_089E7738;
    case 763u: goto L_089E7750;
    case 764u: goto L_089E7764;
    case 765u: goto L_089E7770;
    case 766u: goto L_089E7788;
    case 767u: goto L_089E77A0;
    case 768u: goto L_089E77AC;
    case 769u: goto L_089E77B4;
    case 770u: goto L_089E77D4;
    case 771u: goto L_089E77E0;
    case 772u: goto L_089E77E8;
    case 773u: goto L_089E77F0;
    case 774u: goto L_089E77F8;
    case 775u: goto L_089E7804;
    case 776u: goto L_089E780C;
    case 777u: goto L_089E7814;
    case 778u: goto L_089E781C;
    case 779u: goto L_089E7824;
    case 780u: goto L_089E7834;
    case 781u: goto L_089E7840;
    case 782u: goto L_089E784C;
    case 783u: goto L_089E7854;
    case 784u: goto L_089E785C;
    case 785u: goto L_089E7864;
    case 786u: goto L_089E786C;
    case 787u: goto L_089E7874;
    case 788u: goto L_089E7880;
    case 789u: goto L_089E788C;
    case 790u: goto L_089E7894;
    case 791u: goto L_089E789C;
    case 792u: goto L_089E78A4;
    case 793u: goto L_089E78AC;
    case 794u: goto L_089E78B4;
    case 795u: goto L_089E78CC;
    case 796u: goto L_089E78DC;
    case 797u: goto L_089E78E4;
    case 798u: goto L_089E78E8;
    case 799u: goto L_089E78F8;
    case 800u: goto L_089E78FC;
    case 801u: goto L_089E7908;
    case 802u: goto L_089E7914;
    case 803u: goto L_089E791C;
    case 804u: goto L_089E7924;
    case 805u: goto L_089E7930;
    case 806u: goto L_089E793C;
    case 807u: goto L_089E7948;
    case 808u: goto L_089E794C;
    case 809u: goto L_089E795C;
    case 810u: goto L_089E7968;
    case 811u: goto L_089E7974;
    case 812u: goto L_089E7980;
    case 813u: goto L_089E7984;
    case 814u: goto L_089E79B0;
    case 815u: goto L_089E7A10;
    case 816u: goto L_089E7A1C;
    case 817u: goto L_089E7A54;
    case 818u: goto L_089E7AA0;
    case 819u: goto L_089E7AAC;
    case 820u: goto L_089E7AB4;
    case 821u: goto L_089E7ACC;
    case 822u: goto L_089E7AE0;
    case 823u: goto L_089E7AE4;
    case 824u: goto L_089E7B08;
    case 825u: goto L_089E7B10;
    case 826u: goto L_089E7B2C;
    case 827u: goto L_089E7B40;
    case 828u: goto L_089E7B5C;
    case 829u: goto L_089E7B60;
    case 830u: goto L_089E7B68;
    case 831u: goto L_089E7B80;
    case 832u: goto L_089E7B88;
    case 833u: goto L_089E7B94;
    case 834u: goto L_089E7BA0;
    case 835u: goto L_089E7BA8;
    case 836u: goto L_089E7BC0;
    case 837u: goto L_089E7BD0;
    case 838u: goto L_089E7BE0;
    case 839u: goto L_089E7BE4;
    case 840u: goto L_089E7C08;
    case 841u: goto L_089E7C10;
    case 842u: goto L_089E7C2C;
    case 843u: goto L_089E7C40;
    case 844u: goto L_089E7C5C;
    case 845u: goto L_089E7C60;
    case 846u: goto L_089E7C68;
    case 847u: goto L_089E7C80;
    case 848u: goto L_089E7C90;
    case 849u: goto L_089E7C98;
    case 850u: goto L_089E7C9C;
    case 851u: goto L_089E7CC0;
    case 852u: goto L_089E7CC8;
    case 853u: goto L_089E7CE4;
    case 854u: goto L_089E7CF8;
    case 855u: goto L_089E7D14;
    case 856u: goto L_089E7D18;
    case 857u: goto L_089E7D20;
    case 858u: goto L_089E7D3C;
    case 859u: goto L_089E7D4C;
    case 860u: goto L_089E7D60;
    case 861u: goto L_089E7D68;
    case 862u: goto L_089E7D70;
    case 863u: goto L_089E7D8C;
    case 864u: goto L_089E7D9C;
    case 865u: goto L_089E7DB4;
    case 866u: goto L_089E7DBC;
    case 867u: goto L_089E7DD4;
    case 868u: goto L_089E7DE4;
    case 869u: goto L_089E7DEC;
    case 870u: goto L_089E7E04;
    case 871u: goto L_089E7E14;
    case 872u: goto L_089E7E28;
    case 873u: goto L_089E7E30;
    case 874u: goto L_089E7E34;
    case 875u: goto L_089E7E58;
    case 876u: goto L_089E7E60;
    case 877u: goto L_089E7E7C;
    case 878u: goto L_089E7E90;
    case 879u: goto L_089E7EAC;
    case 880u: goto L_089E7EB0;
    case 881u: goto L_089E7EB8;
    case 882u: goto L_089E7ED0;
    case 883u: goto L_089E7EF0;
    case 884u: goto L_089E7F18;
    case 885u: goto L_089E7F20;
    case 886u: goto L_089E7F3C;
    case 887u: goto L_089E7F54;
    case 888u: goto L_089E7F5C;
    case 889u: goto L_089E7F64;
    case 890u: goto L_089E7F68;
    case 891u: goto L_089E7F8C;
    case 892u: goto L_089E7F94;
    case 893u: goto L_089E7FB0;
    case 894u: goto L_089E7FC4;
    case 895u: goto L_089E7FE0;
    case 896u: goto L_089E7FE4;
    case 897u: goto L_089E7FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E4000:
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E4028;
      }
      goto L_089E400C;
    }
L_089E400C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E4028;
      }
      goto L_089E4020;
    }
L_089E4020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E402C;
      }
      goto L_089E4028;
    }
L_089E4028:
    ctx.gpr[4] = (0u | 0u);
    goto L_089E402C;
L_089E402C:
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
          goto L_089E4058;
      }
      goto L_089E4050;
    }
L_089E4050:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E40A8;
      }
      goto L_089E4058;
    }
L_089E4058:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E4088;
    }
    goto L_089E4074;
L_089E4074:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E40A8;
      }
      goto L_089E4088;
    }
L_089E4088:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E40A8;
      }
      goto L_089E40A4;
    }
L_089E40A4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E40A8;
L_089E40A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E40B8;
    }
L_089E40B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E40C4;
    }
L_089E40C4:
    ctx.gpr[31] = (0x089E40CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E40CCu) goto L_089E40CC;
    return;
L_089E40CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E40D4;
    }
L_089E40D4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E40ECu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E40ECu) goto L_089E40EC;
    return;
L_089E40EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E40FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E40FCu) goto L_089E40FC;
    return;
L_089E40FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E41B8;
      }
      goto L_089E4108;
    }
L_089E4108:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E41B8;
      }
      goto L_089E4118;
    }
L_089E4118:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E4140;
      }
      goto L_089E4124;
    }
L_089E4124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E4140;
      }
      goto L_089E4130;
    }
L_089E4130:
    ctx.gpr[31] = (0x089E4138u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 135u, 0x0887C9D8u>(ctx, &aot_mem) && ctx.pc == 0x089E4138u) goto L_089E4138;
    return;
L_089E4138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E41B8;
      }
      goto L_089E4140;
    }
L_089E4140:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[7] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 31u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E4190u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 559u, 0x08886D34u>(ctx, &aot_mem) && ctx.pc == 0x089E4190u) goto L_089E4190;
    return;
L_089E4190:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E41B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 476u, 0x088C3124u>(ctx, &aot_mem) && ctx.pc == 0x089E41B8u) goto L_089E41B8;
    return;
L_089E41B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E41DC;
      }
      goto L_089E41C4;
    }
L_089E41C4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E41DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 194u, 0x08958B90u>(ctx, &aot_mem) && ctx.pc == 0x089E41DCu) goto L_089E41DC;
    return;
L_089E41DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E41EC;
    }
L_089E41EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E41F8;
    }
L_089E41F8:
    ctx.gpr[31] = (0x089E4200u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E4200u) goto L_089E4200;
    return;
L_089E4200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4208;
    }
L_089E4208:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E4224u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4224u) goto L_089E4224;
    return;
L_089E4224:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E4234u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E4234u) goto L_089E4234;
    return;
L_089E4234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E4260;
      }
      goto L_089E4240;
    }
L_089E4240:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E427C;
      }
      goto L_089E4260;
    }
L_089E4260:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089E427C;
L_089E427C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E428C;
    }
L_089E428C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4298;
    }
L_089E4298:
    ctx.gpr[31] = (0x089E42A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E42A0u) goto L_089E42A0;
    return;
L_089E42A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E42A8;
    }
L_089E42A8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E42C0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E42C0u) goto L_089E42C0;
    return;
L_089E42C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E42D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E42D0u) goto L_089E42D0;
    return;
L_089E42D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x089E42F0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089E42F0u) goto L_089E42F0;
    return;
L_089E42F0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4348;
      }
      goto L_089E4300;
    }
L_089E4300:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E4334;
      }
      goto L_089E4314;
    }
L_089E4314:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4334;
      }
      goto L_089E4324;
    }
L_089E4324:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_089E4334;
L_089E4334:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4300;
      }
      goto L_089E4348;
    }
L_089E4348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E4360u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 257u, 0x089A5228u>(ctx, &aot_mem) && ctx.pc == 0x089E4360u) goto L_089E4360;
    return;
L_089E4360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4370;
    }
L_089E4370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E437C;
    }
L_089E437C:
    ctx.gpr[31] = (0x089E4384u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E4384u) goto L_089E4384;
    return;
L_089E4384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E438C;
    }
L_089E438C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E43A4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E43A4u) goto L_089E43A4;
    return;
L_089E43A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E43B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E43B4u) goto L_089E43B4;
    return;
L_089E43B4:
    ctx.gpr[31] = (0x089E43BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 267u, 0x089A52C4u>(ctx, &aot_mem) && ctx.pc == 0x089E43BCu) goto L_089E43BC;
    return;
L_089E43BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E43CC;
    }
L_089E43CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E43D8;
    }
L_089E43D8:
    ctx.gpr[31] = (0x089E43E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E43E0u) goto L_089E43E0;
    return;
L_089E43E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E43E8;
    }
L_089E43E8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x089E4404u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4404u) goto L_089E4404;
    return;
L_089E4404:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089E4434;
      }
      goto L_089E4428;
    }
L_089E4428:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E4434;
L_089E4434:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E4450;
      }
      goto L_089E4444;
    }
L_089E4444:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E4450;
L_089E4450:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E446C;
      }
      goto L_089E4460;
    }
L_089E4460:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E446C;
L_089E446C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x089E449Cu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 375u, 0x08A4686Cu>(ctx, &aot_mem) && ctx.pc == 0x089E449Cu) goto L_089E449C;
    return;
L_089E449C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E44A8;
      }
      goto L_089E44A4;
    }
L_089E44A4:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E44A8;
L_089E44A8:
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
          goto L_089E44D4;
      }
      goto L_089E44CC;
    }
L_089E44CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E4524;
      }
      goto L_089E44D4;
    }
L_089E44D4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E4504;
    }
    goto L_089E44F0;
L_089E44F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E4524;
      }
      goto L_089E4504;
    }
L_089E4504:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4524;
      }
      goto L_089E4520;
    }
L_089E4520:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E4524;
L_089E4524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4534;
    }
L_089E4534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4540;
    }
L_089E4540:
    ctx.gpr[31] = (0x089E4548u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E4548u) goto L_089E4548;
    return;
L_089E4548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4550;
    }
L_089E4550:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089E456Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E456Cu) goto L_089E456C;
    return;
L_089E456C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E457Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089E457Cu) goto L_089E457C;
    return;
L_089E457C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E4590u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089E4590u) goto L_089E4590;
    return;
L_089E4590:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E45B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 324u, 0x08A0E6C4u>(ctx, &aot_mem) && ctx.pc == 0x089E45B8u) goto L_089E45B8;
    return;
L_089E45B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E45C8;
    }
L_089E45C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E45D4;
    }
L_089E45D4:
    ctx.gpr[31] = (0x089E45DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E45DCu) goto L_089E45DC;
    return;
L_089E45DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E45E4;
    }
L_089E45E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E45FCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E45FCu) goto L_089E45FC;
    return;
L_089E45FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E460Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089E460Cu) goto L_089E460C;
    return;
L_089E460C:
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
    ctx.gpr[31] = (0x089E4640u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 231u, 0x08944FE0u>(ctx, &aot_mem) && ctx.pc == 0x089E4640u) goto L_089E4640;
    return;
L_089E4640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4650;
    }
L_089E4650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E465C;
    }
L_089E465C:
    ctx.gpr[31] = (0x089E4664u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E4664u) goto L_089E4664;
    return;
L_089E4664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E466C;
    }
L_089E466C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E4688u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4688u) goto L_089E4688;
    return;
L_089E4688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1212));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(360)));
        goto L_089E46F8;
    }
    goto L_089E46F0;
L_089E46F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E4700;
      }
      goto L_089E46F8;
    }
L_089E46F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_089E4700;
L_089E4700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1212));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
        goto L_089E4738;
    }
    goto L_089E4730;
L_089E4730:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089E473C;
      }
      goto L_089E4738;
    }
L_089E4738:
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_089E473C;
L_089E473C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4754;
    }
L_089E4754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4760;
    }
L_089E4760:
    ctx.gpr[31] = (0x089E4768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E4768u) goto L_089E4768;
    return;
L_089E4768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4770;
    }
L_089E4770:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E478Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E478Cu) goto L_089E478C;
    return;
L_089E478C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E479Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E479Cu) goto L_089E479C;
    return;
L_089E479C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (0u | 100u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089E47D8;
      }
      goto L_089E47D0;
    }
L_089E47D0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1212)));
      if (branch_taken) {
          goto L_089E47E0;
      }
      goto L_089E47D8;
    }
L_089E47D8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_089E47E0;
L_089E47E0:
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089E4804;
      }
      goto L_089E47FC;
    }
L_089E47FC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1212)));
      if (branch_taken) {
          goto L_089E480C;
      }
      goto L_089E4804;
    }
L_089E4804:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_089E480C;
L_089E480C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4820;
    }
L_089E4820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E482C;
    }
L_089E482C:
    ctx.gpr[31] = (0x089E4834u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E4834u) goto L_089E4834;
    return;
L_089E4834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E483C;
    }
L_089E483C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E4854u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4854u) goto L_089E4854;
    return;
L_089E4854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[31] = (0x089E4874u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 484u, 0x0893A7E0u>(ctx, &aot_mem) && ctx.pc == 0x089E4874u) goto L_089E4874;
    return;
L_089E4874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4884;
    }
L_089E4884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4890;
    }
L_089E4890:
    ctx.gpr[31] = (0x089E4898u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E4898u) goto L_089E4898;
    return;
L_089E4898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E48A0;
    }
L_089E48A0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E48B8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E48B8u) goto L_089E48B8;
    return;
L_089E48B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[31] = (0x089E48D8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 489u, 0x0893A80Cu>(ctx, &aot_mem) && ctx.pc == 0x089E48D8u) goto L_089E48D8;
    return;
L_089E48D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E48E8;
    }
L_089E48E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E48F4;
    }
L_089E48F4:
    ctx.gpr[31] = (0x089E48FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E48FCu) goto L_089E48FC;
    return;
L_089E48FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4904;
    }
L_089E4904:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E4920u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4920u) goto L_089E4920;
    return;
L_089E4920:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E4930u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E4930u) goto L_089E4930;
    return;
L_089E4930:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E4964;
      }
      goto L_089E4954;
    }
L_089E4954:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089E4960u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089E4960u) goto L_089E4960;
    return;
L_089E4960:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E4964;
L_089E4964:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4C14;
      }
      goto L_089E4970;
    }
L_089E4970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4C14;
      }
      goto L_089E497C;
    }
L_089E497C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E49A0;
      }
      goto L_089E4990;
    }
L_089E4990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089E49A0;
L_089E49A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089E4A40;
      }
      goto L_089E49B0;
    }
L_089E49B0:
    ctx.gpr[31] = (0x089E49B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 735u, 0x0889F878u>(ctx, &aot_mem) && ctx.pc == 0x089E49B8u) goto L_089E49B8;
    return;
L_089E49B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (46887u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 50604u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
          goto L_089E4A4C;
      }
      goto L_089E4A40;
    }
L_089E4A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089E4A4Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 668u, 0x0889F3FCu>(ctx, &aot_mem) && ctx.pc == 0x089E4A4Cu) goto L_089E4A4C;
    return;
L_089E4A4C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4C14;
      }
      goto L_089E4A58;
    }
L_089E4A58:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_089E4A90;
      }
      goto L_089E4A68;
    }
L_089E4A68:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_089E4A88;
      }
      goto L_089E4A70;
    }
L_089E4A70:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_089E4A98;
      }
      goto L_089E4A78;
    }
L_089E4A78:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4AA0;
      }
      goto L_089E4A80;
    }
L_089E4A80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_089E4AA0;
      }
      goto L_089E4A88;
    }
L_089E4A88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089E4AA0;
      }
      goto L_089E4A90;
    }
L_089E4A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089E4AA0;
      }
      goto L_089E4A98;
    }
L_089E4A98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_089E4AA0;
      }
      goto L_089E4AA0;
    }
L_089E4AA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E4AE8;
      }
      goto L_089E4AB0;
    }
L_089E4AB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089E4AE8;
      }
      goto L_089E4AC0;
    }
L_089E4AC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(248));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x089E4AE0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E4AE0u) goto L_089E4AE0;
    return;
L_089E4AE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4C14;
      }
      goto L_089E4AE8;
    }
L_089E4AE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4B5C;
      }
      goto L_089E4AFC;
    }
L_089E4AFC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4B2C;
      }
      goto L_089E4B0C;
    }
L_089E4B0C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4B2C;
      }
      goto L_089E4B1C;
    }
L_089E4B1C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4B34;
      }
      goto L_089E4B2C;
    }
L_089E4B2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_089E4BD8;
      }
      goto L_089E4B34;
    }
L_089E4B34:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E4B54;
      }
      goto L_089E4B44;
    }
L_089E4B44:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_089E4BDC;
    }
    goto L_089E4B54;
L_089E4B54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_089E4BD8;
      }
      goto L_089E4B5C;
    }
L_089E4B5C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_089E4BB0;
      }
      goto L_089E4B6C;
    }
L_089E4B6C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_089E4B8C;
      }
      goto L_089E4B74;
    }
L_089E4B74:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_089E4BD4;
      }
      goto L_089E4B7C;
    }
L_089E4B7C:
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_089E4BDC;
    }
    goto L_089E4B84;
L_089E4B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089E4BD8;
      }
      goto L_089E4B8C;
    }
L_089E4B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E4BA4;
      }
      goto L_089E4B9C;
    }
L_089E4B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E4BA8;
      }
      goto L_089E4BA4;
    }
L_089E4BA4:
    ctx.gpr[4] = (0u | 3u);
    goto L_089E4BA8;
L_089E4BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_089E4BDC;
      }
      goto L_089E4BB0;
    }
L_089E4BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(544)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E4BC8;
      }
      goto L_089E4BC0;
    }
L_089E4BC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089E4BCC;
      }
      goto L_089E4BC8;
    }
L_089E4BC8:
    ctx.gpr[4] = (0u | 3u);
    goto L_089E4BCC;
L_089E4BCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_089E4BDC;
      }
      goto L_089E4BD4;
    }
L_089E4BD4:
    ctx.gpr[4] = (0u | 8u);
    goto L_089E4BD8;
L_089E4BD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    goto L_089E4BDC;
L_089E4BDC:
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(543)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(224));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x089E4C14u);
    ctx.gpr[6] = (0u | 169u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E4C14u) goto L_089E4C14;
    return;
L_089E4C14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E4C20u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 768u, 0x08887CACu>(ctx, &aot_mem) && ctx.pc == 0x089E4C20u) goto L_089E4C20;
    return;
L_089E4C20:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1332), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E4C6C;
      }
      goto L_089E4C38;
    }
L_089E4C38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4C60;
      }
      goto L_089E4C44;
    }
L_089E4C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089E4C60;
    }
    goto L_089E4C50;
L_089E4C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089E4C5Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089E4C5Cu) goto L_089E4C5C;
    return;
L_089E4C5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089E4C60;
L_089E4C60:
    ctx.gpr[31] = (0x089E4C68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089E4C68u) goto L_089E4C68;
    return;
L_089E4C68:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E4C6C;
L_089E4C6C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089E4CB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 717u, 0x0899FA70u>(ctx, &aot_mem) && ctx.pc == 0x089E4CB8u) goto L_089E4CB8;
    return;
L_089E4CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4CD4;
      }
      goto L_089E4CC4;
    }
L_089E4CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089E4CD4;
L_089E4CD4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[31] = (0x089E4CE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 554u, 0x089A258Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4CE0u) goto L_089E4CE0;
    return;
L_089E4CE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E4CECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x089E4CECu) goto L_089E4CEC;
    return;
L_089E4CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (17530u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089E4D04u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 506u, 0x08A8B038u>(ctx, &aot_mem) && ctx.pc == 0x089E4D04u) goto L_089E4D04;
    return;
L_089E4D04:
    ctx.gpr[31] = (0x089E4D0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x089E4D0Cu) goto L_089E4D0C;
    return;
L_089E4D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089E4D3Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E4D3Cu) goto L_089E4D3C;
    return;
L_089E4D3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E4D54u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x089E4D54u) goto L_089E4D54;
    return;
L_089E4D54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4D64;
    }
L_089E4D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4D70;
    }
L_089E4D70:
    ctx.gpr[31] = (0x089E4D78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E4D78u) goto L_089E4D78;
    return;
L_089E4D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E4D80;
    }
L_089E4D80:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E4D9Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4D9Cu) goto L_089E4D9C;
    return;
L_089E4D9C:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E4DCC;
      }
      goto L_089E4DBC;
    }
L_089E4DBC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x089E4DC8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089E4DC8u) goto L_089E4DC8;
    return;
L_089E4DC8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E4DCC;
L_089E4DCC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_089E4E10;
      }
      goto L_089E4DF0;
    }
L_089E4DF0:
    ctx.gpr[4] = (0u - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_089E4E10;
L_089E4E10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(548));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 16u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089E4E54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 226u, 0x088C165Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4E54u) goto L_089E4E54;
    return;
L_089E4E54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(544))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4E94;
      }
      goto L_089E4E60;
    }
L_089E4E60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20724)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(548));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x089E4E94u);
    ctx.gpr[9] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 256u, 0x088C1A3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4E94u) goto L_089E4E94;
    return;
L_089E4E94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(544))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F00;
      }
      goto L_089E4EA0;
    }
L_089E4EA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[31] = (0x089E4EBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 282u, 0x08871B18u>(ctx, &aot_mem) && ctx.pc == 0x089E4EBCu) goto L_089E4EBC;
    return;
L_089E4EBC:
    ctx.gpr[4] = (ctx.gpr[2] << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20724)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(548));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x089E4F00u);
    ctx.gpr[9] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 256u, 0x088C1A3Cu>(ctx, &aot_mem) && ctx.pc == 0x089E4F00u) goto L_089E4F00;
    return;
L_089E4F00:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(544))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4FAC;
      }
      goto L_089E4F14;
    }
L_089E4F14:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(548)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E4F94;
      }
      goto L_089E4F84;
    }
L_089E4F84:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(548)));
    goto L_089E4F94;
L_089E4F94:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(544))))));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E4F14;
      }
      goto L_089E4FAC;
    }
L_089E4FAC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E500C;
      }
      goto L_089E4FB4;
    }
L_089E4FB4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E4FEC;
      }
      goto L_089E4FC8;
    }
L_089E4FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E4FE4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 292u, 0x089E1AD4u>(ctx, &aot_mem) && ctx.pc == 0x089E4FE4u) goto L_089E4FE4;
    return;
L_089E4FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E500C;
      }
      goto L_089E4FEC;
    }
L_089E4FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E500Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 292u, 0x089E1AD4u>(ctx, &aot_mem) && ctx.pc == 0x089E500Cu) goto L_089E500C;
    return;
L_089E500C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E501C;
    }
L_089E501C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5028;
    }
L_089E5028:
    ctx.gpr[31] = (0x089E5030u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E5030u) goto L_089E5030;
    return;
L_089E5030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5038;
    }
L_089E5038:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E5054u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5054u) goto L_089E5054;
    return;
L_089E5054:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[31] = (0x089E5064u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E5064u) goto L_089E5064;
    return;
L_089E5064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E5074u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E5074u) goto L_089E5074;
    return;
L_089E5074:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E5088u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 310u, 0x0899DDECu>(ctx, &aot_mem) && ctx.pc == 0x089E5088u) goto L_089E5088;
    return;
L_089E5088:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5094;
      }
      goto L_089E5090;
    }
L_089E5090:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E5094;
L_089E5094:
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
          goto L_089E50C0;
      }
      goto L_089E50B8;
    }
L_089E50B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E5110;
      }
      goto L_089E50C0;
    }
L_089E50C0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E50F0;
    }
    goto L_089E50DC;
L_089E50DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E5110;
      }
      goto L_089E50F0;
    }
L_089E50F0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5110;
      }
      goto L_089E510C;
    }
L_089E510C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E5110;
L_089E5110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5120;
    }
L_089E5120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E512C;
    }
L_089E512C:
    ctx.gpr[31] = (0x089E5134u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E5134u) goto L_089E5134;
    return;
L_089E5134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E513C;
    }
L_089E513C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E5154u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5154u) goto L_089E5154;
    return;
L_089E5154:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E5164u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E5164u) goto L_089E5164;
    return;
L_089E5164:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E5194u);
    ctx.gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x089E5194u) goto L_089E5194;
    return;
L_089E5194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E51A4;
    }
L_089E51A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E51B0;
    }
L_089E51B0:
    ctx.gpr[31] = (0x089E51B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E51B8u) goto L_089E51B8;
    return;
L_089E51B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E51C0;
    }
L_089E51C0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E51D8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E51D8u) goto L_089E51D8;
    return;
L_089E51D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E51E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089E51E8u) goto L_089E51E8;
    return;
L_089E51E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (512u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089E5214;
      }
      goto L_089E5200;
    }
L_089E5200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E521C;
      }
      goto L_089E5214;
    }
L_089E5214:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E521C;
      }
      goto L_089E521C;
    }
L_089E521C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5228;
      }
      goto L_089E5224;
    }
L_089E5224:
    ctx.gpr[5] = (0u | 1u);
    goto L_089E5228;
L_089E5228:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_089E5254;
      }
      goto L_089E524C;
    }
L_089E524C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089E52A4;
      }
      goto L_089E5254;
    }
L_089E5254:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E5284;
    }
    goto L_089E5270;
L_089E5270:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E52A4;
      }
      goto L_089E5284;
    }
L_089E5284:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E52A4;
      }
      goto L_089E52A0;
    }
L_089E52A0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E52A4;
L_089E52A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E52B4;
    }
L_089E52B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E52C0;
    }
L_089E52C0:
    ctx.gpr[31] = (0x089E52C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E52C8u) goto L_089E52C8;
    return;
L_089E52C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E52D0;
    }
L_089E52D0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E5310;
    }
    goto L_089E52E0;
L_089E52E0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E52ECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089E52ECu) goto L_089E52EC;
    return;
L_089E52EC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5304;
      }
      goto L_089E52F8;
    }
L_089E52F8:
    ctx.gpr[31] = (0x089E5300u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089E5300u) goto L_089E5300;
    return;
L_089E5300:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E5304;
L_089E5304:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E5310;
L_089E5310:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E5328u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089E5328u) goto L_089E5328;
    return;
L_089E5328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x089E5354u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5354u) goto L_089E5354;
    return;
L_089E5354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (ctx.gpr[8] & 255u);
    ctx.gpr[3] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E5394u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 705u, 0x08917B14u>(ctx, &aot_mem) && ctx.pc == 0x089E5394u) goto L_089E5394;
    return;
L_089E5394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E53A4;
    }
L_089E53A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E53B0;
    }
L_089E53B0:
    ctx.gpr[31] = (0x089E53B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E53B8u) goto L_089E53B8;
    return;
L_089E53B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E53C0;
    }
L_089E53C0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x089E53DCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E53DCu) goto L_089E53DC;
    return;
L_089E53DC:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E540C;
      }
      goto L_089E5400;
    }
L_089E5400:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E540C;
L_089E540C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089E5428;
      }
      goto L_089E541C;
    }
L_089E541C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E5428;
L_089E5428:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[19] = ctx.fpr[19] / ctx.fpr[3];
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[31] = (0x089E5484u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 19u, 0x0897C26Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5484u) goto L_089E5484;
    return;
L_089E5484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5494;
    }
L_089E5494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E54A0;
    }
L_089E54A0:
    ctx.gpr[31] = (0x089E54A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E54A8u) goto L_089E54A8;
    return;
L_089E54A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E54B0;
    }
L_089E54B0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E54CCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E54CCu) goto L_089E54CC;
    return;
L_089E54CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E5500u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089E5500u) goto L_089E5500;
    return;
L_089E5500:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x089E5514u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089E5514u) goto L_089E5514;
    return;
L_089E5514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089E5520u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 241u, 0x089BD1A0u>(ctx, &aot_mem) && ctx.pc == 0x089E5520u) goto L_089E5520;
    return;
L_089E5520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5530;
    }
L_089E5530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E553C;
    }
L_089E553C:
    ctx.gpr[31] = (0x089E5544u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E5544u) goto L_089E5544;
    return;
L_089E5544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E554C;
    }
L_089E554C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E5568u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5568u) goto L_089E5568;
    return;
L_089E5568:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E5578u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E5578u) goto L_089E5578;
    return;
L_089E5578:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E558Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089E558Cu) goto L_089E558C;
    return;
L_089E558C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x089E55A0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x089E55A0u) goto L_089E55A0;
    return;
L_089E55A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E55ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 241u, 0x089BD1A0u>(ctx, &aot_mem) && ctx.pc == 0x089E55ACu) goto L_089E55AC;
    return;
L_089E55AC:
    ctx.gpr[31] = (0x089E55B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 538u, 0x08886BD4u>(ctx, &aot_mem) && ctx.pc == 0x089E55B4u) goto L_089E55B4;
    return;
L_089E55B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E55C4;
    }
L_089E55C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E55D0;
    }
L_089E55D0:
    ctx.gpr[31] = (0x089E55D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E55D8u) goto L_089E55D8;
    return;
L_089E55D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E55E0;
    }
L_089E55E0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E55F8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E55F8u) goto L_089E55F8;
    return;
L_089E55F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E561C;
      }
      goto L_089E5604;
    }
L_089E5604:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089E5614u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E5614u) goto L_089E5614;
    return;
L_089E5614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E562C;
      }
      goto L_089E561C;
    }
L_089E561C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E562Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E562Cu) goto L_089E562C;
    return;
L_089E562C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E563C;
    }
L_089E563C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5648;
    }
L_089E5648:
    ctx.gpr[31] = (0x089E5650u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E5650u) goto L_089E5650;
    return;
L_089E5650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5658;
    }
L_089E5658:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E5698;
    }
    goto L_089E5668;
L_089E5668:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E5674u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089E5674u) goto L_089E5674;
    return;
L_089E5674:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E568C;
      }
      goto L_089E5680;
    }
L_089E5680:
    ctx.gpr[31] = (0x089E5688u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089E5688u) goto L_089E5688;
    return;
L_089E5688:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E568C;
L_089E568C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E5698;
L_089E5698:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E56B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089E56B0u) goto L_089E56B0;
    return;
L_089E56B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E56DCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E56DCu) goto L_089E56DC;
    return;
L_089E56DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089E5710u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 398u, 0x0887A64Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5710u) goto L_089E5710;
    return;
L_089E5710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5720;
    }
L_089E5720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E572C;
    }
L_089E572C:
    ctx.gpr[31] = (0x089E5734u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E5734u) goto L_089E5734;
    return;
L_089E5734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E573C;
    }
L_089E573C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E577C;
    }
    goto L_089E574C;
L_089E574C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E5758u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089E5758u) goto L_089E5758;
    return;
L_089E5758:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5770;
      }
      goto L_089E5764;
    }
L_089E5764:
    ctx.gpr[31] = (0x089E576Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089E576Cu) goto L_089E576C;
    return;
L_089E576C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E5770;
L_089E5770:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E577C;
L_089E577C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E5794u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089E5794u) goto L_089E5794;
    return;
L_089E5794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089E57C0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E57C0u) goto L_089E57C0;
    return;
L_089E57C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089E57F4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 398u, 0x0887A64Cu>(ctx, &aot_mem) && ctx.pc == 0x089E57F4u) goto L_089E57F4;
    return;
L_089E57F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5804;
    }
L_089E5804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5810;
    }
L_089E5810:
    ctx.gpr[31] = (0x089E5818u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E5818u) goto L_089E5818;
    return;
L_089E5818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5820;
    }
L_089E5820:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E583Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E583Cu) goto L_089E583C;
    return;
L_089E583C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E584Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E584Cu) goto L_089E584C;
    return;
L_089E584C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E58A8;
      }
      goto L_089E585C;
    }
L_089E585C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089E588C;
      }
      goto L_089E5868;
    }
L_089E5868:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089E5884u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x089E5884u) goto L_089E5884;
    return;
L_089E5884:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E58A8;
      }
      goto L_089E588C;
    }
L_089E588C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E58A8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x089E58A8u) goto L_089E58A8;
    return;
L_089E58A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E58B8;
    }
L_089E58B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E58C4;
    }
L_089E58C4:
    ctx.gpr[31] = (0x089E58CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E58CCu) goto L_089E58CC;
    return;
L_089E58CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E58D4;
    }
L_089E58D4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089E58E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 498u, 0x088EF15Cu>(ctx, &aot_mem) && ctx.pc == 0x089E58E0u) goto L_089E58E0;
    return;
L_089E58E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E58F0;
    }
L_089E58F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E58FC;
    }
L_089E58FC:
    ctx.gpr[31] = (0x089E5904u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E5904u) goto L_089E5904;
    return;
L_089E5904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E590C;
    }
L_089E590C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E5924u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5924u) goto L_089E5924;
    return;
L_089E5924:
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x089E5958u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x089E5958u) goto L_089E5958;
    return;
L_089E5958:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x089E5974u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 391u, 0x088724E0u>(ctx, &aot_mem) && ctx.pc == 0x089E5974u) goto L_089E5974;
    return;
L_089E5974:
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[19] = (0u | 0u);
    goto L_089E597C;
L_089E597C:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_089E5A24;
      }
      goto L_089E5988;
    }
L_089E5988:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E5A24;
      }
      goto L_089E5990;
    }
L_089E5990:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5A24;
      }
      goto L_089E5998;
    }
L_089E5998:
    ctx.gpr[31] = (0x089E59A0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(194)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 398u, 0x08A9E020u>(ctx, &aot_mem) && ctx.pc == 0x089E59A0u) goto L_089E59A0;
    return;
L_089E59A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E59CC;
      }
      goto L_089E59B8;
    }
L_089E59B8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E59CC;
L_089E59CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089E59E4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E59E4u) goto L_089E59E4;
    return;
L_089E59E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5A18;
      }
      goto L_089E59EC;
    }
L_089E59EC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089E5A14;
      }
      goto L_089E5A00;
    }
L_089E5A00:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E5A14;
L_089E5A14:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    goto L_089E5A18;
L_089E5A18:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
      if (branch_taken) {
          goto L_089E597C;
      }
      goto L_089E5A24;
    }
L_089E5A24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E5A4C;
      }
      goto L_089E5A38;
    }
L_089E5A38:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E5A4C;
L_089E5A4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089E5A64u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E5A64u) goto L_089E5A64;
    return;
L_089E5A64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E5A9C;
      }
      goto L_089E5A6C;
    }
L_089E5A6C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[18] = (0u | 7u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089E5A98;
      }
      goto L_089E5A84;
    }
L_089E5A84:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089E5A98;
L_089E5A98:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    goto L_089E5A9C;
L_089E5A9C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x089E5AA8u);
    ctx.gpr[4] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 251u, 0x0899DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5AA8u) goto L_089E5AA8;
    return;
L_089E5AA8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089E5ACC;
      }
      goto L_089E5AB4;
    }
L_089E5AB4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E5AC4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 147u, 0x089FD534u>(ctx, &aot_mem) && ctx.pc == 0x089E5AC4u) goto L_089E5AC4;
    return;
L_089E5AC4:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 2u);
    goto L_089E5ACC;
L_089E5ACC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (65504u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E5B50;
      }
      goto L_089E5B40;
    }
L_089E5B40:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089E5B4Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089E5B4Cu) goto L_089E5B4C;
    return;
L_089E5B4C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E5B50;
L_089E5B50:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089E5BB4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x089E5BB4u) goto L_089E5BB4;
    return;
L_089E5BB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(880)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(884)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(888)));
    ctx.gpr[31] = (0x089E5BC8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x089E5BC8u) goto L_089E5BC8;
    return;
L_089E5BC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E5BD4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x089E5BD4u) goto L_089E5BD4;
    return;
L_089E5BD4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x089E5BE4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 282u, 0x08871B18u>(ctx, &aot_mem) && ctx.pc == 0x089E5BE4u) goto L_089E5BE4;
    return;
L_089E5BE4:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5C00;
      }
      goto L_089E5BF4;
    }
L_089E5BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089E5C00;
L_089E5C00:
    ctx.gpr[31] = (0x089E5C08u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5C08u) goto L_089E5C08;
    return;
L_089E5C08:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7300)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7300), ctx.gpr[6]);
    ctx.gpr[31] = (0x089E5C28u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x089E5C28u) goto L_089E5C28;
    return;
L_089E5C28:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E5C40u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089E5C40u) goto L_089E5C40;
    return;
L_089E5C40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5C64;
      }
      goto L_089E5C4C;
    }
L_089E5C4C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E5C64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x089E5C64u) goto L_089E5C64;
    return;
L_089E5C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5C74;
    }
L_089E5C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5C80;
    }
L_089E5C80:
    ctx.gpr[31] = (0x089E5C88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E5C88u) goto L_089E5C88;
    return;
L_089E5C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5C90;
    }
L_089E5C90:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E5CA8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5CA8u) goto L_089E5CA8;
    return;
L_089E5CA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E5CB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E5CB8u) goto L_089E5CB8;
    return;
L_089E5CB8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E5CE8u);
    ctx.gpr[5] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x089E5CE8u) goto L_089E5CE8;
    return;
L_089E5CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5CF8;
    }
L_089E5CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5D04;
    }
L_089E5D04:
    ctx.gpr[31] = (0x089E5D0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E5D0Cu) goto L_089E5D0C;
    return;
L_089E5D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5D14;
    }
L_089E5D14:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E5D30u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5D30u) goto L_089E5D30;
    return;
L_089E5D30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E5D60;
      }
      goto L_089E5D54;
    }
L_089E5D54:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E5D60;
L_089E5D60:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E5D7C;
      }
      goto L_089E5D70;
    }
L_089E5D70:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E5D7C;
L_089E5D7C:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E5D98;
      }
      goto L_089E5D8C;
    }
L_089E5D8C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E5D98;
L_089E5D98:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x089E5DB4u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 248u, 0x0893123Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5DB4u) goto L_089E5DB4;
    return;
L_089E5DB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5DC0;
      }
      goto L_089E5DBC;
    }
L_089E5DBC:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E5DC0;
L_089E5DC0:
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
          goto L_089E5DEC;
      }
      goto L_089E5DE4;
    }
L_089E5DE4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E5E3C;
      }
      goto L_089E5DEC;
    }
L_089E5DEC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E5E1C;
    }
    goto L_089E5E08;
L_089E5E08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E5E3C;
      }
      goto L_089E5E1C;
    }
L_089E5E1C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E5E3C;
      }
      goto L_089E5E38;
    }
L_089E5E38:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E5E3C;
L_089E5E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5E4C;
    }
L_089E5E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5E58;
    }
L_089E5E58:
    ctx.gpr[31] = (0x089E5E60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E5E60u) goto L_089E5E60;
    return;
L_089E5E60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5E68;
    }
L_089E5E68:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E5E84u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5E84u) goto L_089E5E84;
    return;
L_089E5E84:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x089E5E94u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089E5E94u) goto L_089E5E94;
    return;
L_089E5E94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5EE0;
    }
L_089E5EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5EEC;
    }
L_089E5EEC:
    ctx.gpr[31] = (0x089E5EF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E5EF4u) goto L_089E5EF4;
    return;
L_089E5EF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5EFC;
    }
L_089E5EFC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E5F18u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5F18u) goto L_089E5F18;
    return;
L_089E5F18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E5F28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089E5F28u) goto L_089E5F28;
    return;
L_089E5F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E5F44;
      }
      goto L_089E5F34;
    }
L_089E5F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E5F54;
      }
      goto L_089E5F44;
    }
L_089E5F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_089E5F54;
L_089E5F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5F64;
    }
L_089E5F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5F70;
    }
L_089E5F70:
    ctx.gpr[31] = (0x089E5F78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E5F78u) goto L_089E5F78;
    return;
L_089E5F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E5F80;
    }
L_089E5F80:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E5F98u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E5F98u) goto L_089E5F98;
    return;
L_089E5F98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E5FA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089E5FA8u) goto L_089E5FA8;
    return;
L_089E5FA8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E5FB8;
      }
      goto L_089E5FB4;
    }
L_089E5FB4:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E5FB8;
L_089E5FB8:
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
          goto L_089E5FE4;
      }
      goto L_089E5FDC;
    }
L_089E5FDC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6034;
      }
      goto L_089E5FE4;
    }
L_089E5FE4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E6014;
    }
    goto L_089E6000;
L_089E6000:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6034;
      }
      goto L_089E6014;
    }
L_089E6014:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6034;
      }
      goto L_089E6030;
    }
L_089E6030:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E6034;
L_089E6034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E6044;
    }
L_089E6044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6058;
      }
      goto L_089E6050;
    }
L_089E6050:
    ctx.gpr[31] = (0x089E6058u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E6058u) goto L_089E6058;
    return;
L_089E6058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089E6088;
      }
      goto L_089E6060;
    }
L_089E6060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6084;
      }
      goto L_089E6070;
    }
L_089E6070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6084;
      }
      goto L_089E607C;
    }
L_089E607C:
    ctx.gpr[31] = (0x089E6084u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089E6084u) goto L_089E6084;
    return;
L_089E6084:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089E6088;
L_089E6088:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(928)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(932)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(936)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(940)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(944)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(948)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(952)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(956)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E60BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-905));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 116u, 0x089E8860u>(ctx, &aot_mem); return;
      }
      goto L_089E6100;
    }
L_089E6100:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-905));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4672)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E611C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E615C;
    }
    goto L_089E612C;
L_089E612C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E6138u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089E6138u) goto L_089E6138;
    return;
L_089E6138:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6150;
      }
      goto L_089E6144;
    }
L_089E6144:
    ctx.gpr[31] = (0x089E614Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089E614Cu) goto L_089E614C;
    return;
L_089E614C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E6150;
L_089E6150:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E615C;
L_089E615C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E6174u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089E6174u) goto L_089E6174;
    return;
L_089E6174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E61B8;
      }
      goto L_089E618C;
    }
L_089E618C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089E6198u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089E6198u) goto L_089E6198;
    return;
L_089E6198:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E61B0;
      }
      goto L_089E61A4;
    }
L_089E61A4:
    ctx.gpr[31] = (0x089E61ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089E61ACu) goto L_089E61AC;
    return;
L_089E61AC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089E61B0;
L_089E61B0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    goto L_089E61B8;
L_089E61B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E61D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089E61D4u) goto L_089E61D4;
    return;
L_089E61D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E6200u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6200u) goto L_089E6200;
    return;
L_089E6200:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x089E6218u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 412u, 0x0887A8A4u>(ctx, &aot_mem) && ctx.pc == 0x089E6218u) goto L_089E6218;
    return;
L_089E6218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6220;
    }
L_089E6220:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E623Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E623Cu) goto L_089E623C;
    return;
L_089E623C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[17]));
    ctx.fpr[13] = ctx.fpr[18] - ctx.fpr[12];
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[18] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089E6280;
      }
      goto L_089E6274;
    }
L_089E6274:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E6280;
L_089E6280:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E629C;
      }
      goto L_089E6290;
    }
L_089E6290:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E629C;
L_089E629C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E62B8;
      }
      goto L_089E62AC;
    }
L_089E62AC:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E62B8;
L_089E62B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x089E62F8u);
    ctx.gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 400u, 0x088C2A04u>(ctx, &aot_mem) && ctx.pc == 0x089E62F8u) goto L_089E62F8;
    return;
L_089E62F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(160))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089E6308;
      }
      goto L_089E6304;
    }
L_089E6304:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E6308;
L_089E6308:
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
          goto L_089E6334;
      }
      goto L_089E632C;
    }
L_089E632C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E6384;
      }
      goto L_089E6334;
    }
L_089E6334:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E6364;
    }
    goto L_089E6350;
L_089E6350:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6384;
      }
      goto L_089E6364;
    }
L_089E6364:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6384;
      }
      goto L_089E6380;
    }
L_089E6380:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E6384;
L_089E6384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E638C;
    }
L_089E638C:
    ctx.gpr[31] = (0x089E6394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 718u, 0x0891B398u>(ctx, &aot_mem) && ctx.pc == 0x089E6394u) goto L_089E6394;
    return;
L_089E6394:
    ctx.gpr[31] = (0x089E639Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x089E639Cu) goto L_089E639C;
    return;
L_089E639C:
    ctx.gpr[31] = (0x089E63A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B3ACu>(ctx, &aot_mem) && ctx.pc == 0x089E63A4u) goto L_089E63A4;
    return;
L_089E63A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E63AC;
    }
L_089E63AC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E63C8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E63C8u) goto L_089E63C8;
    return;
L_089E63C8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x089E63D8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089E63D8u) goto L_089E63D8;
    return;
L_089E63D8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E643C;
    }
L_089E643C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E6458u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6458u) goto L_089E6458;
    return;
L_089E6458:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E6468u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089E6468u) goto L_089E6468;
    return;
L_089E6468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E64B4;
      }
      goto L_089E6474;
    }
L_089E6474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E64EC;
      }
      goto L_089E6484;
    }
L_089E6484:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E64ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 153u, 0x08A0D424u>(ctx, &aot_mem) && ctx.pc == 0x089E64ACu) goto L_089E64AC;
    return;
L_089E64AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E64EC;
      }
      goto L_089E64B4;
    }
L_089E64B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E64EC;
      }
      goto L_089E64C4;
    }
L_089E64C4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x089E64ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 165u, 0x08A0D4BCu>(ctx, &aot_mem) && ctx.pc == 0x089E64ECu) goto L_089E64EC;
    return;
L_089E64EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E64F4;
    }
L_089E64F4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E650Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E650Cu) goto L_089E650C;
    return;
L_089E650C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089E6520u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 151u, 0x08864AD0u>(ctx, &aot_mem) && ctx.pc == 0x089E6520u) goto L_089E6520;
    return;
L_089E6520:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(63));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089E653Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 145u, 0x08864A64u>(ctx, &aot_mem) && ctx.pc == 0x089E653Cu) goto L_089E653C;
    return;
L_089E653C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6544;
    }
L_089E6544:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089E6560u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6560u) goto L_089E6560;
    return;
L_089E6560:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E6590;
      }
      goto L_089E6580;
    }
L_089E6580:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089E658Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089E658Cu) goto L_089E658C;
    return;
L_089E658C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E6590;
L_089E6590:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x089E65B8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 163u, 0x088C8D04u>(ctx, &aot_mem) && ctx.pc == 0x089E65B8u) goto L_089E65B8;
    return;
L_089E65B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E65C0;
    }
L_089E65C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E65D8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E65D8u) goto L_089E65D8;
    return;
L_089E65D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E65F8;
      }
      goto L_089E65E4;
    }
L_089E65E4:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8840));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6604;
      }
      goto L_089E65F8;
    }
L_089E65F8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8840));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(0u));
    goto L_089E6604;
L_089E6604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E660C;
    }
L_089E660C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E6628u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6628u) goto L_089E6628;
    return;
L_089E6628:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E6638u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089E6638u) goto L_089E6638;
    return;
L_089E6638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E6650;
      }
      goto L_089E6644;
    }
L_089E6644:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6654;
      }
      goto L_089E6650;
    }
L_089E6650:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    goto L_089E6654;
L_089E6654:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E665C;
    }
L_089E665C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x089E6678u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6678u) goto L_089E6678;
    return;
L_089E6678:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089E66A8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 625u, 0x08976E0Cu>(ctx, &aot_mem) && ctx.pc == 0x089E66A8u) goto L_089E66A8;
    return;
L_089E66A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E66B0;
    }
L_089E66B0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E66C8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E66C8u) goto L_089E66C8;
    return;
L_089E66C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E66D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089E66D8u) goto L_089E66D8;
    return;
L_089E66D8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E6720;
      }
      goto L_089E66E8;
    }
L_089E66E8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E670C;
      }
      goto L_089E66FC;
    }
L_089E66FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6764;
      }
      goto L_089E670C;
    }
L_089E670C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6764;
      }
      goto L_089E6720;
    }
L_089E6720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E6764;
      }
      goto L_089E6730;
    }
L_089E6730:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6754;
      }
      goto L_089E6744;
    }
L_089E6744:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6764;
      }
      goto L_089E6754;
    }
L_089E6754:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E6764;
L_089E6764:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E676C;
    }
L_089E676C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x089E6788u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6788u) goto L_089E6788;
    return;
L_089E6788:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_089E67B8;
      }
      goto L_089E67A8;
    }
L_089E67A8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089E67B4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089E67B4u) goto L_089E67B4;
    return;
L_089E67B4:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E67B8;
L_089E67B8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_089E67E4;
      }
      goto L_089E67E0;
    }
L_089E67E0:
    ctx.fpr[15] = std::bit_cast<float>(0u);
    goto L_089E67E4;
L_089E67E4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089E6820;
      }
      goto L_089E67F8;
    }
L_089E67F8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6830;
      }
      goto L_089E6820;
    }
L_089E6820:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(0u));
    goto L_089E6830;
L_089E6830:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[31] = (0x089E6878u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 618u, 0x089D2840u>(ctx, &aot_mem) && ctx.pc == 0x089E6878u) goto L_089E6878;
    return;
L_089E6878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6880;
    }
L_089E6880:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E689Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E689Cu) goto L_089E689C;
    return;
L_089E689C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E68ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E68ACu) goto L_089E68AC;
    return;
L_089E68AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E68C8;
      }
      goto L_089E68B8;
    }
L_089E68B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E68D8;
      }
      goto L_089E68C8;
    }
L_089E68C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089E68D8;
L_089E68D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E68E0;
    }
L_089E68E0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E68FCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E68FCu) goto L_089E68FC;
    return;
L_089E68FC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x089E690Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089E690Cu) goto L_089E690C;
    return;
L_089E690C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x089E6968u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 288u, 0x089D96E8u>(ctx, &aot_mem) && ctx.pc == 0x089E6968u) goto L_089E6968;
    return;
L_089E6968:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16329u << 16u);
      if (branch_taken) {
          goto L_089E6990;
      }
      goto L_089E697C;
    }
L_089E697C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16329u << 16u);
    goto L_089E6990;
L_089E6990:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E69C8;
      }
      goto L_089E69B8;
    }
L_089E69B8:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089E69C8;
L_089E69C8:
    ctx.gpr[31] = (0x089E69D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x089E69D0u) goto L_089E69D0;
    return;
L_089E69D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E69D8;
    }
L_089E69D8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E69F4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E69F4u) goto L_089E69F4;
    return;
L_089E69F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E6A04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089E6A04u) goto L_089E6A04;
    return;
L_089E6A04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089E6A18u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 471u, 0x0897AF94u>(ctx, &aot_mem) && ctx.pc == 0x089E6A18u) goto L_089E6A18;
    return;
L_089E6A18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6A24;
      }
      goto L_089E6A20;
    }
L_089E6A20:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E6A24;
L_089E6A24:
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
          goto L_089E6A50;
      }
      goto L_089E6A48;
    }
L_089E6A48:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E6AA0;
      }
      goto L_089E6A50;
    }
L_089E6A50:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E6A80;
    }
    goto L_089E6A6C;
L_089E6A6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6AA0;
      }
      goto L_089E6A80;
    }
L_089E6A80:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6AA0;
      }
      goto L_089E6A9C;
    }
L_089E6A9C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E6AA0;
L_089E6AA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6AA8;
    }
L_089E6AA8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E6AC4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6AC4u) goto L_089E6AC4;
    return;
L_089E6AC4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E6AF4;
      }
      goto L_089E6AE4;
    }
L_089E6AE4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089E6AF0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089E6AF0u) goto L_089E6AF0;
    return;
L_089E6AF0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E6AF4;
L_089E6AF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-17684)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17684));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[10] = (0u | 228u);
    ctx.gpr[11] = (0u | 2048u);
    ctx.gpr[31] = (0x089E6B58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 295u, 0x08825BFCu>(ctx, &aot_mem) && ctx.pc == 0x089E6B58u) goto L_089E6B58;
    return;
L_089E6B58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6B60;
    }
L_089E6B60:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E6B7Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6B7Cu) goto L_089E6B7C;
    return;
L_089E6B7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E6B8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089E6B8Cu) goto L_089E6B8C;
    return;
L_089E6B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6BB4;
    }
L_089E6BB4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6BCCu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6BCCu) goto L_089E6BCC;
    return;
L_089E6BCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E6BDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E6BDCu) goto L_089E6BDC;
    return;
L_089E6BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (ctx.gpr[4] ^ 20u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 5u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6C08;
      }
      goto L_089E6C00;
    }
L_089E6C00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E6C0C;
      }
      goto L_089E6C08;
    }
L_089E6C08:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E6C0C;
L_089E6C0C:
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
          goto L_089E6C38;
      }
      goto L_089E6C30;
    }
L_089E6C30:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6C88;
      }
      goto L_089E6C38;
    }
L_089E6C38:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E6C68;
    }
    goto L_089E6C54;
L_089E6C54:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6C88;
      }
      goto L_089E6C68;
    }
L_089E6C68:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6C88;
      }
      goto L_089E6C84;
    }
L_089E6C84:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E6C88;
L_089E6C88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6C90;
    }
L_089E6C90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x089E6CACu);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089E6CACu) goto L_089E6CAC;
    return;
L_089E6CAC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6D04;
      }
      goto L_089E6CBC;
    }
L_089E6CBC:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089E6CF0;
      }
      goto L_089E6CD0;
    }
L_089E6CD0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6CF0;
      }
      goto L_089E6CE0;
    }
L_089E6CE0:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_089E6CF0;
L_089E6CF0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E6CBC;
      }
      goto L_089E6D04;
    }
L_089E6D04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089E6D20u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089E6D20u) goto L_089E6D20;
    return;
L_089E6D20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6D28;
    }
L_089E6D28:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6D40u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6D40u) goto L_089E6D40;
    return;
L_089E6D40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6D48;
    }
L_089E6D48:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6D60u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6D60u) goto L_089E6D60;
    return;
L_089E6D60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6D68;
    }
L_089E6D68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6D70;
    }
L_089E6D70:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E6D8Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6D8Cu) goto L_089E6D8C;
    return;
L_089E6D8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089E6DA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 135u, 0x088649B4u>(ctx, &aot_mem) && ctx.pc == 0x089E6DA4u) goto L_089E6DA4;
    return;
L_089E6DA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6DAC;
    }
L_089E6DAC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E6DC8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6DC8u) goto L_089E6DC8;
    return;
L_089E6DC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E6DD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089E6DD8u) goto L_089E6DD8;
    return;
L_089E6DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089E6DF4;
      }
      goto L_089E6DE4;
    }
L_089E6DE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E6E04;
      }
      goto L_089E6DF4;
    }
L_089E6DF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E6E04;
L_089E6E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6E0C;
    }
L_089E6E0C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6E24u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6E24u) goto L_089E6E24;
    return;
L_089E6E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089E6E34u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 524u, 0x08ACE498u>(ctx, &aot_mem) && ctx.pc == 0x089E6E34u) goto L_089E6E34;
    return;
L_089E6E34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6E3C;
    }
L_089E6E3C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6E54u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6E54u) goto L_089E6E54;
    return;
L_089E6E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6E70;
      }
      goto L_089E6E60;
    }
L_089E6E60:
    ctx.gpr[31] = (0x089E6E68u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 129u, 0x08A88900u>(ctx, &aot_mem) && ctx.pc == 0x089E6E68u) goto L_089E6E68;
    return;
L_089E6E68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6E78;
      }
      goto L_089E6E70;
    }
L_089E6E70:
    ctx.gpr[31] = (0x089E6E78u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 129u, 0x08A88900u>(ctx, &aot_mem) && ctx.pc == 0x089E6E78u) goto L_089E6E78;
    return;
L_089E6E78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6E80;
    }
L_089E6E80:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E6E9Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6E9Cu) goto L_089E6E9C;
    return;
L_089E6E9C:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17952)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E6F00;
      }
      goto L_089E6EC0;
    }
L_089E6EC0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089E6EE4u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28984u>(ctx, &aot_mem) && ctx.pc == 0x089E6EE4u) goto L_089E6EE4;
    return;
L_089E6EE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6EF4;
      }
      goto L_089E6EEC;
    }
L_089E6EEC:
    ctx.gpr[31] = (0x089E6EF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 549u, 0x089D2388u>(ctx, &aot_mem) && ctx.pc == 0x089E6EF4u) goto L_089E6EF4;
    return;
L_089E6EF4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E6EC0;
      }
      goto L_089E6F00;
    }
L_089E6F00:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17948)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6F50;
      }
      goto L_089E6F10;
    }
L_089E6F10:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089E6F34u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28984u>(ctx, &aot_mem) && ctx.pc == 0x089E6F34u) goto L_089E6F34;
    return;
L_089E6F34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6F44;
      }
      goto L_089E6F3C;
    }
L_089E6F3C:
    ctx.gpr[31] = (0x089E6F44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 549u, 0x089D2388u>(ctx, &aot_mem) && ctx.pc == 0x089E6F44u) goto L_089E6F44;
    return;
L_089E6F44:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E6F10;
      }
      goto L_089E6F50;
    }
L_089E6F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6F58;
    }
L_089E6F58:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6F70u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6F70u) goto L_089E6F70;
    return;
L_089E6F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6F88;
      }
      goto L_089E6F7C;
    }
L_089E6F7C:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8068), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089E6F94;
      }
      goto L_089E6F88;
    }
L_089E6F88:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-8068), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E6F94;
L_089E6F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E6F9C;
    }
L_089E6F9C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E6FB4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E6FB4u) goto L_089E6FB4;
    return;
L_089E6FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089E6FC8u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 19u, 0x0893C100u>(ctx, &aot_mem) && ctx.pc == 0x089E6FC8u) goto L_089E6FC8;
    return;
L_089E6FC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E6FD4;
      }
      goto L_089E6FD0;
    }
L_089E6FD0:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E6FD4;
L_089E6FD4:
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
          goto L_089E7000;
      }
      goto L_089E6FF8;
    }
L_089E6FF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E7050;
      }
      goto L_089E7000;
    }
L_089E7000:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E7030;
    }
    goto L_089E701C;
L_089E701C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7050;
      }
      goto L_089E7030;
    }
L_089E7030:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7050;
      }
      goto L_089E704C;
    }
L_089E704C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E7050;
L_089E7050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7058;
    }
L_089E7058:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7070u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7070u) goto L_089E7070;
    return;
L_089E7070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089E7084u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 24u, 0x0893C14Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7084u) goto L_089E7084;
    return;
L_089E7084:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7090;
      }
      goto L_089E708C;
    }
L_089E708C:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E7090;
L_089E7090:
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
          goto L_089E70BC;
      }
      goto L_089E70B4;
    }
L_089E70B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E710C;
      }
      goto L_089E70BC;
    }
L_089E70BC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E70EC;
    }
    goto L_089E70D8;
L_089E70D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E710C;
      }
      goto L_089E70EC;
    }
L_089E70EC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E710C;
      }
      goto L_089E7108;
    }
L_089E7108:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E710C;
L_089E710C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7114;
    }
L_089E7114:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E7130u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7130u) goto L_089E7130;
    return;
L_089E7130:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089E714Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 249u, 0x089E170Cu>(ctx, &aot_mem) && ctx.pc == 0x089E714Cu) goto L_089E714C;
    return;
L_089E714C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7154;
    }
L_089E7154:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E716Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E716Cu) goto L_089E716C;
    return;
L_089E716C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7184;
      }
      goto L_089E7178;
    }
L_089E7178:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8036), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089E7190;
      }
      goto L_089E7184;
    }
L_089E7184:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-8036), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089E7190;
L_089E7190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7198;
    }
L_089E7198:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E71B0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E71B0u) goto L_089E71B0;
    return;
L_089E71B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089E71DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 693u, 0x0899F8F8u>(ctx, &aot_mem) && ctx.pc == 0x089E71DCu) goto L_089E71DC;
    return;
L_089E71DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E71E4;
    }
L_089E71E4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089E7200u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7200u) goto L_089E7200;
    return;
L_089E7200:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089E7230;
      }
      goto L_089E7224;
    }
L_089E7224:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E7230;
L_089E7230:
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E724C;
      }
      goto L_089E7240;
    }
L_089E7240:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E724C;
L_089E724C:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089E7268;
      }
      goto L_089E725C;
    }
L_089E725C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_089E7268;
L_089E7268:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x089E7280u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 34u, 0x088C41E4u>(ctx, &aot_mem) && ctx.pc == 0x089E7280u) goto L_089E7280;
    return;
L_089E7280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7288;
    }
L_089E7288:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E72A0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E72A0u) goto L_089E72A0;
    return;
L_089E72A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089E72B0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 29u, 0x0893C1B8u>(ctx, &aot_mem) && ctx.pc == 0x089E72B0u) goto L_089E72B0;
    return;
L_089E72B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E72B8;
    }
L_089E72B8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E72D4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E72D4u) goto L_089E72D4;
    return;
L_089E72D4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089E7304;
      }
      goto L_089E72F4;
    }
L_089E72F4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089E7300u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089E7300u) goto L_089E7300;
    return;
L_089E7300:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089E7304;
L_089E7304:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089E7338u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x089E7338u) goto L_089E7338;
    return;
L_089E7338:
    ctx.gpr[31] = (0x089E7340u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 228u, 0x089E152Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7340u) goto L_089E7340;
    return;
L_089E7340:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E734C;
      }
      goto L_089E734C;
    }
L_089E734C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089E736Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 238u, 0x089E1640u>(ctx, &aot_mem) && ctx.pc == 0x089E736Cu) goto L_089E736C;
    return;
L_089E736C:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E7384u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089E7384u) goto L_089E7384;
    return;
L_089E7384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E738C;
    }
L_089E738C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E73A4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E73A4u) goto L_089E73A4;
    return;
L_089E73A4:
    ctx.gpr[31] = (0x089E73ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 244u, 0x089E16BCu>(ctx, &aot_mem) && ctx.pc == 0x089E73ACu) goto L_089E73AC;
    return;
L_089E73AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E73B4;
    }
L_089E73B4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089E73D0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E73D0u) goto L_089E73D0;
    return;
L_089E73D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E741C;
      }
      goto L_089E7400;
    }
L_089E7400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    ctx.gpr[31] = (0x089E7414u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2094), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 152u, 0x088C4BB8u>(ctx, &aot_mem) && ctx.pc == 0x089E7414u) goto L_089E7414;
    return;
L_089E7414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7430;
      }
      goto L_089E741C;
    }
L_089E741C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2094), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089E7430;
L_089E7430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7438;
    }
L_089E7438:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7450u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7450u) goto L_089E7450;
    return;
L_089E7450:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E7460u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089E7460u) goto L_089E7460;
    return;
L_089E7460:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7478;
      }
      goto L_089E7470;
    }
L_089E7470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_089E747C;
      }
      goto L_089E7478;
    }
L_089E7478:
    ctx.gpr[4] = (0u | 0u);
    goto L_089E747C;
L_089E747C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089E7490u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7490u) goto L_089E7490;
    return;
L_089E7490:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E74A8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089E74A8u) goto L_089E74A8;
    return;
L_089E74A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E74B0;
    }
L_089E74B0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E74C8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E74C8u) goto L_089E74C8;
    return;
L_089E74C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2269u << 16u);
      if (branch_taken) {
          goto L_089E754C;
      }
      goto L_089E74FC;
    }
L_089E74FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x089E7538u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7538u) goto L_089E7538;
    return;
L_089E7538:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E754Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089E754Cu) goto L_089E754C;
    return;
L_089E754C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7554;
    }
L_089E7554:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E7568u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x089E7568u) goto L_089E7568;
    return;
L_089E7568:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (ctx.gpr[2] - ctx.gpr[17]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E758Cu);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E758Cu) goto L_089E758C;
    return;
L_089E758C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E75A0;
      }
      goto L_089E7598;
    }
L_089E7598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089E75A4;
      }
      goto L_089E75A0;
    }
L_089E75A0:
    ctx.gpr[18] = (0u | 0u);
    goto L_089E75A4;
L_089E75A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E75E4;
    }
    goto L_089E75B4;
L_089E75B4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x089E75C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089E75C0u) goto L_089E75C0;
    return;
L_089E75C0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E75D8;
      }
      goto L_089E75CC;
    }
L_089E75CC:
    ctx.gpr[31] = (0x089E75D4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089E75D4u) goto L_089E75D4;
    return;
L_089E75D4:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089E75D8;
L_089E75D8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E75E4;
L_089E75E4:
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089E75FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089E75FCu) goto L_089E75FC;
    return;
L_089E75FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E7618u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089E7618u) goto L_089E7618;
    return;
L_089E7618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089E7640u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8840));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 371u, 0x08AC6B38u>(ctx, &aot_mem) && ctx.pc == 0x089E7640u) goto L_089E7640;
    return;
L_089E7640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7648;
    }
L_089E7648:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E765Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x089E765Cu) goto L_089E765C;
    return;
L_089E765C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (ctx.gpr[2] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7680u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7680u) goto L_089E7680;
    return;
L_089E7680:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_089E76C0;
    }
    goto L_089E7690;
L_089E7690:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089E769Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089E769Cu) goto L_089E769C;
    return;
L_089E769C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E76B4;
      }
      goto L_089E76A8;
    }
L_089E76A8:
    ctx.gpr[31] = (0x089E76B0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x089E76B0u) goto L_089E76B0;
    return;
L_089E76B0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089E76B4;
L_089E76B4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_089E76C0;
L_089E76C0:
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089E76D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089E76D8u) goto L_089E76D8;
    return;
L_089E76D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E76F4u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089E76F4u) goto L_089E76F4;
    return;
L_089E76F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x089E7730u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8840));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 406u, 0x08AC6D6Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7730u) goto L_089E7730;
    return;
L_089E7730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7738;
    }
L_089E7738:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089E7750u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7750u) goto L_089E7750;
    return;
L_089E7750:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7AAC;
      }
      goto L_089E7764;
    }
L_089E7764:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089E7770u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089E7770u) goto L_089E7770;
    return;
L_089E7770:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17652)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17656)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089E7788u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089E7788u) goto L_089E7788;
    return;
L_089E7788:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    goto L_089E77A0;
L_089E77A0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E7908;
      }
      goto L_089E77AC;
    }
L_089E77AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7908;
      }
      goto L_089E77B4;
    }
L_089E77B4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7552)));
      if (branch_taken) {
          goto L_089E77F8;
      }
      goto L_089E77D4;
    }
L_089E77D4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E77F8;
      }
      goto L_089E77E0;
    }
L_089E77E0:
    ctx.gpr[31] = (0x089E77E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28F64u>(ctx, &aot_mem) && ctx.pc == 0x089E77E8u) goto L_089E77E8;
    return;
L_089E77E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E77F8;
      }
      goto L_089E77F0;
    }
L_089E77F0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089E77F8;
L_089E77F8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E78E8;
      }
      goto L_089E7804;
    }
L_089E7804:
    ctx.gpr[31] = (0x089E780Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 124u, 0x08A28E40u>(ctx, &aot_mem) && ctx.pc == 0x089E780Cu) goto L_089E780C;
    return;
L_089E780C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E7824;
      }
      goto L_089E7814;
    }
L_089E7814:
    ctx.gpr[31] = (0x089E781Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28F64u>(ctx, &aot_mem) && ctx.pc == 0x089E781Cu) goto L_089E781C;
    return;
L_089E781C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E78E4;
      }
      goto L_089E7824;
    }
L_089E7824:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -980 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -953 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E786C;
      }
      goto L_089E7834;
    }
L_089E7834:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -997 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-996));
      if (branch_taken) {
          goto L_089E785C;
      }
      goto L_089E7840;
    }
L_089E7840:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -998 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E78CC;
      }
      goto L_089E784C;
    }
L_089E784C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7864;
      }
      goto L_089E7854;
    }
L_089E7854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E78E8;
      }
      goto L_089E785C;
    }
L_089E785C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E7854;
      }
      goto L_089E7864;
    }
L_089E7864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E78E8;
      }
      goto L_089E786C;
    }
L_089E786C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 131 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E78A4;
      }
      goto L_089E7874;
    }
L_089E7874:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -974 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-969));
      if (branch_taken) {
          goto L_089E7894;
      }
      goto L_089E7880;
    }
L_089E7880:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-976));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E7864;
      }
      goto L_089E788C;
    }
L_089E788C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7854;
      }
      goto L_089E7894;
    }
L_089E7894:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089E7864;
      }
      goto L_089E789C;
    }
L_089E789C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7854;
      }
      goto L_089E78A4;
    }
L_089E78A4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 217 ? 1u : 0u);
      if (branch_taken) {
          goto L_089E78CC;
      }
      goto L_089E78AC;
    }
L_089E78AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-131));
      if (branch_taken) {
          goto L_089E78CC;
      }
      goto L_089E78B4;
    }
L_089E78B4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4272)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E78CC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E78DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5128));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089E78DCu) goto L_089E78DC;
    return;
L_089E78DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089E78E8;
      }
      goto L_089E78E4;
    }
L_089E78E4:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089E78E8;
L_089E78E8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E78FC;
      }
      goto L_089E78F8;
    }
L_089E78F8:
    ctx.gpr[18] = (0u | 0u);
    goto L_089E78FC;
L_089E78FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
      if (branch_taken) {
          goto L_089E77A0;
      }
      goto L_089E7908;
    }
L_089E7908:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089E7AAC;
      }
      goto L_089E7914;
    }
L_089E7914:
    ctx.gpr[31] = (0x089E791Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28F64u>(ctx, &aot_mem) && ctx.pc == 0x089E791Cu) goto L_089E791C;
    return;
L_089E791C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E795C;
      }
      goto L_089E7924;
    }
L_089E7924:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E7930u);
    ctx.gpr[4] = (0u | 1472u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x089E7930u) goto L_089E7930;
    return;
L_089E7930:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089E794C;
      }
      goto L_089E793C;
    }
L_089E793C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E7948u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 577u, 0x08A379F0u>(ctx, &aot_mem) && ctx.pc == 0x089E7948u) goto L_089E7948;
    return;
L_089E7948:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E794C;
L_089E794C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7984;
      }
      goto L_089E795C;
    }
L_089E795C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089E7968u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x089E7968u) goto L_089E7968;
    return;
L_089E7968:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089E7984;
      }
      goto L_089E7974;
    }
L_089E7974:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089E7980u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x089E7980u) goto L_089E7980;
    return;
L_089E7980:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089E7984;
L_089E7984:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089E79B0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E79B0u) goto L_089E79B0;
    return;
L_089E79B0:
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x089E7A10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A288A8u>(ctx, &aot_mem) && ctx.pc == 0x089E7A10u) goto L_089E7A10;
    return;
L_089E7A10:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E7A1Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x089E7A1Cu) goto L_089E7A1C;
    return;
L_089E7A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089E7A54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x089E7A54u) goto L_089E7A54;
    return;
L_089E7A54:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x089E7AA0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 282u, 0x08871B18u>(ctx, &aot_mem) && ctx.pc == 0x089E7AA0u) goto L_089E7AA0;
    return;
L_089E7AA0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x089E7AACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7AACu) goto L_089E7AAC;
    return;
L_089E7AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7AB4;
    }
L_089E7AB4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7ACCu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7ACCu) goto L_089E7ACC;
    return;
L_089E7ACC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7340)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7AE4;
      }
      goto L_089E7AE0;
    }
L_089E7AE0:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E7AE4;
L_089E7AE4:
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
          goto L_089E7B10;
      }
      goto L_089E7B08;
    }
L_089E7B08:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7B60;
      }
      goto L_089E7B10;
    }
L_089E7B10:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E7B40;
    }
    goto L_089E7B2C;
L_089E7B2C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7B60;
      }
      goto L_089E7B40;
    }
L_089E7B40:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7B60;
      }
      goto L_089E7B5C;
    }
L_089E7B5C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E7B60;
L_089E7B60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7B68;
    }
L_089E7B68:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7B80u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7B80u) goto L_089E7B80;
    return;
L_089E7B80:
    ctx.gpr[31] = (0x089E7B88u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7B88u) goto L_089E7B88;
    return;
L_089E7B88:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2084), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7B94;
    }
L_089E7B94:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089E7BA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 505u, 0x088EF1C8u>(ctx, &aot_mem) && ctx.pc == 0x089E7BA0u) goto L_089E7BA0;
    return;
L_089E7BA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7BA8;
    }
L_089E7BA8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7BC0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7BC0u) goto L_089E7BC0;
    return;
L_089E7BC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E7BD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089E7BD0u) goto L_089E7BD0;
    return;
L_089E7BD0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7BE4;
      }
      goto L_089E7BE0;
    }
L_089E7BE0:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E7BE4;
L_089E7BE4:
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
          goto L_089E7C10;
      }
      goto L_089E7C08;
    }
L_089E7C08:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7C60;
      }
      goto L_089E7C10;
    }
L_089E7C10:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E7C40;
    }
    goto L_089E7C2C;
L_089E7C2C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7C60;
      }
      goto L_089E7C40;
    }
L_089E7C40:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7C60;
      }
      goto L_089E7C5C;
    }
L_089E7C5C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E7C60;
L_089E7C60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7C68;
    }
L_089E7C68:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7C80u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7C80u) goto L_089E7C80;
    return;
L_089E7C80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E7C90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089E7C90u) goto L_089E7C90;
    return;
L_089E7C90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089E7C9C;
      }
      goto L_089E7C98;
    }
L_089E7C98:
    ctx.gpr[4] = (0u | 1u);
    goto L_089E7C9C;
L_089E7C9C:
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
          goto L_089E7CC8;
      }
      goto L_089E7CC0;
    }
L_089E7CC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7D18;
      }
      goto L_089E7CC8;
    }
L_089E7CC8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E7CF8;
    }
    goto L_089E7CE4;
L_089E7CE4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7D18;
      }
      goto L_089E7CF8;
    }
L_089E7CF8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7D18;
      }
      goto L_089E7D14;
    }
L_089E7D14:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E7D18;
L_089E7D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7D20;
    }
L_089E7D20:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E7D3Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7D3Cu) goto L_089E7D3C;
    return;
L_089E7D3C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089E7D4Cu);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 718u, 0x0891B398u>(ctx, &aot_mem) && ctx.pc == 0x089E7D4Cu) goto L_089E7D4C;
    return;
L_089E7D4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089E7D60u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 611u, 0x089C6978u>(ctx, &aot_mem) && ctx.pc == 0x089E7D60u) goto L_089E7D60;
    return;
L_089E7D60:
    ctx.gpr[31] = (0x089E7D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B3ACu>(ctx, &aot_mem) && ctx.pc == 0x089E7D68u) goto L_089E7D68;
    return;
L_089E7D68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7D70;
    }
L_089E7D70:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089E7D8Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7D8Cu) goto L_089E7D8C;
    return;
L_089E7D8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E7D9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089E7D9Cu) goto L_089E7D9C;
    return;
L_089E7D9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089E7DB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24224));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 521u, 0x0895773Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7DB4u) goto L_089E7DB4;
    return;
L_089E7DB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7DBC;
    }
L_089E7DBC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7DD4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7DD4u) goto L_089E7DD4;
    return;
L_089E7DD4:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x089E7DE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24224));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 531u, 0x0895781Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7DE4u) goto L_089E7DE4;
    return;
L_089E7DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7DEC;
    }
L_089E7DEC:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7E04u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7E04u) goto L_089E7E04;
    return;
L_089E7E04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089E7E14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089E7E14u) goto L_089E7E14;
    return;
L_089E7E14:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x089E7E28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24224));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 536u, 0x0895789Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7E28u) goto L_089E7E28;
    return;
L_089E7E28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7E34;
      }
      goto L_089E7E30;
    }
L_089E7E30:
    ctx.gpr[17] = (0u | 1u);
    goto L_089E7E34;
L_089E7E34:
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
          goto L_089E7E60;
      }
      goto L_089E7E58;
    }
L_089E7E58:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089E7EB0;
      }
      goto L_089E7E60;
    }
L_089E7E60:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E7E90;
    }
    goto L_089E7E7C;
L_089E7E7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7EB0;
      }
      goto L_089E7E90;
    }
L_089E7E90:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7EB0;
      }
      goto L_089E7EAC;
    }
L_089E7EAC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E7EB0;
L_089E7EB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7EB8;
    }
L_089E7EB8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7ED0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7ED0u) goto L_089E7ED0;
    return;
L_089E7ED0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089E7EF0u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089E7EF0u) goto L_089E7EF0;
    return;
L_089E7EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x089E7F18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 165u, 0x08864BBCu>(ctx, &aot_mem) && ctx.pc == 0x089E7F18u) goto L_089E7F18;
    return;
L_089E7F18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7F20;
    }
L_089E7F20:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E7F3Cu);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089E7F3Cu) goto L_089E7F3C;
    return;
L_089E7F3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[31] = (0x089E7F54u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 168u, 0x08864BF4u>(ctx, &aot_mem) && ctx.pc == 0x089E7F54u) goto L_089E7F54;
    return;
L_089E7F54:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089E7F64;
      }
      goto L_089E7F5C;
    }
L_089E7F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089E7F68;
      }
      goto L_089E7F64;
    }
L_089E7F64:
    ctx.gpr[4] = (0u | 0u);
    goto L_089E7F68;
L_089E7F68:
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
          goto L_089E7F94;
      }
      goto L_089E7F8C;
    }
L_089E7F8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7FE4;
      }
      goto L_089E7F94;
    }
L_089E7F94:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089E7FC4;
    }
    goto L_089E7FB0;
L_089E7FB0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089E7FE4;
      }
      goto L_089E7FC4;
    }
L_089E7FC4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E7FE4;
      }
      goto L_089E7FE0;
    }
L_089E7FE0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089E7FE4;
L_089E7FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 117u, 0x089E8864u>(ctx, &aot_mem); return;
      }
      goto L_089E7FEC;
    }
L_089E7FEC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089E8004u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0120(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0120_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_120(Runtime &runtime) {
    runtime.register_generated_unit(120u, 0x089E4000u, 16384u, &recomp_unit_0120, &recomp_unit_0120_entry);
    runtime.register_function(0x089E4000u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E400Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4020u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4028u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E402Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4050u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4058u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4074u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4088u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E40FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4108u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4118u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4124u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4130u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4138u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4140u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4190u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E41F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4200u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4208u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4224u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4234u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4240u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4260u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E427Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E428Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4298u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E42F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4300u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4314u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4324u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4334u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4348u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4360u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4370u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E437Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4384u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E438Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E43E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4404u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4428u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4434u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4444u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4450u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4460u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E446Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E449Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E44F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4504u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4520u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4524u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4534u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4540u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4548u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4550u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E456Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E457Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4590u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E45FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E460Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4640u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4650u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E465Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4664u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E466Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4688u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E46F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4700u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4730u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4738u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E473Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4754u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4760u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4768u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4770u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E478Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E479Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E47FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4804u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E480Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4820u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E482Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4834u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E483Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4854u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4874u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4884u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4890u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4898u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E48FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4904u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4920u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4930u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4954u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4960u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4964u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4970u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E497Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4990u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E49B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4A98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4AFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4B9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4BDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4C6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4CECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4D9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4DF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4E94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4EBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4F94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E4FECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E500Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E501Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5028u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5030u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5038u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5054u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5064u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5074u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5088u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5090u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5094u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E50F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E510Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5110u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5120u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E512Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5134u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E513Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5154u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5164u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5194u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E51E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5200u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5214u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E521Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5224u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5228u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E524Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5254u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5270u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5284u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E52F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5300u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5304u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5310u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5328u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5354u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5394u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E53DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5400u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E540Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E541Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5428u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5484u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5494u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E54CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5500u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5514u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5520u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5530u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E553Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5544u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E554Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5568u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5578u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E558Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E55F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5604u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5614u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E561Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E562Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E563Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5648u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5650u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5658u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5668u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5674u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5680u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5688u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E568Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5698u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E56DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5710u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5720u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E572Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5734u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E573Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E574Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5758u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5764u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E576Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5770u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E577Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5794u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E57F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5804u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5810u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5818u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5820u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E583Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E584Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E585Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5868u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5884u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E588Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E58FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5904u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E590Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5924u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5958u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5974u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E597Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5988u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5990u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5998u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E59ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5A9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5AA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5AB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5AC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5ACCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5B50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5BF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C74u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5C90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CE8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5CF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5D98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5DECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5E94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5EFCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5F98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E5FE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6000u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6014u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6030u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6034u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6044u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6050u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6058u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6060u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6070u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E607Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6084u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6088u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E60BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6100u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E611Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E612Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6138u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6144u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E614Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6150u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E615Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6174u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E618Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6198u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E61D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6200u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6218u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6220u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E623Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6274u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6280u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6290u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E629Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E62F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6304u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6308u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E632Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6334u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6350u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6364u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6380u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6384u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E638Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6394u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E639Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E63D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E643Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6458u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6468u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6474u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6484u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64C4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E64F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E650Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6520u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E653Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6544u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6560u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6580u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E658Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6590u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E65F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6604u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E660Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6628u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6638u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6644u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6650u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6654u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E665Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6678u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E66FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E670Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6720u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6730u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6744u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6754u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6764u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E676Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6788u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E67F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6820u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6830u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6878u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6880u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E689Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E68FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E690Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6968u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E697Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6990u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E69F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A6Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6A9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6AA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6AA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6AC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6AE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6AF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6AF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6B8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BCCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6BDCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C38u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C84u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6C90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6CF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D48u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6D8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DA4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DD8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6DF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E0Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E24u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E78u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6E9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6EF4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F00u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F44u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F50u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6F9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E6FF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7000u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E701Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7030u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E704Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7050u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7058u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7070u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7084u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E708Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7090u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70BCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E70ECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7108u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E710Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7114u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7130u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E714Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7154u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E716Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7178u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7184u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7190u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7198u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E71E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7200u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7224u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7230u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7240u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E724Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E725Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7268u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7280u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7288u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72B8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E72F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7300u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7304u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7338u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7340u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E734Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E736Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7384u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E738Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E73D0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7400u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7414u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E741Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7430u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7438u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7450u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7460u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7470u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7478u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E747Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7490u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74C8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E74FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7538u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E754Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7554u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7568u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E758Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7598u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E75FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7618u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7640u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7648u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E765Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7680u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7690u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E769Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76A8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76C0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76D8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E76F4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7730u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7738u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7750u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7764u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7770u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7788u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77A0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77D4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77E0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77F0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E77F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7804u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E780Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7814u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E781Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7824u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7834u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7840u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E784Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7854u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E785Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7864u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E786Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7874u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7880u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E788Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7894u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E789Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78A4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78ACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78B4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78CCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78DCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78E4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78E8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78F8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E78FCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7908u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7914u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E791Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7924u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7930u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E793Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7948u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E794Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E795Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7968u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7974u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7980u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7984u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E79B0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A1Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7A54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7ACCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7AE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B88u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7B94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BA0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BA8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BD0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7BE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C08u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C10u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C2Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C40u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C80u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C98u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7C9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CC0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CC8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7CF8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D4Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D70u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7D9Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DB4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DBCu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DD4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7DECu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E04u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E14u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E28u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E30u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E34u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E58u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E60u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E7Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7E90u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EACu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EB8u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7ED0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7EF0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F18u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F20u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F3Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F54u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F5Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F64u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F68u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F8Cu, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7F94u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FB0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FC4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FE0u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FE4u, &recomp_unit_0120, "recomp_unit_0120");
    runtime.register_function(0x089E7FECu, &recomp_unit_0120, "recomp_unit_0120");
}
} // namespace psprecomp
